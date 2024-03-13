dataset: \
DYJetsToLL_M-50_TuneCP5_13TeV-madgraphMLM-pythia8 \
DYJetsToLL_M-50_TuneCH3_13TeV-madgraphMLM-herwig7 \

https://cms-pdmv-prod.web.cern.ch/mcm/public/restapi/requests/get_setup/PPD-RunIISummer20UL17wmLHEGEN-00005 \
https://cms-pdmv-prod.web.cern.ch/mcm/public/restapi/requests/get_setup/JME-RunIISummer20UL18wmLHEGEN-00024 \

fragment files: \
https://cms-pdmv-prod.web.cern.ch/mcm/public/restapi/requests/get_fragment/PPD-RunIISummer20UL17wmLHEGEN-00005 \
https://cms-pdmv-prod.web.cern.ch/mcm/public/restapi/requests/get_fragment/JME-RunIISummer20UL18wmLHEGEN-00024 \

CMSSW: \
export SCRAM_ARCH=slc7_amd64_gcc700 \
source /cvmfs/cms.cern.ch/cmsset_default.sh \
cmsrel CMSSW_10_6_28_patch1 \


cmsDriver.py Configuration/GenProduction/python/PPD-RunIISummer20UL17wmLHEGEN-00005-fragment.py \
--python_filename py8_cfg.py \
--eventcontent NANOAODGEN \
--customise Configuration/DataProcessing/Utils.addMonitoring \
--datatier NANOAOD \
--fileout file:py8.root \
--conditions 106X_upgrade2018_realistic_v4 \
--beamspot Realistic25ns13TeVEarly2018Collision \
--step LHE,GEN,NANOGEN \
--geometry DB:Extended \
--era Run2_2018 \
--no_exec --mc -n 10


cmsDriver.py Configuration/GenProduction/python/JME-RunIISummer20UL18wmLHEGEN-00024-fragment.py \
--python_filename hw7_cfg.py \
--eventcontent NANOAODGEN \
--customise Configuration/DataProcessing/Utils.addMonitoring \
--datatier NANOAOD \
--fileout file:hw7.root \
--conditions 106X_upgrade2018_realistic_v4 \
--beamspot Realistic25ns13TeVEarly2018Collision \
--step LHE,GEN,NANOGEN \
--geometry DB:Extended \
--era Run2_2018 \
--no_exec --mc -n 10



get info of Z boson from muons at LHE level: \
        ... \
    for (int ipart = 0; ipart < nLHEPart; ++ipart) \
        if (((LHEPart_pdgId[ipart]) == -11 || (LHEPart_pdgId[ipart]) == -13 || (LHEPart_pdgId[ipart]) == -15) && LHEPart_status[ipart] == 1) \
        {  \
            LHE_lp_Pt = LHEPart_pt[ipart];  \                                             
            LHE_lp_Eta = LHEPart_eta[ipart]; \
            LHE_lp_Phi = LHEPart_phi[ipart]; \
            LHE_lp_Mass = LHEPart_mass[ipart]; \
            LHE_lp.SetPtEtaPhiM(LHEPart_pt[ipart], LHEPart_eta[ipart], LHEPart_phi[ipart], LHEPart_mass[ipart]);        \
        } \
        ... \
    LHE_Z = LHE_lp + LHE_lm; \
    LHE_Z_Pt = LHE_Z.Pt(); \
    LHE_Z_Eta = LHE_Z.Eta(); \
    LHE_Z_Phi = LHE_Z.Phi(); \
    LHE_Z_Mass = LHE_Z.M();% 
