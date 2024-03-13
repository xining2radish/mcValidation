from WMCore.Configuration import Configuration

config = Configuration()

config.section_("General")
config.General.requestName = "hw7"
config.General.transferLogs = True

config.section_("JobType")
config.JobType.allowUndistributedCMSSW = True
config.JobType.pluginName = "PrivateMC"
config.JobType.psetName = "hw7_cfg.py"
config.JobType.numCores = 1

config.section_("Data")
config.Data.splitting = "EventBased"
config.Data.unitsPerJob = 5000
NJOBS = 500
config.Data.totalUnits = config.Data.unitsPerJob * NJOBS
config.Data.publication = False
config.Data.outputDatasetTag = "intrinsickTtune_hw7"

config.section_("Site")
config.Site.storageSite = "T3_CH_CERNBOX"
