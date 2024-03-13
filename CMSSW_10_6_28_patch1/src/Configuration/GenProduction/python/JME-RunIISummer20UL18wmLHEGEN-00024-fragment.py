import FWCore.ParameterSet.Config as cms

externalLHEProducer = cms.EDProducer("ExternalLHEProducer",
    args = cms.vstring('/cvmfs/cms.cern.ch/phys_generator/gridpacks/UL/13TeV/madgraph/V5_2.6.5/dyellell01234j_5f_LO_MLM_v2/DYJets_HT-incl_slc6_amd64_gcc630_CMSSW_9_3_16_tarball.tar.xz'),
    nEvents = cms.untracked.uint32(5000),
    numberOfParameters = cms.uint32(1),
    outputFile = cms.string('cmsgrid_final.lhe'),
    scriptName = cms.FileInPath('GeneratorInterface/LHEInterface/data/run_generic_tarball_cvmfs.sh')
)

#Link to datacards:
#https://github.com/cms-sw/genproductions/tree/master/bin/MadGraph5_aMCatNLO/cards/production/2017/13TeV/DYJets_HT_LO_MLM_pdfwgt_F/DYJets_HT_mll50/DYJets_HT-incl

from Configuration.Generator.Herwig7Settings.Herwig7_7p1SettingsFor7p2_cfi import *
from Configuration.Generator.Herwig7Settings.Herwig7StableParticlesForDetector_cfi import *
from Configuration.Generator.Herwig7Settings.Herwig7CH3TuneSettings_cfi import *
from Configuration.Generator.Herwig7Settings.Herwig7PSWeightsSettings_cfi import *
from Configuration.Generator.Herwig7Settings.Herwig7LHECommonSettings_cfi import *
from Configuration.Generator.Herwig7Settings.Herwig7MGMergingSettings_cfi import *

generator = cms.EDFilter("Herwig7GeneratorFilter",

    herwig7p1SettingsFor7p2Block,
    herwig7MGMergingSettingsBlock,
    herwig7StableParticlesForDetectorBlock,
    herwig7PSWeightsSettingsBlock,
    herwig7CH3SettingsBlock,
    configFiles = cms.vstring(),
    crossSection = cms.untracked.double(-1),
    dataLocation = cms.string('${HERWIGPATH:-6}'),
    eventHandlers = cms.string('/Herwig/EventHandlers'),
    filterEfficiency = cms.untracked.double(1.0),
    generatorModule = cms.string('/Herwig/Generators/EventGenerator'),    
    hw_user_settings = cms.vstring(


        'cd /Herwig/Shower',
        'set FxFxHandler:njetsmax 4',
        'set FxFxHandler:MergeMode TreeMG5',
        'cd /',
        'set /Herwig/Particles/h0:NominalMass 125.0',
        ),
    parameterSets = cms.vstring(

        'hw_mg_merging_settings',
        'hw_7p1SettingsFor7p2',
        'herwig7CH3PDF', 
        'herwig7CH3AlphaS', 
        'herwig7CH3MPISettings', 
        'herwig7StableParticlesForDetector',
        'hw_PSWeights_settings',
        'hw_user_settings'

    ),
	repository = cms.string('${HERWIGPATH}/HerwigDefaults.rpo'),
    run = cms.string('InterfaceMatchboxTest'),
    runModeList = cms.untracked.string('read,run'),
)
ProductionFilterSequence = cms.Sequence(generator)