////DukHep/bin/dukhep_create_filter.py DukHep/branches.txt
#undef INIT_NULLS_CTOR
#undef DUKEHEPHEADER_MEMBERS
#undef CONNECT
#undef DECLARE
#undef RESETVAR
#undef COPYVAR

#define DEF_FILTER 1
//begin macro definitions

#if DUKHEPFILTER_TYPE == DEF_FILTER
#define INIT_NULLS_CTOR		\
m_McEventInfo(0),	\
m_AODCellContainer(0),	\
m_MBTSContainer(0),	\
m_TileMuObj(0),	\
m_ElectronAODCollection(0),	\
m_PhotonAODCollection(0),	\
m_EventInfoAux.(0),	\
m_EventInfoAux.xAOD::AuxInfoBase(0),	\
m_EventInfoAux.runNumber(0),	\
m_EventInfoAux.eventNumber(0),	\
m_EventInfoAux.lumiBlock(0),	\
m_EventInfoAux.timeStamp(0),	\
m_EventInfoAux.timeStampNSOffset(0),	\
m_EventInfoAux.bcid(0),	\
m_EventInfoAux.detectorMask0(0),	\
m_EventInfoAux.detectorMask1(0),	\
m_EventInfoAux.statusElement(0),	\
m_EventInfoAux.extendedLevel1ID(0),	\
m_EventInfoAux.level1TriggerType(0),	\
m_EventInfoAux.streamTagNames(0),	\
m_EventInfoAux.streamTagTypes(0),	\
m_EventInfoAux.streamTagObeysLumiblock(0),	\
m_EventInfoAux.actualInteractionsPerCrossing(0),	\
m_EventInfoAux.averageInteractionsPerCrossing(0),	\
m_EventInfoAux.pixelFlags(0),	\
m_EventInfoAux.sctFlags(0),	\
m_EventInfoAux.trtFlags(0),	\
m_EventInfoAux.larFlags(0),	\
m_EventInfoAux.tileFlags(0),	\
m_EventInfoAux.muonFlags(0),	\
m_EventInfoAux.forwardDetFlags(0),	\
m_EventInfoAux.coreFlags(0),	\
m_EventInfoAux.backgroundFlags(0),	\
m_EventInfoAux.lumiFlags(0),	\
m_EventInfo(0),	\
m_MET_CellOut_Eflow(0),	\
m_MET_CellOut_Eflow_JetArea(0),	\
m_MET_CellOut_Eflow_JetAreaJVF(0),	\
m_MET_CellOut_Eflow_JetAreaRhoEta5JVF(0),	\
m_MET_CellOut_Eflow_STVF(0),	\
m_MET_MuonMuons(0),	\
m_MET_Muons(0),	\
m_MET_Muons_Spectro(0),	\
m_MET_Muons_Track(0),	\
m_MET_RefEle(0),	\
m_MET_RefFinal(0),	\
m_MET_RefFinal_STVF(0),	\
m_MET_RefGamma(0),	\
m_MET_RefJet(0),	\
m_MET_RefJet_JVF(0),	\
m_MET_RefJet_JVFCut(0),	\
m_MET_RefTau(0),	\
m_MET_Track(0),	\
m_GSFTrackAssociation(0),	\
m_LArNoisyROSummary(0),	\
m_MET_RefComposition(0),	\
m_ElectronCollection(0),	\
m_ElectronFrwdCollection(0),	\
m_AllPhotonsVxCandidates(0),	\
m_PrimaryVertices(0),	\
m_PhotonCollection(0),	\
m_TruthParticleAux.(0),	\
m_TruthParticleAux.xAOD::AuxContainerBase(0),	\
m_TruthParticleAux.pdgId(0),	\
m_TruthParticleAux.barcode(0),	\
m_TruthParticleAux.status(0),	\
m_TruthParticleAux.px(0),	\
m_TruthParticleAux.py(0),	\
m_TruthParticleAux.pz(0),	\
m_TruthParticleAux.e(0),	\
m_TruthParticleAux.m(0),	\
m_ElectronCollectionAux.(0),	\
m_ElectronCollectionAux.xAOD::EgammaAuxContainer_v1(0),	\
m_ElectronCollectionAux.charge(0),	\
m_ElectronCollectionAux.deltaEta0(0),	\
m_ElectronCollectionAux.deltaEta1(0),	\
m_ElectronCollectionAux.deltaEta2(0),	\
m_ElectronCollectionAux.deltaEta3(0),	\
m_ElectronCollectionAux.deltaPhi0(0),	\
m_ElectronCollectionAux.deltaPhi1(0),	\
m_ElectronCollectionAux.deltaPhi2(0),	\
m_ElectronCollectionAux.deltaPhi3(0),	\
m_ElectronCollectionAux.deltaPhiFromLastMeasurement(0),	\
m_ElectronCollectionAux.deltaPhiRescaled(0),	\
m_ElectronCollectionAux.deltaPhiRescaled0(0),	\
m_ElectronCollectionAux.deltaPhiRescaled1(0),	\
m_ElectronCollectionAux.deltaPhiRescaled2(0),	\
m_ElectronCollectionAux.deltaPhiRescaled3(0),	\
m_ElectronFrwdCollectionAux.(0),	\
m_ElectronFrwdCollectionAux.xAOD::EgammaAuxContainer_v1(0),	\
m_ElectronFrwdCollectionAux.charge(0),	\
m_ElectronFrwdCollectionAux.deltaEta0(0),	\
m_ElectronFrwdCollectionAux.deltaEta1(0),	\
m_ElectronFrwdCollectionAux.deltaEta2(0),	\
m_ElectronFrwdCollectionAux.deltaEta3(0),	\
m_ElectronFrwdCollectionAux.deltaPhi0(0),	\
m_ElectronFrwdCollectionAux.deltaPhi1(0),	\
m_ElectronFrwdCollectionAux.deltaPhi2(0),	\
m_ElectronFrwdCollectionAux.deltaPhi3(0),	\
m_ElectronFrwdCollectionAux.deltaPhiFromLastMeasurement(0),	\
m_ElectronFrwdCollectionAux.deltaPhiRescaled(0),	\
m_ElectronFrwdCollectionAux.deltaPhiRescaled0(0),	\
m_ElectronFrwdCollectionAux.deltaPhiRescaled1(0),	\
m_ElectronFrwdCollectionAux.deltaPhiRescaled2(0),	\
m_ElectronFrwdCollectionAux.deltaPhiRescaled3(0),	\
m_egClusterCollection_links(0),	\
m_MuonsAux.(0),	\
m_MuonsAux.xAOD::AuxContainerBase(0),	\
m_MuonsAux.pt(0),	\
m_MuonsAux.eta(0),	\
m_MuonsAux.phi(0),	\
m_MuonsAux.e(0),	\
m_MuonsAux.allAuthors(0),	\
m_MuonsAux.author(0),	\
m_MuonsAux.muonType(0),	\
m_MuonsAux.quality(0),	\
m_MuonsAux.numberOfPrecisionLayers(0),	\
m_MuonsAux.numberOfPrecisionHoleLayers(0),	\
m_MuonsAux.numberOfPhiLayers(0),	\
m_MuonsAux.numberOfPhiHoleLayers(0),	\
m_MuonsAux.numberOfTriggerEtaLayers(0),	\
m_MuonsAux.numberOfTriggerEtaHoleLayers(0),	\
m_MuonsAux.primarySector(0),	\
m_MuonsAux.secondarySector(0),	\
m_MuonsAux.innerSmallHits(0),	\
m_MuonsAux.innerLargeHits(0),	\
m_MuonsAux.middleSmallHits(0),	\
m_MuonsAux.middleLargeHits(0),	\
m_MuonsAux.outerSmallHits(0),	\
m_MuonsAux.outerLargeHits(0),	\
m_MuonsAux.extendedSmallHits(0),	\
m_MuonsAux.extendedLargeHits(0),	\
m_MuonsAux.innerSmallHoles(0),	\
m_MuonsAux.innerLargeHoles(0),	\
m_MuonsAux.middleSmallHoles(0),	\
m_MuonsAux.middleLargeHoles(0),	\
m_MuonsAux.outerSmallHoles(0),	\
m_MuonsAux.outerLargeHoles(0),	\
m_MuonsAux.extendedSmallHoles(0),	\
m_MuonsAux.extendedLargeHoles(0),	\
m_MuonsAux.phiLayer1Hits(0),	\
m_MuonsAux.phiLayer2Hits(0),	\
m_MuonsAux.phiLayer3Hits(0),	\
m_MuonsAux.phiLayer4Hits(0),	\
m_MuonsAux.etaLayer1Hits(0),	\
m_MuonsAux.etaLayer2Hits(0),	\
m_MuonsAux.etaLayer3Hits(0),	\
m_MuonsAux.etaLayer4Hits(0),	\
m_MuonsAux.phiLayer1Holes(0),	\
m_MuonsAux.phiLayer2Holes(0),	\
m_MuonsAux.phiLayer3Holes(0),	\
m_MuonsAux.phiLayer4Holes(0),	\
m_MuonsAux.etaLayer1Holes(0),	\
m_MuonsAux.etaLayer2Holes(0),	\
m_MuonsAux.etaLayer3Holes(0),	\
m_MuonsAux.etaLayer4Holes(0),	\
m_MuonsAux.energyLossType(0),	\
m_TauRecContainer(0),	\
m_Muons(0),	\
m_egDetailAOD(0),	\
m_TruthEvent(0),	\
m_GSFTrackParticlesAux.(0),	\
m_GSFTrackParticlesAux.xAOD::AuxContainerBase(0),	\
m_GSFTrackParticlesAux.d0(0),	\
m_GSFTrackParticlesAux.z0(0),	\
m_GSFTrackParticlesAux.phi(0),	\
m_GSFTrackParticlesAux.theta(0),	\
m_GSFTrackParticlesAux.qOverP(0),	\
m_GSFTrackParticlesAux.definingParametersCovMatrix(0),	\
m_GSFTrackParticlesAux.vx(0),	\
m_GSFTrackParticlesAux.vy(0),	\
m_GSFTrackParticlesAux.vz(0),	\
m_GSFTrackParticlesAux.parameterX(0),	\
m_GSFTrackParticlesAux.parameterY(0),	\
m_GSFTrackParticlesAux.parameterZ(0),	\
m_GSFTrackParticlesAux.parameterPX(0),	\
m_GSFTrackParticlesAux.parameterPY(0),	\
m_GSFTrackParticlesAux.parameterPZ(0),	\
m_GSFTrackParticlesAux.trackParameterCovarianceMatrices(0),	\
m_GSFTrackParticlesAux.parameterPosition(0),	\
m_GSFTrackParticlesAux.chiSquared(0),	\
m_GSFTrackParticlesAux.numberDoF(0),	\
m_GSFTrackParticlesAux.trackFitter(0),	\
m_GSFTrackParticlesAux.particleHypothesis(0),	\
m_GSFTrackParticlesAux.trackProperties(0),	\
m_GSFTrackParticlesAux.patternRecoInfo(0),	\
m_GSFTrackParticlesAux.numberOfContribPixelLayers(0),	\
m_GSFTrackParticlesAux.numberOfBLayerHits(0),	\
m_GSFTrackParticlesAux.numberOfBLayerOutliers(0),	\
m_GSFTrackParticlesAux.numberOfBLayerSharedHits(0),	\
m_GSFTrackParticlesAux.numberOfBLayerSplitHits(0),	\
m_GSFTrackParticlesAux.expectBLayerHit(0),	\
m_GSFTrackParticlesAux.numberOfPixelHits(0),	\
m_GSFTrackParticlesAux.numberOfPixelOutliers(0),	\
m_GSFTrackParticlesAux.numberOfPixelHoles(0),	\
m_GSFTrackParticlesAux.numberOfPixelSharedHits(0),	\
m_GSFTrackParticlesAux.numberOfPixelSplitHits(0),	\
m_GSFTrackParticlesAux.numberOfGangedPixels(0),	\
m_GSFTrackParticlesAux.numberOfGangedFlaggedFakes(0),	\
m_GSFTrackParticlesAux.numberOfPixelDeadSensors(0),	\
m_GSFTrackParticlesAux.numberOfPixelSpoiltHits(0),	\
m_GSFTrackParticlesAux.numberOfSCTHits(0),	\
m_GSFTrackParticlesAux.numberOfSCTOutliers(0),	\
m_GSFTrackParticlesAux.numberOfSCTHoles(0),	\
m_GSFTrackParticlesAux.numberOfSCTDoubleHoles(0),	\
m_GSFTrackParticlesAux.numberOfSCTSharedHits(0),	\
m_GSFTrackParticlesAux.numberOfSCTDeadSensors(0),	\
m_GSFTrackParticlesAux.numberOfSCTSpoiltHits(0),	\
m_GSFTrackParticlesAux.numberOfTRTHits(0),	\
m_GSFTrackParticlesAux.numberOfTRTOutliers(0),	\
m_GSFTrackParticlesAux.numberOfTRTHoles(0),	\
m_GSFTrackParticlesAux.numberOfTRTHighThresholdHits(0),	\
m_GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers(0),	\
m_GSFTrackParticlesAux.numberOfTRTDeadStraws(0),	\
m_GSFTrackParticlesAux.numberOfTRTTubeHits(0),	\
m_GSFTrackParticlesAux.numberOfTRTXenonHits(0),	\
m_GSFTrackParticlesAux.numberOfPrecisionLayers(0),	\
m_GSFTrackParticlesAux.numberOfPrecisionHoleLayers(0),	\
m_GSFTrackParticlesAux.numberOfPhiLayers(0),	\
m_GSFTrackParticlesAux.numberOfPhiHoleLayers(0),	\
m_GSFTrackParticlesAux.numberOfTriggerEtaLayers(0),	\
m_GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers(0),	\
m_GSFTrackParticlesAux.numberOfOutliersOnTrack(0),	\
m_GSFTrackParticlesAux.standardDeviationOfChi2OS(0),	\
m_GSFTrackParticlesAux.eProbabilityComb(0),	\
m_GSFTrackParticlesAux.eProbabilityHT(0),	\
m_GSFTrackParticlesAux.eProbabilityToT(0),	\
m_GSFTrackParticlesAux.eProbabilityBrem(0),	\
m_InDetTrackParticlesAux.(0),	\
m_InDetTrackParticlesAux.xAOD::AuxContainerBase(0),	\
m_InDetTrackParticlesAux.d0(0),	\
m_InDetTrackParticlesAux.z0(0),	\
m_InDetTrackParticlesAux.phi(0),	\
m_InDetTrackParticlesAux.theta(0),	\
m_InDetTrackParticlesAux.qOverP(0),	\
m_InDetTrackParticlesAux.definingParametersCovMatrix(0),	\
m_InDetTrackParticlesAux.vx(0),	\
m_InDetTrackParticlesAux.vy(0),	\
m_InDetTrackParticlesAux.vz(0),	\
m_InDetTrackParticlesAux.parameterX(0),	\
m_InDetTrackParticlesAux.parameterY(0),	\
m_InDetTrackParticlesAux.parameterZ(0),	\
m_InDetTrackParticlesAux.parameterPX(0),	\
m_InDetTrackParticlesAux.parameterPY(0),	\
m_InDetTrackParticlesAux.parameterPZ(0),	\
m_InDetTrackParticlesAux.trackParameterCovarianceMatrices(0),	\
m_InDetTrackParticlesAux.parameterPosition(0),	\
m_InDetTrackParticlesAux.chiSquared(0),	\
m_InDetTrackParticlesAux.numberDoF(0),	\
m_InDetTrackParticlesAux.trackFitter(0),	\
m_InDetTrackParticlesAux.particleHypothesis(0),	\
m_InDetTrackParticlesAux.trackProperties(0),	\
m_InDetTrackParticlesAux.patternRecoInfo(0),	\
m_InDetTrackParticlesAux.numberOfContribPixelLayers(0),	\
m_InDetTrackParticlesAux.numberOfBLayerHits(0),	\
m_InDetTrackParticlesAux.numberOfBLayerOutliers(0),	\
m_InDetTrackParticlesAux.numberOfBLayerSharedHits(0),	\
m_InDetTrackParticlesAux.numberOfBLayerSplitHits(0),	\
m_InDetTrackParticlesAux.expectBLayerHit(0),	\
m_InDetTrackParticlesAux.numberOfPixelHits(0),	\
m_InDetTrackParticlesAux.numberOfPixelOutliers(0),	\
m_InDetTrackParticlesAux.numberOfPixelHoles(0),	\
m_InDetTrackParticlesAux.numberOfPixelSharedHits(0),	\
m_InDetTrackParticlesAux.numberOfPixelSplitHits(0),	\
m_InDetTrackParticlesAux.numberOfGangedPixels(0),	\
m_InDetTrackParticlesAux.numberOfGangedFlaggedFakes(0),	\
m_InDetTrackParticlesAux.numberOfPixelDeadSensors(0),	\
m_InDetTrackParticlesAux.numberOfPixelSpoiltHits(0),	\
m_InDetTrackParticlesAux.numberOfSCTHits(0),	\
m_InDetTrackParticlesAux.numberOfSCTOutliers(0),	\
m_InDetTrackParticlesAux.numberOfSCTHoles(0),	\
m_InDetTrackParticlesAux.numberOfSCTDoubleHoles(0),	\
m_InDetTrackParticlesAux.numberOfSCTSharedHits(0),	\
m_InDetTrackParticlesAux.numberOfSCTDeadSensors(0),	\
m_InDetTrackParticlesAux.numberOfSCTSpoiltHits(0),	\
m_InDetTrackParticlesAux.numberOfTRTHits(0),	\
m_InDetTrackParticlesAux.numberOfTRTOutliers(0),	\
m_InDetTrackParticlesAux.numberOfTRTHoles(0),	\
m_InDetTrackParticlesAux.numberOfTRTHighThresholdHits(0),	\
m_InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers(0),	\
m_InDetTrackParticlesAux.numberOfTRTDeadStraws(0),	\
m_InDetTrackParticlesAux.numberOfTRTTubeHits(0),	\
m_InDetTrackParticlesAux.numberOfTRTXenonHits(0),	\
m_InDetTrackParticlesAux.numberOfPrecisionLayers(0),	\
m_InDetTrackParticlesAux.numberOfPrecisionHoleLayers(0),	\
m_InDetTrackParticlesAux.numberOfPhiLayers(0),	\
m_InDetTrackParticlesAux.numberOfPhiHoleLayers(0),	\
m_InDetTrackParticlesAux.numberOfTriggerEtaLayers(0),	\
m_InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers(0),	\
m_InDetTrackParticlesAux.numberOfOutliersOnTrack(0),	\
m_InDetTrackParticlesAux.standardDeviationOfChi2OS(0),	\
m_InDetTrackParticlesAux.eProbabilityComb(0),	\
m_InDetTrackParticlesAux.eProbabilityHT(0),	\
m_InDetTrackParticlesAux.eProbabilityToT(0),	\
m_InDetTrackParticlesAux.eProbabilityBrem(0),	\
m_InDetTrackParticlesForwardAux.(0),	\
m_InDetTrackParticlesForwardAux.xAOD::AuxContainerBase(0),	\
m_InDetTrackParticlesForwardAux.d0(0),	\
m_InDetTrackParticlesForwardAux.z0(0),	\
m_InDetTrackParticlesForwardAux.phi(0),	\
m_InDetTrackParticlesForwardAux.theta(0),	\
m_InDetTrackParticlesForwardAux.qOverP(0),	\
m_InDetTrackParticlesForwardAux.definingParametersCovMatrix(0),	\
m_InDetTrackParticlesForwardAux.vx(0),	\
m_InDetTrackParticlesForwardAux.vy(0),	\
m_InDetTrackParticlesForwardAux.vz(0),	\
m_InDetTrackParticlesForwardAux.parameterX(0),	\
m_InDetTrackParticlesForwardAux.parameterY(0),	\
m_InDetTrackParticlesForwardAux.parameterZ(0),	\
m_InDetTrackParticlesForwardAux.parameterPX(0),	\
m_InDetTrackParticlesForwardAux.parameterPY(0),	\
m_InDetTrackParticlesForwardAux.parameterPZ(0),	\
m_InDetTrackParticlesForwardAux.trackParameterCovarianceMatrices(0),	\
m_InDetTrackParticlesForwardAux.parameterPosition(0),	\
m_InDetTrackParticlesForwardAux.chiSquared(0),	\
m_InDetTrackParticlesForwardAux.numberDoF(0),	\
m_InDetTrackParticlesForwardAux.trackFitter(0),	\
m_InDetTrackParticlesForwardAux.particleHypothesis(0),	\
m_InDetTrackParticlesForwardAux.trackProperties(0),	\
m_InDetTrackParticlesForwardAux.patternRecoInfo(0),	\
m_InDetTrackParticlesForwardAux.numberOfContribPixelLayers(0),	\
m_InDetTrackParticlesForwardAux.numberOfBLayerHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfBLayerOutliers(0),	\
m_InDetTrackParticlesForwardAux.numberOfBLayerSharedHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfBLayerSplitHits(0),	\
m_InDetTrackParticlesForwardAux.expectBLayerHit(0),	\
m_InDetTrackParticlesForwardAux.numberOfPixelHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfPixelOutliers(0),	\
m_InDetTrackParticlesForwardAux.numberOfPixelHoles(0),	\
m_InDetTrackParticlesForwardAux.numberOfPixelSharedHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfPixelSplitHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfGangedPixels(0),	\
m_InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes(0),	\
m_InDetTrackParticlesForwardAux.numberOfPixelDeadSensors(0),	\
m_InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfSCTHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfSCTOutliers(0),	\
m_InDetTrackParticlesForwardAux.numberOfSCTHoles(0),	\
m_InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles(0),	\
m_InDetTrackParticlesForwardAux.numberOfSCTSharedHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfSCTDeadSensors(0),	\
m_InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfTRTHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfTRTOutliers(0),	\
m_InDetTrackParticlesForwardAux.numberOfTRTHoles(0),	\
m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers(0),	\
m_InDetTrackParticlesForwardAux.numberOfTRTDeadStraws(0),	\
m_InDetTrackParticlesForwardAux.numberOfTRTTubeHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfTRTXenonHits(0),	\
m_InDetTrackParticlesForwardAux.numberOfPrecisionLayers(0),	\
m_InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers(0),	\
m_InDetTrackParticlesForwardAux.numberOfPhiLayers(0),	\
m_InDetTrackParticlesForwardAux.numberOfPhiHoleLayers(0),	\
m_InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers(0),	\
m_InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers(0),	\
m_InDetTrackParticlesForwardAux.numberOfOutliersOnTrack(0),	\
m_InDetTrackParticlesForwardAux.standardDeviationOfChi2OS(0),	\
m_InDetTrackParticlesForwardAux.eProbabilityComb(0),	\
m_InDetTrackParticlesForwardAux.eProbabilityHT(0),	\
m_InDetTrackParticlesForwardAux.eProbabilityToT(0),	\
m_InDetTrackParticlesForwardAux.eProbabilityBrem(0),	\
m_CaloCalTopoCluster(0),	\
m_EMTopoSW35(0),	\
m_LArClusterEMFrwd(0),	\
m_LArClusterEMSofte(0),	\
m_egClusterCollection(0),	\
m_MuonEntryLayerFilter(0),	\
m_TruthParticle(0),	\
m_TruthVertex(0),	\
m_AntiKt4LCTopoJets(0),	\
m_AntiKt4TopoEMJets(0),	\
m_AntiKt6LCTopoJets(0),	\
m_AntiKt6TopoEMJets(0),	\
m_PhotonCollectionAux.(0),	\
m_PhotonCollectionAux.xAOD::EgammaAuxContainer_v1(0),	\
m_PhotonCollectionAux.convMatchDeltaEta1(0),	\
m_PhotonCollectionAux.convMatchDeltaEta2(0),	\
m_PhotonCollectionAux.convMatchDeltaPhi1(0),	\
m_PhotonCollectionAux.convMatchDeltaPhi2(0),	\
m_TruthVertexAux.(0),	\
m_TruthVertexAux.xAOD::AuxContainerBase(0),	\
m_TruthVertexAux.id(0),	\
m_TruthVertexAux.barcode(0),	\
m_TruthVertexAux.x(0),	\
m_TruthVertexAux.y(0),	\
m_TruthVertexAux.z(0),	\
m_TruthVertexAux.t(0),	\
m_TruthVertexAux.weights(0),	\
m_TruthEventAux.(0),	\
m_TruthEventAux.xAOD::AuxContainerBase(0),	\
m_TruthEventAux.eventScale(0),	\
m_TruthEventAux.alphaQCD(0),	\
m_TruthEventAux.alphaQED(0),	\
m_TruthEventAux.weights(0),	\
m_TruthEventAux.crossSection(0),	\
m_TruthEventAux.crossSectionError(0),	\
m_GSFTrackParticles(0),	\
m_InDetTrackParticles(0),	\
m_InDetTrackParticlesForward(0),	\
m_AntiKt4LCTopoJetsAux.(0),	\
m_AntiKt4LCTopoJetsAux.xAOD::AuxContainerBase(0),	\
m_AntiKt4LCTopoJetsAux.pt(0),	\
m_AntiKt4LCTopoJetsAux.eta(0),	\
m_AntiKt4LCTopoJetsAux.phi(0),	\
m_AntiKt4LCTopoJetsAux.m(0),	\
m_AntiKt4LCTopoJetsAux.constituentWeights(0),	\
m_AntiKt4TopoEMJetsAux.(0),	\
m_AntiKt4TopoEMJetsAux.xAOD::AuxContainerBase(0),	\
m_AntiKt4TopoEMJetsAux.pt(0),	\
m_AntiKt4TopoEMJetsAux.eta(0),	\
m_AntiKt4TopoEMJetsAux.phi(0),	\
m_AntiKt4TopoEMJetsAux.m(0),	\
m_AntiKt4TopoEMJetsAux.constituentWeights(0),	\
m_AntiKt6LCTopoJetsAux.(0),	\
m_AntiKt6LCTopoJetsAux.xAOD::AuxContainerBase(0),	\
m_AntiKt6LCTopoJetsAux.pt(0),	\
m_AntiKt6LCTopoJetsAux.eta(0),	\
m_AntiKt6LCTopoJetsAux.phi(0),	\
m_AntiKt6LCTopoJetsAux.m(0),	\
m_AntiKt6LCTopoJetsAux.constituentWeights(0),	\
m_AntiKt6TopoEMJetsAux.(0),	\
m_AntiKt6TopoEMJetsAux.xAOD::AuxContainerBase(0),	\
m_AntiKt6TopoEMJetsAux.pt(0),	\
m_AntiKt6TopoEMJetsAux.eta(0),	\
m_AntiKt6TopoEMJetsAux.phi(0),	\
m_AntiKt6TopoEMJetsAux.m(0),	\
m_AntiKt6TopoEMJetsAux.constituentWeights(0),	\
m_CaloCalTopoClusterAux.(0),	\
m_CaloCalTopoClusterAux.xAOD::AuxContainerBase(0),	\
m_CaloCalTopoClusterAux.basicSignal(0),	\
m_CaloCalTopoClusterAux.time(0),	\
m_CaloCalTopoClusterAux.samplingPattern(0),	\
m_CaloCalTopoClusterAux.clusterSize(0),	\
m_CaloCalTopoClusterAux.eta0(0),	\
m_CaloCalTopoClusterAux.phi0(0),	\
m_CaloCalTopoClusterAux.nBarrel(0),	\
m_CaloCalTopoClusterAux.nEndcap(0),	\
m_CaloCalTopoClusterAux.rawE(0),	\
m_CaloCalTopoClusterAux.rawEta(0),	\
m_CaloCalTopoClusterAux.rawPhi(0),	\
m_CaloCalTopoClusterAux.rawM(0),	\
m_CaloCalTopoClusterAux.altE(0),	\
m_CaloCalTopoClusterAux.altEta(0),	\
m_CaloCalTopoClusterAux.altPhi(0),	\
m_CaloCalTopoClusterAux.altM(0),	\
m_CaloCalTopoClusterAux.calE(0),	\
m_CaloCalTopoClusterAux.calEta(0),	\
m_CaloCalTopoClusterAux.calPhi(0),	\
m_CaloCalTopoClusterAux.calM(0),	\
m_CaloCalTopoClusterAux.e_sampl(0),	\
m_CaloCalTopoClusterAux.eta_sampl(0),	\
m_CaloCalTopoClusterAux.phi_sampl(0),	\
m_EMTopoSW35Aux.(0),	\
m_EMTopoSW35Aux.xAOD::AuxContainerBase(0),	\
m_EMTopoSW35Aux.basicSignal(0),	\
m_EMTopoSW35Aux.time(0),	\
m_EMTopoSW35Aux.samplingPattern(0),	\
m_EMTopoSW35Aux.clusterSize(0),	\
m_EMTopoSW35Aux.eta0(0),	\
m_EMTopoSW35Aux.phi0(0),	\
m_EMTopoSW35Aux.nBarrel(0),	\
m_EMTopoSW35Aux.nEndcap(0),	\
m_EMTopoSW35Aux.rawE(0),	\
m_EMTopoSW35Aux.rawEta(0),	\
m_EMTopoSW35Aux.rawPhi(0),	\
m_EMTopoSW35Aux.rawM(0),	\
m_EMTopoSW35Aux.altE(0),	\
m_EMTopoSW35Aux.altEta(0),	\
m_EMTopoSW35Aux.altPhi(0),	\
m_EMTopoSW35Aux.altM(0),	\
m_EMTopoSW35Aux.calE(0),	\
m_EMTopoSW35Aux.calEta(0),	\
m_EMTopoSW35Aux.calPhi(0),	\
m_EMTopoSW35Aux.calM(0),	\
m_EMTopoSW35Aux.e_sampl(0),	\
m_EMTopoSW35Aux.eta_sampl(0),	\
m_EMTopoSW35Aux.phi_sampl(0),	\
m_LArClusterEMFrwdAux.(0),	\
m_LArClusterEMFrwdAux.xAOD::AuxContainerBase(0),	\
m_LArClusterEMFrwdAux.basicSignal(0),	\
m_LArClusterEMFrwdAux.time(0),	\
m_LArClusterEMFrwdAux.samplingPattern(0),	\
m_LArClusterEMFrwdAux.clusterSize(0),	\
m_LArClusterEMFrwdAux.eta0(0),	\
m_LArClusterEMFrwdAux.phi0(0),	\
m_LArClusterEMFrwdAux.nBarrel(0),	\
m_LArClusterEMFrwdAux.nEndcap(0),	\
m_LArClusterEMFrwdAux.rawE(0),	\
m_LArClusterEMFrwdAux.rawEta(0),	\
m_LArClusterEMFrwdAux.rawPhi(0),	\
m_LArClusterEMFrwdAux.rawM(0),	\
m_LArClusterEMFrwdAux.altE(0),	\
m_LArClusterEMFrwdAux.altEta(0),	\
m_LArClusterEMFrwdAux.altPhi(0),	\
m_LArClusterEMFrwdAux.altM(0),	\
m_LArClusterEMFrwdAux.calE(0),	\
m_LArClusterEMFrwdAux.calEta(0),	\
m_LArClusterEMFrwdAux.calPhi(0),	\
m_LArClusterEMFrwdAux.calM(0),	\
m_LArClusterEMFrwdAux.e_sampl(0),	\
m_LArClusterEMFrwdAux.eta_sampl(0),	\
m_LArClusterEMFrwdAux.phi_sampl(0),	\
m_LArClusterEMSofteAux.(0),	\
m_LArClusterEMSofteAux.xAOD::AuxContainerBase(0),	\
m_LArClusterEMSofteAux.basicSignal(0),	\
m_LArClusterEMSofteAux.time(0),	\
m_LArClusterEMSofteAux.samplingPattern(0),	\
m_LArClusterEMSofteAux.clusterSize(0),	\
m_LArClusterEMSofteAux.eta0(0),	\
m_LArClusterEMSofteAux.phi0(0),	\
m_LArClusterEMSofteAux.nBarrel(0),	\
m_LArClusterEMSofteAux.nEndcap(0),	\
m_LArClusterEMSofteAux.rawE(0),	\
m_LArClusterEMSofteAux.rawEta(0),	\
m_LArClusterEMSofteAux.rawPhi(0),	\
m_LArClusterEMSofteAux.rawM(0),	\
m_LArClusterEMSofteAux.altE(0),	\
m_LArClusterEMSofteAux.altEta(0),	\
m_LArClusterEMSofteAux.altPhi(0),	\
m_LArClusterEMSofteAux.altM(0),	\
m_LArClusterEMSofteAux.calE(0),	\
m_LArClusterEMSofteAux.calEta(0),	\
m_LArClusterEMSofteAux.calPhi(0),	\
m_LArClusterEMSofteAux.calM(0),	\
m_LArClusterEMSofteAux.e_sampl(0),	\
m_LArClusterEMSofteAux.eta_sampl(0),	\
m_LArClusterEMSofteAux.phi_sampl(0),	\
m_egClusterCollectionAux.(0),	\
m_egClusterCollectionAux.xAOD::AuxContainerBase(0),	\
m_egClusterCollectionAux.basicSignal(0),	\
m_egClusterCollectionAux.time(0),	\
m_egClusterCollectionAux.samplingPattern(0),	\
m_egClusterCollectionAux.clusterSize(0),	\
m_egClusterCollectionAux.eta0(0),	\
m_egClusterCollectionAux.phi0(0),	\
m_egClusterCollectionAux.nBarrel(0),	\
m_egClusterCollectionAux.nEndcap(0),	\
m_egClusterCollectionAux.rawE(0),	\
m_egClusterCollectionAux.rawEta(0),	\
m_egClusterCollectionAux.rawPhi(0),	\
m_egClusterCollectionAux.rawM(0),	\
m_egClusterCollectionAux.altE(0),	\
m_egClusterCollectionAux.altEta(0),	\
m_egClusterCollectionAux.altPhi(0),	\
m_egClusterCollectionAux.altM(0),	\
m_egClusterCollectionAux.calE(0),	\
m_egClusterCollectionAux.calEta(0),	\
m_egClusterCollectionAux.calPhi(0),	\
m_egClusterCollectionAux.calM(0),	\
m_egClusterCollectionAux.e_sampl(0),	\
m_egClusterCollectionAux.eta_sampl(0),	\
m_egClusterCollectionAux.phi_sampl(0),	\
m_TauRecContainerAux.(0),	\
m_TauRecContainerAux.xAOD::AuxContainerBase(0),	\
m_TauRecContainerAux.pt(0),	\
m_TauRecContainerAux.eta(0),	\
m_TauRecContainerAux.phi(0),	\
m_TauRecContainerAux.e(0),	\
m_TauRecContainerAux.m(0),	\
m_TauRecContainerAux.ROIWord(0),	\
m_TauRecContainerAux.charge(0),	\
m_TauRecContainerAux.vetoFlags(0),	\
m_TauRecContainerAux.isTauFlags(0),	\
m_TauRecContainerAux.Likelihood(0),	\
m_TauRecContainerAux.SafeLikelihood(0),	\
m_TauRecContainerAux.BDTJetScore(0),	\
m_TauRecContainerAux.BDTEleScore(0),	\
m_TauRecContainerAux.PanTauScore(0),	\
m_TauRecContainerAux.trackFilterPass(0),	\
m_TauRecContainerAux.trackFilterProngs(0),	\
m_TauRecContainerAux.trackFilterQuality(0),	\
m_TauRecContainerAux.pi0ConeDR(0),	\
m_TauRecContainerAux.ipZ0SinThetaSigLeadTrk(0),	\
m_TauRecContainerAux.etOverPtLeadTrk(0),	\
m_TauRecContainerAux.leadTrkPt(0),	\
m_TauRecContainerAux.ipSigLeadTrk(0),	\
m_TauRecContainerAux.ipSigLeadLooseTrk(0),	\
m_TauRecContainerAux.etOverPtLeadLooseTrk(0),	\
m_TauRecContainerAux.leadLooseTrkPt(0),	\
m_TauRecContainerAux.chrgLooseTrk(0),	\
m_TauRecContainerAux.massTrkSys(0),	\
m_TauRecContainerAux.trkWidth2(0),	\
m_TauRecContainerAux.trFlightPathSig(0),	\
m_TauRecContainerAux.etEflow(0),	\
m_TauRecContainerAux.mEflow(0),	\
m_TauRecContainerAux.ele_E237E277(0),	\
m_TauRecContainerAux.ele_PresamplerFraction(0),	\
m_TauRecContainerAux.ele_ECALFirstFraction(0),	\
m_TauRecContainerAux.numCells(0),	\
m_TauRecContainerAux.numTopoClusters(0),	\
m_TauRecContainerAux.numEffTopoClusters(0),	\
m_TauRecContainerAux.topoInvMass(0),	\
m_TauRecContainerAux.effTopoInvMass(0),	\
m_TauRecContainerAux.topoMeanDeltaR(0),	\
m_TauRecContainerAux.effTopoMeanDeltaR(0),	\
m_TauRecContainerAux.EMRadius(0),	\
m_TauRecContainerAux.hadRadius(0),	\
m_TauRecContainerAux.etEMAtEMScale(0),	\
m_TauRecContainerAux.etHadAtEMScale(0),	\
m_TauRecContainerAux.isolFrac(0),	\
m_TauRecContainerAux.centFrac(0),	\
m_TauRecContainerAux.stripWidth2(0),	\
m_TauRecContainerAux.nStrip(0),	\
m_TauRecContainerAux.etEMCalib(0),	\
m_TauRecContainerAux.etHadCalib(0),	\
m_TauRecContainerAux.seedCalo_eta(0),	\
m_TauRecContainerAux.seedCalo_phi(0),	\
m_TauRecContainerAux.nIsolLooseTrk(0),	\
m_TauRecContainerAux.trkAvgDist(0),	\
m_TauRecContainerAux.trkRmsDist(0),	\
m_TauRecContainerAux.lead2ClusterEOverAllClusterE(0),	\
m_TauRecContainerAux.lead3ClusterEOverAllClusterE(0),	\
m_TauRecContainerAux.caloIso(0),	\
m_TauRecContainerAux.caloIsoCorrected(0),	\
m_TauRecContainerAux.dRmax(0),	\
m_TauRecContainerAux.secMaxStripEt(0),	\
m_TauRecContainerAux.sumEMCellEtOverLeadTrkPt(0),	\
m_TauRecContainerAux.hadLeakEt(0),	\
m_TauRecContainerAux.EM_TES_scale(0),	\
m_TauRecContainerAux.LC_TES_precalib(0),	\
m_TauRecContainerAux.cellBasedEnergyRing1(0),	\
m_TauRecContainerAux.cellBasedEnergyRing2(0),	\
m_TauRecContainerAux.cellBasedEnergyRing3(0),	\
m_TauRecContainerAux.cellBasedEnergyRing4(0),	\
m_TauRecContainerAux.cellBasedEnergyRing5(0),	\
m_TauRecContainerAux.cellBasedEnergyRing6(0),	\
m_TauRecContainerAux.cellBasedEnergyRing7(0),	\
m_TauRecContainerAux.TRT_NHT_OVER_NLT(0),	\
m_TauRecContainerAux.TauJetVtxFraction(0),	\
m_TauRecContainerAux.nPi0(0),	\
m_TauRecContainerAux.nCharged(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_DecayModeProto(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_DecayMode(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed(0),	\
m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_DecayModeProto(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_DecayMode(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts(0),	\
m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged(0),	\
m_LArCalibrationHitActive(0),	\
m_LArCalibrationHitDeadMaterial(0),	\
m_LArCalibrationHitInactive(0),	\
m_GSFTrackParticleTruthCollection(0),	\
m_AllPhotonsVxCandidatesAux.(0),	\
m_AllPhotonsVxCandidatesAux.xAOD::AuxContainerBase(0),	\
m_AllPhotonsVxCandidatesAux.chiSquared(0),	\
m_AllPhotonsVxCandidatesAux.numberDoF(0),	\
m_AllPhotonsVxCandidatesAux.x(0),	\
m_AllPhotonsVxCandidatesAux.y(0),	\
m_AllPhotonsVxCandidatesAux.z(0),	\
m_AllPhotonsVxCandidatesAux.covariance(0),	\
m_AllPhotonsVxCandidatesAux.vertexType(0),	\
m_AllPhotonsVxCandidatesAux.trackWeights(0),	\
m_PrimaryVerticesAux.(0),	\
m_PrimaryVerticesAux.xAOD::AuxContainerBase(0),	\
m_PrimaryVerticesAux.chiSquared(0),	\
m_PrimaryVerticesAux.numberDoF(0),	\
m_PrimaryVerticesAux.x(0),	\
m_PrimaryVerticesAux.y(0),	\
m_PrimaryVerticesAux.z(0),	\
m_PrimaryVerticesAux.covariance(0),	\
m_PrimaryVerticesAux.vertexType(0),	\
m_PrimaryVerticesAux.trackWeights(0),	\
m_MuonClusterCollection_Link(0),	\
m_MuonCaloEnergyCollection(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Perp(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Par(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2SumPt(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Perp(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Par(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8SumPt(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Perp(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Par(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13SumPt(0),	\
m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Perp(0),	\
m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Par(0),	\
m_AntiKt4LCTopoJetsAuxDyn.Iso6To88SumPt(0),	\
m_AntiKt4LCTopoJetsAuxDyn.WIDTH(0),	\
m_AntiKt4LCTopoJetsAuxDyn.pt_truth(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerB(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_EMB1(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_EMB2(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_EMB3(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar0(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap1(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap3(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar1(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar2(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap2(0),	\
m_AntiKt4LCTopoJetsAuxDyn.constituentScale(0),	\
m_AntiKt4LCTopoJetsAuxDyn.KtDr(0),	\
m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_pt(0),	\
m_AntiKt4LCTopoJetsAuxDyn.OriginIndex(0),	\
m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_eta(0),	\
m_AntiKt4LCTopoJetsAuxDyn.JVF(0),	\
m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_phi(0),	\
m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_CELL(0),	\
m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_m(0),	\
m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_DOTX(0),	\
m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_pt(0),	\
m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_JET(0),	\
m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_eta(0),	\
m_AntiKt4LCTopoJetsAuxDyn.nTrk_pv0_1GeV(0),	\
m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_phi(0),	\
m_AntiKt4LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV(0),	\
m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_m(0),	\
m_AntiKt4LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV(0),	\
m_AntiKt4LCTopoJetsAuxDyn.LArQuality(0),	\
m_AntiKt4LCTopoJetsAuxDyn.Timing(0),	\
m_AntiKt4LCTopoJetsAuxDyn.HECQuality(0),	\
m_AntiKt4LCTopoJetsAuxDyn.NegativeE(0),	\
m_AntiKt4LCTopoJetsAuxDyn.AverageLArQF(0),	\
m_AntiKt4LCTopoJetsAuxDyn.Centroid_r(0),	\
m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters5(0),	\
m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters10(0),	\
m_AntiKt4LCTopoJetsAuxDyn.TruthMFindex(0),	\
m_AntiKt4LCTopoJetsAuxDyn.TruthMF(0),	\
m_AntiKt4LCTopoJetsAuxDyn.NumTowers(0),	\
m_AntiKt4LCTopoJetsAuxDyn.ActiveArea(0),	\
m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPx(0),	\
m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPy(0),	\
m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPz(0),	\
m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaE(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Perp(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Par(0),	\
m_AntiKt4LCTopoJetsAuxDyn.IsoKR20SumPt(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Perp(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Par(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2SumPt(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Perp(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Par(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8SumPt(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Perp(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Par(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13SumPt(0),	\
m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Perp(0),	\
m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Par(0),	\
m_AntiKt4TopoEMJetsAuxDyn.Iso6To88SumPt(0),	\
m_AntiKt4TopoEMJetsAuxDyn.WIDTH(0),	\
m_AntiKt4TopoEMJetsAuxDyn.pt_truth(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerB(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_EMB1(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_EMB2(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_EMB3(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap3(0),	\
m_AntiKt4TopoEMJetsAuxDyn.constituentScale(0),	\
m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_pt(0),	\
m_AntiKt4TopoEMJetsAuxDyn.OriginIndex(0),	\
m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_eta(0),	\
m_AntiKt4TopoEMJetsAuxDyn.JVF(0),	\
m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_phi(0),	\
m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_CELL(0),	\
m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_m(0),	\
m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_DOTX(0),	\
m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_pt(0),	\
m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_JET(0),	\
m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_eta(0),	\
m_AntiKt4TopoEMJetsAuxDyn.nTrk_pv0_1GeV(0),	\
m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_phi(0),	\
m_AntiKt4TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV(0),	\
m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_m(0),	\
m_AntiKt4TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV(0),	\
m_AntiKt4TopoEMJetsAuxDyn.LArQuality(0),	\
m_AntiKt4TopoEMJetsAuxDyn.Timing(0),	\
m_AntiKt4TopoEMJetsAuxDyn.HECQuality(0),	\
m_AntiKt4TopoEMJetsAuxDyn.NegativeE(0),	\
m_AntiKt4TopoEMJetsAuxDyn.AverageLArQF(0),	\
m_AntiKt4TopoEMJetsAuxDyn.Centroid_r(0),	\
m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters5(0),	\
m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters10(0),	\
m_AntiKt4TopoEMJetsAuxDyn.TruthMFindex(0),	\
m_AntiKt4TopoEMJetsAuxDyn.TruthMF(0),	\
m_AntiKt4TopoEMJetsAuxDyn.NumTowers(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerE(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_EME1(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_EME2(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_EME3(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_HEC0(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_HEC1(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt0(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt1(0),	\
m_AntiKt4TopoEMJetsAuxDyn.n90(0),	\
m_AntiKt4TopoEMJetsAuxDyn.ActiveArea(0),	\
m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPx(0),	\
m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPy(0),	\
m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPz(0),	\
m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaE(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Perp(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Par(0),	\
m_AntiKt4TopoEMJetsAuxDyn.IsoKR20SumPt(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Perp(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Par(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2SumPt(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Perp(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Par(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8SumPt(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Perp(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Par(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13SumPt(0),	\
m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Perp(0),	\
m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Par(0),	\
m_AntiKt6LCTopoJetsAuxDyn.Iso6To88SumPt(0),	\
m_AntiKt6LCTopoJetsAuxDyn.WIDTH(0),	\
m_AntiKt6LCTopoJetsAuxDyn.pt_truth(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerB(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_EMB1(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_EMB2(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_EMB3(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar0(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar1(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar2(0),	\
m_AntiKt6LCTopoJetsAuxDyn.constituentScale(0),	\
m_AntiKt6LCTopoJetsAuxDyn.KtDr(0),	\
m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_pt(0),	\
m_AntiKt6LCTopoJetsAuxDyn.OriginIndex(0),	\
m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_eta(0),	\
m_AntiKt6LCTopoJetsAuxDyn.JVF(0),	\
m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_phi(0),	\
m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_CELL(0),	\
m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_m(0),	\
m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_DOTX(0),	\
m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_pt(0),	\
m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_JET(0),	\
m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_eta(0),	\
m_AntiKt6LCTopoJetsAuxDyn.nTrk_pv0_1GeV(0),	\
m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_phi(0),	\
m_AntiKt6LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV(0),	\
m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_m(0),	\
m_AntiKt6LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV(0),	\
m_AntiKt6LCTopoJetsAuxDyn.LArQuality(0),	\
m_AntiKt6LCTopoJetsAuxDyn.Timing(0),	\
m_AntiKt6LCTopoJetsAuxDyn.HECQuality(0),	\
m_AntiKt6LCTopoJetsAuxDyn.NegativeE(0),	\
m_AntiKt6LCTopoJetsAuxDyn.AverageLArQF(0),	\
m_AntiKt6LCTopoJetsAuxDyn.Centroid_r(0),	\
m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters5(0),	\
m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters10(0),	\
m_AntiKt6LCTopoJetsAuxDyn.TruthMFindex(0),	\
m_AntiKt6LCTopoJetsAuxDyn.TruthMF(0),	\
m_AntiKt6LCTopoJetsAuxDyn.NumTowers(0),	\
m_AntiKt6LCTopoJetsAuxDyn.ActiveArea(0),	\
m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPx(0),	\
m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPy(0),	\
m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPz(0),	\
m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaE(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Perp(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Par(0),	\
m_AntiKt6LCTopoJetsAuxDyn.IsoKR20SumPt(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Perp(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Par(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2SumPt(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Perp(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Par(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8SumPt(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Perp(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Par(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13SumPt(0),	\
m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Perp(0),	\
m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Par(0),	\
m_AntiKt6TopoEMJetsAuxDyn.Iso6To88SumPt(0),	\
m_AntiKt6TopoEMJetsAuxDyn.WIDTH(0),	\
m_AntiKt6TopoEMJetsAuxDyn.pt_truth(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerB(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_EMB1(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_EMB2(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_EMB3(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar0(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap1(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap3(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar1(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar2(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap2(0),	\
m_AntiKt6TopoEMJetsAuxDyn.constituentScale(0),	\
m_AntiKt6TopoEMJetsAuxDyn.KtDr(0),	\
m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_pt(0),	\
m_AntiKt6TopoEMJetsAuxDyn.OriginIndex(0),	\
m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_eta(0),	\
m_AntiKt6TopoEMJetsAuxDyn.JVF(0),	\
m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_phi(0),	\
m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_CELL(0),	\
m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_m(0),	\
m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_DOTX(0),	\
m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_pt(0),	\
m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_JET(0),	\
m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_eta(0),	\
m_AntiKt6TopoEMJetsAuxDyn.nTrk_pv0_1GeV(0),	\
m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_phi(0),	\
m_AntiKt6TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV(0),	\
m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_m(0),	\
m_AntiKt6TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV(0),	\
m_AntiKt6TopoEMJetsAuxDyn.LArQuality(0),	\
m_AntiKt6TopoEMJetsAuxDyn.Timing(0),	\
m_AntiKt6TopoEMJetsAuxDyn.HECQuality(0),	\
m_AntiKt6TopoEMJetsAuxDyn.NegativeE(0),	\
m_AntiKt6TopoEMJetsAuxDyn.AverageLArQF(0),	\
m_AntiKt6TopoEMJetsAuxDyn.Centroid_r(0),	\
m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters5(0),	\
m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters10(0),	\
m_AntiKt6TopoEMJetsAuxDyn.TruthMFindex(0),	\
m_AntiKt6TopoEMJetsAuxDyn.TruthMF(0),	\
m_AntiKt6TopoEMJetsAuxDyn.NumTowers(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt0(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt1(0),	\
m_AntiKt6TopoEMJetsAuxDyn.ActiveArea(0),	\
m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPx(0),	\
m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPy(0),	\
m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPz(0),	\
m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaE(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Perp(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Par(0),	\
m_AntiKt6TopoEMJetsAuxDyn.IsoKR20SumPt(0),	\
m_CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING(0),	\
m_CaloCalTopoClusterAuxDyn.AVG_LAR_Q(0),	\
m_CaloCalTopoClusterAuxDyn.AVG_TILE_Q(0),	\
m_CaloCalTopoClusterAuxDyn.EM_PROBABILITY(0),	\
m_CaloCalTopoClusterAuxDyn.HAD_WEIGHT(0),	\
m_CaloCalTopoClusterAuxDyn.OOC_WEIGHT(0),	\
m_CaloCalTopoClusterAuxDyn.DM_WEIGHT(0),	\
m_CaloCalTopoClusterAuxDyn.FIRST_PHI(0),	\
m_CaloCalTopoClusterAuxDyn.FIRST_ETA(0),	\
m_CaloCalTopoClusterAuxDyn.DELTA_PHI(0),	\
m_CaloCalTopoClusterAuxDyn.DELTA_THETA(0),	\
m_CaloCalTopoClusterAuxDyn.DELTA_ALPHA(0),	\
m_CaloCalTopoClusterAuxDyn.CENTER_X(0),	\
m_CaloCalTopoClusterAuxDyn.CENTER_Y(0),	\
m_CaloCalTopoClusterAuxDyn.CENTER_Z(0),	\
m_CaloCalTopoClusterAuxDyn.ENG_FRAC_EM(0),	\
m_CaloCalTopoClusterAuxDyn.ENG_FRAC_CORE(0),	\
m_CaloCalTopoClusterAuxDyn.SECOND_ENG_DENS(0),	\
m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS_CORR(0),	\
m_CaloCalTopoClusterAuxDyn.BAD_CELLS_CORR_E(0),	\
m_CaloCalTopoClusterAuxDyn.CellLink_(0),	\
m_CaloCalTopoClusterAuxDyn.CellLink.m_persKey(0),	\
m_CaloCalTopoClusterAuxDyn.CellLink.m_persIndex(0),	\
m_CaloCalTopoClusterAuxDyn.SECOND_R(0),	\
m_CaloCalTopoClusterAuxDyn.SECOND_LAMBDA(0),	\
m_CaloCalTopoClusterAuxDyn.CENTER_MAG(0),	\
m_CaloCalTopoClusterAuxDyn.CENTER_LAMBDA(0),	\
m_CaloCalTopoClusterAuxDyn.LATERAL(0),	\
m_CaloCalTopoClusterAuxDyn.LONGITUDINAL(0),	\
m_CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX(0),	\
m_CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS(0),	\
m_CaloCalTopoClusterAuxDyn.ISOLATION(0),	\
m_CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS(0),	\
m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS(0),	\
m_CaloCalTopoClusterAuxDyn.BADLARQ_FRAC(0),	\
m_CaloCalTopoClusterAuxDyn.ENG_POS(0),	\
m_CaloCalTopoClusterAuxDyn.SIGNIFICANCE(0),	\
m_CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE(0),	\
m_EMTopoSW35AuxDyn.CellLink_(0),	\
m_EMTopoSW35AuxDyn.CellLink.m_persKey(0),	\
m_EMTopoSW35AuxDyn.CellLink.m_persIndex(0),	\
m_ElectronCollectionAuxDyn.ElectronIDLoosePP(0),	\
m_ElectronCollectionAuxDyn.ElectronIDMediumPP(0),	\
m_ElectronCollectionAuxDyn.ElectronIDTightPP(0),	\
m_GSFTrackParticlesAuxDyn.originalTrackParticle_(0),	\
m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey(0),	\
m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex(0),	\
m_InDetTrackParticlesAuxDyn.truth_(0),	\
m_InDetTrackParticlesAuxDyn.truth.m_persKey(0),	\
m_InDetTrackParticlesAuxDyn.truth.m_persIndex(0),	\
m_InDetTrackParticlesAuxDyn.type(0),	\
m_InDetTrackParticlesAuxDyn.origin(0),	\
m_LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING(0),	\
m_LArClusterEMFrwdAuxDyn.AVG_LAR_Q(0),	\
m_LArClusterEMFrwdAuxDyn.AVG_TILE_Q(0),	\
m_LArClusterEMFrwdAuxDyn.EM_PROBABILITY(0),	\
m_LArClusterEMFrwdAuxDyn.HAD_WEIGHT(0),	\
m_LArClusterEMFrwdAuxDyn.OOC_WEIGHT(0),	\
m_LArClusterEMFrwdAuxDyn.DM_WEIGHT(0),	\
m_LArClusterEMFrwdAuxDyn.FIRST_PHI(0),	\
m_LArClusterEMFrwdAuxDyn.FIRST_ETA(0),	\
m_LArClusterEMFrwdAuxDyn.DELTA_PHI(0),	\
m_LArClusterEMFrwdAuxDyn.DELTA_THETA(0),	\
m_LArClusterEMFrwdAuxDyn.DELTA_ALPHA(0),	\
m_LArClusterEMFrwdAuxDyn.CENTER_X(0),	\
m_LArClusterEMFrwdAuxDyn.CENTER_Y(0),	\
m_LArClusterEMFrwdAuxDyn.CENTER_Z(0),	\
m_LArClusterEMFrwdAuxDyn.ENG_FRAC_EM(0),	\
m_LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE(0),	\
m_LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS(0),	\
m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR(0),	\
m_LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E(0),	\
m_LArClusterEMFrwdAuxDyn.CellLink_(0),	\
m_LArClusterEMFrwdAuxDyn.CellLink.m_persKey(0),	\
m_LArClusterEMFrwdAuxDyn.CellLink.m_persIndex(0),	\
m_LArClusterEMFrwdAuxDyn.SECOND_R(0),	\
m_LArClusterEMFrwdAuxDyn.SECOND_LAMBDA(0),	\
m_LArClusterEMFrwdAuxDyn.CENTER_MAG(0),	\
m_LArClusterEMFrwdAuxDyn.CENTER_LAMBDA(0),	\
m_LArClusterEMFrwdAuxDyn.LATERAL(0),	\
m_LArClusterEMFrwdAuxDyn.LONGITUDINAL(0),	\
m_LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX(0),	\
m_LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS(0),	\
m_LArClusterEMFrwdAuxDyn.ISOLATION(0),	\
m_LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS(0),	\
m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS(0),	\
m_LArClusterEMFrwdAuxDyn.BADLARQ_FRAC(0),	\
m_LArClusterEMFrwdAuxDyn.ENG_POS(0),	\
m_LArClusterEMFrwdAuxDyn.SIGNIFICANCE(0),	\
m_LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE(0),	\
m_LArClusterEMSofteAuxDyn.CellLink_(0),	\
m_LArClusterEMSofteAuxDyn.CellLink.m_persKey(0),	\
m_LArClusterEMSofteAuxDyn.CellLink.m_persIndex(0),	\
m_MuonsAuxDyn.m(0),	\
m_TruthEventAuxDyn.pdf2(0),	\
m_TruthEventAuxDyn.id1(0),	\
m_TruthEventAuxDyn.id2(0),	\
m_TruthEventAuxDyn.pdfId1(0),	\
m_TruthEventAuxDyn.pdfId2(0),	\
m_TruthEventAuxDyn.x1(0),	\
m_TruthEventAuxDyn.x2(0),	\
m_TruthEventAuxDyn.scalePDF(0),	\
m_TruthEventAuxDyn.pdf1(0),	\
m_TruthParticleAuxDyn.polarizationTheta(0),	\
m_TruthParticleAuxDyn.polarizationPhi(0),	\
m_egClusterCollectionAuxDyn.CellLink_(0),	\
m_egClusterCollectionAuxDyn.CellLink.m_persKey(0),	\
m_egClusterCollectionAuxDyn.CellLink.m_persIndex(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar0(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar1(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar2(0),	\
m_AntiKt4TopoEMJetsAuxDyn.KtDr(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerE(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_EME1(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_EME2(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_EME3(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_HEC0(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_HEC1(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_HEC2(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_HEC3(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_HEC2(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_HEC3(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerE(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_EME1(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_EME2(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_EME3(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_HEC0(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_HEC1(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt0(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_HEC2(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_HEC3(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerE(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_EME1(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_EME2(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_EME3(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_HEC0(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_HEC1(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_HEC2(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_HEC3(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap3(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt2(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap1(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap2(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt2(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap1(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap2(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt1(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt2(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt2(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt0(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt1(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL0(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL0(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL0(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL0(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL1(0),	\
m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL2(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL1(0),	\
m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL2(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL1(0),	\
m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL2(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL1(0),	\
m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL2(0)
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define DUKEHEPHEADER_MEMBERS                          \
PileUpEventInfo_p5 m_McEventInfo;	\
PileUpEventInfo_p5 o_m_McEventInfo;	\
CaloCompactCellContainer m_AODCellContainer;	\
CaloCompactCellContainer o_m_AODCellContainer;	\
TileCellVec m_MBTSContainer;	\
TileCellVec o_m_MBTSContainer;	\
TileMuContainer_p1 m_TileMuObj;	\
TileMuContainer_p1 o_m_TileMuObj;	\
ElectronContainer_p5 m_ElectronAODCollection;	\
ElectronContainer_p5 o_m_ElectronAODCollection;	\
PhotonContainer_p5 m_PhotonAODCollection;	\
PhotonContainer_p5 o_m_PhotonAODCollection;	\
xAOD::EventAuxInfo_v1 m_EventInfoAux.;	\
xAOD::EventAuxInfo_v1 o_m_EventInfoAux.;	\
BASE m_EventInfoAux.xAOD::AuxInfoBase;	\
BASE o_m_EventInfoAux.xAOD::AuxInfoBase;	\
UInt_t m_EventInfoAux.runNumber;	\
UInt_t o_m_EventInfoAux.runNumber;	\
ULong64_t m_EventInfoAux.eventNumber;	\
ULong64_t o_m_EventInfoAux.eventNumber;	\
UInt_t m_EventInfoAux.lumiBlock;	\
UInt_t o_m_EventInfoAux.lumiBlock;	\
UInt_t m_EventInfoAux.timeStamp;	\
UInt_t o_m_EventInfoAux.timeStamp;	\
UInt_t m_EventInfoAux.timeStampNSOffset;	\
UInt_t o_m_EventInfoAux.timeStampNSOffset;	\
UInt_t m_EventInfoAux.bcid;	\
UInt_t o_m_EventInfoAux.bcid;	\
UInt_t m_EventInfoAux.detectorMask0;	\
UInt_t o_m_EventInfoAux.detectorMask0;	\
UInt_t m_EventInfoAux.detectorMask1;	\
UInt_t o_m_EventInfoAux.detectorMask1;	\
UInt_t m_EventInfoAux.statusElement;	\
UInt_t o_m_EventInfoAux.statusElement;	\
UInt_t m_EventInfoAux.extendedLevel1ID;	\
UInt_t o_m_EventInfoAux.extendedLevel1ID;	\
UShort_t m_EventInfoAux.level1TriggerType;	\
UShort_t o_m_EventInfoAux.level1TriggerType;	\
std::vector<string>* m_EventInfoAux.streamTagNames;	\
std::vector<string> o_m_EventInfoAux.streamTagNames;	\
std::vector<string>* m_EventInfoAux.streamTagTypes;	\
std::vector<string> o_m_EventInfoAux.streamTagTypes;	\
std::vector<char>* m_EventInfoAux.streamTagObeysLumiblock;	\
std::vector<char> o_m_EventInfoAux.streamTagObeysLumiblock;	\
Float_t m_EventInfoAux.actualInteractionsPerCrossing;	\
Float_t o_m_EventInfoAux.actualInteractionsPerCrossing;	\
Float_t m_EventInfoAux.averageInteractionsPerCrossing;	\
Float_t o_m_EventInfoAux.averageInteractionsPerCrossing;	\
UInt_t m_EventInfoAux.pixelFlags;	\
UInt_t o_m_EventInfoAux.pixelFlags;	\
UInt_t m_EventInfoAux.sctFlags;	\
UInt_t o_m_EventInfoAux.sctFlags;	\
UInt_t m_EventInfoAux.trtFlags;	\
UInt_t o_m_EventInfoAux.trtFlags;	\
UInt_t m_EventInfoAux.larFlags;	\
UInt_t o_m_EventInfoAux.larFlags;	\
UInt_t m_EventInfoAux.tileFlags;	\
UInt_t o_m_EventInfoAux.tileFlags;	\
UInt_t m_EventInfoAux.muonFlags;	\
UInt_t o_m_EventInfoAux.muonFlags;	\
UInt_t m_EventInfoAux.forwardDetFlags;	\
UInt_t o_m_EventInfoAux.forwardDetFlags;	\
UInt_t m_EventInfoAux.coreFlags;	\
UInt_t o_m_EventInfoAux.coreFlags;	\
UInt_t m_EventInfoAux.backgroundFlags;	\
UInt_t o_m_EventInfoAux.backgroundFlags;	\
UInt_t m_EventInfoAux.lumiFlags;	\
UInt_t o_m_EventInfoAux.lumiFlags;	\
xAOD::EventInfo_v1 m_EventInfo;	\
xAOD::EventInfo_v1 o_m_EventInfo;	\
MissingET_p3 m_MET_CellOut_Eflow;	\
MissingET_p3 o_m_MET_CellOut_Eflow;	\
MissingET_p3 m_MET_CellOut_Eflow_JetArea;	\
MissingET_p3 o_m_MET_CellOut_Eflow_JetArea;	\
MissingET_p3 m_MET_CellOut_Eflow_JetAreaJVF;	\
MissingET_p3 o_m_MET_CellOut_Eflow_JetAreaJVF;	\
MissingET_p3 m_MET_CellOut_Eflow_JetAreaRhoEta5JVF;	\
MissingET_p3 o_m_MET_CellOut_Eflow_JetAreaRhoEta5JVF;	\
MissingET_p3 m_MET_CellOut_Eflow_STVF;	\
MissingET_p3 o_m_MET_CellOut_Eflow_STVF;	\
MissingET_p3 m_MET_MuonMuons;	\
MissingET_p3 o_m_MET_MuonMuons;	\
MissingET_p3 m_MET_Muons;	\
MissingET_p3 o_m_MET_Muons;	\
MissingET_p3 m_MET_Muons_Spectro;	\
MissingET_p3 o_m_MET_Muons_Spectro;	\
MissingET_p3 m_MET_Muons_Track;	\
MissingET_p3 o_m_MET_Muons_Track;	\
MissingET_p3 m_MET_RefEle;	\
MissingET_p3 o_m_MET_RefEle;	\
MissingET_p3 m_MET_RefFinal;	\
MissingET_p3 o_m_MET_RefFinal;	\
MissingET_p3 m_MET_RefFinal_STVF;	\
MissingET_p3 o_m_MET_RefFinal_STVF;	\
MissingET_p3 m_MET_RefGamma;	\
MissingET_p3 o_m_MET_RefGamma;	\
MissingET_p3 m_MET_RefJet;	\
MissingET_p3 o_m_MET_RefJet;	\
MissingET_p3 m_MET_RefJet_JVF;	\
MissingET_p3 o_m_MET_RefJet_JVF;	\
MissingET_p3 m_MET_RefJet_JVFCut;	\
MissingET_p3 o_m_MET_RefJet_JVFCut;	\
MissingET_p3 m_MET_RefTau;	\
MissingET_p3 o_m_MET_RefTau;	\
MissingET_p3 m_MET_Track;	\
MissingET_p3 o_m_MET_Track;	\
TrackParticleAssocs_p1 m_GSFTrackAssociation;	\
TrackParticleAssocs_p1 o_m_GSFTrackAssociation;	\
LArNoisyROSummary_p1 m_LArNoisyROSummary;	\
LArNoisyROSummary_p1 o_m_LArNoisyROSummary;	\
MissingETComposition_p2 m_MET_RefComposition;	\
MissingETComposition_p2 o_m_MET_RefComposition;	\
DataVector<xAOD::Electron_v1>* m_ElectronCollection;	\
DataVector<xAOD::Electron_v1>* o_m_ElectronCollection;	\
DataVector<xAOD::Electron_v1>* m_ElectronFrwdCollection;	\
DataVector<xAOD::Electron_v1>* o_m_ElectronFrwdCollection;	\
DataVector<xAOD::Vertex_v1>* m_AllPhotonsVxCandidates;	\
DataVector<xAOD::Vertex_v1>* o_m_AllPhotonsVxCandidates;	\
DataVector<xAOD::Vertex_v1>* m_PrimaryVertices;	\
DataVector<xAOD::Vertex_v1>* o_m_PrimaryVertices;	\
DataVector<xAOD::Photon_v1>* m_PhotonCollection;	\
DataVector<xAOD::Photon_v1>* o_m_PhotonCollection;	\
xAOD::TruthParticleAuxContainer_v1 m_TruthParticleAux.;	\
xAOD::TruthParticleAuxContainer_v1 o_m_TruthParticleAux.;	\
BASE m_TruthParticleAux.xAOD::AuxContainerBase;	\
BASE o_m_TruthParticleAux.xAOD::AuxContainerBase;	\
std::vector<int>* m_TruthParticleAux.pdgId;	\
std::vector<int> o_m_TruthParticleAux.pdgId;	\
std::vector<int>* m_TruthParticleAux.barcode;	\
std::vector<int> o_m_TruthParticleAux.barcode;	\
std::vector<int>* m_TruthParticleAux.status;	\
std::vector<int> o_m_TruthParticleAux.status;	\
std::vector<float>* m_TruthParticleAux.px;	\
std::vector<float> o_m_TruthParticleAux.px;	\
std::vector<float>* m_TruthParticleAux.py;	\
std::vector<float> o_m_TruthParticleAux.py;	\
std::vector<float>* m_TruthParticleAux.pz;	\
std::vector<float> o_m_TruthParticleAux.pz;	\
std::vector<float>* m_TruthParticleAux.e;	\
std::vector<float> o_m_TruthParticleAux.e;	\
std::vector<float>* m_TruthParticleAux.m;	\
std::vector<float> o_m_TruthParticleAux.m;	\
xAOD::ElectronAuxContainer_v1 m_ElectronCollectionAux.;	\
xAOD::ElectronAuxContainer_v1 o_m_ElectronCollectionAux.;	\
BASE m_ElectronCollectionAux.xAOD::EgammaAuxContainer_v1;	\
BASE o_m_ElectronCollectionAux.xAOD::EgammaAuxContainer_v1;	\
std::vector<float>* m_ElectronCollectionAux.charge;	\
std::vector<float> o_m_ElectronCollectionAux.charge;	\
std::vector<float>* m_ElectronCollectionAux.deltaEta0;	\
std::vector<float> o_m_ElectronCollectionAux.deltaEta0;	\
std::vector<float>* m_ElectronCollectionAux.deltaEta1;	\
std::vector<float> o_m_ElectronCollectionAux.deltaEta1;	\
std::vector<float>* m_ElectronCollectionAux.deltaEta2;	\
std::vector<float> o_m_ElectronCollectionAux.deltaEta2;	\
std::vector<float>* m_ElectronCollectionAux.deltaEta3;	\
std::vector<float> o_m_ElectronCollectionAux.deltaEta3;	\
std::vector<float>* m_ElectronCollectionAux.deltaPhi0;	\
std::vector<float> o_m_ElectronCollectionAux.deltaPhi0;	\
std::vector<float>* m_ElectronCollectionAux.deltaPhi1;	\
std::vector<float> o_m_ElectronCollectionAux.deltaPhi1;	\
std::vector<float>* m_ElectronCollectionAux.deltaPhi2;	\
std::vector<float> o_m_ElectronCollectionAux.deltaPhi2;	\
std::vector<float>* m_ElectronCollectionAux.deltaPhi3;	\
std::vector<float> o_m_ElectronCollectionAux.deltaPhi3;	\
std::vector<float>* m_ElectronCollectionAux.deltaPhiFromLastMeasurement;	\
std::vector<float> o_m_ElectronCollectionAux.deltaPhiFromLastMeasurement;	\
std::vector<float>* m_ElectronCollectionAux.deltaPhiRescaled;	\
std::vector<float> o_m_ElectronCollectionAux.deltaPhiRescaled;	\
std::vector<float>* m_ElectronCollectionAux.deltaPhiRescaled0;	\
std::vector<float> o_m_ElectronCollectionAux.deltaPhiRescaled0;	\
std::vector<float>* m_ElectronCollectionAux.deltaPhiRescaled1;	\
std::vector<float> o_m_ElectronCollectionAux.deltaPhiRescaled1;	\
std::vector<float>* m_ElectronCollectionAux.deltaPhiRescaled2;	\
std::vector<float> o_m_ElectronCollectionAux.deltaPhiRescaled2;	\
std::vector<float>* m_ElectronCollectionAux.deltaPhiRescaled3;	\
std::vector<float> o_m_ElectronCollectionAux.deltaPhiRescaled3;	\
xAOD::ElectronAuxContainer_v1 m_ElectronFrwdCollectionAux.;	\
xAOD::ElectronAuxContainer_v1 o_m_ElectronFrwdCollectionAux.;	\
BASE m_ElectronFrwdCollectionAux.xAOD::EgammaAuxContainer_v1;	\
BASE o_m_ElectronFrwdCollectionAux.xAOD::EgammaAuxContainer_v1;	\
std::vector<float>* m_ElectronFrwdCollectionAux.charge;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.charge;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaEta0;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaEta0;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaEta1;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaEta1;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaEta2;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaEta2;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaEta3;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaEta3;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaPhi0;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaPhi0;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaPhi1;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaPhi1;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaPhi2;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaPhi2;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaPhi3;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaPhi3;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaPhiFromLastMeasurement;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaPhiFromLastMeasurement;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaPhiRescaled;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaPhiRescaled;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaPhiRescaled0;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaPhiRescaled0;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaPhiRescaled1;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaPhiRescaled1;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaPhiRescaled2;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaPhiRescaled2;	\
std::vector<float>* m_ElectronFrwdCollectionAux.deltaPhiRescaled3;	\
std::vector<float> o_m_ElectronFrwdCollectionAux.deltaPhiRescaled3;	\
CaloClusterCellLinkContainer m_egClusterCollection_links;	\
CaloClusterCellLinkContainer o_m_egClusterCollection_links;	\
xAOD::MuonAuxContainer_v1 m_MuonsAux.;	\
xAOD::MuonAuxContainer_v1 o_m_MuonsAux.;	\
BASE m_MuonsAux.xAOD::AuxContainerBase;	\
BASE o_m_MuonsAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_MuonsAux.pt;	\
std::vector<float> o_m_MuonsAux.pt;	\
std::vector<float>* m_MuonsAux.eta;	\
std::vector<float> o_m_MuonsAux.eta;	\
std::vector<float>* m_MuonsAux.phi;	\
std::vector<float> o_m_MuonsAux.phi;	\
std::vector<float>* m_MuonsAux.e;	\
std::vector<float> o_m_MuonsAux.e;	\
std::vector<unsigned short>* m_MuonsAux.allAuthors;	\
std::vector<unsigned short> o_m_MuonsAux.allAuthors;	\
std::vector<unsigned short>* m_MuonsAux.author;	\
std::vector<unsigned short> o_m_MuonsAux.author;	\
std::vector<unsigned short>* m_MuonsAux.muonType;	\
std::vector<unsigned short> o_m_MuonsAux.muonType;	\
std::vector<unsigned char>* m_MuonsAux.quality;	\
std::vector<unsigned char> o_m_MuonsAux.quality;	\
std::vector<unsigned char>* m_MuonsAux.numberOfPrecisionLayers;	\
std::vector<unsigned char> o_m_MuonsAux.numberOfPrecisionLayers;	\
std::vector<unsigned char>* m_MuonsAux.numberOfPrecisionHoleLayers;	\
std::vector<unsigned char> o_m_MuonsAux.numberOfPrecisionHoleLayers;	\
std::vector<unsigned char>* m_MuonsAux.numberOfPhiLayers;	\
std::vector<unsigned char> o_m_MuonsAux.numberOfPhiLayers;	\
std::vector<unsigned char>* m_MuonsAux.numberOfPhiHoleLayers;	\
std::vector<unsigned char> o_m_MuonsAux.numberOfPhiHoleLayers;	\
std::vector<unsigned char>* m_MuonsAux.numberOfTriggerEtaLayers;	\
std::vector<unsigned char> o_m_MuonsAux.numberOfTriggerEtaLayers;	\
std::vector<unsigned char>* m_MuonsAux.numberOfTriggerEtaHoleLayers;	\
std::vector<unsigned char> o_m_MuonsAux.numberOfTriggerEtaHoleLayers;	\
std::vector<unsigned char>* m_MuonsAux.primarySector;	\
std::vector<unsigned char> o_m_MuonsAux.primarySector;	\
std::vector<unsigned char>* m_MuonsAux.secondarySector;	\
std::vector<unsigned char> o_m_MuonsAux.secondarySector;	\
std::vector<unsigned char>* m_MuonsAux.innerSmallHits;	\
std::vector<unsigned char> o_m_MuonsAux.innerSmallHits;	\
std::vector<unsigned char>* m_MuonsAux.innerLargeHits;	\
std::vector<unsigned char> o_m_MuonsAux.innerLargeHits;	\
std::vector<unsigned char>* m_MuonsAux.middleSmallHits;	\
std::vector<unsigned char> o_m_MuonsAux.middleSmallHits;	\
std::vector<unsigned char>* m_MuonsAux.middleLargeHits;	\
std::vector<unsigned char> o_m_MuonsAux.middleLargeHits;	\
std::vector<unsigned char>* m_MuonsAux.outerSmallHits;	\
std::vector<unsigned char> o_m_MuonsAux.outerSmallHits;	\
std::vector<unsigned char>* m_MuonsAux.outerLargeHits;	\
std::vector<unsigned char> o_m_MuonsAux.outerLargeHits;	\
std::vector<unsigned char>* m_MuonsAux.extendedSmallHits;	\
std::vector<unsigned char> o_m_MuonsAux.extendedSmallHits;	\
std::vector<unsigned char>* m_MuonsAux.extendedLargeHits;	\
std::vector<unsigned char> o_m_MuonsAux.extendedLargeHits;	\
std::vector<unsigned char>* m_MuonsAux.innerSmallHoles;	\
std::vector<unsigned char> o_m_MuonsAux.innerSmallHoles;	\
std::vector<unsigned char>* m_MuonsAux.innerLargeHoles;	\
std::vector<unsigned char> o_m_MuonsAux.innerLargeHoles;	\
std::vector<unsigned char>* m_MuonsAux.middleSmallHoles;	\
std::vector<unsigned char> o_m_MuonsAux.middleSmallHoles;	\
std::vector<unsigned char>* m_MuonsAux.middleLargeHoles;	\
std::vector<unsigned char> o_m_MuonsAux.middleLargeHoles;	\
std::vector<unsigned char>* m_MuonsAux.outerSmallHoles;	\
std::vector<unsigned char> o_m_MuonsAux.outerSmallHoles;	\
std::vector<unsigned char>* m_MuonsAux.outerLargeHoles;	\
std::vector<unsigned char> o_m_MuonsAux.outerLargeHoles;	\
std::vector<unsigned char>* m_MuonsAux.extendedSmallHoles;	\
std::vector<unsigned char> o_m_MuonsAux.extendedSmallHoles;	\
std::vector<unsigned char>* m_MuonsAux.extendedLargeHoles;	\
std::vector<unsigned char> o_m_MuonsAux.extendedLargeHoles;	\
std::vector<unsigned char>* m_MuonsAux.phiLayer1Hits;	\
std::vector<unsigned char> o_m_MuonsAux.phiLayer1Hits;	\
std::vector<unsigned char>* m_MuonsAux.phiLayer2Hits;	\
std::vector<unsigned char> o_m_MuonsAux.phiLayer2Hits;	\
std::vector<unsigned char>* m_MuonsAux.phiLayer3Hits;	\
std::vector<unsigned char> o_m_MuonsAux.phiLayer3Hits;	\
std::vector<unsigned char>* m_MuonsAux.phiLayer4Hits;	\
std::vector<unsigned char> o_m_MuonsAux.phiLayer4Hits;	\
std::vector<unsigned char>* m_MuonsAux.etaLayer1Hits;	\
std::vector<unsigned char> o_m_MuonsAux.etaLayer1Hits;	\
std::vector<unsigned char>* m_MuonsAux.etaLayer2Hits;	\
std::vector<unsigned char> o_m_MuonsAux.etaLayer2Hits;	\
std::vector<unsigned char>* m_MuonsAux.etaLayer3Hits;	\
std::vector<unsigned char> o_m_MuonsAux.etaLayer3Hits;	\
std::vector<unsigned char>* m_MuonsAux.etaLayer4Hits;	\
std::vector<unsigned char> o_m_MuonsAux.etaLayer4Hits;	\
std::vector<unsigned char>* m_MuonsAux.phiLayer1Holes;	\
std::vector<unsigned char> o_m_MuonsAux.phiLayer1Holes;	\
std::vector<unsigned char>* m_MuonsAux.phiLayer2Holes;	\
std::vector<unsigned char> o_m_MuonsAux.phiLayer2Holes;	\
std::vector<unsigned char>* m_MuonsAux.phiLayer3Holes;	\
std::vector<unsigned char> o_m_MuonsAux.phiLayer3Holes;	\
std::vector<unsigned char>* m_MuonsAux.phiLayer4Holes;	\
std::vector<unsigned char> o_m_MuonsAux.phiLayer4Holes;	\
std::vector<unsigned char>* m_MuonsAux.etaLayer1Holes;	\
std::vector<unsigned char> o_m_MuonsAux.etaLayer1Holes;	\
std::vector<unsigned char>* m_MuonsAux.etaLayer2Holes;	\
std::vector<unsigned char> o_m_MuonsAux.etaLayer2Holes;	\
std::vector<unsigned char>* m_MuonsAux.etaLayer3Holes;	\
std::vector<unsigned char> o_m_MuonsAux.etaLayer3Holes;	\
std::vector<unsigned char>* m_MuonsAux.etaLayer4Holes;	\
std::vector<unsigned char> o_m_MuonsAux.etaLayer4Holes;	\
std::vector<unsigned char>* m_MuonsAux.energyLossType;	\
std::vector<unsigned char> o_m_MuonsAux.energyLossType;	\
DataVector<xAOD::TauJet_v1>* m_TauRecContainer;	\
DataVector<xAOD::TauJet_v1>* o_m_TauRecContainer;	\
DataVector<xAOD::Muon_v1>* m_Muons;	\
DataVector<xAOD::Muon_v1>* o_m_Muons;	\
egDetailContainer_p2 m_egDetailAOD;	\
egDetailContainer_p2 o_m_egDetailAOD;	\
DataVector<xAOD::TruthEvent_v1>* m_TruthEvent;	\
DataVector<xAOD::TruthEvent_v1>* o_m_TruthEvent;	\
xAOD::TrackParticleAuxContainer_v1 m_GSFTrackParticlesAux.;	\
xAOD::TrackParticleAuxContainer_v1 o_m_GSFTrackParticlesAux.;	\
BASE m_GSFTrackParticlesAux.xAOD::AuxContainerBase;	\
BASE o_m_GSFTrackParticlesAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_GSFTrackParticlesAux.d0;	\
std::vector<float> o_m_GSFTrackParticlesAux.d0;	\
std::vector<float>* m_GSFTrackParticlesAux.z0;	\
std::vector<float> o_m_GSFTrackParticlesAux.z0;	\
std::vector<float>* m_GSFTrackParticlesAux.phi;	\
std::vector<float> o_m_GSFTrackParticlesAux.phi;	\
std::vector<float>* m_GSFTrackParticlesAux.theta;	\
std::vector<float> o_m_GSFTrackParticlesAux.theta;	\
std::vector<float>* m_GSFTrackParticlesAux.qOverP;	\
std::vector<float> o_m_GSFTrackParticlesAux.qOverP;	\
std::vector<std::vector<float> >* m_GSFTrackParticlesAux.definingParametersCovMatrix;	\
std::vector<std::vector<float> > o_m_GSFTrackParticlesAux.definingParametersCovMatrix;	\
std::vector<float>* m_GSFTrackParticlesAux.vx;	\
std::vector<float> o_m_GSFTrackParticlesAux.vx;	\
std::vector<float>* m_GSFTrackParticlesAux.vy;	\
std::vector<float> o_m_GSFTrackParticlesAux.vy;	\
std::vector<float>* m_GSFTrackParticlesAux.vz;	\
std::vector<float> o_m_GSFTrackParticlesAux.vz;	\
std::vector<std::vector<float> >* m_GSFTrackParticlesAux.parameterX;	\
std::vector<std::vector<float> > o_m_GSFTrackParticlesAux.parameterX;	\
std::vector<std::vector<float> >* m_GSFTrackParticlesAux.parameterY;	\
std::vector<std::vector<float> > o_m_GSFTrackParticlesAux.parameterY;	\
std::vector<std::vector<float> >* m_GSFTrackParticlesAux.parameterZ;	\
std::vector<std::vector<float> > o_m_GSFTrackParticlesAux.parameterZ;	\
std::vector<std::vector<float> >* m_GSFTrackParticlesAux.parameterPX;	\
std::vector<std::vector<float> > o_m_GSFTrackParticlesAux.parameterPX;	\
std::vector<std::vector<float> >* m_GSFTrackParticlesAux.parameterPY;	\
std::vector<std::vector<float> > o_m_GSFTrackParticlesAux.parameterPY;	\
std::vector<std::vector<float> >* m_GSFTrackParticlesAux.parameterPZ;	\
std::vector<std::vector<float> > o_m_GSFTrackParticlesAux.parameterPZ;	\
std::vector<std::vector<float> >* m_GSFTrackParticlesAux.trackParameterCovarianceMatrices;	\
std::vector<std::vector<float> > o_m_GSFTrackParticlesAux.trackParameterCovarianceMatrices;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.parameterPosition;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.parameterPosition;	\
std::vector<float>* m_GSFTrackParticlesAux.chiSquared;	\
std::vector<float> o_m_GSFTrackParticlesAux.chiSquared;	\
std::vector<float>* m_GSFTrackParticlesAux.numberDoF;	\
std::vector<float> o_m_GSFTrackParticlesAux.numberDoF;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.trackFitter;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.trackFitter;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.particleHypothesis;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.particleHypothesis;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.trackProperties;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.trackProperties;	\
std::vector<unsigned long>* m_GSFTrackParticlesAux.patternRecoInfo;	\
std::vector<unsigned long> o_m_GSFTrackParticlesAux.patternRecoInfo;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfContribPixelLayers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfContribPixelLayers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfBLayerHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfBLayerHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfBLayerOutliers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfBLayerOutliers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfBLayerSharedHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfBLayerSharedHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfBLayerSplitHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfBLayerSplitHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.expectBLayerHit;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.expectBLayerHit;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPixelHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPixelHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPixelOutliers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPixelOutliers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPixelHoles;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPixelHoles;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPixelSharedHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPixelSharedHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPixelSplitHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPixelSplitHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfGangedPixels;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfGangedPixels;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfGangedFlaggedFakes;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfGangedFlaggedFakes;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPixelDeadSensors;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPixelDeadSensors;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPixelSpoiltHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPixelSpoiltHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfSCTHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfSCTHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfSCTOutliers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfSCTOutliers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfSCTHoles;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfSCTHoles;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfSCTDoubleHoles;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfSCTDoubleHoles;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfSCTSharedHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfSCTSharedHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfSCTDeadSensors;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfSCTDeadSensors;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfSCTSpoiltHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfSCTSpoiltHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfTRTHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfTRTHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfTRTOutliers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfTRTOutliers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfTRTHoles;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfTRTHoles;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfTRTHighThresholdHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfTRTHighThresholdHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfTRTDeadStraws;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfTRTDeadStraws;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfTRTTubeHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfTRTTubeHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfTRTXenonHits;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfTRTXenonHits;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPrecisionLayers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPrecisionLayers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPrecisionHoleLayers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPrecisionHoleLayers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPhiLayers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPhiLayers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfPhiHoleLayers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfPhiHoleLayers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfTriggerEtaLayers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfTriggerEtaLayers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.numberOfOutliersOnTrack;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.numberOfOutliersOnTrack;	\
std::vector<unsigned char>* m_GSFTrackParticlesAux.standardDeviationOfChi2OS;	\
std::vector<unsigned char> o_m_GSFTrackParticlesAux.standardDeviationOfChi2OS;	\
std::vector<float>* m_GSFTrackParticlesAux.eProbabilityComb;	\
std::vector<float> o_m_GSFTrackParticlesAux.eProbabilityComb;	\
std::vector<float>* m_GSFTrackParticlesAux.eProbabilityHT;	\
std::vector<float> o_m_GSFTrackParticlesAux.eProbabilityHT;	\
std::vector<float>* m_GSFTrackParticlesAux.eProbabilityToT;	\
std::vector<float> o_m_GSFTrackParticlesAux.eProbabilityToT;	\
std::vector<float>* m_GSFTrackParticlesAux.eProbabilityBrem;	\
std::vector<float> o_m_GSFTrackParticlesAux.eProbabilityBrem;	\
xAOD::TrackParticleAuxContainer_v1 m_InDetTrackParticlesAux.;	\
xAOD::TrackParticleAuxContainer_v1 o_m_InDetTrackParticlesAux.;	\
BASE m_InDetTrackParticlesAux.xAOD::AuxContainerBase;	\
BASE o_m_InDetTrackParticlesAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_InDetTrackParticlesAux.d0;	\
std::vector<float> o_m_InDetTrackParticlesAux.d0;	\
std::vector<float>* m_InDetTrackParticlesAux.z0;	\
std::vector<float> o_m_InDetTrackParticlesAux.z0;	\
std::vector<float>* m_InDetTrackParticlesAux.phi;	\
std::vector<float> o_m_InDetTrackParticlesAux.phi;	\
std::vector<float>* m_InDetTrackParticlesAux.theta;	\
std::vector<float> o_m_InDetTrackParticlesAux.theta;	\
std::vector<float>* m_InDetTrackParticlesAux.qOverP;	\
std::vector<float> o_m_InDetTrackParticlesAux.qOverP;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesAux.definingParametersCovMatrix;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesAux.definingParametersCovMatrix;	\
std::vector<float>* m_InDetTrackParticlesAux.vx;	\
std::vector<float> o_m_InDetTrackParticlesAux.vx;	\
std::vector<float>* m_InDetTrackParticlesAux.vy;	\
std::vector<float> o_m_InDetTrackParticlesAux.vy;	\
std::vector<float>* m_InDetTrackParticlesAux.vz;	\
std::vector<float> o_m_InDetTrackParticlesAux.vz;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesAux.parameterX;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesAux.parameterX;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesAux.parameterY;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesAux.parameterY;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesAux.parameterZ;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesAux.parameterZ;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesAux.parameterPX;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesAux.parameterPX;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesAux.parameterPY;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesAux.parameterPY;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesAux.parameterPZ;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesAux.parameterPZ;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesAux.trackParameterCovarianceMatrices;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesAux.trackParameterCovarianceMatrices;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.parameterPosition;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.parameterPosition;	\
std::vector<float>* m_InDetTrackParticlesAux.chiSquared;	\
std::vector<float> o_m_InDetTrackParticlesAux.chiSquared;	\
std::vector<float>* m_InDetTrackParticlesAux.numberDoF;	\
std::vector<float> o_m_InDetTrackParticlesAux.numberDoF;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.trackFitter;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.trackFitter;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.particleHypothesis;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.particleHypothesis;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.trackProperties;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.trackProperties;	\
std::vector<unsigned long>* m_InDetTrackParticlesAux.patternRecoInfo;	\
std::vector<unsigned long> o_m_InDetTrackParticlesAux.patternRecoInfo;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfContribPixelLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfContribPixelLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfBLayerHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfBLayerHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfBLayerOutliers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfBLayerOutliers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfBLayerSharedHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfBLayerSharedHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfBLayerSplitHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfBLayerSplitHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.expectBLayerHit;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.expectBLayerHit;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPixelHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPixelHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPixelOutliers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPixelOutliers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPixelHoles;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPixelHoles;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPixelSharedHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPixelSharedHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPixelSplitHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPixelSplitHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfGangedPixels;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfGangedPixels;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfGangedFlaggedFakes;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfGangedFlaggedFakes;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPixelDeadSensors;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPixelDeadSensors;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPixelSpoiltHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPixelSpoiltHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfSCTHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfSCTHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfSCTOutliers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfSCTOutliers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfSCTHoles;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfSCTHoles;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfSCTDoubleHoles;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfSCTDoubleHoles;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfSCTSharedHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfSCTSharedHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfSCTDeadSensors;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfSCTDeadSensors;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfSCTSpoiltHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfSCTSpoiltHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfTRTHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfTRTHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfTRTOutliers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfTRTOutliers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfTRTHoles;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfTRTHoles;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfTRTHighThresholdHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfTRTHighThresholdHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfTRTDeadStraws;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfTRTDeadStraws;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfTRTTubeHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfTRTTubeHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfTRTXenonHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfTRTXenonHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPrecisionLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPrecisionLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPrecisionHoleLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPrecisionHoleLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPhiLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPhiLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfPhiHoleLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfPhiHoleLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfTriggerEtaLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfTriggerEtaLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.numberOfOutliersOnTrack;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.numberOfOutliersOnTrack;	\
std::vector<unsigned char>* m_InDetTrackParticlesAux.standardDeviationOfChi2OS;	\
std::vector<unsigned char> o_m_InDetTrackParticlesAux.standardDeviationOfChi2OS;	\
std::vector<float>* m_InDetTrackParticlesAux.eProbabilityComb;	\
std::vector<float> o_m_InDetTrackParticlesAux.eProbabilityComb;	\
std::vector<float>* m_InDetTrackParticlesAux.eProbabilityHT;	\
std::vector<float> o_m_InDetTrackParticlesAux.eProbabilityHT;	\
std::vector<float>* m_InDetTrackParticlesAux.eProbabilityToT;	\
std::vector<float> o_m_InDetTrackParticlesAux.eProbabilityToT;	\
std::vector<float>* m_InDetTrackParticlesAux.eProbabilityBrem;	\
std::vector<float> o_m_InDetTrackParticlesAux.eProbabilityBrem;	\
xAOD::TrackParticleAuxContainer_v1 m_InDetTrackParticlesForwardAux.;	\
xAOD::TrackParticleAuxContainer_v1 o_m_InDetTrackParticlesForwardAux.;	\
BASE m_InDetTrackParticlesForwardAux.xAOD::AuxContainerBase;	\
BASE o_m_InDetTrackParticlesForwardAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.d0;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.d0;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.z0;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.z0;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.phi;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.phi;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.theta;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.theta;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.qOverP;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.qOverP;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesForwardAux.definingParametersCovMatrix;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesForwardAux.definingParametersCovMatrix;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.vx;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.vx;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.vy;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.vy;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.vz;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.vz;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesForwardAux.parameterX;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesForwardAux.parameterX;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesForwardAux.parameterY;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesForwardAux.parameterY;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesForwardAux.parameterZ;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesForwardAux.parameterZ;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesForwardAux.parameterPX;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesForwardAux.parameterPX;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesForwardAux.parameterPY;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesForwardAux.parameterPY;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesForwardAux.parameterPZ;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesForwardAux.parameterPZ;	\
std::vector<std::vector<float> >* m_InDetTrackParticlesForwardAux.trackParameterCovarianceMatrices;	\
std::vector<std::vector<float> > o_m_InDetTrackParticlesForwardAux.trackParameterCovarianceMatrices;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.parameterPosition;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.parameterPosition;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.chiSquared;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.chiSquared;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.numberDoF;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.numberDoF;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.trackFitter;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.trackFitter;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.particleHypothesis;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.particleHypothesis;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.trackProperties;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.trackProperties;	\
std::vector<unsigned long>* m_InDetTrackParticlesForwardAux.patternRecoInfo;	\
std::vector<unsigned long> o_m_InDetTrackParticlesForwardAux.patternRecoInfo;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfContribPixelLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfContribPixelLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfBLayerHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfBLayerHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfBLayerOutliers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfBLayerOutliers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfBLayerSharedHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfBLayerSharedHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfBLayerSplitHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfBLayerSplitHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.expectBLayerHit;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.expectBLayerHit;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPixelHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPixelHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPixelOutliers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPixelOutliers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPixelHoles;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPixelHoles;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPixelSharedHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPixelSharedHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPixelSplitHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPixelSplitHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfGangedPixels;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfGangedPixels;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPixelDeadSensors;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPixelDeadSensors;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfSCTHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfSCTHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfSCTOutliers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfSCTOutliers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfSCTHoles;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfSCTHoles;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfSCTSharedHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfSCTSharedHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfSCTDeadSensors;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfSCTDeadSensors;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfTRTHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfTRTHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfTRTOutliers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfTRTOutliers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfTRTHoles;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfTRTHoles;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfTRTDeadStraws;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfTRTDeadStraws;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfTRTTubeHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfTRTTubeHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfTRTXenonHits;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfTRTXenonHits;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPrecisionLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPrecisionLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPhiLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPhiLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfPhiHoleLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfPhiHoleLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.numberOfOutliersOnTrack;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.numberOfOutliersOnTrack;	\
std::vector<unsigned char>* m_InDetTrackParticlesForwardAux.standardDeviationOfChi2OS;	\
std::vector<unsigned char> o_m_InDetTrackParticlesForwardAux.standardDeviationOfChi2OS;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.eProbabilityComb;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.eProbabilityComb;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.eProbabilityHT;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.eProbabilityHT;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.eProbabilityToT;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.eProbabilityToT;	\
std::vector<float>* m_InDetTrackParticlesForwardAux.eProbabilityBrem;	\
std::vector<float> o_m_InDetTrackParticlesForwardAux.eProbabilityBrem;	\
DataVector<xAOD::CaloCluster_v1>* m_CaloCalTopoCluster;	\
DataVector<xAOD::CaloCluster_v1>* o_m_CaloCalTopoCluster;	\
DataVector<xAOD::CaloCluster_v1>* m_EMTopoSW35;	\
DataVector<xAOD::CaloCluster_v1>* o_m_EMTopoSW35;	\
DataVector<xAOD::CaloCluster_v1>* m_LArClusterEMFrwd;	\
DataVector<xAOD::CaloCluster_v1>* o_m_LArClusterEMFrwd;	\
DataVector<xAOD::CaloCluster_v1>* m_LArClusterEMSofte;	\
DataVector<xAOD::CaloCluster_v1>* o_m_LArClusterEMSofte;	\
DataVector<xAOD::CaloCluster_v1>* m_egClusterCollection;	\
DataVector<xAOD::CaloCluster_v1>* o_m_egClusterCollection;	\
TrackRecordCollection_p2 m_MuonEntryLayerFilter;	\
TrackRecordCollection_p2 o_m_MuonEntryLayerFilter;	\
DataVector<xAOD::TruthParticle_v1>* m_TruthParticle;	\
DataVector<xAOD::TruthParticle_v1>* o_m_TruthParticle;	\
DataVector<xAOD::TruthVertex_v1>* m_TruthVertex;	\
DataVector<xAOD::TruthVertex_v1>* o_m_TruthVertex;	\
DataVector<xAOD::Jet_v1>* m_AntiKt4LCTopoJets;	\
DataVector<xAOD::Jet_v1>* o_m_AntiKt4LCTopoJets;	\
DataVector<xAOD::Jet_v1>* m_AntiKt4TopoEMJets;	\
DataVector<xAOD::Jet_v1>* o_m_AntiKt4TopoEMJets;	\
DataVector<xAOD::Jet_v1>* m_AntiKt6LCTopoJets;	\
DataVector<xAOD::Jet_v1>* o_m_AntiKt6LCTopoJets;	\
DataVector<xAOD::Jet_v1>* m_AntiKt6TopoEMJets;	\
DataVector<xAOD::Jet_v1>* o_m_AntiKt6TopoEMJets;	\
xAOD::PhotonAuxContainer_v1 m_PhotonCollectionAux.;	\
xAOD::PhotonAuxContainer_v1 o_m_PhotonCollectionAux.;	\
BASE m_PhotonCollectionAux.xAOD::EgammaAuxContainer_v1;	\
BASE o_m_PhotonCollectionAux.xAOD::EgammaAuxContainer_v1;	\
std::vector<float>* m_PhotonCollectionAux.convMatchDeltaEta1;	\
std::vector<float> o_m_PhotonCollectionAux.convMatchDeltaEta1;	\
std::vector<float>* m_PhotonCollectionAux.convMatchDeltaEta2;	\
std::vector<float> o_m_PhotonCollectionAux.convMatchDeltaEta2;	\
std::vector<float>* m_PhotonCollectionAux.convMatchDeltaPhi1;	\
std::vector<float> o_m_PhotonCollectionAux.convMatchDeltaPhi1;	\
std::vector<float>* m_PhotonCollectionAux.convMatchDeltaPhi2;	\
std::vector<float> o_m_PhotonCollectionAux.convMatchDeltaPhi2;	\
xAOD::TruthVertexAuxContainer_v1 m_TruthVertexAux.;	\
xAOD::TruthVertexAuxContainer_v1 o_m_TruthVertexAux.;	\
BASE m_TruthVertexAux.xAOD::AuxContainerBase;	\
BASE o_m_TruthVertexAux.xAOD::AuxContainerBase;	\
std::vector<int>* m_TruthVertexAux.id;	\
std::vector<int> o_m_TruthVertexAux.id;	\
std::vector<int>* m_TruthVertexAux.barcode;	\
std::vector<int> o_m_TruthVertexAux.barcode;	\
std::vector<float>* m_TruthVertexAux.x;	\
std::vector<float> o_m_TruthVertexAux.x;	\
std::vector<float>* m_TruthVertexAux.y;	\
std::vector<float> o_m_TruthVertexAux.y;	\
std::vector<float>* m_TruthVertexAux.z;	\
std::vector<float> o_m_TruthVertexAux.z;	\
std::vector<float>* m_TruthVertexAux.t;	\
std::vector<float> o_m_TruthVertexAux.t;	\
std::vector<std::vector<float> >* m_TruthVertexAux.weights;	\
std::vector<std::vector<float> > o_m_TruthVertexAux.weights;	\
xAOD::TruthEventAuxContainer_v1 m_TruthEventAux.;	\
xAOD::TruthEventAuxContainer_v1 o_m_TruthEventAux.;	\
BASE m_TruthEventAux.xAOD::AuxContainerBase;	\
BASE o_m_TruthEventAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_TruthEventAux.eventScale;	\
std::vector<float> o_m_TruthEventAux.eventScale;	\
std::vector<float>* m_TruthEventAux.alphaQCD;	\
std::vector<float> o_m_TruthEventAux.alphaQCD;	\
std::vector<float>* m_TruthEventAux.alphaQED;	\
std::vector<float> o_m_TruthEventAux.alphaQED;	\
std::vector<std::vector<float> >* m_TruthEventAux.weights;	\
std::vector<std::vector<float> > o_m_TruthEventAux.weights;	\
std::vector<float>* m_TruthEventAux.crossSection;	\
std::vector<float> o_m_TruthEventAux.crossSection;	\
std::vector<float>* m_TruthEventAux.crossSectionError;	\
std::vector<float> o_m_TruthEventAux.crossSectionError;	\
DataVector<xAOD::TrackParticle_v1>* m_GSFTrackParticles;	\
DataVector<xAOD::TrackParticle_v1>* o_m_GSFTrackParticles;	\
DataVector<xAOD::TrackParticle_v1>* m_InDetTrackParticles;	\
DataVector<xAOD::TrackParticle_v1>* o_m_InDetTrackParticles;	\
DataVector<xAOD::TrackParticle_v1>* m_InDetTrackParticlesForward;	\
DataVector<xAOD::TrackParticle_v1>* o_m_InDetTrackParticlesForward;	\
xAOD::JetAuxContainer_v1 m_AntiKt4LCTopoJetsAux.;	\
xAOD::JetAuxContainer_v1 o_m_AntiKt4LCTopoJetsAux.;	\
BASE m_AntiKt4LCTopoJetsAux.xAOD::AuxContainerBase;	\
BASE o_m_AntiKt4LCTopoJetsAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_AntiKt4LCTopoJetsAux.pt;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAux.pt;	\
std::vector<float>* m_AntiKt4LCTopoJetsAux.eta;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAux.eta;	\
std::vector<float>* m_AntiKt4LCTopoJetsAux.phi;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAux.phi;	\
std::vector<float>* m_AntiKt4LCTopoJetsAux.m;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAux.m;	\
std::vector<std::vector<float> >* m_AntiKt4LCTopoJetsAux.constituentWeights;	\
std::vector<std::vector<float> > o_m_AntiKt4LCTopoJetsAux.constituentWeights;	\
xAOD::JetAuxContainer_v1 m_AntiKt4TopoEMJetsAux.;	\
xAOD::JetAuxContainer_v1 o_m_AntiKt4TopoEMJetsAux.;	\
BASE m_AntiKt4TopoEMJetsAux.xAOD::AuxContainerBase;	\
BASE o_m_AntiKt4TopoEMJetsAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_AntiKt4TopoEMJetsAux.pt;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAux.pt;	\
std::vector<float>* m_AntiKt4TopoEMJetsAux.eta;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAux.eta;	\
std::vector<float>* m_AntiKt4TopoEMJetsAux.phi;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAux.phi;	\
std::vector<float>* m_AntiKt4TopoEMJetsAux.m;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAux.m;	\
std::vector<std::vector<float> >* m_AntiKt4TopoEMJetsAux.constituentWeights;	\
std::vector<std::vector<float> > o_m_AntiKt4TopoEMJetsAux.constituentWeights;	\
xAOD::JetAuxContainer_v1 m_AntiKt6LCTopoJetsAux.;	\
xAOD::JetAuxContainer_v1 o_m_AntiKt6LCTopoJetsAux.;	\
BASE m_AntiKt6LCTopoJetsAux.xAOD::AuxContainerBase;	\
BASE o_m_AntiKt6LCTopoJetsAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_AntiKt6LCTopoJetsAux.pt;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAux.pt;	\
std::vector<float>* m_AntiKt6LCTopoJetsAux.eta;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAux.eta;	\
std::vector<float>* m_AntiKt6LCTopoJetsAux.phi;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAux.phi;	\
std::vector<float>* m_AntiKt6LCTopoJetsAux.m;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAux.m;	\
std::vector<std::vector<float> >* m_AntiKt6LCTopoJetsAux.constituentWeights;	\
std::vector<std::vector<float> > o_m_AntiKt6LCTopoJetsAux.constituentWeights;	\
xAOD::JetAuxContainer_v1 m_AntiKt6TopoEMJetsAux.;	\
xAOD::JetAuxContainer_v1 o_m_AntiKt6TopoEMJetsAux.;	\
BASE m_AntiKt6TopoEMJetsAux.xAOD::AuxContainerBase;	\
BASE o_m_AntiKt6TopoEMJetsAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_AntiKt6TopoEMJetsAux.pt;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAux.pt;	\
std::vector<float>* m_AntiKt6TopoEMJetsAux.eta;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAux.eta;	\
std::vector<float>* m_AntiKt6TopoEMJetsAux.phi;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAux.phi;	\
std::vector<float>* m_AntiKt6TopoEMJetsAux.m;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAux.m;	\
std::vector<std::vector<float> >* m_AntiKt6TopoEMJetsAux.constituentWeights;	\
std::vector<std::vector<float> > o_m_AntiKt6TopoEMJetsAux.constituentWeights;	\
xAOD::CaloClusterAuxContainer_v1 m_CaloCalTopoClusterAux.;	\
xAOD::CaloClusterAuxContainer_v1 o_m_CaloCalTopoClusterAux.;	\
BASE m_CaloCalTopoClusterAux.xAOD::AuxContainerBase;	\
BASE o_m_CaloCalTopoClusterAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_CaloCalTopoClusterAux.basicSignal;	\
std::vector<float> o_m_CaloCalTopoClusterAux.basicSignal;	\
std::vector<float>* m_CaloCalTopoClusterAux.time;	\
std::vector<float> o_m_CaloCalTopoClusterAux.time;	\
std::vector<unsigned int>* m_CaloCalTopoClusterAux.samplingPattern;	\
std::vector<unsigned int> o_m_CaloCalTopoClusterAux.samplingPattern;	\
std::vector<unsigned int>* m_CaloCalTopoClusterAux.clusterSize;	\
std::vector<unsigned int> o_m_CaloCalTopoClusterAux.clusterSize;	\
std::vector<float>* m_CaloCalTopoClusterAux.eta0;	\
std::vector<float> o_m_CaloCalTopoClusterAux.eta0;	\
std::vector<float>* m_CaloCalTopoClusterAux.phi0;	\
std::vector<float> o_m_CaloCalTopoClusterAux.phi0;	\
std::vector<int>* m_CaloCalTopoClusterAux.nBarrel;	\
std::vector<int> o_m_CaloCalTopoClusterAux.nBarrel;	\
std::vector<int>* m_CaloCalTopoClusterAux.nEndcap;	\
std::vector<int> o_m_CaloCalTopoClusterAux.nEndcap;	\
std::vector<float>* m_CaloCalTopoClusterAux.rawE;	\
std::vector<float> o_m_CaloCalTopoClusterAux.rawE;	\
std::vector<float>* m_CaloCalTopoClusterAux.rawEta;	\
std::vector<float> o_m_CaloCalTopoClusterAux.rawEta;	\
std::vector<float>* m_CaloCalTopoClusterAux.rawPhi;	\
std::vector<float> o_m_CaloCalTopoClusterAux.rawPhi;	\
std::vector<float>* m_CaloCalTopoClusterAux.rawM;	\
std::vector<float> o_m_CaloCalTopoClusterAux.rawM;	\
std::vector<float>* m_CaloCalTopoClusterAux.altE;	\
std::vector<float> o_m_CaloCalTopoClusterAux.altE;	\
std::vector<float>* m_CaloCalTopoClusterAux.altEta;	\
std::vector<float> o_m_CaloCalTopoClusterAux.altEta;	\
std::vector<float>* m_CaloCalTopoClusterAux.altPhi;	\
std::vector<float> o_m_CaloCalTopoClusterAux.altPhi;	\
std::vector<float>* m_CaloCalTopoClusterAux.altM;	\
std::vector<float> o_m_CaloCalTopoClusterAux.altM;	\
std::vector<float>* m_CaloCalTopoClusterAux.calE;	\
std::vector<float> o_m_CaloCalTopoClusterAux.calE;	\
std::vector<float>* m_CaloCalTopoClusterAux.calEta;	\
std::vector<float> o_m_CaloCalTopoClusterAux.calEta;	\
std::vector<float>* m_CaloCalTopoClusterAux.calPhi;	\
std::vector<float> o_m_CaloCalTopoClusterAux.calPhi;	\
std::vector<float>* m_CaloCalTopoClusterAux.calM;	\
std::vector<float> o_m_CaloCalTopoClusterAux.calM;	\
std::vector<std::vector<float> >* m_CaloCalTopoClusterAux.e_sampl;	\
std::vector<std::vector<float> > o_m_CaloCalTopoClusterAux.e_sampl;	\
std::vector<std::vector<float> >* m_CaloCalTopoClusterAux.eta_sampl;	\
std::vector<std::vector<float> > o_m_CaloCalTopoClusterAux.eta_sampl;	\
std::vector<std::vector<float> >* m_CaloCalTopoClusterAux.phi_sampl;	\
std::vector<std::vector<float> > o_m_CaloCalTopoClusterAux.phi_sampl;	\
xAOD::CaloClusterAuxContainer_v1 m_EMTopoSW35Aux.;	\
xAOD::CaloClusterAuxContainer_v1 o_m_EMTopoSW35Aux.;	\
BASE m_EMTopoSW35Aux.xAOD::AuxContainerBase;	\
BASE o_m_EMTopoSW35Aux.xAOD::AuxContainerBase;	\
std::vector<float>* m_EMTopoSW35Aux.basicSignal;	\
std::vector<float> o_m_EMTopoSW35Aux.basicSignal;	\
std::vector<float>* m_EMTopoSW35Aux.time;	\
std::vector<float> o_m_EMTopoSW35Aux.time;	\
std::vector<unsigned int>* m_EMTopoSW35Aux.samplingPattern;	\
std::vector<unsigned int> o_m_EMTopoSW35Aux.samplingPattern;	\
std::vector<unsigned int>* m_EMTopoSW35Aux.clusterSize;	\
std::vector<unsigned int> o_m_EMTopoSW35Aux.clusterSize;	\
std::vector<float>* m_EMTopoSW35Aux.eta0;	\
std::vector<float> o_m_EMTopoSW35Aux.eta0;	\
std::vector<float>* m_EMTopoSW35Aux.phi0;	\
std::vector<float> o_m_EMTopoSW35Aux.phi0;	\
std::vector<int>* m_EMTopoSW35Aux.nBarrel;	\
std::vector<int> o_m_EMTopoSW35Aux.nBarrel;	\
std::vector<int>* m_EMTopoSW35Aux.nEndcap;	\
std::vector<int> o_m_EMTopoSW35Aux.nEndcap;	\
std::vector<float>* m_EMTopoSW35Aux.rawE;	\
std::vector<float> o_m_EMTopoSW35Aux.rawE;	\
std::vector<float>* m_EMTopoSW35Aux.rawEta;	\
std::vector<float> o_m_EMTopoSW35Aux.rawEta;	\
std::vector<float>* m_EMTopoSW35Aux.rawPhi;	\
std::vector<float> o_m_EMTopoSW35Aux.rawPhi;	\
std::vector<float>* m_EMTopoSW35Aux.rawM;	\
std::vector<float> o_m_EMTopoSW35Aux.rawM;	\
std::vector<float>* m_EMTopoSW35Aux.altE;	\
std::vector<float> o_m_EMTopoSW35Aux.altE;	\
std::vector<float>* m_EMTopoSW35Aux.altEta;	\
std::vector<float> o_m_EMTopoSW35Aux.altEta;	\
std::vector<float>* m_EMTopoSW35Aux.altPhi;	\
std::vector<float> o_m_EMTopoSW35Aux.altPhi;	\
std::vector<float>* m_EMTopoSW35Aux.altM;	\
std::vector<float> o_m_EMTopoSW35Aux.altM;	\
std::vector<float>* m_EMTopoSW35Aux.calE;	\
std::vector<float> o_m_EMTopoSW35Aux.calE;	\
std::vector<float>* m_EMTopoSW35Aux.calEta;	\
std::vector<float> o_m_EMTopoSW35Aux.calEta;	\
std::vector<float>* m_EMTopoSW35Aux.calPhi;	\
std::vector<float> o_m_EMTopoSW35Aux.calPhi;	\
std::vector<float>* m_EMTopoSW35Aux.calM;	\
std::vector<float> o_m_EMTopoSW35Aux.calM;	\
std::vector<std::vector<float> >* m_EMTopoSW35Aux.e_sampl;	\
std::vector<std::vector<float> > o_m_EMTopoSW35Aux.e_sampl;	\
std::vector<std::vector<float> >* m_EMTopoSW35Aux.eta_sampl;	\
std::vector<std::vector<float> > o_m_EMTopoSW35Aux.eta_sampl;	\
std::vector<std::vector<float> >* m_EMTopoSW35Aux.phi_sampl;	\
std::vector<std::vector<float> > o_m_EMTopoSW35Aux.phi_sampl;	\
xAOD::CaloClusterAuxContainer_v1 m_LArClusterEMFrwdAux.;	\
xAOD::CaloClusterAuxContainer_v1 o_m_LArClusterEMFrwdAux.;	\
BASE m_LArClusterEMFrwdAux.xAOD::AuxContainerBase;	\
BASE o_m_LArClusterEMFrwdAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_LArClusterEMFrwdAux.basicSignal;	\
std::vector<float> o_m_LArClusterEMFrwdAux.basicSignal;	\
std::vector<float>* m_LArClusterEMFrwdAux.time;	\
std::vector<float> o_m_LArClusterEMFrwdAux.time;	\
std::vector<unsigned int>* m_LArClusterEMFrwdAux.samplingPattern;	\
std::vector<unsigned int> o_m_LArClusterEMFrwdAux.samplingPattern;	\
std::vector<unsigned int>* m_LArClusterEMFrwdAux.clusterSize;	\
std::vector<unsigned int> o_m_LArClusterEMFrwdAux.clusterSize;	\
std::vector<float>* m_LArClusterEMFrwdAux.eta0;	\
std::vector<float> o_m_LArClusterEMFrwdAux.eta0;	\
std::vector<float>* m_LArClusterEMFrwdAux.phi0;	\
std::vector<float> o_m_LArClusterEMFrwdAux.phi0;	\
std::vector<int>* m_LArClusterEMFrwdAux.nBarrel;	\
std::vector<int> o_m_LArClusterEMFrwdAux.nBarrel;	\
std::vector<int>* m_LArClusterEMFrwdAux.nEndcap;	\
std::vector<int> o_m_LArClusterEMFrwdAux.nEndcap;	\
std::vector<float>* m_LArClusterEMFrwdAux.rawE;	\
std::vector<float> o_m_LArClusterEMFrwdAux.rawE;	\
std::vector<float>* m_LArClusterEMFrwdAux.rawEta;	\
std::vector<float> o_m_LArClusterEMFrwdAux.rawEta;	\
std::vector<float>* m_LArClusterEMFrwdAux.rawPhi;	\
std::vector<float> o_m_LArClusterEMFrwdAux.rawPhi;	\
std::vector<float>* m_LArClusterEMFrwdAux.rawM;	\
std::vector<float> o_m_LArClusterEMFrwdAux.rawM;	\
std::vector<float>* m_LArClusterEMFrwdAux.altE;	\
std::vector<float> o_m_LArClusterEMFrwdAux.altE;	\
std::vector<float>* m_LArClusterEMFrwdAux.altEta;	\
std::vector<float> o_m_LArClusterEMFrwdAux.altEta;	\
std::vector<float>* m_LArClusterEMFrwdAux.altPhi;	\
std::vector<float> o_m_LArClusterEMFrwdAux.altPhi;	\
std::vector<float>* m_LArClusterEMFrwdAux.altM;	\
std::vector<float> o_m_LArClusterEMFrwdAux.altM;	\
std::vector<float>* m_LArClusterEMFrwdAux.calE;	\
std::vector<float> o_m_LArClusterEMFrwdAux.calE;	\
std::vector<float>* m_LArClusterEMFrwdAux.calEta;	\
std::vector<float> o_m_LArClusterEMFrwdAux.calEta;	\
std::vector<float>* m_LArClusterEMFrwdAux.calPhi;	\
std::vector<float> o_m_LArClusterEMFrwdAux.calPhi;	\
std::vector<float>* m_LArClusterEMFrwdAux.calM;	\
std::vector<float> o_m_LArClusterEMFrwdAux.calM;	\
std::vector<std::vector<float> >* m_LArClusterEMFrwdAux.e_sampl;	\
std::vector<std::vector<float> > o_m_LArClusterEMFrwdAux.e_sampl;	\
std::vector<std::vector<float> >* m_LArClusterEMFrwdAux.eta_sampl;	\
std::vector<std::vector<float> > o_m_LArClusterEMFrwdAux.eta_sampl;	\
std::vector<std::vector<float> >* m_LArClusterEMFrwdAux.phi_sampl;	\
std::vector<std::vector<float> > o_m_LArClusterEMFrwdAux.phi_sampl;	\
xAOD::CaloClusterAuxContainer_v1 m_LArClusterEMSofteAux.;	\
xAOD::CaloClusterAuxContainer_v1 o_m_LArClusterEMSofteAux.;	\
BASE m_LArClusterEMSofteAux.xAOD::AuxContainerBase;	\
BASE o_m_LArClusterEMSofteAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_LArClusterEMSofteAux.basicSignal;	\
std::vector<float> o_m_LArClusterEMSofteAux.basicSignal;	\
std::vector<float>* m_LArClusterEMSofteAux.time;	\
std::vector<float> o_m_LArClusterEMSofteAux.time;	\
std::vector<unsigned int>* m_LArClusterEMSofteAux.samplingPattern;	\
std::vector<unsigned int> o_m_LArClusterEMSofteAux.samplingPattern;	\
std::vector<unsigned int>* m_LArClusterEMSofteAux.clusterSize;	\
std::vector<unsigned int> o_m_LArClusterEMSofteAux.clusterSize;	\
std::vector<float>* m_LArClusterEMSofteAux.eta0;	\
std::vector<float> o_m_LArClusterEMSofteAux.eta0;	\
std::vector<float>* m_LArClusterEMSofteAux.phi0;	\
std::vector<float> o_m_LArClusterEMSofteAux.phi0;	\
std::vector<int>* m_LArClusterEMSofteAux.nBarrel;	\
std::vector<int> o_m_LArClusterEMSofteAux.nBarrel;	\
std::vector<int>* m_LArClusterEMSofteAux.nEndcap;	\
std::vector<int> o_m_LArClusterEMSofteAux.nEndcap;	\
std::vector<float>* m_LArClusterEMSofteAux.rawE;	\
std::vector<float> o_m_LArClusterEMSofteAux.rawE;	\
std::vector<float>* m_LArClusterEMSofteAux.rawEta;	\
std::vector<float> o_m_LArClusterEMSofteAux.rawEta;	\
std::vector<float>* m_LArClusterEMSofteAux.rawPhi;	\
std::vector<float> o_m_LArClusterEMSofteAux.rawPhi;	\
std::vector<float>* m_LArClusterEMSofteAux.rawM;	\
std::vector<float> o_m_LArClusterEMSofteAux.rawM;	\
std::vector<float>* m_LArClusterEMSofteAux.altE;	\
std::vector<float> o_m_LArClusterEMSofteAux.altE;	\
std::vector<float>* m_LArClusterEMSofteAux.altEta;	\
std::vector<float> o_m_LArClusterEMSofteAux.altEta;	\
std::vector<float>* m_LArClusterEMSofteAux.altPhi;	\
std::vector<float> o_m_LArClusterEMSofteAux.altPhi;	\
std::vector<float>* m_LArClusterEMSofteAux.altM;	\
std::vector<float> o_m_LArClusterEMSofteAux.altM;	\
std::vector<float>* m_LArClusterEMSofteAux.calE;	\
std::vector<float> o_m_LArClusterEMSofteAux.calE;	\
std::vector<float>* m_LArClusterEMSofteAux.calEta;	\
std::vector<float> o_m_LArClusterEMSofteAux.calEta;	\
std::vector<float>* m_LArClusterEMSofteAux.calPhi;	\
std::vector<float> o_m_LArClusterEMSofteAux.calPhi;	\
std::vector<float>* m_LArClusterEMSofteAux.calM;	\
std::vector<float> o_m_LArClusterEMSofteAux.calM;	\
std::vector<std::vector<float> >* m_LArClusterEMSofteAux.e_sampl;	\
std::vector<std::vector<float> > o_m_LArClusterEMSofteAux.e_sampl;	\
std::vector<std::vector<float> >* m_LArClusterEMSofteAux.eta_sampl;	\
std::vector<std::vector<float> > o_m_LArClusterEMSofteAux.eta_sampl;	\
std::vector<std::vector<float> >* m_LArClusterEMSofteAux.phi_sampl;	\
std::vector<std::vector<float> > o_m_LArClusterEMSofteAux.phi_sampl;	\
xAOD::CaloClusterAuxContainer_v1 m_egClusterCollectionAux.;	\
xAOD::CaloClusterAuxContainer_v1 o_m_egClusterCollectionAux.;	\
BASE m_egClusterCollectionAux.xAOD::AuxContainerBase;	\
BASE o_m_egClusterCollectionAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_egClusterCollectionAux.basicSignal;	\
std::vector<float> o_m_egClusterCollectionAux.basicSignal;	\
std::vector<float>* m_egClusterCollectionAux.time;	\
std::vector<float> o_m_egClusterCollectionAux.time;	\
std::vector<unsigned int>* m_egClusterCollectionAux.samplingPattern;	\
std::vector<unsigned int> o_m_egClusterCollectionAux.samplingPattern;	\
std::vector<unsigned int>* m_egClusterCollectionAux.clusterSize;	\
std::vector<unsigned int> o_m_egClusterCollectionAux.clusterSize;	\
std::vector<float>* m_egClusterCollectionAux.eta0;	\
std::vector<float> o_m_egClusterCollectionAux.eta0;	\
std::vector<float>* m_egClusterCollectionAux.phi0;	\
std::vector<float> o_m_egClusterCollectionAux.phi0;	\
std::vector<int>* m_egClusterCollectionAux.nBarrel;	\
std::vector<int> o_m_egClusterCollectionAux.nBarrel;	\
std::vector<int>* m_egClusterCollectionAux.nEndcap;	\
std::vector<int> o_m_egClusterCollectionAux.nEndcap;	\
std::vector<float>* m_egClusterCollectionAux.rawE;	\
std::vector<float> o_m_egClusterCollectionAux.rawE;	\
std::vector<float>* m_egClusterCollectionAux.rawEta;	\
std::vector<float> o_m_egClusterCollectionAux.rawEta;	\
std::vector<float>* m_egClusterCollectionAux.rawPhi;	\
std::vector<float> o_m_egClusterCollectionAux.rawPhi;	\
std::vector<float>* m_egClusterCollectionAux.rawM;	\
std::vector<float> o_m_egClusterCollectionAux.rawM;	\
std::vector<float>* m_egClusterCollectionAux.altE;	\
std::vector<float> o_m_egClusterCollectionAux.altE;	\
std::vector<float>* m_egClusterCollectionAux.altEta;	\
std::vector<float> o_m_egClusterCollectionAux.altEta;	\
std::vector<float>* m_egClusterCollectionAux.altPhi;	\
std::vector<float> o_m_egClusterCollectionAux.altPhi;	\
std::vector<float>* m_egClusterCollectionAux.altM;	\
std::vector<float> o_m_egClusterCollectionAux.altM;	\
std::vector<float>* m_egClusterCollectionAux.calE;	\
std::vector<float> o_m_egClusterCollectionAux.calE;	\
std::vector<float>* m_egClusterCollectionAux.calEta;	\
std::vector<float> o_m_egClusterCollectionAux.calEta;	\
std::vector<float>* m_egClusterCollectionAux.calPhi;	\
std::vector<float> o_m_egClusterCollectionAux.calPhi;	\
std::vector<float>* m_egClusterCollectionAux.calM;	\
std::vector<float> o_m_egClusterCollectionAux.calM;	\
std::vector<std::vector<float> >* m_egClusterCollectionAux.e_sampl;	\
std::vector<std::vector<float> > o_m_egClusterCollectionAux.e_sampl;	\
std::vector<std::vector<float> >* m_egClusterCollectionAux.eta_sampl;	\
std::vector<std::vector<float> > o_m_egClusterCollectionAux.eta_sampl;	\
std::vector<std::vector<float> >* m_egClusterCollectionAux.phi_sampl;	\
std::vector<std::vector<float> > o_m_egClusterCollectionAux.phi_sampl;	\
xAOD::TauJetAuxContainer_v1 m_TauRecContainerAux.;	\
xAOD::TauJetAuxContainer_v1 o_m_TauRecContainerAux.;	\
BASE m_TauRecContainerAux.xAOD::AuxContainerBase;	\
BASE o_m_TauRecContainerAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_TauRecContainerAux.pt;	\
std::vector<float> o_m_TauRecContainerAux.pt;	\
std::vector<float>* m_TauRecContainerAux.eta;	\
std::vector<float> o_m_TauRecContainerAux.eta;	\
std::vector<float>* m_TauRecContainerAux.phi;	\
std::vector<float> o_m_TauRecContainerAux.phi;	\
std::vector<float>* m_TauRecContainerAux.e;	\
std::vector<float> o_m_TauRecContainerAux.e;	\
std::vector<float>* m_TauRecContainerAux.m;	\
std::vector<float> o_m_TauRecContainerAux.m;	\
std::vector<unsigned int>* m_TauRecContainerAux.ROIWord;	\
std::vector<unsigned int> o_m_TauRecContainerAux.ROIWord;	\
std::vector<float>* m_TauRecContainerAux.charge;	\
std::vector<float> o_m_TauRecContainerAux.charge;	\
std::vector<unsigned int>* m_TauRecContainerAux.vetoFlags;	\
std::vector<unsigned int> o_m_TauRecContainerAux.vetoFlags;	\
std::vector<unsigned int>* m_TauRecContainerAux.isTauFlags;	\
std::vector<unsigned int> o_m_TauRecContainerAux.isTauFlags;	\
std::vector<float>* m_TauRecContainerAux.Likelihood;	\
std::vector<float> o_m_TauRecContainerAux.Likelihood;	\
std::vector<float>* m_TauRecContainerAux.SafeLikelihood;	\
std::vector<float> o_m_TauRecContainerAux.SafeLikelihood;	\
std::vector<float>* m_TauRecContainerAux.BDTJetScore;	\
std::vector<float> o_m_TauRecContainerAux.BDTJetScore;	\
std::vector<float>* m_TauRecContainerAux.BDTEleScore;	\
std::vector<float> o_m_TauRecContainerAux.BDTEleScore;	\
std::vector<float>* m_TauRecContainerAux.PanTauScore;	\
std::vector<float> o_m_TauRecContainerAux.PanTauScore;	\
std::vector<std::vector<int> >* m_TauRecContainerAux.trackFilterPass;	\
std::vector<std::vector<int> > o_m_TauRecContainerAux.trackFilterPass;	\
std::vector<int>* m_TauRecContainerAux.trackFilterProngs;	\
std::vector<int> o_m_TauRecContainerAux.trackFilterProngs;	\
std::vector<int>* m_TauRecContainerAux.trackFilterQuality;	\
std::vector<int> o_m_TauRecContainerAux.trackFilterQuality;	\
std::vector<float>* m_TauRecContainerAux.pi0ConeDR;	\
std::vector<float> o_m_TauRecContainerAux.pi0ConeDR;	\
std::vector<float>* m_TauRecContainerAux.ipZ0SinThetaSigLeadTrk;	\
std::vector<float> o_m_TauRecContainerAux.ipZ0SinThetaSigLeadTrk;	\
std::vector<float>* m_TauRecContainerAux.etOverPtLeadTrk;	\
std::vector<float> o_m_TauRecContainerAux.etOverPtLeadTrk;	\
std::vector<float>* m_TauRecContainerAux.leadTrkPt;	\
std::vector<float> o_m_TauRecContainerAux.leadTrkPt;	\
std::vector<float>* m_TauRecContainerAux.ipSigLeadTrk;	\
std::vector<float> o_m_TauRecContainerAux.ipSigLeadTrk;	\
std::vector<float>* m_TauRecContainerAux.ipSigLeadLooseTrk;	\
std::vector<float> o_m_TauRecContainerAux.ipSigLeadLooseTrk;	\
std::vector<float>* m_TauRecContainerAux.etOverPtLeadLooseTrk;	\
std::vector<float> o_m_TauRecContainerAux.etOverPtLeadLooseTrk;	\
std::vector<float>* m_TauRecContainerAux.leadLooseTrkPt;	\
std::vector<float> o_m_TauRecContainerAux.leadLooseTrkPt;	\
std::vector<float>* m_TauRecContainerAux.chrgLooseTrk;	\
std::vector<float> o_m_TauRecContainerAux.chrgLooseTrk;	\
std::vector<float>* m_TauRecContainerAux.massTrkSys;	\
std::vector<float> o_m_TauRecContainerAux.massTrkSys;	\
std::vector<float>* m_TauRecContainerAux.trkWidth2;	\
std::vector<float> o_m_TauRecContainerAux.trkWidth2;	\
std::vector<float>* m_TauRecContainerAux.trFlightPathSig;	\
std::vector<float> o_m_TauRecContainerAux.trFlightPathSig;	\
std::vector<float>* m_TauRecContainerAux.etEflow;	\
std::vector<float> o_m_TauRecContainerAux.etEflow;	\
std::vector<float>* m_TauRecContainerAux.mEflow;	\
std::vector<float> o_m_TauRecContainerAux.mEflow;	\
std::vector<float>* m_TauRecContainerAux.ele_E237E277;	\
std::vector<float> o_m_TauRecContainerAux.ele_E237E277;	\
std::vector<float>* m_TauRecContainerAux.ele_PresamplerFraction;	\
std::vector<float> o_m_TauRecContainerAux.ele_PresamplerFraction;	\
std::vector<float>* m_TauRecContainerAux.ele_ECALFirstFraction;	\
std::vector<float> o_m_TauRecContainerAux.ele_ECALFirstFraction;	\
std::vector<int>* m_TauRecContainerAux.numCells;	\
std::vector<int> o_m_TauRecContainerAux.numCells;	\
std::vector<int>* m_TauRecContainerAux.numTopoClusters;	\
std::vector<int> o_m_TauRecContainerAux.numTopoClusters;	\
std::vector<float>* m_TauRecContainerAux.numEffTopoClusters;	\
std::vector<float> o_m_TauRecContainerAux.numEffTopoClusters;	\
std::vector<float>* m_TauRecContainerAux.topoInvMass;	\
std::vector<float> o_m_TauRecContainerAux.topoInvMass;	\
std::vector<float>* m_TauRecContainerAux.effTopoInvMass;	\
std::vector<float> o_m_TauRecContainerAux.effTopoInvMass;	\
std::vector<float>* m_TauRecContainerAux.topoMeanDeltaR;	\
std::vector<float> o_m_TauRecContainerAux.topoMeanDeltaR;	\
std::vector<float>* m_TauRecContainerAux.effTopoMeanDeltaR;	\
std::vector<float> o_m_TauRecContainerAux.effTopoMeanDeltaR;	\
std::vector<float>* m_TauRecContainerAux.EMRadius;	\
std::vector<float> o_m_TauRecContainerAux.EMRadius;	\
std::vector<float>* m_TauRecContainerAux.hadRadius;	\
std::vector<float> o_m_TauRecContainerAux.hadRadius;	\
std::vector<float>* m_TauRecContainerAux.etEMAtEMScale;	\
std::vector<float> o_m_TauRecContainerAux.etEMAtEMScale;	\
std::vector<float>* m_TauRecContainerAux.etHadAtEMScale;	\
std::vector<float> o_m_TauRecContainerAux.etHadAtEMScale;	\
std::vector<float>* m_TauRecContainerAux.isolFrac;	\
std::vector<float> o_m_TauRecContainerAux.isolFrac;	\
std::vector<float>* m_TauRecContainerAux.centFrac;	\
std::vector<float> o_m_TauRecContainerAux.centFrac;	\
std::vector<float>* m_TauRecContainerAux.stripWidth2;	\
std::vector<float> o_m_TauRecContainerAux.stripWidth2;	\
std::vector<int>* m_TauRecContainerAux.nStrip;	\
std::vector<int> o_m_TauRecContainerAux.nStrip;	\
std::vector<float>* m_TauRecContainerAux.etEMCalib;	\
std::vector<float> o_m_TauRecContainerAux.etEMCalib;	\
std::vector<float>* m_TauRecContainerAux.etHadCalib;	\
std::vector<float> o_m_TauRecContainerAux.etHadCalib;	\
std::vector<float>* m_TauRecContainerAux.seedCalo_eta;	\
std::vector<float> o_m_TauRecContainerAux.seedCalo_eta;	\
std::vector<float>* m_TauRecContainerAux.seedCalo_phi;	\
std::vector<float> o_m_TauRecContainerAux.seedCalo_phi;	\
std::vector<float>* m_TauRecContainerAux.nIsolLooseTrk;	\
std::vector<float> o_m_TauRecContainerAux.nIsolLooseTrk;	\
std::vector<float>* m_TauRecContainerAux.trkAvgDist;	\
std::vector<float> o_m_TauRecContainerAux.trkAvgDist;	\
std::vector<float>* m_TauRecContainerAux.trkRmsDist;	\
std::vector<float> o_m_TauRecContainerAux.trkRmsDist;	\
std::vector<float>* m_TauRecContainerAux.lead2ClusterEOverAllClusterE;	\
std::vector<float> o_m_TauRecContainerAux.lead2ClusterEOverAllClusterE;	\
std::vector<float>* m_TauRecContainerAux.lead3ClusterEOverAllClusterE;	\
std::vector<float> o_m_TauRecContainerAux.lead3ClusterEOverAllClusterE;	\
std::vector<float>* m_TauRecContainerAux.caloIso;	\
std::vector<float> o_m_TauRecContainerAux.caloIso;	\
std::vector<float>* m_TauRecContainerAux.caloIsoCorrected;	\
std::vector<float> o_m_TauRecContainerAux.caloIsoCorrected;	\
std::vector<float>* m_TauRecContainerAux.dRmax;	\
std::vector<float> o_m_TauRecContainerAux.dRmax;	\
std::vector<float>* m_TauRecContainerAux.secMaxStripEt;	\
std::vector<float> o_m_TauRecContainerAux.secMaxStripEt;	\
std::vector<float>* m_TauRecContainerAux.sumEMCellEtOverLeadTrkPt;	\
std::vector<float> o_m_TauRecContainerAux.sumEMCellEtOverLeadTrkPt;	\
std::vector<float>* m_TauRecContainerAux.hadLeakEt;	\
std::vector<float> o_m_TauRecContainerAux.hadLeakEt;	\
std::vector<float>* m_TauRecContainerAux.EM_TES_scale;	\
std::vector<float> o_m_TauRecContainerAux.EM_TES_scale;	\
std::vector<float>* m_TauRecContainerAux.LC_TES_precalib;	\
std::vector<float> o_m_TauRecContainerAux.LC_TES_precalib;	\
std::vector<float>* m_TauRecContainerAux.cellBasedEnergyRing1;	\
std::vector<float> o_m_TauRecContainerAux.cellBasedEnergyRing1;	\
std::vector<float>* m_TauRecContainerAux.cellBasedEnergyRing2;	\
std::vector<float> o_m_TauRecContainerAux.cellBasedEnergyRing2;	\
std::vector<float>* m_TauRecContainerAux.cellBasedEnergyRing3;	\
std::vector<float> o_m_TauRecContainerAux.cellBasedEnergyRing3;	\
std::vector<float>* m_TauRecContainerAux.cellBasedEnergyRing4;	\
std::vector<float> o_m_TauRecContainerAux.cellBasedEnergyRing4;	\
std::vector<float>* m_TauRecContainerAux.cellBasedEnergyRing5;	\
std::vector<float> o_m_TauRecContainerAux.cellBasedEnergyRing5;	\
std::vector<float>* m_TauRecContainerAux.cellBasedEnergyRing6;	\
std::vector<float> o_m_TauRecContainerAux.cellBasedEnergyRing6;	\
std::vector<float>* m_TauRecContainerAux.cellBasedEnergyRing7;	\
std::vector<float> o_m_TauRecContainerAux.cellBasedEnergyRing7;	\
std::vector<float>* m_TauRecContainerAux.TRT_NHT_OVER_NLT;	\
std::vector<float> o_m_TauRecContainerAux.TRT_NHT_OVER_NLT;	\
std::vector<float>* m_TauRecContainerAux.TauJetVtxFraction;	\
std::vector<float> o_m_TauRecContainerAux.TauJetVtxFraction;	\
std::vector<int>* m_TauRecContainerAux.nPi0;	\
std::vector<int> o_m_TauRecContainerAux.nPi0;	\
std::vector<int>* m_TauRecContainerAux.nCharged;	\
std::vector<int> o_m_TauRecContainerAux.nCharged;	\
std::vector<int>* m_TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate;	\
std::vector<int> o_m_TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate;	\
std::vector<int>* m_TauRecContainerAux.pantau_CellBasedInput_DecayModeProto;	\
std::vector<int> o_m_TauRecContainerAux.pantau_CellBasedInput_DecayModeProto;	\
std::vector<int>* m_TauRecContainerAux.pantau_CellBasedInput_DecayMode;	\
std::vector<int> o_m_TauRecContainerAux.pantau_CellBasedInput_DecayMode;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn;	\
std::vector<int>* m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts;	\
std::vector<int> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed;	\
std::vector<float>* m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged;	\
std::vector<float> o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged;	\
std::vector<int>* m_TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate;	\
std::vector<int> o_m_TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate;	\
std::vector<int>* m_TauRecContainerAux.pantau_eflowRecInput_DecayModeProto;	\
std::vector<int> o_m_TauRecContainerAux.pantau_eflowRecInput_DecayModeProto;	\
std::vector<int>* m_TauRecContainerAux.pantau_eflowRecInput_DecayMode;	\
std::vector<int> o_m_TauRecContainerAux.pantau_eflowRecInput_DecayMode;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn;	\
std::vector<int>* m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts;	\
std::vector<int> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts;	\
std::vector<int>* m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts;	\
std::vector<int> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts;	\
std::vector<float>* m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged;	\
std::vector<float> o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged;	\
CaloCalibrationHitContainer_p3 m_LArCalibrationHitActive;	\
CaloCalibrationHitContainer_p3 o_m_LArCalibrationHitActive;	\
CaloCalibrationHitContainer_p3 m_LArCalibrationHitDeadMaterial;	\
CaloCalibrationHitContainer_p3 o_m_LArCalibrationHitDeadMaterial;	\
CaloCalibrationHitContainer_p3 m_LArCalibrationHitInactive;	\
CaloCalibrationHitContainer_p3 o_m_LArCalibrationHitInactive;	\
Rec::TrackParticleTruthCollection_p1 m_GSFTrackParticleTruthCollection;	\
Rec::TrackParticleTruthCollection_p1 o_m_GSFTrackParticleTruthCollection;	\
xAOD::VertexAuxContainer_v1 m_AllPhotonsVxCandidatesAux.;	\
xAOD::VertexAuxContainer_v1 o_m_AllPhotonsVxCandidatesAux.;	\
BASE m_AllPhotonsVxCandidatesAux.xAOD::AuxContainerBase;	\
BASE o_m_AllPhotonsVxCandidatesAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_AllPhotonsVxCandidatesAux.chiSquared;	\
std::vector<float> o_m_AllPhotonsVxCandidatesAux.chiSquared;	\
std::vector<float>* m_AllPhotonsVxCandidatesAux.numberDoF;	\
std::vector<float> o_m_AllPhotonsVxCandidatesAux.numberDoF;	\
std::vector<float>* m_AllPhotonsVxCandidatesAux.x;	\
std::vector<float> o_m_AllPhotonsVxCandidatesAux.x;	\
std::vector<float>* m_AllPhotonsVxCandidatesAux.y;	\
std::vector<float> o_m_AllPhotonsVxCandidatesAux.y;	\
std::vector<float>* m_AllPhotonsVxCandidatesAux.z;	\
std::vector<float> o_m_AllPhotonsVxCandidatesAux.z;	\
std::vector<std::vector<float> >* m_AllPhotonsVxCandidatesAux.covariance;	\
std::vector<std::vector<float> > o_m_AllPhotonsVxCandidatesAux.covariance;	\
std::vector<short>* m_AllPhotonsVxCandidatesAux.vertexType;	\
std::vector<short> o_m_AllPhotonsVxCandidatesAux.vertexType;	\
std::vector<std::vector<float> >* m_AllPhotonsVxCandidatesAux.trackWeights;	\
std::vector<std::vector<float> > o_m_AllPhotonsVxCandidatesAux.trackWeights;	\
xAOD::VertexAuxContainer_v1 m_PrimaryVerticesAux.;	\
xAOD::VertexAuxContainer_v1 o_m_PrimaryVerticesAux.;	\
BASE m_PrimaryVerticesAux.xAOD::AuxContainerBase;	\
BASE o_m_PrimaryVerticesAux.xAOD::AuxContainerBase;	\
std::vector<float>* m_PrimaryVerticesAux.chiSquared;	\
std::vector<float> o_m_PrimaryVerticesAux.chiSquared;	\
std::vector<float>* m_PrimaryVerticesAux.numberDoF;	\
std::vector<float> o_m_PrimaryVerticesAux.numberDoF;	\
std::vector<float>* m_PrimaryVerticesAux.x;	\
std::vector<float> o_m_PrimaryVerticesAux.x;	\
std::vector<float>* m_PrimaryVerticesAux.y;	\
std::vector<float> o_m_PrimaryVerticesAux.y;	\
std::vector<float>* m_PrimaryVerticesAux.z;	\
std::vector<float> o_m_PrimaryVerticesAux.z;	\
std::vector<std::vector<float> >* m_PrimaryVerticesAux.covariance;	\
std::vector<std::vector<float> > o_m_PrimaryVerticesAux.covariance;	\
std::vector<short>* m_PrimaryVerticesAux.vertexType;	\
std::vector<short> o_m_PrimaryVerticesAux.vertexType;	\
std::vector<std::vector<float> >* m_PrimaryVerticesAux.trackWeights;	\
std::vector<std::vector<float> > o_m_PrimaryVerticesAux.trackWeights;	\
CaloCellLinkContainer_p2 m_MuonClusterCollection_Link;	\
CaloCellLinkContainer_p2 o_m_MuonClusterCollection_Link;	\
MuonCaloEnergyContainer_p1 m_MuonCaloEnergyCollection;	\
MuonCaloEnergyContainer_p1 o_m_MuonCaloEnergyCollection;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Perp;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Perp;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Par;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Par;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2SumPt;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2SumPt;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Perp;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Perp;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Par;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Par;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8SumPt;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8SumPt;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Perp;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Perp;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Par;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Par;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13SumPt;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13SumPt;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Perp;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Perp;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Par;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Par;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.Iso6To88SumPt;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88SumPt;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.WIDTH;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.WIDTH;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.pt_truth;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.pt_truth;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerB;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerB;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_EMB1;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB1;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_EMB2;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB2;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_EMB3;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB3;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar0;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar0;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap1;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap1;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap3;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap3;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar1;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar1;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar2;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar2;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap2;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap2;	\
std::vector<int>* m_AntiKt4LCTopoJetsAuxDyn.constituentScale;	\
std::vector<int> o_m_AntiKt4LCTopoJetsAuxDyn.constituentScale;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.KtDr;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.KtDr;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_pt;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_pt;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.OriginIndex;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.OriginIndex;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_eta;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_eta;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.JVF;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.JVF;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_phi;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_phi;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_CELL;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_CELL;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_m;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_m;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_DOTX;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_DOTX;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_pt;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_pt;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_JET;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_JET;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_eta;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_eta;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.nTrk_pv0_1GeV;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.nTrk_pv0_1GeV;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_phi;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_phi;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_m;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_m;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.LArQuality;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.LArQuality;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.Timing;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.Timing;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.HECQuality;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.HECQuality;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.NegativeE;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.NegativeE;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.AverageLArQF;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.AverageLArQF;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.Centroid_r;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.Centroid_r;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters5;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters5;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters10;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters10;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.TruthMFindex;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.TruthMFindex;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.TruthMF;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.TruthMF;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.NumTowers;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.NumTowers;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.ActiveArea;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.ActiveArea;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPx;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPx;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPy;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPy;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPz;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPz;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaE;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaE;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Perp;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Perp;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Par;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Par;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.IsoKR20SumPt;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20SumPt;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Perp;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Perp;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Par;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Par;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2SumPt;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2SumPt;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Perp;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Perp;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Par;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Par;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8SumPt;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8SumPt;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Perp;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Perp;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Par;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Par;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13SumPt;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13SumPt;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Perp;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Perp;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Par;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Par;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.Iso6To88SumPt;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88SumPt;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.WIDTH;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.WIDTH;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.pt_truth;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.pt_truth;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerB;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerB;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_EMB1;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB1;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_EMB2;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB2;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_EMB3;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB3;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap3;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap3;	\
std::vector<int>* m_AntiKt4TopoEMJetsAuxDyn.constituentScale;	\
std::vector<int> o_m_AntiKt4TopoEMJetsAuxDyn.constituentScale;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_pt;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_pt;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.OriginIndex;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.OriginIndex;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_eta;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_eta;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.JVF;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.JVF;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_phi;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_phi;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_CELL;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_CELL;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_m;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_m;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_DOTX;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_DOTX;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_pt;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_pt;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_JET;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_JET;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_eta;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_eta;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.nTrk_pv0_1GeV;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.nTrk_pv0_1GeV;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_phi;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_phi;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_m;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_m;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.LArQuality;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.LArQuality;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.Timing;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.Timing;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.HECQuality;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.HECQuality;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.NegativeE;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.NegativeE;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.AverageLArQF;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.AverageLArQF;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.Centroid_r;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.Centroid_r;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters5;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters5;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters10;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters10;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.TruthMFindex;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.TruthMFindex;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.TruthMF;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.TruthMF;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.NumTowers;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.NumTowers;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerE;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerE;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_EME1;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME1;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_EME2;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME2;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_EME3;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME3;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_HEC0;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC0;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_HEC1;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC1;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt0;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt0;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt1;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt1;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.n90;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.n90;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.ActiveArea;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.ActiveArea;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPx;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPx;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPy;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPy;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPz;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPz;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaE;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaE;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Perp;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Perp;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Par;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Par;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.IsoKR20SumPt;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20SumPt;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Perp;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Perp;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Par;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Par;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2SumPt;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2SumPt;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Perp;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Perp;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Par;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Par;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8SumPt;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8SumPt;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Perp;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Perp;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Par;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Par;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13SumPt;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13SumPt;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Perp;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Perp;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Par;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Par;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.Iso6To88SumPt;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88SumPt;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.WIDTH;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.WIDTH;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.pt_truth;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.pt_truth;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerB;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerB;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_EMB1;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB1;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_EMB2;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB2;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_EMB3;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB3;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar0;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar0;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar1;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar1;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar2;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar2;	\
std::vector<int>* m_AntiKt6LCTopoJetsAuxDyn.constituentScale;	\
std::vector<int> o_m_AntiKt6LCTopoJetsAuxDyn.constituentScale;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.KtDr;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.KtDr;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_pt;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_pt;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.OriginIndex;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.OriginIndex;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_eta;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_eta;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.JVF;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.JVF;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_phi;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_phi;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_CELL;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_CELL;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_m;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_m;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_DOTX;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_DOTX;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_pt;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_pt;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_JET;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_JET;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_eta;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_eta;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.nTrk_pv0_1GeV;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.nTrk_pv0_1GeV;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_phi;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_phi;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_m;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_m;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.LArQuality;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.LArQuality;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.Timing;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.Timing;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.HECQuality;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.HECQuality;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.NegativeE;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.NegativeE;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.AverageLArQF;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.AverageLArQF;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.Centroid_r;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.Centroid_r;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters5;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters5;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters10;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters10;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.TruthMFindex;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.TruthMFindex;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.TruthMF;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.TruthMF;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.NumTowers;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.NumTowers;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.ActiveArea;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.ActiveArea;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPx;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPx;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPy;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPy;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPz;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPz;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaE;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaE;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Perp;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Perp;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Par;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Par;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.IsoKR20SumPt;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20SumPt;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Perp;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Perp;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Par;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Par;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2SumPt;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2SumPt;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Perp;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Perp;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Par;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Par;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8SumPt;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8SumPt;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Perp;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Perp;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Par;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Par;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13SumPt;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13SumPt;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Perp;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Perp;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Par;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Par;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.Iso6To88SumPt;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88SumPt;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.WIDTH;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.WIDTH;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.pt_truth;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.pt_truth;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerB;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerB;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_EMB1;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB1;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_EMB2;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB2;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_EMB3;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB3;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar0;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar0;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap1;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap1;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap3;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap3;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar1;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar1;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar2;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar2;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap2;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap2;	\
std::vector<int>* m_AntiKt6TopoEMJetsAuxDyn.constituentScale;	\
std::vector<int> o_m_AntiKt6TopoEMJetsAuxDyn.constituentScale;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.KtDr;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.KtDr;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_pt;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_pt;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.OriginIndex;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.OriginIndex;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_eta;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_eta;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.JVF;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.JVF;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_phi;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_phi;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_CELL;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_CELL;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_m;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_m;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_DOTX;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_DOTX;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_pt;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_pt;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_JET;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_JET;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_eta;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_eta;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.nTrk_pv0_1GeV;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.nTrk_pv0_1GeV;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_phi;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_phi;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_m;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_m;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.LArQuality;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.LArQuality;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.Timing;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.Timing;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.HECQuality;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.HECQuality;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.NegativeE;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.NegativeE;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.AverageLArQF;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.AverageLArQF;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.Centroid_r;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.Centroid_r;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters5;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters5;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters10;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters10;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.TruthMFindex;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.TruthMFindex;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.TruthMF;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.TruthMF;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.NumTowers;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.NumTowers;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt0;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt0;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt1;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt1;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.ActiveArea;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.ActiveArea;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPx;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPx;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPy;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPy;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPz;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPz;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaE;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaE;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Perp;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Perp;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Par;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Par;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.IsoKR20SumPt;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20SumPt;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.AVG_LAR_Q;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.AVG_LAR_Q;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.AVG_TILE_Q;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.AVG_TILE_Q;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.EM_PROBABILITY;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.EM_PROBABILITY;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.HAD_WEIGHT;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.HAD_WEIGHT;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.OOC_WEIGHT;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.OOC_WEIGHT;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.DM_WEIGHT;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.DM_WEIGHT;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.FIRST_PHI;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.FIRST_PHI;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.FIRST_ETA;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.FIRST_ETA;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.DELTA_PHI;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.DELTA_PHI;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.DELTA_THETA;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.DELTA_THETA;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.DELTA_ALPHA;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.DELTA_ALPHA;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.CENTER_X;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.CENTER_X;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.CENTER_Y;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.CENTER_Y;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.CENTER_Z;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.CENTER_Z;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.ENG_FRAC_EM;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_EM;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.ENG_FRAC_CORE;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_CORE;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.SECOND_ENG_DENS;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.SECOND_ENG_DENS;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS_CORR;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS_CORR;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.BAD_CELLS_CORR_E;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.BAD_CELLS_CORR_E;	\
Int_t m_CaloCalTopoClusterAuxDyn.CellLink_;	\
Int_t o_m_CaloCalTopoClusterAuxDyn.CellLink_;	\
UInt_t m_CaloCalTopoClusterAuxDyn.CellLink.m_persKey;	\
UInt_t o_m_CaloCalTopoClusterAuxDyn.CellLink.m_persKey;	\
UInt_t m_CaloCalTopoClusterAuxDyn.CellLink.m_persIndex;	\
UInt_t o_m_CaloCalTopoClusterAuxDyn.CellLink.m_persIndex;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.SECOND_R;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.SECOND_R;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.SECOND_LAMBDA;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.SECOND_LAMBDA;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.CENTER_MAG;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.CENTER_MAG;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.CENTER_LAMBDA;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.CENTER_LAMBDA;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.LATERAL;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.LATERAL;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.LONGITUDINAL;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.LONGITUDINAL;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.ISOLATION;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.ISOLATION;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.BADLARQ_FRAC;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.BADLARQ_FRAC;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.ENG_POS;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.ENG_POS;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.SIGNIFICANCE;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.SIGNIFICANCE;	\
std::vector<float>* m_CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE;	\
std::vector<float> o_m_CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE;	\
Int_t m_EMTopoSW35AuxDyn.CellLink_;	\
Int_t o_m_EMTopoSW35AuxDyn.CellLink_;	\
UInt_t m_EMTopoSW35AuxDyn.CellLink.m_persKey;	\
UInt_t o_m_EMTopoSW35AuxDyn.CellLink.m_persKey;	\
UInt_t m_EMTopoSW35AuxDyn.CellLink.m_persIndex;	\
UInt_t o_m_EMTopoSW35AuxDyn.CellLink.m_persIndex;	\
std::vector<char>* m_ElectronCollectionAuxDyn.ElectronIDLoosePP;	\
std::vector<char> o_m_ElectronCollectionAuxDyn.ElectronIDLoosePP;	\
std::vector<char>* m_ElectronCollectionAuxDyn.ElectronIDMediumPP;	\
std::vector<char> o_m_ElectronCollectionAuxDyn.ElectronIDMediumPP;	\
std::vector<char>* m_ElectronCollectionAuxDyn.ElectronIDTightPP;	\
std::vector<char> o_m_ElectronCollectionAuxDyn.ElectronIDTightPP;	\
Int_t m_GSFTrackParticlesAuxDyn.originalTrackParticle_;	\
Int_t o_m_GSFTrackParticlesAuxDyn.originalTrackParticle_;	\
UInt_t m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey;	\
UInt_t o_m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey;	\
UInt_t m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex;	\
UInt_t o_m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex;	\
Int_t m_InDetTrackParticlesAuxDyn.truth_;	\
Int_t o_m_InDetTrackParticlesAuxDyn.truth_;	\
UInt_t m_InDetTrackParticlesAuxDyn.truth.m_persKey;	\
UInt_t o_m_InDetTrackParticlesAuxDyn.truth.m_persKey;	\
UInt_t m_InDetTrackParticlesAuxDyn.truth.m_persIndex;	\
UInt_t o_m_InDetTrackParticlesAuxDyn.truth.m_persIndex;	\
std::vector<int>* m_InDetTrackParticlesAuxDyn.type;	\
std::vector<int> o_m_InDetTrackParticlesAuxDyn.type;	\
std::vector<int>* m_InDetTrackParticlesAuxDyn.origin;	\
std::vector<int> o_m_InDetTrackParticlesAuxDyn.origin;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.AVG_LAR_Q;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.AVG_LAR_Q;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.AVG_TILE_Q;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.AVG_TILE_Q;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.EM_PROBABILITY;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.EM_PROBABILITY;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.HAD_WEIGHT;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.HAD_WEIGHT;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.OOC_WEIGHT;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.OOC_WEIGHT;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.DM_WEIGHT;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.DM_WEIGHT;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.FIRST_PHI;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.FIRST_PHI;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.FIRST_ETA;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.FIRST_ETA;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.DELTA_PHI;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.DELTA_PHI;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.DELTA_THETA;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.DELTA_THETA;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.DELTA_ALPHA;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.DELTA_ALPHA;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.CENTER_X;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.CENTER_X;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.CENTER_Y;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.CENTER_Y;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.CENTER_Z;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.CENTER_Z;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.ENG_FRAC_EM;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_EM;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E;	\
Int_t m_LArClusterEMFrwdAuxDyn.CellLink_;	\
Int_t o_m_LArClusterEMFrwdAuxDyn.CellLink_;	\
UInt_t m_LArClusterEMFrwdAuxDyn.CellLink.m_persKey;	\
UInt_t o_m_LArClusterEMFrwdAuxDyn.CellLink.m_persKey;	\
UInt_t m_LArClusterEMFrwdAuxDyn.CellLink.m_persIndex;	\
UInt_t o_m_LArClusterEMFrwdAuxDyn.CellLink.m_persIndex;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.SECOND_R;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.SECOND_R;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.SECOND_LAMBDA;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.SECOND_LAMBDA;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.CENTER_MAG;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.CENTER_MAG;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.CENTER_LAMBDA;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.CENTER_LAMBDA;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.LATERAL;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.LATERAL;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.LONGITUDINAL;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.LONGITUDINAL;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.ISOLATION;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.ISOLATION;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.BADLARQ_FRAC;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.BADLARQ_FRAC;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.ENG_POS;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.ENG_POS;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.SIGNIFICANCE;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.SIGNIFICANCE;	\
std::vector<float>* m_LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE;	\
std::vector<float> o_m_LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE;	\
Int_t m_LArClusterEMSofteAuxDyn.CellLink_;	\
Int_t o_m_LArClusterEMSofteAuxDyn.CellLink_;	\
UInt_t m_LArClusterEMSofteAuxDyn.CellLink.m_persKey;	\
UInt_t o_m_LArClusterEMSofteAuxDyn.CellLink.m_persKey;	\
UInt_t m_LArClusterEMSofteAuxDyn.CellLink.m_persIndex;	\
UInt_t o_m_LArClusterEMSofteAuxDyn.CellLink.m_persIndex;	\
std::vector<float>* m_MuonsAuxDyn.m;	\
std::vector<float> o_m_MuonsAuxDyn.m;	\
std::vector<float>* m_TruthEventAuxDyn.pdf2;	\
std::vector<float> o_m_TruthEventAuxDyn.pdf2;	\
std::vector<int>* m_TruthEventAuxDyn.id1;	\
std::vector<int> o_m_TruthEventAuxDyn.id1;	\
std::vector<int>* m_TruthEventAuxDyn.id2;	\
std::vector<int> o_m_TruthEventAuxDyn.id2;	\
std::vector<int>* m_TruthEventAuxDyn.pdfId1;	\
std::vector<int> o_m_TruthEventAuxDyn.pdfId1;	\
std::vector<int>* m_TruthEventAuxDyn.pdfId2;	\
std::vector<int> o_m_TruthEventAuxDyn.pdfId2;	\
std::vector<float>* m_TruthEventAuxDyn.x1;	\
std::vector<float> o_m_TruthEventAuxDyn.x1;	\
std::vector<float>* m_TruthEventAuxDyn.x2;	\
std::vector<float> o_m_TruthEventAuxDyn.x2;	\
std::vector<float>* m_TruthEventAuxDyn.scalePDF;	\
std::vector<float> o_m_TruthEventAuxDyn.scalePDF;	\
std::vector<float>* m_TruthEventAuxDyn.pdf1;	\
std::vector<float> o_m_TruthEventAuxDyn.pdf1;	\
std::vector<float>* m_TruthParticleAuxDyn.polarizationTheta;	\
std::vector<float> o_m_TruthParticleAuxDyn.polarizationTheta;	\
std::vector<float>* m_TruthParticleAuxDyn.polarizationPhi;	\
std::vector<float> o_m_TruthParticleAuxDyn.polarizationPhi;	\
Int_t m_egClusterCollectionAuxDyn.CellLink_;	\
Int_t o_m_egClusterCollectionAuxDyn.CellLink_;	\
UInt_t m_egClusterCollectionAuxDyn.CellLink.m_persKey;	\
UInt_t o_m_egClusterCollectionAuxDyn.CellLink.m_persKey;	\
UInt_t m_egClusterCollectionAuxDyn.CellLink.m_persIndex;	\
UInt_t o_m_egClusterCollectionAuxDyn.CellLink.m_persIndex;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar0;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar0;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar1;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar1;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar2;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar2;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.KtDr;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.KtDr;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerE;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerE;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_EME1;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME1;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_EME2;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME2;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_EME3;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME3;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_HEC0;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC0;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_HEC1;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC1;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_HEC2;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC2;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_HEC3;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC3;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_HEC2;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC2;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_HEC3;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC3;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerE;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerE;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_EME1;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME1;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_EME2;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME2;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_EME3;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME3;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_HEC0;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC0;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_HEC1;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC1;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt0;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt0;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_HEC2;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC2;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_HEC3;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC3;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerE;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerE;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_EME1;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME1;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_EME2;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME2;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_EME3;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME3;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_HEC0;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC0;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_HEC1;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC1;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_HEC2;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC2;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_HEC3;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC3;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap3;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap3;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt2;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt2;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap1;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap1;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap2;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap2;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt2;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt2;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap1;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap1;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap2;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap2;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt1;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt1;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt2;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt2;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt2;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt2;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt0;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt0;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt1;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt1;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL0;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL0;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL0;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL0;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL0;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL0;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL0;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL0;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL1;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL1;	\
std::vector<float>* m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL2;	\
std::vector<float> o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL2;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL1;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL1;	\
std::vector<float>* m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL2;	\
std::vector<float> o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL2;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL1;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL1;	\
std::vector<float>* m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL2;	\
std::vector<float> o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL2;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL1;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL1;	\
std::vector<float>* m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL2;	\
std::vector<float> o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL2;
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define CONNECT( stringTREENAME )                      \
  {    ConnectVariable( (stringTREENAME), "McEventInfo", m_McEventInfo );	\
    ConnectVariable( (stringTREENAME), "AODCellContainer", m_AODCellContainer );	\
    ConnectVariable( (stringTREENAME), "MBTSContainer", m_MBTSContainer );	\
    ConnectVariable( (stringTREENAME), "TileMuObj", m_TileMuObj );	\
    ConnectVariable( (stringTREENAME), "ElectronAODCollection", m_ElectronAODCollection );	\
    ConnectVariable( (stringTREENAME), "PhotonAODCollection", m_PhotonAODCollection );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.", m_EventInfoAux. );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.xAOD::AuxInfoBase", m_EventInfoAux.xAOD::AuxInfoBase );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.runNumber", m_EventInfoAux.runNumber );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.eventNumber", m_EventInfoAux.eventNumber );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.lumiBlock", m_EventInfoAux.lumiBlock );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.timeStamp", m_EventInfoAux.timeStamp );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.timeStampNSOffset", m_EventInfoAux.timeStampNSOffset );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.bcid", m_EventInfoAux.bcid );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.detectorMask0", m_EventInfoAux.detectorMask0 );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.detectorMask1", m_EventInfoAux.detectorMask1 );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.statusElement", m_EventInfoAux.statusElement );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.extendedLevel1ID", m_EventInfoAux.extendedLevel1ID );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.level1TriggerType", m_EventInfoAux.level1TriggerType );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.streamTagNames", m_EventInfoAux.streamTagNames );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.streamTagTypes", m_EventInfoAux.streamTagTypes );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.streamTagObeysLumiblock", m_EventInfoAux.streamTagObeysLumiblock );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.actualInteractionsPerCrossing", m_EventInfoAux.actualInteractionsPerCrossing );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.averageInteractionsPerCrossing", m_EventInfoAux.averageInteractionsPerCrossing );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.pixelFlags", m_EventInfoAux.pixelFlags );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.sctFlags", m_EventInfoAux.sctFlags );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.trtFlags", m_EventInfoAux.trtFlags );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.larFlags", m_EventInfoAux.larFlags );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.tileFlags", m_EventInfoAux.tileFlags );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.muonFlags", m_EventInfoAux.muonFlags );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.forwardDetFlags", m_EventInfoAux.forwardDetFlags );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.coreFlags", m_EventInfoAux.coreFlags );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.backgroundFlags", m_EventInfoAux.backgroundFlags );	\
    ConnectVariable( (stringTREENAME), "EventInfoAux.lumiFlags", m_EventInfoAux.lumiFlags );	\
    ConnectVariable( (stringTREENAME), "EventInfo", m_EventInfo );	\
    ConnectVariable( (stringTREENAME), "MET_CellOut_Eflow", m_MET_CellOut_Eflow );	\
    ConnectVariable( (stringTREENAME), "MET_CellOut_Eflow_JetArea", m_MET_CellOut_Eflow_JetArea );	\
    ConnectVariable( (stringTREENAME), "MET_CellOut_Eflow_JetAreaJVF", m_MET_CellOut_Eflow_JetAreaJVF );	\
    ConnectVariable( (stringTREENAME), "MET_CellOut_Eflow_JetAreaRhoEta5JVF", m_MET_CellOut_Eflow_JetAreaRhoEta5JVF );	\
    ConnectVariable( (stringTREENAME), "MET_CellOut_Eflow_STVF", m_MET_CellOut_Eflow_STVF );	\
    ConnectVariable( (stringTREENAME), "MET_MuonMuons", m_MET_MuonMuons );	\
    ConnectVariable( (stringTREENAME), "MET_Muons", m_MET_Muons );	\
    ConnectVariable( (stringTREENAME), "MET_Muons_Spectro", m_MET_Muons_Spectro );	\
    ConnectVariable( (stringTREENAME), "MET_Muons_Track", m_MET_Muons_Track );	\
    ConnectVariable( (stringTREENAME), "MET_RefEle", m_MET_RefEle );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal", m_MET_RefFinal );	\
    ConnectVariable( (stringTREENAME), "MET_RefFinal_STVF", m_MET_RefFinal_STVF );	\
    ConnectVariable( (stringTREENAME), "MET_RefGamma", m_MET_RefGamma );	\
    ConnectVariable( (stringTREENAME), "MET_RefJet", m_MET_RefJet );	\
    ConnectVariable( (stringTREENAME), "MET_RefJet_JVF", m_MET_RefJet_JVF );	\
    ConnectVariable( (stringTREENAME), "MET_RefJet_JVFCut", m_MET_RefJet_JVFCut );	\
    ConnectVariable( (stringTREENAME), "MET_RefTau", m_MET_RefTau );	\
    ConnectVariable( (stringTREENAME), "MET_Track", m_MET_Track );	\
    ConnectVariable( (stringTREENAME), "GSFTrackAssociation", m_GSFTrackAssociation );	\
    ConnectVariable( (stringTREENAME), "LArNoisyROSummary", m_LArNoisyROSummary );	\
    ConnectVariable( (stringTREENAME), "MET_RefComposition", m_MET_RefComposition );	\
    ConnectVariable( (stringTREENAME), "ElectronCollection", m_ElectronCollection );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollection", m_ElectronFrwdCollection );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidates", m_AllPhotonsVxCandidates );	\
    ConnectVariable( (stringTREENAME), "PrimaryVertices", m_PrimaryVertices );	\
    ConnectVariable( (stringTREENAME), "PhotonCollection", m_PhotonCollection );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAux.", m_TruthParticleAux. );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAux.xAOD::AuxContainerBase", m_TruthParticleAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAux.pdgId", m_TruthParticleAux.pdgId );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAux.barcode", m_TruthParticleAux.barcode );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAux.status", m_TruthParticleAux.status );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAux.px", m_TruthParticleAux.px );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAux.py", m_TruthParticleAux.py );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAux.pz", m_TruthParticleAux.pz );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAux.e", m_TruthParticleAux.e );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAux.m", m_TruthParticleAux.m );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.", m_ElectronCollectionAux. );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.xAOD::EgammaAuxContainer_v1", m_ElectronCollectionAux.xAOD::EgammaAuxContainer_v1 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.charge", m_ElectronCollectionAux.charge );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaEta0", m_ElectronCollectionAux.deltaEta0 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaEta1", m_ElectronCollectionAux.deltaEta1 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaEta2", m_ElectronCollectionAux.deltaEta2 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaEta3", m_ElectronCollectionAux.deltaEta3 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaPhi0", m_ElectronCollectionAux.deltaPhi0 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaPhi1", m_ElectronCollectionAux.deltaPhi1 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaPhi2", m_ElectronCollectionAux.deltaPhi2 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaPhi3", m_ElectronCollectionAux.deltaPhi3 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaPhiFromLastMeasurement", m_ElectronCollectionAux.deltaPhiFromLastMeasurement );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaPhiRescaled", m_ElectronCollectionAux.deltaPhiRescaled );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaPhiRescaled0", m_ElectronCollectionAux.deltaPhiRescaled0 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaPhiRescaled1", m_ElectronCollectionAux.deltaPhiRescaled1 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaPhiRescaled2", m_ElectronCollectionAux.deltaPhiRescaled2 );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAux.deltaPhiRescaled3", m_ElectronCollectionAux.deltaPhiRescaled3 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.", m_ElectronFrwdCollectionAux. );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.xAOD::EgammaAuxContainer_v1", m_ElectronFrwdCollectionAux.xAOD::EgammaAuxContainer_v1 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.charge", m_ElectronFrwdCollectionAux.charge );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaEta0", m_ElectronFrwdCollectionAux.deltaEta0 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaEta1", m_ElectronFrwdCollectionAux.deltaEta1 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaEta2", m_ElectronFrwdCollectionAux.deltaEta2 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaEta3", m_ElectronFrwdCollectionAux.deltaEta3 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaPhi0", m_ElectronFrwdCollectionAux.deltaPhi0 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaPhi1", m_ElectronFrwdCollectionAux.deltaPhi1 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaPhi2", m_ElectronFrwdCollectionAux.deltaPhi2 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaPhi3", m_ElectronFrwdCollectionAux.deltaPhi3 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaPhiFromLastMeasurement", m_ElectronFrwdCollectionAux.deltaPhiFromLastMeasurement );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaPhiRescaled", m_ElectronFrwdCollectionAux.deltaPhiRescaled );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaPhiRescaled0", m_ElectronFrwdCollectionAux.deltaPhiRescaled0 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaPhiRescaled1", m_ElectronFrwdCollectionAux.deltaPhiRescaled1 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaPhiRescaled2", m_ElectronFrwdCollectionAux.deltaPhiRescaled2 );	\
    ConnectVariable( (stringTREENAME), "ElectronFrwdCollectionAux.deltaPhiRescaled3", m_ElectronFrwdCollectionAux.deltaPhiRescaled3 );	\
    ConnectVariable( (stringTREENAME), "egClusterCollection_links", m_egClusterCollection_links );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.", m_MuonsAux. );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.xAOD::AuxContainerBase", m_MuonsAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.pt", m_MuonsAux.pt );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.eta", m_MuonsAux.eta );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.phi", m_MuonsAux.phi );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.e", m_MuonsAux.e );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.allAuthors", m_MuonsAux.allAuthors );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.author", m_MuonsAux.author );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.muonType", m_MuonsAux.muonType );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.quality", m_MuonsAux.quality );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.numberOfPrecisionLayers", m_MuonsAux.numberOfPrecisionLayers );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.numberOfPrecisionHoleLayers", m_MuonsAux.numberOfPrecisionHoleLayers );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.numberOfPhiLayers", m_MuonsAux.numberOfPhiLayers );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.numberOfPhiHoleLayers", m_MuonsAux.numberOfPhiHoleLayers );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.numberOfTriggerEtaLayers", m_MuonsAux.numberOfTriggerEtaLayers );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.numberOfTriggerEtaHoleLayers", m_MuonsAux.numberOfTriggerEtaHoleLayers );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.primarySector", m_MuonsAux.primarySector );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.secondarySector", m_MuonsAux.secondarySector );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.innerSmallHits", m_MuonsAux.innerSmallHits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.innerLargeHits", m_MuonsAux.innerLargeHits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.middleSmallHits", m_MuonsAux.middleSmallHits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.middleLargeHits", m_MuonsAux.middleLargeHits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.outerSmallHits", m_MuonsAux.outerSmallHits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.outerLargeHits", m_MuonsAux.outerLargeHits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.extendedSmallHits", m_MuonsAux.extendedSmallHits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.extendedLargeHits", m_MuonsAux.extendedLargeHits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.innerSmallHoles", m_MuonsAux.innerSmallHoles );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.innerLargeHoles", m_MuonsAux.innerLargeHoles );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.middleSmallHoles", m_MuonsAux.middleSmallHoles );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.middleLargeHoles", m_MuonsAux.middleLargeHoles );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.outerSmallHoles", m_MuonsAux.outerSmallHoles );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.outerLargeHoles", m_MuonsAux.outerLargeHoles );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.extendedSmallHoles", m_MuonsAux.extendedSmallHoles );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.extendedLargeHoles", m_MuonsAux.extendedLargeHoles );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.phiLayer1Hits", m_MuonsAux.phiLayer1Hits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.phiLayer2Hits", m_MuonsAux.phiLayer2Hits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.phiLayer3Hits", m_MuonsAux.phiLayer3Hits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.phiLayer4Hits", m_MuonsAux.phiLayer4Hits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.etaLayer1Hits", m_MuonsAux.etaLayer1Hits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.etaLayer2Hits", m_MuonsAux.etaLayer2Hits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.etaLayer3Hits", m_MuonsAux.etaLayer3Hits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.etaLayer4Hits", m_MuonsAux.etaLayer4Hits );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.phiLayer1Holes", m_MuonsAux.phiLayer1Holes );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.phiLayer2Holes", m_MuonsAux.phiLayer2Holes );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.phiLayer3Holes", m_MuonsAux.phiLayer3Holes );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.phiLayer4Holes", m_MuonsAux.phiLayer4Holes );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.etaLayer1Holes", m_MuonsAux.etaLayer1Holes );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.etaLayer2Holes", m_MuonsAux.etaLayer2Holes );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.etaLayer3Holes", m_MuonsAux.etaLayer3Holes );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.etaLayer4Holes", m_MuonsAux.etaLayer4Holes );	\
    ConnectVariable( (stringTREENAME), "MuonsAux.energyLossType", m_MuonsAux.energyLossType );	\
    ConnectVariable( (stringTREENAME), "TauRecContainer", m_TauRecContainer );	\
    ConnectVariable( (stringTREENAME), "Muons", m_Muons );	\
    ConnectVariable( (stringTREENAME), "egDetailAOD", m_egDetailAOD );	\
    ConnectVariable( (stringTREENAME), "TruthEvent", m_TruthEvent );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.", m_GSFTrackParticlesAux. );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.xAOD::AuxContainerBase", m_GSFTrackParticlesAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.d0", m_GSFTrackParticlesAux.d0 );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.z0", m_GSFTrackParticlesAux.z0 );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.phi", m_GSFTrackParticlesAux.phi );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.theta", m_GSFTrackParticlesAux.theta );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.qOverP", m_GSFTrackParticlesAux.qOverP );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.definingParametersCovMatrix", m_GSFTrackParticlesAux.definingParametersCovMatrix );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.vx", m_GSFTrackParticlesAux.vx );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.vy", m_GSFTrackParticlesAux.vy );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.vz", m_GSFTrackParticlesAux.vz );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.parameterX", m_GSFTrackParticlesAux.parameterX );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.parameterY", m_GSFTrackParticlesAux.parameterY );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.parameterZ", m_GSFTrackParticlesAux.parameterZ );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.parameterPX", m_GSFTrackParticlesAux.parameterPX );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.parameterPY", m_GSFTrackParticlesAux.parameterPY );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.parameterPZ", m_GSFTrackParticlesAux.parameterPZ );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.trackParameterCovarianceMatrices", m_GSFTrackParticlesAux.trackParameterCovarianceMatrices );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.parameterPosition", m_GSFTrackParticlesAux.parameterPosition );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.chiSquared", m_GSFTrackParticlesAux.chiSquared );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberDoF", m_GSFTrackParticlesAux.numberDoF );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.trackFitter", m_GSFTrackParticlesAux.trackFitter );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.particleHypothesis", m_GSFTrackParticlesAux.particleHypothesis );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.trackProperties", m_GSFTrackParticlesAux.trackProperties );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.patternRecoInfo", m_GSFTrackParticlesAux.patternRecoInfo );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfContribPixelLayers", m_GSFTrackParticlesAux.numberOfContribPixelLayers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfBLayerHits", m_GSFTrackParticlesAux.numberOfBLayerHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfBLayerOutliers", m_GSFTrackParticlesAux.numberOfBLayerOutliers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfBLayerSharedHits", m_GSFTrackParticlesAux.numberOfBLayerSharedHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfBLayerSplitHits", m_GSFTrackParticlesAux.numberOfBLayerSplitHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.expectBLayerHit", m_GSFTrackParticlesAux.expectBLayerHit );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPixelHits", m_GSFTrackParticlesAux.numberOfPixelHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPixelOutliers", m_GSFTrackParticlesAux.numberOfPixelOutliers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPixelHoles", m_GSFTrackParticlesAux.numberOfPixelHoles );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPixelSharedHits", m_GSFTrackParticlesAux.numberOfPixelSharedHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPixelSplitHits", m_GSFTrackParticlesAux.numberOfPixelSplitHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfGangedPixels", m_GSFTrackParticlesAux.numberOfGangedPixels );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfGangedFlaggedFakes", m_GSFTrackParticlesAux.numberOfGangedFlaggedFakes );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPixelDeadSensors", m_GSFTrackParticlesAux.numberOfPixelDeadSensors );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPixelSpoiltHits", m_GSFTrackParticlesAux.numberOfPixelSpoiltHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfSCTHits", m_GSFTrackParticlesAux.numberOfSCTHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfSCTOutliers", m_GSFTrackParticlesAux.numberOfSCTOutliers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfSCTHoles", m_GSFTrackParticlesAux.numberOfSCTHoles );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfSCTDoubleHoles", m_GSFTrackParticlesAux.numberOfSCTDoubleHoles );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfSCTSharedHits", m_GSFTrackParticlesAux.numberOfSCTSharedHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfSCTDeadSensors", m_GSFTrackParticlesAux.numberOfSCTDeadSensors );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfSCTSpoiltHits", m_GSFTrackParticlesAux.numberOfSCTSpoiltHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfTRTHits", m_GSFTrackParticlesAux.numberOfTRTHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfTRTOutliers", m_GSFTrackParticlesAux.numberOfTRTOutliers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfTRTHoles", m_GSFTrackParticlesAux.numberOfTRTHoles );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfTRTHighThresholdHits", m_GSFTrackParticlesAux.numberOfTRTHighThresholdHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers", m_GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfTRTDeadStraws", m_GSFTrackParticlesAux.numberOfTRTDeadStraws );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfTRTTubeHits", m_GSFTrackParticlesAux.numberOfTRTTubeHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfTRTXenonHits", m_GSFTrackParticlesAux.numberOfTRTXenonHits );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPrecisionLayers", m_GSFTrackParticlesAux.numberOfPrecisionLayers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPrecisionHoleLayers", m_GSFTrackParticlesAux.numberOfPrecisionHoleLayers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPhiLayers", m_GSFTrackParticlesAux.numberOfPhiLayers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfPhiHoleLayers", m_GSFTrackParticlesAux.numberOfPhiHoleLayers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfTriggerEtaLayers", m_GSFTrackParticlesAux.numberOfTriggerEtaLayers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers", m_GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.numberOfOutliersOnTrack", m_GSFTrackParticlesAux.numberOfOutliersOnTrack );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.standardDeviationOfChi2OS", m_GSFTrackParticlesAux.standardDeviationOfChi2OS );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.eProbabilityComb", m_GSFTrackParticlesAux.eProbabilityComb );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.eProbabilityHT", m_GSFTrackParticlesAux.eProbabilityHT );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.eProbabilityToT", m_GSFTrackParticlesAux.eProbabilityToT );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAux.eProbabilityBrem", m_GSFTrackParticlesAux.eProbabilityBrem );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.", m_InDetTrackParticlesAux. );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.xAOD::AuxContainerBase", m_InDetTrackParticlesAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.d0", m_InDetTrackParticlesAux.d0 );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.z0", m_InDetTrackParticlesAux.z0 );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.phi", m_InDetTrackParticlesAux.phi );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.theta", m_InDetTrackParticlesAux.theta );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.qOverP", m_InDetTrackParticlesAux.qOverP );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.definingParametersCovMatrix", m_InDetTrackParticlesAux.definingParametersCovMatrix );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.vx", m_InDetTrackParticlesAux.vx );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.vy", m_InDetTrackParticlesAux.vy );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.vz", m_InDetTrackParticlesAux.vz );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.parameterX", m_InDetTrackParticlesAux.parameterX );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.parameterY", m_InDetTrackParticlesAux.parameterY );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.parameterZ", m_InDetTrackParticlesAux.parameterZ );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.parameterPX", m_InDetTrackParticlesAux.parameterPX );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.parameterPY", m_InDetTrackParticlesAux.parameterPY );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.parameterPZ", m_InDetTrackParticlesAux.parameterPZ );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.trackParameterCovarianceMatrices", m_InDetTrackParticlesAux.trackParameterCovarianceMatrices );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.parameterPosition", m_InDetTrackParticlesAux.parameterPosition );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.chiSquared", m_InDetTrackParticlesAux.chiSquared );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberDoF", m_InDetTrackParticlesAux.numberDoF );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.trackFitter", m_InDetTrackParticlesAux.trackFitter );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.particleHypothesis", m_InDetTrackParticlesAux.particleHypothesis );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.trackProperties", m_InDetTrackParticlesAux.trackProperties );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.patternRecoInfo", m_InDetTrackParticlesAux.patternRecoInfo );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfContribPixelLayers", m_InDetTrackParticlesAux.numberOfContribPixelLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfBLayerHits", m_InDetTrackParticlesAux.numberOfBLayerHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfBLayerOutliers", m_InDetTrackParticlesAux.numberOfBLayerOutliers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfBLayerSharedHits", m_InDetTrackParticlesAux.numberOfBLayerSharedHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfBLayerSplitHits", m_InDetTrackParticlesAux.numberOfBLayerSplitHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.expectBLayerHit", m_InDetTrackParticlesAux.expectBLayerHit );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPixelHits", m_InDetTrackParticlesAux.numberOfPixelHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPixelOutliers", m_InDetTrackParticlesAux.numberOfPixelOutliers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPixelHoles", m_InDetTrackParticlesAux.numberOfPixelHoles );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPixelSharedHits", m_InDetTrackParticlesAux.numberOfPixelSharedHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPixelSplitHits", m_InDetTrackParticlesAux.numberOfPixelSplitHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfGangedPixels", m_InDetTrackParticlesAux.numberOfGangedPixels );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfGangedFlaggedFakes", m_InDetTrackParticlesAux.numberOfGangedFlaggedFakes );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPixelDeadSensors", m_InDetTrackParticlesAux.numberOfPixelDeadSensors );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPixelSpoiltHits", m_InDetTrackParticlesAux.numberOfPixelSpoiltHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfSCTHits", m_InDetTrackParticlesAux.numberOfSCTHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfSCTOutliers", m_InDetTrackParticlesAux.numberOfSCTOutliers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfSCTHoles", m_InDetTrackParticlesAux.numberOfSCTHoles );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfSCTDoubleHoles", m_InDetTrackParticlesAux.numberOfSCTDoubleHoles );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfSCTSharedHits", m_InDetTrackParticlesAux.numberOfSCTSharedHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfSCTDeadSensors", m_InDetTrackParticlesAux.numberOfSCTDeadSensors );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfSCTSpoiltHits", m_InDetTrackParticlesAux.numberOfSCTSpoiltHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfTRTHits", m_InDetTrackParticlesAux.numberOfTRTHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfTRTOutliers", m_InDetTrackParticlesAux.numberOfTRTOutliers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfTRTHoles", m_InDetTrackParticlesAux.numberOfTRTHoles );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfTRTHighThresholdHits", m_InDetTrackParticlesAux.numberOfTRTHighThresholdHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers", m_InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfTRTDeadStraws", m_InDetTrackParticlesAux.numberOfTRTDeadStraws );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfTRTTubeHits", m_InDetTrackParticlesAux.numberOfTRTTubeHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfTRTXenonHits", m_InDetTrackParticlesAux.numberOfTRTXenonHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPrecisionLayers", m_InDetTrackParticlesAux.numberOfPrecisionLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPrecisionHoleLayers", m_InDetTrackParticlesAux.numberOfPrecisionHoleLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPhiLayers", m_InDetTrackParticlesAux.numberOfPhiLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfPhiHoleLayers", m_InDetTrackParticlesAux.numberOfPhiHoleLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfTriggerEtaLayers", m_InDetTrackParticlesAux.numberOfTriggerEtaLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers", m_InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.numberOfOutliersOnTrack", m_InDetTrackParticlesAux.numberOfOutliersOnTrack );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.standardDeviationOfChi2OS", m_InDetTrackParticlesAux.standardDeviationOfChi2OS );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.eProbabilityComb", m_InDetTrackParticlesAux.eProbabilityComb );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.eProbabilityHT", m_InDetTrackParticlesAux.eProbabilityHT );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.eProbabilityToT", m_InDetTrackParticlesAux.eProbabilityToT );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAux.eProbabilityBrem", m_InDetTrackParticlesAux.eProbabilityBrem );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.", m_InDetTrackParticlesForwardAux. );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.xAOD::AuxContainerBase", m_InDetTrackParticlesForwardAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.d0", m_InDetTrackParticlesForwardAux.d0 );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.z0", m_InDetTrackParticlesForwardAux.z0 );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.phi", m_InDetTrackParticlesForwardAux.phi );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.theta", m_InDetTrackParticlesForwardAux.theta );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.qOverP", m_InDetTrackParticlesForwardAux.qOverP );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.definingParametersCovMatrix", m_InDetTrackParticlesForwardAux.definingParametersCovMatrix );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.vx", m_InDetTrackParticlesForwardAux.vx );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.vy", m_InDetTrackParticlesForwardAux.vy );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.vz", m_InDetTrackParticlesForwardAux.vz );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.parameterX", m_InDetTrackParticlesForwardAux.parameterX );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.parameterY", m_InDetTrackParticlesForwardAux.parameterY );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.parameterZ", m_InDetTrackParticlesForwardAux.parameterZ );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.parameterPX", m_InDetTrackParticlesForwardAux.parameterPX );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.parameterPY", m_InDetTrackParticlesForwardAux.parameterPY );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.parameterPZ", m_InDetTrackParticlesForwardAux.parameterPZ );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.trackParameterCovarianceMatrices", m_InDetTrackParticlesForwardAux.trackParameterCovarianceMatrices );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.parameterPosition", m_InDetTrackParticlesForwardAux.parameterPosition );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.chiSquared", m_InDetTrackParticlesForwardAux.chiSquared );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberDoF", m_InDetTrackParticlesForwardAux.numberDoF );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.trackFitter", m_InDetTrackParticlesForwardAux.trackFitter );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.particleHypothesis", m_InDetTrackParticlesForwardAux.particleHypothesis );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.trackProperties", m_InDetTrackParticlesForwardAux.trackProperties );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.patternRecoInfo", m_InDetTrackParticlesForwardAux.patternRecoInfo );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfContribPixelLayers", m_InDetTrackParticlesForwardAux.numberOfContribPixelLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfBLayerHits", m_InDetTrackParticlesForwardAux.numberOfBLayerHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfBLayerOutliers", m_InDetTrackParticlesForwardAux.numberOfBLayerOutliers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfBLayerSharedHits", m_InDetTrackParticlesForwardAux.numberOfBLayerSharedHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfBLayerSplitHits", m_InDetTrackParticlesForwardAux.numberOfBLayerSplitHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.expectBLayerHit", m_InDetTrackParticlesForwardAux.expectBLayerHit );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPixelHits", m_InDetTrackParticlesForwardAux.numberOfPixelHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPixelOutliers", m_InDetTrackParticlesForwardAux.numberOfPixelOutliers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPixelHoles", m_InDetTrackParticlesForwardAux.numberOfPixelHoles );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPixelSharedHits", m_InDetTrackParticlesForwardAux.numberOfPixelSharedHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPixelSplitHits", m_InDetTrackParticlesForwardAux.numberOfPixelSplitHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfGangedPixels", m_InDetTrackParticlesForwardAux.numberOfGangedPixels );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes", m_InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPixelDeadSensors", m_InDetTrackParticlesForwardAux.numberOfPixelDeadSensors );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits", m_InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfSCTHits", m_InDetTrackParticlesForwardAux.numberOfSCTHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfSCTOutliers", m_InDetTrackParticlesForwardAux.numberOfSCTOutliers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfSCTHoles", m_InDetTrackParticlesForwardAux.numberOfSCTHoles );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles", m_InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfSCTSharedHits", m_InDetTrackParticlesForwardAux.numberOfSCTSharedHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfSCTDeadSensors", m_InDetTrackParticlesForwardAux.numberOfSCTDeadSensors );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits", m_InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfTRTHits", m_InDetTrackParticlesForwardAux.numberOfTRTHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfTRTOutliers", m_InDetTrackParticlesForwardAux.numberOfTRTOutliers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfTRTHoles", m_InDetTrackParticlesForwardAux.numberOfTRTHoles );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits", m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers", m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfTRTDeadStraws", m_InDetTrackParticlesForwardAux.numberOfTRTDeadStraws );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfTRTTubeHits", m_InDetTrackParticlesForwardAux.numberOfTRTTubeHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfTRTXenonHits", m_InDetTrackParticlesForwardAux.numberOfTRTXenonHits );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPrecisionLayers", m_InDetTrackParticlesForwardAux.numberOfPrecisionLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers", m_InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPhiLayers", m_InDetTrackParticlesForwardAux.numberOfPhiLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfPhiHoleLayers", m_InDetTrackParticlesForwardAux.numberOfPhiHoleLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers", m_InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers", m_InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.numberOfOutliersOnTrack", m_InDetTrackParticlesForwardAux.numberOfOutliersOnTrack );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.standardDeviationOfChi2OS", m_InDetTrackParticlesForwardAux.standardDeviationOfChi2OS );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.eProbabilityComb", m_InDetTrackParticlesForwardAux.eProbabilityComb );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.eProbabilityHT", m_InDetTrackParticlesForwardAux.eProbabilityHT );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.eProbabilityToT", m_InDetTrackParticlesForwardAux.eProbabilityToT );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForwardAux.eProbabilityBrem", m_InDetTrackParticlesForwardAux.eProbabilityBrem );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoCluster", m_CaloCalTopoCluster );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35", m_EMTopoSW35 );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwd", m_LArClusterEMFrwd );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofte", m_LArClusterEMSofte );	\
    ConnectVariable( (stringTREENAME), "egClusterCollection", m_egClusterCollection );	\
    ConnectVariable( (stringTREENAME), "MuonEntryLayerFilter", m_MuonEntryLayerFilter );	\
    ConnectVariable( (stringTREENAME), "TruthParticle", m_TruthParticle );	\
    ConnectVariable( (stringTREENAME), "TruthVertex", m_TruthVertex );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJets", m_AntiKt4LCTopoJets );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJets", m_AntiKt4TopoEMJets );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJets", m_AntiKt6LCTopoJets );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJets", m_AntiKt6TopoEMJets );	\
    ConnectVariable( (stringTREENAME), "PhotonCollectionAux.", m_PhotonCollectionAux. );	\
    ConnectVariable( (stringTREENAME), "PhotonCollectionAux.xAOD::EgammaAuxContainer_v1", m_PhotonCollectionAux.xAOD::EgammaAuxContainer_v1 );	\
    ConnectVariable( (stringTREENAME), "PhotonCollectionAux.convMatchDeltaEta1", m_PhotonCollectionAux.convMatchDeltaEta1 );	\
    ConnectVariable( (stringTREENAME), "PhotonCollectionAux.convMatchDeltaEta2", m_PhotonCollectionAux.convMatchDeltaEta2 );	\
    ConnectVariable( (stringTREENAME), "PhotonCollectionAux.convMatchDeltaPhi1", m_PhotonCollectionAux.convMatchDeltaPhi1 );	\
    ConnectVariable( (stringTREENAME), "PhotonCollectionAux.convMatchDeltaPhi2", m_PhotonCollectionAux.convMatchDeltaPhi2 );	\
    ConnectVariable( (stringTREENAME), "TruthVertexAux.", m_TruthVertexAux. );	\
    ConnectVariable( (stringTREENAME), "TruthVertexAux.xAOD::AuxContainerBase", m_TruthVertexAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "TruthVertexAux.id", m_TruthVertexAux.id );	\
    ConnectVariable( (stringTREENAME), "TruthVertexAux.barcode", m_TruthVertexAux.barcode );	\
    ConnectVariable( (stringTREENAME), "TruthVertexAux.x", m_TruthVertexAux.x );	\
    ConnectVariable( (stringTREENAME), "TruthVertexAux.y", m_TruthVertexAux.y );	\
    ConnectVariable( (stringTREENAME), "TruthVertexAux.z", m_TruthVertexAux.z );	\
    ConnectVariable( (stringTREENAME), "TruthVertexAux.t", m_TruthVertexAux.t );	\
    ConnectVariable( (stringTREENAME), "TruthVertexAux.weights", m_TruthVertexAux.weights );	\
    ConnectVariable( (stringTREENAME), "TruthEventAux.", m_TruthEventAux. );	\
    ConnectVariable( (stringTREENAME), "TruthEventAux.xAOD::AuxContainerBase", m_TruthEventAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "TruthEventAux.eventScale", m_TruthEventAux.eventScale );	\
    ConnectVariable( (stringTREENAME), "TruthEventAux.alphaQCD", m_TruthEventAux.alphaQCD );	\
    ConnectVariable( (stringTREENAME), "TruthEventAux.alphaQED", m_TruthEventAux.alphaQED );	\
    ConnectVariable( (stringTREENAME), "TruthEventAux.weights", m_TruthEventAux.weights );	\
    ConnectVariable( (stringTREENAME), "TruthEventAux.crossSection", m_TruthEventAux.crossSection );	\
    ConnectVariable( (stringTREENAME), "TruthEventAux.crossSectionError", m_TruthEventAux.crossSectionError );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticles", m_GSFTrackParticles );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticles", m_InDetTrackParticles );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesForward", m_InDetTrackParticlesForward );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAux.", m_AntiKt4LCTopoJetsAux. );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAux.xAOD::AuxContainerBase", m_AntiKt4LCTopoJetsAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAux.pt", m_AntiKt4LCTopoJetsAux.pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAux.eta", m_AntiKt4LCTopoJetsAux.eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAux.phi", m_AntiKt4LCTopoJetsAux.phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAux.m", m_AntiKt4LCTopoJetsAux.m );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAux.constituentWeights", m_AntiKt4LCTopoJetsAux.constituentWeights );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAux.", m_AntiKt4TopoEMJetsAux. );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAux.xAOD::AuxContainerBase", m_AntiKt4TopoEMJetsAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAux.pt", m_AntiKt4TopoEMJetsAux.pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAux.eta", m_AntiKt4TopoEMJetsAux.eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAux.phi", m_AntiKt4TopoEMJetsAux.phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAux.m", m_AntiKt4TopoEMJetsAux.m );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAux.constituentWeights", m_AntiKt4TopoEMJetsAux.constituentWeights );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAux.", m_AntiKt6LCTopoJetsAux. );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAux.xAOD::AuxContainerBase", m_AntiKt6LCTopoJetsAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAux.pt", m_AntiKt6LCTopoJetsAux.pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAux.eta", m_AntiKt6LCTopoJetsAux.eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAux.phi", m_AntiKt6LCTopoJetsAux.phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAux.m", m_AntiKt6LCTopoJetsAux.m );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAux.constituentWeights", m_AntiKt6LCTopoJetsAux.constituentWeights );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAux.", m_AntiKt6TopoEMJetsAux. );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAux.xAOD::AuxContainerBase", m_AntiKt6TopoEMJetsAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAux.pt", m_AntiKt6TopoEMJetsAux.pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAux.eta", m_AntiKt6TopoEMJetsAux.eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAux.phi", m_AntiKt6TopoEMJetsAux.phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAux.m", m_AntiKt6TopoEMJetsAux.m );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAux.constituentWeights", m_AntiKt6TopoEMJetsAux.constituentWeights );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.", m_CaloCalTopoClusterAux. );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.xAOD::AuxContainerBase", m_CaloCalTopoClusterAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.basicSignal", m_CaloCalTopoClusterAux.basicSignal );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.time", m_CaloCalTopoClusterAux.time );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.samplingPattern", m_CaloCalTopoClusterAux.samplingPattern );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.clusterSize", m_CaloCalTopoClusterAux.clusterSize );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.eta0", m_CaloCalTopoClusterAux.eta0 );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.phi0", m_CaloCalTopoClusterAux.phi0 );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.nBarrel", m_CaloCalTopoClusterAux.nBarrel );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.nEndcap", m_CaloCalTopoClusterAux.nEndcap );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.rawE", m_CaloCalTopoClusterAux.rawE );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.rawEta", m_CaloCalTopoClusterAux.rawEta );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.rawPhi", m_CaloCalTopoClusterAux.rawPhi );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.rawM", m_CaloCalTopoClusterAux.rawM );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.altE", m_CaloCalTopoClusterAux.altE );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.altEta", m_CaloCalTopoClusterAux.altEta );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.altPhi", m_CaloCalTopoClusterAux.altPhi );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.altM", m_CaloCalTopoClusterAux.altM );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.calE", m_CaloCalTopoClusterAux.calE );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.calEta", m_CaloCalTopoClusterAux.calEta );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.calPhi", m_CaloCalTopoClusterAux.calPhi );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.calM", m_CaloCalTopoClusterAux.calM );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.e_sampl", m_CaloCalTopoClusterAux.e_sampl );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.eta_sampl", m_CaloCalTopoClusterAux.eta_sampl );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAux.phi_sampl", m_CaloCalTopoClusterAux.phi_sampl );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.", m_EMTopoSW35Aux. );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.xAOD::AuxContainerBase", m_EMTopoSW35Aux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.basicSignal", m_EMTopoSW35Aux.basicSignal );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.time", m_EMTopoSW35Aux.time );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.samplingPattern", m_EMTopoSW35Aux.samplingPattern );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.clusterSize", m_EMTopoSW35Aux.clusterSize );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.eta0", m_EMTopoSW35Aux.eta0 );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.phi0", m_EMTopoSW35Aux.phi0 );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.nBarrel", m_EMTopoSW35Aux.nBarrel );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.nEndcap", m_EMTopoSW35Aux.nEndcap );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.rawE", m_EMTopoSW35Aux.rawE );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.rawEta", m_EMTopoSW35Aux.rawEta );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.rawPhi", m_EMTopoSW35Aux.rawPhi );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.rawM", m_EMTopoSW35Aux.rawM );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.altE", m_EMTopoSW35Aux.altE );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.altEta", m_EMTopoSW35Aux.altEta );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.altPhi", m_EMTopoSW35Aux.altPhi );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.altM", m_EMTopoSW35Aux.altM );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.calE", m_EMTopoSW35Aux.calE );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.calEta", m_EMTopoSW35Aux.calEta );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.calPhi", m_EMTopoSW35Aux.calPhi );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.calM", m_EMTopoSW35Aux.calM );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.e_sampl", m_EMTopoSW35Aux.e_sampl );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.eta_sampl", m_EMTopoSW35Aux.eta_sampl );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35Aux.phi_sampl", m_EMTopoSW35Aux.phi_sampl );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.", m_LArClusterEMFrwdAux. );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.xAOD::AuxContainerBase", m_LArClusterEMFrwdAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.basicSignal", m_LArClusterEMFrwdAux.basicSignal );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.time", m_LArClusterEMFrwdAux.time );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.samplingPattern", m_LArClusterEMFrwdAux.samplingPattern );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.clusterSize", m_LArClusterEMFrwdAux.clusterSize );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.eta0", m_LArClusterEMFrwdAux.eta0 );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.phi0", m_LArClusterEMFrwdAux.phi0 );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.nBarrel", m_LArClusterEMFrwdAux.nBarrel );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.nEndcap", m_LArClusterEMFrwdAux.nEndcap );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.rawE", m_LArClusterEMFrwdAux.rawE );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.rawEta", m_LArClusterEMFrwdAux.rawEta );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.rawPhi", m_LArClusterEMFrwdAux.rawPhi );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.rawM", m_LArClusterEMFrwdAux.rawM );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.altE", m_LArClusterEMFrwdAux.altE );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.altEta", m_LArClusterEMFrwdAux.altEta );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.altPhi", m_LArClusterEMFrwdAux.altPhi );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.altM", m_LArClusterEMFrwdAux.altM );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.calE", m_LArClusterEMFrwdAux.calE );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.calEta", m_LArClusterEMFrwdAux.calEta );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.calPhi", m_LArClusterEMFrwdAux.calPhi );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.calM", m_LArClusterEMFrwdAux.calM );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.e_sampl", m_LArClusterEMFrwdAux.e_sampl );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.eta_sampl", m_LArClusterEMFrwdAux.eta_sampl );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAux.phi_sampl", m_LArClusterEMFrwdAux.phi_sampl );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.", m_LArClusterEMSofteAux. );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.xAOD::AuxContainerBase", m_LArClusterEMSofteAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.basicSignal", m_LArClusterEMSofteAux.basicSignal );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.time", m_LArClusterEMSofteAux.time );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.samplingPattern", m_LArClusterEMSofteAux.samplingPattern );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.clusterSize", m_LArClusterEMSofteAux.clusterSize );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.eta0", m_LArClusterEMSofteAux.eta0 );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.phi0", m_LArClusterEMSofteAux.phi0 );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.nBarrel", m_LArClusterEMSofteAux.nBarrel );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.nEndcap", m_LArClusterEMSofteAux.nEndcap );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.rawE", m_LArClusterEMSofteAux.rawE );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.rawEta", m_LArClusterEMSofteAux.rawEta );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.rawPhi", m_LArClusterEMSofteAux.rawPhi );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.rawM", m_LArClusterEMSofteAux.rawM );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.altE", m_LArClusterEMSofteAux.altE );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.altEta", m_LArClusterEMSofteAux.altEta );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.altPhi", m_LArClusterEMSofteAux.altPhi );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.altM", m_LArClusterEMSofteAux.altM );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.calE", m_LArClusterEMSofteAux.calE );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.calEta", m_LArClusterEMSofteAux.calEta );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.calPhi", m_LArClusterEMSofteAux.calPhi );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.calM", m_LArClusterEMSofteAux.calM );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.e_sampl", m_LArClusterEMSofteAux.e_sampl );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.eta_sampl", m_LArClusterEMSofteAux.eta_sampl );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAux.phi_sampl", m_LArClusterEMSofteAux.phi_sampl );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.", m_egClusterCollectionAux. );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.xAOD::AuxContainerBase", m_egClusterCollectionAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.basicSignal", m_egClusterCollectionAux.basicSignal );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.time", m_egClusterCollectionAux.time );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.samplingPattern", m_egClusterCollectionAux.samplingPattern );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.clusterSize", m_egClusterCollectionAux.clusterSize );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.eta0", m_egClusterCollectionAux.eta0 );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.phi0", m_egClusterCollectionAux.phi0 );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.nBarrel", m_egClusterCollectionAux.nBarrel );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.nEndcap", m_egClusterCollectionAux.nEndcap );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.rawE", m_egClusterCollectionAux.rawE );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.rawEta", m_egClusterCollectionAux.rawEta );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.rawPhi", m_egClusterCollectionAux.rawPhi );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.rawM", m_egClusterCollectionAux.rawM );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.altE", m_egClusterCollectionAux.altE );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.altEta", m_egClusterCollectionAux.altEta );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.altPhi", m_egClusterCollectionAux.altPhi );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.altM", m_egClusterCollectionAux.altM );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.calE", m_egClusterCollectionAux.calE );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.calEta", m_egClusterCollectionAux.calEta );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.calPhi", m_egClusterCollectionAux.calPhi );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.calM", m_egClusterCollectionAux.calM );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.e_sampl", m_egClusterCollectionAux.e_sampl );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.eta_sampl", m_egClusterCollectionAux.eta_sampl );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAux.phi_sampl", m_egClusterCollectionAux.phi_sampl );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.", m_TauRecContainerAux. );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.xAOD::AuxContainerBase", m_TauRecContainerAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pt", m_TauRecContainerAux.pt );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.eta", m_TauRecContainerAux.eta );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.phi", m_TauRecContainerAux.phi );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.e", m_TauRecContainerAux.e );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.m", m_TauRecContainerAux.m );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.ROIWord", m_TauRecContainerAux.ROIWord );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.charge", m_TauRecContainerAux.charge );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.vetoFlags", m_TauRecContainerAux.vetoFlags );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.isTauFlags", m_TauRecContainerAux.isTauFlags );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.Likelihood", m_TauRecContainerAux.Likelihood );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.SafeLikelihood", m_TauRecContainerAux.SafeLikelihood );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.BDTJetScore", m_TauRecContainerAux.BDTJetScore );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.BDTEleScore", m_TauRecContainerAux.BDTEleScore );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.PanTauScore", m_TauRecContainerAux.PanTauScore );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.trackFilterPass", m_TauRecContainerAux.trackFilterPass );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.trackFilterProngs", m_TauRecContainerAux.trackFilterProngs );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.trackFilterQuality", m_TauRecContainerAux.trackFilterQuality );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pi0ConeDR", m_TauRecContainerAux.pi0ConeDR );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.ipZ0SinThetaSigLeadTrk", m_TauRecContainerAux.ipZ0SinThetaSigLeadTrk );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.etOverPtLeadTrk", m_TauRecContainerAux.etOverPtLeadTrk );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.leadTrkPt", m_TauRecContainerAux.leadTrkPt );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.ipSigLeadTrk", m_TauRecContainerAux.ipSigLeadTrk );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.ipSigLeadLooseTrk", m_TauRecContainerAux.ipSigLeadLooseTrk );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.etOverPtLeadLooseTrk", m_TauRecContainerAux.etOverPtLeadLooseTrk );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.leadLooseTrkPt", m_TauRecContainerAux.leadLooseTrkPt );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.chrgLooseTrk", m_TauRecContainerAux.chrgLooseTrk );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.massTrkSys", m_TauRecContainerAux.massTrkSys );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.trkWidth2", m_TauRecContainerAux.trkWidth2 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.trFlightPathSig", m_TauRecContainerAux.trFlightPathSig );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.etEflow", m_TauRecContainerAux.etEflow );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.mEflow", m_TauRecContainerAux.mEflow );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.ele_E237E277", m_TauRecContainerAux.ele_E237E277 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.ele_PresamplerFraction", m_TauRecContainerAux.ele_PresamplerFraction );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.ele_ECALFirstFraction", m_TauRecContainerAux.ele_ECALFirstFraction );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.numCells", m_TauRecContainerAux.numCells );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.numTopoClusters", m_TauRecContainerAux.numTopoClusters );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.numEffTopoClusters", m_TauRecContainerAux.numEffTopoClusters );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.topoInvMass", m_TauRecContainerAux.topoInvMass );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.effTopoInvMass", m_TauRecContainerAux.effTopoInvMass );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.topoMeanDeltaR", m_TauRecContainerAux.topoMeanDeltaR );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.effTopoMeanDeltaR", m_TauRecContainerAux.effTopoMeanDeltaR );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.EMRadius", m_TauRecContainerAux.EMRadius );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.hadRadius", m_TauRecContainerAux.hadRadius );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.etEMAtEMScale", m_TauRecContainerAux.etEMAtEMScale );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.etHadAtEMScale", m_TauRecContainerAux.etHadAtEMScale );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.isolFrac", m_TauRecContainerAux.isolFrac );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.centFrac", m_TauRecContainerAux.centFrac );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.stripWidth2", m_TauRecContainerAux.stripWidth2 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.nStrip", m_TauRecContainerAux.nStrip );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.etEMCalib", m_TauRecContainerAux.etEMCalib );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.etHadCalib", m_TauRecContainerAux.etHadCalib );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.seedCalo_eta", m_TauRecContainerAux.seedCalo_eta );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.seedCalo_phi", m_TauRecContainerAux.seedCalo_phi );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.nIsolLooseTrk", m_TauRecContainerAux.nIsolLooseTrk );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.trkAvgDist", m_TauRecContainerAux.trkAvgDist );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.trkRmsDist", m_TauRecContainerAux.trkRmsDist );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.lead2ClusterEOverAllClusterE", m_TauRecContainerAux.lead2ClusterEOverAllClusterE );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.lead3ClusterEOverAllClusterE", m_TauRecContainerAux.lead3ClusterEOverAllClusterE );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.caloIso", m_TauRecContainerAux.caloIso );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.caloIsoCorrected", m_TauRecContainerAux.caloIsoCorrected );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.dRmax", m_TauRecContainerAux.dRmax );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.secMaxStripEt", m_TauRecContainerAux.secMaxStripEt );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.sumEMCellEtOverLeadTrkPt", m_TauRecContainerAux.sumEMCellEtOverLeadTrkPt );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.hadLeakEt", m_TauRecContainerAux.hadLeakEt );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.EM_TES_scale", m_TauRecContainerAux.EM_TES_scale );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.LC_TES_precalib", m_TauRecContainerAux.LC_TES_precalib );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.cellBasedEnergyRing1", m_TauRecContainerAux.cellBasedEnergyRing1 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.cellBasedEnergyRing2", m_TauRecContainerAux.cellBasedEnergyRing2 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.cellBasedEnergyRing3", m_TauRecContainerAux.cellBasedEnergyRing3 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.cellBasedEnergyRing4", m_TauRecContainerAux.cellBasedEnergyRing4 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.cellBasedEnergyRing5", m_TauRecContainerAux.cellBasedEnergyRing5 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.cellBasedEnergyRing6", m_TauRecContainerAux.cellBasedEnergyRing6 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.cellBasedEnergyRing7", m_TauRecContainerAux.cellBasedEnergyRing7 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.TRT_NHT_OVER_NLT", m_TauRecContainerAux.TRT_NHT_OVER_NLT );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.TauJetVtxFraction", m_TauRecContainerAux.TauJetVtxFraction );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.nPi0", m_TauRecContainerAux.nPi0 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.nCharged", m_TauRecContainerAux.nCharged );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate", m_TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_DecayModeProto", m_TauRecContainerAux.pantau_CellBasedInput_DecayModeProto );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_DecayMode", m_TauRecContainerAux.pantau_CellBasedInput_DecayMode );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n", m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn", m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn", m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts", m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt", m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts", m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM", m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1", m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2", m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts", m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts", m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed", m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged", m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate", m_TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_DecayModeProto", m_TauRecContainerAux.pantau_eflowRecInput_DecayModeProto );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_DecayMode", m_TauRecContainerAux.pantau_eflowRecInput_DecayMode );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n", m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn", m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn", m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts", m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts", m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt", m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts", m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM", m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1", m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2", m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2 );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts", m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts", m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts );	\
    ConnectVariable( (stringTREENAME), "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged", m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged );	\
    ConnectVariable( (stringTREENAME), "LArCalibrationHitActive", m_LArCalibrationHitActive );	\
    ConnectVariable( (stringTREENAME), "LArCalibrationHitDeadMaterial", m_LArCalibrationHitDeadMaterial );	\
    ConnectVariable( (stringTREENAME), "LArCalibrationHitInactive", m_LArCalibrationHitInactive );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticleTruthCollection", m_GSFTrackParticleTruthCollection );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidatesAux.", m_AllPhotonsVxCandidatesAux. );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidatesAux.xAOD::AuxContainerBase", m_AllPhotonsVxCandidatesAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidatesAux.chiSquared", m_AllPhotonsVxCandidatesAux.chiSquared );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidatesAux.numberDoF", m_AllPhotonsVxCandidatesAux.numberDoF );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidatesAux.x", m_AllPhotonsVxCandidatesAux.x );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidatesAux.y", m_AllPhotonsVxCandidatesAux.y );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidatesAux.z", m_AllPhotonsVxCandidatesAux.z );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidatesAux.covariance", m_AllPhotonsVxCandidatesAux.covariance );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidatesAux.vertexType", m_AllPhotonsVxCandidatesAux.vertexType );	\
    ConnectVariable( (stringTREENAME), "AllPhotonsVxCandidatesAux.trackWeights", m_AllPhotonsVxCandidatesAux.trackWeights );	\
    ConnectVariable( (stringTREENAME), "PrimaryVerticesAux.", m_PrimaryVerticesAux. );	\
    ConnectVariable( (stringTREENAME), "PrimaryVerticesAux.xAOD::AuxContainerBase", m_PrimaryVerticesAux.xAOD::AuxContainerBase );	\
    ConnectVariable( (stringTREENAME), "PrimaryVerticesAux.chiSquared", m_PrimaryVerticesAux.chiSquared );	\
    ConnectVariable( (stringTREENAME), "PrimaryVerticesAux.numberDoF", m_PrimaryVerticesAux.numberDoF );	\
    ConnectVariable( (stringTREENAME), "PrimaryVerticesAux.x", m_PrimaryVerticesAux.x );	\
    ConnectVariable( (stringTREENAME), "PrimaryVerticesAux.y", m_PrimaryVerticesAux.y );	\
    ConnectVariable( (stringTREENAME), "PrimaryVerticesAux.z", m_PrimaryVerticesAux.z );	\
    ConnectVariable( (stringTREENAME), "PrimaryVerticesAux.covariance", m_PrimaryVerticesAux.covariance );	\
    ConnectVariable( (stringTREENAME), "PrimaryVerticesAux.vertexType", m_PrimaryVerticesAux.vertexType );	\
    ConnectVariable( (stringTREENAME), "PrimaryVerticesAux.trackWeights", m_PrimaryVerticesAux.trackWeights );	\
    ConnectVariable( (stringTREENAME), "MuonClusterCollection_Link", m_MuonClusterCollection_Link );	\
    ConnectVariable( (stringTREENAME), "MuonCaloEnergyCollection", m_MuonCaloEnergyCollection );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoDelta2Perp", m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoDelta2Par", m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoDelta2SumPt", m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Perp", m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Par", m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8SumPt", m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Perp", m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Par", m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13SumPt", m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.Iso6To88Perp", m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.Iso6To88Par", m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.Iso6To88SumPt", m_AntiKt4LCTopoJetsAuxDyn.Iso6To88SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.WIDTH", m_AntiKt4LCTopoJetsAuxDyn.WIDTH );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.pt_truth", m_AntiKt4LCTopoJetsAuxDyn.pt_truth );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerB", m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerB );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_EMB1", m_AntiKt4LCTopoJetsAuxDyn.energy_EMB1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_EMB2", m_AntiKt4LCTopoJetsAuxDyn.energy_EMB2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_EMB3", m_AntiKt4LCTopoJetsAuxDyn.energy_EMB3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_TileBar0", m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_TileGap1", m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_TileGap3", m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_TileBar1", m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_TileBar2", m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_TileGap2", m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.constituentScale", m_AntiKt4LCTopoJetsAuxDyn.constituentScale );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.KtDr", m_AntiKt4LCTopoJetsAuxDyn.KtDr );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_pt", m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.OriginIndex", m_AntiKt4LCTopoJetsAuxDyn.OriginIndex );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_eta", m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.JVF", m_AntiKt4LCTopoJetsAuxDyn.JVF );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_phi", m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.BCH_CORR_CELL", m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_CELL );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_m", m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_m );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.BCH_CORR_DOTX", m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_DOTX );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_pt", m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.BCH_CORR_JET", m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_JET );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_eta", m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.nTrk_pv0_1GeV", m_AntiKt4LCTopoJetsAuxDyn.nTrk_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_phi", m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV", m_AntiKt4LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_m", m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_m );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV", m_AntiKt4LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.LArQuality", m_AntiKt4LCTopoJetsAuxDyn.LArQuality );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.Timing", m_AntiKt4LCTopoJetsAuxDyn.Timing );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.HECQuality", m_AntiKt4LCTopoJetsAuxDyn.HECQuality );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.NegativeE", m_AntiKt4LCTopoJetsAuxDyn.NegativeE );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.AverageLArQF", m_AntiKt4LCTopoJetsAuxDyn.AverageLArQF );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.Centroid_r", m_AntiKt4LCTopoJetsAuxDyn.Centroid_r );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.ootFracClusters5", m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters5 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.ootFracClusters10", m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters10 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.TruthMFindex", m_AntiKt4LCTopoJetsAuxDyn.TruthMFindex );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.TruthMF", m_AntiKt4LCTopoJetsAuxDyn.TruthMF );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.NumTowers", m_AntiKt4LCTopoJetsAuxDyn.NumTowers );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.ActiveArea", m_AntiKt4LCTopoJetsAuxDyn.ActiveArea );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.ActiveAreaPx", m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPx );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.ActiveAreaPy", m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPy );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.ActiveAreaPz", m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPz );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.ActiveAreaE", m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaE );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoKR20Perp", m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoKR20Par", m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.IsoKR20SumPt", m_AntiKt4LCTopoJetsAuxDyn.IsoKR20SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoDelta2Perp", m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoDelta2Par", m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoDelta2SumPt", m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Perp", m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Par", m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8SumPt", m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Perp", m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Par", m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13SumPt", m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.Iso6To88Perp", m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.Iso6To88Par", m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.Iso6To88SumPt", m_AntiKt4TopoEMJetsAuxDyn.Iso6To88SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.WIDTH", m_AntiKt4TopoEMJetsAuxDyn.WIDTH );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.pt_truth", m_AntiKt4TopoEMJetsAuxDyn.pt_truth );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerB", m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerB );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_EMB1", m_AntiKt4TopoEMJetsAuxDyn.energy_EMB1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_EMB2", m_AntiKt4TopoEMJetsAuxDyn.energy_EMB2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_EMB3", m_AntiKt4TopoEMJetsAuxDyn.energy_EMB3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_TileGap3", m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.constituentScale", m_AntiKt4TopoEMJetsAuxDyn.constituentScale );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_pt", m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.OriginIndex", m_AntiKt4TopoEMJetsAuxDyn.OriginIndex );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_eta", m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.JVF", m_AntiKt4TopoEMJetsAuxDyn.JVF );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_phi", m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.BCH_CORR_CELL", m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_CELL );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_m", m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_m );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.BCH_CORR_DOTX", m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_DOTX );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_pt", m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.BCH_CORR_JET", m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_JET );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_eta", m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.nTrk_pv0_1GeV", m_AntiKt4TopoEMJetsAuxDyn.nTrk_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_phi", m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV", m_AntiKt4TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_m", m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_m );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV", m_AntiKt4TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.LArQuality", m_AntiKt4TopoEMJetsAuxDyn.LArQuality );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.Timing", m_AntiKt4TopoEMJetsAuxDyn.Timing );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.HECQuality", m_AntiKt4TopoEMJetsAuxDyn.HECQuality );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.NegativeE", m_AntiKt4TopoEMJetsAuxDyn.NegativeE );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.AverageLArQF", m_AntiKt4TopoEMJetsAuxDyn.AverageLArQF );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.Centroid_r", m_AntiKt4TopoEMJetsAuxDyn.Centroid_r );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.ootFracClusters5", m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters5 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.ootFracClusters10", m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters10 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.TruthMFindex", m_AntiKt4TopoEMJetsAuxDyn.TruthMFindex );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.TruthMF", m_AntiKt4TopoEMJetsAuxDyn.TruthMF );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.NumTowers", m_AntiKt4TopoEMJetsAuxDyn.NumTowers );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerE", m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerE );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_EME1", m_AntiKt4TopoEMJetsAuxDyn.energy_EME1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_EME2", m_AntiKt4TopoEMJetsAuxDyn.energy_EME2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_EME3", m_AntiKt4TopoEMJetsAuxDyn.energy_EME3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_HEC0", m_AntiKt4TopoEMJetsAuxDyn.energy_HEC0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_HEC1", m_AntiKt4TopoEMJetsAuxDyn.energy_HEC1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_TileExt0", m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_TileExt1", m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.n90", m_AntiKt4TopoEMJetsAuxDyn.n90 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.ActiveArea", m_AntiKt4TopoEMJetsAuxDyn.ActiveArea );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.ActiveAreaPx", m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPx );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.ActiveAreaPy", m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPy );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.ActiveAreaPz", m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPz );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.ActiveAreaE", m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaE );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoKR20Perp", m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoKR20Par", m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.IsoKR20SumPt", m_AntiKt4TopoEMJetsAuxDyn.IsoKR20SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoDelta2Perp", m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoDelta2Par", m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoDelta2SumPt", m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Perp", m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Par", m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8SumPt", m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Perp", m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Par", m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13SumPt", m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.Iso6To88Perp", m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.Iso6To88Par", m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.Iso6To88SumPt", m_AntiKt6LCTopoJetsAuxDyn.Iso6To88SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.WIDTH", m_AntiKt6LCTopoJetsAuxDyn.WIDTH );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.pt_truth", m_AntiKt6LCTopoJetsAuxDyn.pt_truth );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerB", m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerB );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_EMB1", m_AntiKt6LCTopoJetsAuxDyn.energy_EMB1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_EMB2", m_AntiKt6LCTopoJetsAuxDyn.energy_EMB2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_EMB3", m_AntiKt6LCTopoJetsAuxDyn.energy_EMB3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_TileBar0", m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_TileBar1", m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_TileBar2", m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.constituentScale", m_AntiKt6LCTopoJetsAuxDyn.constituentScale );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.KtDr", m_AntiKt6LCTopoJetsAuxDyn.KtDr );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_pt", m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.OriginIndex", m_AntiKt6LCTopoJetsAuxDyn.OriginIndex );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_eta", m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.JVF", m_AntiKt6LCTopoJetsAuxDyn.JVF );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_phi", m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.BCH_CORR_CELL", m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_CELL );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_m", m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_m );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.BCH_CORR_DOTX", m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_DOTX );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_pt", m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.BCH_CORR_JET", m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_JET );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_eta", m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.nTrk_pv0_1GeV", m_AntiKt6LCTopoJetsAuxDyn.nTrk_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_phi", m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV", m_AntiKt6LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_m", m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_m );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV", m_AntiKt6LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.LArQuality", m_AntiKt6LCTopoJetsAuxDyn.LArQuality );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.Timing", m_AntiKt6LCTopoJetsAuxDyn.Timing );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.HECQuality", m_AntiKt6LCTopoJetsAuxDyn.HECQuality );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.NegativeE", m_AntiKt6LCTopoJetsAuxDyn.NegativeE );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.AverageLArQF", m_AntiKt6LCTopoJetsAuxDyn.AverageLArQF );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.Centroid_r", m_AntiKt6LCTopoJetsAuxDyn.Centroid_r );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.ootFracClusters5", m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters5 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.ootFracClusters10", m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters10 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.TruthMFindex", m_AntiKt6LCTopoJetsAuxDyn.TruthMFindex );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.TruthMF", m_AntiKt6LCTopoJetsAuxDyn.TruthMF );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.NumTowers", m_AntiKt6LCTopoJetsAuxDyn.NumTowers );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.ActiveArea", m_AntiKt6LCTopoJetsAuxDyn.ActiveArea );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.ActiveAreaPx", m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPx );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.ActiveAreaPy", m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPy );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.ActiveAreaPz", m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPz );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.ActiveAreaE", m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaE );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoKR20Perp", m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoKR20Par", m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.IsoKR20SumPt", m_AntiKt6LCTopoJetsAuxDyn.IsoKR20SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoDelta2Perp", m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoDelta2Par", m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoDelta2SumPt", m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Perp", m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Par", m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8SumPt", m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Perp", m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Par", m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13SumPt", m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.Iso6To88Perp", m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.Iso6To88Par", m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.Iso6To88SumPt", m_AntiKt6TopoEMJetsAuxDyn.Iso6To88SumPt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.WIDTH", m_AntiKt6TopoEMJetsAuxDyn.WIDTH );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.pt_truth", m_AntiKt6TopoEMJetsAuxDyn.pt_truth );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerB", m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerB );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_EMB1", m_AntiKt6TopoEMJetsAuxDyn.energy_EMB1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_EMB2", m_AntiKt6TopoEMJetsAuxDyn.energy_EMB2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_EMB3", m_AntiKt6TopoEMJetsAuxDyn.energy_EMB3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_TileBar0", m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_TileGap1", m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_TileGap3", m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_TileBar1", m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_TileBar2", m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_TileGap2", m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.constituentScale", m_AntiKt6TopoEMJetsAuxDyn.constituentScale );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.KtDr", m_AntiKt6TopoEMJetsAuxDyn.KtDr );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_pt", m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.OriginIndex", m_AntiKt6TopoEMJetsAuxDyn.OriginIndex );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_eta", m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.JVF", m_AntiKt6TopoEMJetsAuxDyn.JVF );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_phi", m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.BCH_CORR_CELL", m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_CELL );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_m", m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_m );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.BCH_CORR_DOTX", m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_DOTX );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_pt", m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_pt );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.BCH_CORR_JET", m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_JET );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_eta", m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_eta );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.nTrk_pv0_1GeV", m_AntiKt6TopoEMJetsAuxDyn.nTrk_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_phi", m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_phi );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV", m_AntiKt6TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_m", m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_m );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV", m_AntiKt6TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.LArQuality", m_AntiKt6TopoEMJetsAuxDyn.LArQuality );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.Timing", m_AntiKt6TopoEMJetsAuxDyn.Timing );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.HECQuality", m_AntiKt6TopoEMJetsAuxDyn.HECQuality );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.NegativeE", m_AntiKt6TopoEMJetsAuxDyn.NegativeE );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.AverageLArQF", m_AntiKt6TopoEMJetsAuxDyn.AverageLArQF );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.Centroid_r", m_AntiKt6TopoEMJetsAuxDyn.Centroid_r );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.ootFracClusters5", m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters5 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.ootFracClusters10", m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters10 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.TruthMFindex", m_AntiKt6TopoEMJetsAuxDyn.TruthMFindex );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.TruthMF", m_AntiKt6TopoEMJetsAuxDyn.TruthMF );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.NumTowers", m_AntiKt6TopoEMJetsAuxDyn.NumTowers );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_TileExt0", m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_TileExt1", m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.ActiveArea", m_AntiKt6TopoEMJetsAuxDyn.ActiveArea );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.ActiveAreaPx", m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPx );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.ActiveAreaPy", m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPy );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.ActiveAreaPz", m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPz );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.ActiveAreaE", m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaE );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoKR20Perp", m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Perp );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoKR20Par", m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Par );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.IsoKR20SumPt", m_AntiKt6TopoEMJetsAuxDyn.IsoKR20SumPt );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING", m_CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.AVG_LAR_Q", m_CaloCalTopoClusterAuxDyn.AVG_LAR_Q );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.AVG_TILE_Q", m_CaloCalTopoClusterAuxDyn.AVG_TILE_Q );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.EM_PROBABILITY", m_CaloCalTopoClusterAuxDyn.EM_PROBABILITY );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.HAD_WEIGHT", m_CaloCalTopoClusterAuxDyn.HAD_WEIGHT );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.OOC_WEIGHT", m_CaloCalTopoClusterAuxDyn.OOC_WEIGHT );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.DM_WEIGHT", m_CaloCalTopoClusterAuxDyn.DM_WEIGHT );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.FIRST_PHI", m_CaloCalTopoClusterAuxDyn.FIRST_PHI );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.FIRST_ETA", m_CaloCalTopoClusterAuxDyn.FIRST_ETA );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.DELTA_PHI", m_CaloCalTopoClusterAuxDyn.DELTA_PHI );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.DELTA_THETA", m_CaloCalTopoClusterAuxDyn.DELTA_THETA );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.DELTA_ALPHA", m_CaloCalTopoClusterAuxDyn.DELTA_ALPHA );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.CENTER_X", m_CaloCalTopoClusterAuxDyn.CENTER_X );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.CENTER_Y", m_CaloCalTopoClusterAuxDyn.CENTER_Y );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.CENTER_Z", m_CaloCalTopoClusterAuxDyn.CENTER_Z );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.ENG_FRAC_EM", m_CaloCalTopoClusterAuxDyn.ENG_FRAC_EM );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.ENG_FRAC_CORE", m_CaloCalTopoClusterAuxDyn.ENG_FRAC_CORE );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.SECOND_ENG_DENS", m_CaloCalTopoClusterAuxDyn.SECOND_ENG_DENS );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.N_BAD_CELLS_CORR", m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS_CORR );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.BAD_CELLS_CORR_E", m_CaloCalTopoClusterAuxDyn.BAD_CELLS_CORR_E );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.CellLink_", m_CaloCalTopoClusterAuxDyn.CellLink_ );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.CellLink.m_persKey", m_CaloCalTopoClusterAuxDyn.CellLink.m_persKey );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.CellLink.m_persIndex", m_CaloCalTopoClusterAuxDyn.CellLink.m_persIndex );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.SECOND_R", m_CaloCalTopoClusterAuxDyn.SECOND_R );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.SECOND_LAMBDA", m_CaloCalTopoClusterAuxDyn.SECOND_LAMBDA );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.CENTER_MAG", m_CaloCalTopoClusterAuxDyn.CENTER_MAG );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.CENTER_LAMBDA", m_CaloCalTopoClusterAuxDyn.CENTER_LAMBDA );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.LATERAL", m_CaloCalTopoClusterAuxDyn.LATERAL );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.LONGITUDINAL", m_CaloCalTopoClusterAuxDyn.LONGITUDINAL );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX", m_CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS", m_CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.ISOLATION", m_CaloCalTopoClusterAuxDyn.ISOLATION );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS", m_CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.N_BAD_CELLS", m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.BADLARQ_FRAC", m_CaloCalTopoClusterAuxDyn.BADLARQ_FRAC );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.ENG_POS", m_CaloCalTopoClusterAuxDyn.ENG_POS );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.SIGNIFICANCE", m_CaloCalTopoClusterAuxDyn.SIGNIFICANCE );	\
    ConnectVariable( (stringTREENAME), "CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE", m_CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35AuxDyn.CellLink_", m_EMTopoSW35AuxDyn.CellLink_ );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35AuxDyn.CellLink.m_persKey", m_EMTopoSW35AuxDyn.CellLink.m_persKey );	\
    ConnectVariable( (stringTREENAME), "EMTopoSW35AuxDyn.CellLink.m_persIndex", m_EMTopoSW35AuxDyn.CellLink.m_persIndex );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAuxDyn.ElectronIDLoosePP", m_ElectronCollectionAuxDyn.ElectronIDLoosePP );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAuxDyn.ElectronIDMediumPP", m_ElectronCollectionAuxDyn.ElectronIDMediumPP );	\
    ConnectVariable( (stringTREENAME), "ElectronCollectionAuxDyn.ElectronIDTightPP", m_ElectronCollectionAuxDyn.ElectronIDTightPP );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAuxDyn.originalTrackParticle_", m_GSFTrackParticlesAuxDyn.originalTrackParticle_ );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey", m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey );	\
    ConnectVariable( (stringTREENAME), "GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex", m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAuxDyn.truth_", m_InDetTrackParticlesAuxDyn.truth_ );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAuxDyn.truth.m_persKey", m_InDetTrackParticlesAuxDyn.truth.m_persKey );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAuxDyn.truth.m_persIndex", m_InDetTrackParticlesAuxDyn.truth.m_persIndex );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAuxDyn.type", m_InDetTrackParticlesAuxDyn.type );	\
    ConnectVariable( (stringTREENAME), "InDetTrackParticlesAuxDyn.origin", m_InDetTrackParticlesAuxDyn.origin );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING", m_LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.AVG_LAR_Q", m_LArClusterEMFrwdAuxDyn.AVG_LAR_Q );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.AVG_TILE_Q", m_LArClusterEMFrwdAuxDyn.AVG_TILE_Q );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.EM_PROBABILITY", m_LArClusterEMFrwdAuxDyn.EM_PROBABILITY );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.HAD_WEIGHT", m_LArClusterEMFrwdAuxDyn.HAD_WEIGHT );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.OOC_WEIGHT", m_LArClusterEMFrwdAuxDyn.OOC_WEIGHT );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.DM_WEIGHT", m_LArClusterEMFrwdAuxDyn.DM_WEIGHT );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.FIRST_PHI", m_LArClusterEMFrwdAuxDyn.FIRST_PHI );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.FIRST_ETA", m_LArClusterEMFrwdAuxDyn.FIRST_ETA );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.DELTA_PHI", m_LArClusterEMFrwdAuxDyn.DELTA_PHI );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.DELTA_THETA", m_LArClusterEMFrwdAuxDyn.DELTA_THETA );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.DELTA_ALPHA", m_LArClusterEMFrwdAuxDyn.DELTA_ALPHA );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.CENTER_X", m_LArClusterEMFrwdAuxDyn.CENTER_X );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.CENTER_Y", m_LArClusterEMFrwdAuxDyn.CENTER_Y );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.CENTER_Z", m_LArClusterEMFrwdAuxDyn.CENTER_Z );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.ENG_FRAC_EM", m_LArClusterEMFrwdAuxDyn.ENG_FRAC_EM );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE", m_LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS", m_LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR", m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E", m_LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.CellLink_", m_LArClusterEMFrwdAuxDyn.CellLink_ );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.CellLink.m_persKey", m_LArClusterEMFrwdAuxDyn.CellLink.m_persKey );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.CellLink.m_persIndex", m_LArClusterEMFrwdAuxDyn.CellLink.m_persIndex );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.SECOND_R", m_LArClusterEMFrwdAuxDyn.SECOND_R );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.SECOND_LAMBDA", m_LArClusterEMFrwdAuxDyn.SECOND_LAMBDA );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.CENTER_MAG", m_LArClusterEMFrwdAuxDyn.CENTER_MAG );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.CENTER_LAMBDA", m_LArClusterEMFrwdAuxDyn.CENTER_LAMBDA );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.LATERAL", m_LArClusterEMFrwdAuxDyn.LATERAL );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.LONGITUDINAL", m_LArClusterEMFrwdAuxDyn.LONGITUDINAL );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX", m_LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS", m_LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.ISOLATION", m_LArClusterEMFrwdAuxDyn.ISOLATION );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS", m_LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.N_BAD_CELLS", m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.BADLARQ_FRAC", m_LArClusterEMFrwdAuxDyn.BADLARQ_FRAC );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.ENG_POS", m_LArClusterEMFrwdAuxDyn.ENG_POS );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.SIGNIFICANCE", m_LArClusterEMFrwdAuxDyn.SIGNIFICANCE );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE", m_LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAuxDyn.CellLink_", m_LArClusterEMSofteAuxDyn.CellLink_ );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAuxDyn.CellLink.m_persKey", m_LArClusterEMSofteAuxDyn.CellLink.m_persKey );	\
    ConnectVariable( (stringTREENAME), "LArClusterEMSofteAuxDyn.CellLink.m_persIndex", m_LArClusterEMSofteAuxDyn.CellLink.m_persIndex );	\
    ConnectVariable( (stringTREENAME), "MuonsAuxDyn.m", m_MuonsAuxDyn.m );	\
    ConnectVariable( (stringTREENAME), "TruthEventAuxDyn.pdf2", m_TruthEventAuxDyn.pdf2 );	\
    ConnectVariable( (stringTREENAME), "TruthEventAuxDyn.id1", m_TruthEventAuxDyn.id1 );	\
    ConnectVariable( (stringTREENAME), "TruthEventAuxDyn.id2", m_TruthEventAuxDyn.id2 );	\
    ConnectVariable( (stringTREENAME), "TruthEventAuxDyn.pdfId1", m_TruthEventAuxDyn.pdfId1 );	\
    ConnectVariable( (stringTREENAME), "TruthEventAuxDyn.pdfId2", m_TruthEventAuxDyn.pdfId2 );	\
    ConnectVariable( (stringTREENAME), "TruthEventAuxDyn.x1", m_TruthEventAuxDyn.x1 );	\
    ConnectVariable( (stringTREENAME), "TruthEventAuxDyn.x2", m_TruthEventAuxDyn.x2 );	\
    ConnectVariable( (stringTREENAME), "TruthEventAuxDyn.scalePDF", m_TruthEventAuxDyn.scalePDF );	\
    ConnectVariable( (stringTREENAME), "TruthEventAuxDyn.pdf1", m_TruthEventAuxDyn.pdf1 );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAuxDyn.polarizationTheta", m_TruthParticleAuxDyn.polarizationTheta );	\
    ConnectVariable( (stringTREENAME), "TruthParticleAuxDyn.polarizationPhi", m_TruthParticleAuxDyn.polarizationPhi );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAuxDyn.CellLink_", m_egClusterCollectionAuxDyn.CellLink_ );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAuxDyn.CellLink.m_persKey", m_egClusterCollectionAuxDyn.CellLink.m_persKey );	\
    ConnectVariable( (stringTREENAME), "egClusterCollectionAuxDyn.CellLink.m_persIndex", m_egClusterCollectionAuxDyn.CellLink.m_persIndex );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_TileBar0", m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_TileBar1", m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_TileBar2", m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.KtDr", m_AntiKt4TopoEMJetsAuxDyn.KtDr );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerE", m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerE );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_EME1", m_AntiKt4LCTopoJetsAuxDyn.energy_EME1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_EME2", m_AntiKt4LCTopoJetsAuxDyn.energy_EME2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_EME3", m_AntiKt4LCTopoJetsAuxDyn.energy_EME3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_HEC0", m_AntiKt4LCTopoJetsAuxDyn.energy_HEC0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_HEC1", m_AntiKt4LCTopoJetsAuxDyn.energy_HEC1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_HEC2", m_AntiKt4LCTopoJetsAuxDyn.energy_HEC2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_HEC3", m_AntiKt4LCTopoJetsAuxDyn.energy_HEC3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_HEC2", m_AntiKt4TopoEMJetsAuxDyn.energy_HEC2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_HEC3", m_AntiKt4TopoEMJetsAuxDyn.energy_HEC3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerE", m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerE );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_EME1", m_AntiKt6LCTopoJetsAuxDyn.energy_EME1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_EME2", m_AntiKt6LCTopoJetsAuxDyn.energy_EME2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_EME3", m_AntiKt6LCTopoJetsAuxDyn.energy_EME3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_HEC0", m_AntiKt6LCTopoJetsAuxDyn.energy_HEC0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_HEC1", m_AntiKt6LCTopoJetsAuxDyn.energy_HEC1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_TileExt0", m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_HEC2", m_AntiKt6LCTopoJetsAuxDyn.energy_HEC2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_HEC3", m_AntiKt6LCTopoJetsAuxDyn.energy_HEC3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerE", m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerE );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_EME1", m_AntiKt6TopoEMJetsAuxDyn.energy_EME1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_EME2", m_AntiKt6TopoEMJetsAuxDyn.energy_EME2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_EME3", m_AntiKt6TopoEMJetsAuxDyn.energy_EME3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_HEC0", m_AntiKt6TopoEMJetsAuxDyn.energy_HEC0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_HEC1", m_AntiKt6TopoEMJetsAuxDyn.energy_HEC1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_HEC2", m_AntiKt6TopoEMJetsAuxDyn.energy_HEC2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_HEC3", m_AntiKt6TopoEMJetsAuxDyn.energy_HEC3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_TileGap3", m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap3 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_TileExt2", m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_TileGap1", m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_TileGap2", m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_TileExt2", m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_TileGap1", m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_TileGap2", m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_TileExt1", m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_TileExt2", m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_TileExt2", m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_TileExt0", m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_TileExt1", m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_FCAL0", m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_FCAL0", m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_FCAL0", m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_FCAL0", m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL0 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_FCAL1", m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4LCTopoJetsAuxDyn.energy_FCAL2", m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_FCAL1", m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt4TopoEMJetsAuxDyn.energy_FCAL2", m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_FCAL1", m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6LCTopoJetsAuxDyn.energy_FCAL2", m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL2 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_FCAL1", m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL1 );	\
    ConnectVariable( (stringTREENAME), "AntiKt6TopoEMJetsAuxDyn.energy_FCAL2", m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL2 );	\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define DECLARE( stringTREENAME )                      \
  {    DeclareVariable( o_m_McEventInfo, "McEventInfo" );	\
    DeclareVariable( o_m_AODCellContainer, "AODCellContainer" );	\
    DeclareVariable( o_m_MBTSContainer, "MBTSContainer" );	\
    DeclareVariable( o_m_TileMuObj, "TileMuObj" );	\
    DeclareVariable( o_m_ElectronAODCollection, "ElectronAODCollection" );	\
    DeclareVariable( o_m_PhotonAODCollection, "PhotonAODCollection" );	\
    DeclareVariable( o_m_EventInfoAux., "EventInfoAux." );	\
    DeclareVariable( o_m_EventInfoAux.xAOD::AuxInfoBase, "EventInfoAux.xAOD::AuxInfoBase" );	\
    DeclareVariable( o_m_EventInfoAux.runNumber, "EventInfoAux.runNumber" );	\
    DeclareVariable( o_m_EventInfoAux.eventNumber, "EventInfoAux.eventNumber" );	\
    DeclareVariable( o_m_EventInfoAux.lumiBlock, "EventInfoAux.lumiBlock" );	\
    DeclareVariable( o_m_EventInfoAux.timeStamp, "EventInfoAux.timeStamp" );	\
    DeclareVariable( o_m_EventInfoAux.timeStampNSOffset, "EventInfoAux.timeStampNSOffset" );	\
    DeclareVariable( o_m_EventInfoAux.bcid, "EventInfoAux.bcid" );	\
    DeclareVariable( o_m_EventInfoAux.detectorMask0, "EventInfoAux.detectorMask0" );	\
    DeclareVariable( o_m_EventInfoAux.detectorMask1, "EventInfoAux.detectorMask1" );	\
    DeclareVariable( o_m_EventInfoAux.statusElement, "EventInfoAux.statusElement" );	\
    DeclareVariable( o_m_EventInfoAux.extendedLevel1ID, "EventInfoAux.extendedLevel1ID" );	\
    DeclareVariable( o_m_EventInfoAux.level1TriggerType, "EventInfoAux.level1TriggerType" );	\
    DeclareVariable( o_m_EventInfoAux.streamTagNames, "EventInfoAux.streamTagNames" );	\
    DeclareVariable( o_m_EventInfoAux.streamTagTypes, "EventInfoAux.streamTagTypes" );	\
    DeclareVariable( o_m_EventInfoAux.streamTagObeysLumiblock, "EventInfoAux.streamTagObeysLumiblock" );	\
    DeclareVariable( o_m_EventInfoAux.actualInteractionsPerCrossing, "EventInfoAux.actualInteractionsPerCrossing" );	\
    DeclareVariable( o_m_EventInfoAux.averageInteractionsPerCrossing, "EventInfoAux.averageInteractionsPerCrossing" );	\
    DeclareVariable( o_m_EventInfoAux.pixelFlags, "EventInfoAux.pixelFlags" );	\
    DeclareVariable( o_m_EventInfoAux.sctFlags, "EventInfoAux.sctFlags" );	\
    DeclareVariable( o_m_EventInfoAux.trtFlags, "EventInfoAux.trtFlags" );	\
    DeclareVariable( o_m_EventInfoAux.larFlags, "EventInfoAux.larFlags" );	\
    DeclareVariable( o_m_EventInfoAux.tileFlags, "EventInfoAux.tileFlags" );	\
    DeclareVariable( o_m_EventInfoAux.muonFlags, "EventInfoAux.muonFlags" );	\
    DeclareVariable( o_m_EventInfoAux.forwardDetFlags, "EventInfoAux.forwardDetFlags" );	\
    DeclareVariable( o_m_EventInfoAux.coreFlags, "EventInfoAux.coreFlags" );	\
    DeclareVariable( o_m_EventInfoAux.backgroundFlags, "EventInfoAux.backgroundFlags" );	\
    DeclareVariable( o_m_EventInfoAux.lumiFlags, "EventInfoAux.lumiFlags" );	\
    DeclareVariable( o_m_EventInfo, "EventInfo" );	\
    DeclareVariable( o_m_MET_CellOut_Eflow, "MET_CellOut_Eflow" );	\
    DeclareVariable( o_m_MET_CellOut_Eflow_JetArea, "MET_CellOut_Eflow_JetArea" );	\
    DeclareVariable( o_m_MET_CellOut_Eflow_JetAreaJVF, "MET_CellOut_Eflow_JetAreaJVF" );	\
    DeclareVariable( o_m_MET_CellOut_Eflow_JetAreaRhoEta5JVF, "MET_CellOut_Eflow_JetAreaRhoEta5JVF" );	\
    DeclareVariable( o_m_MET_CellOut_Eflow_STVF, "MET_CellOut_Eflow_STVF" );	\
    DeclareVariable( o_m_MET_MuonMuons, "MET_MuonMuons" );	\
    DeclareVariable( o_m_MET_Muons, "MET_Muons" );	\
    DeclareVariable( o_m_MET_Muons_Spectro, "MET_Muons_Spectro" );	\
    DeclareVariable( o_m_MET_Muons_Track, "MET_Muons_Track" );	\
    DeclareVariable( o_m_MET_RefEle, "MET_RefEle" );	\
    DeclareVariable( o_m_MET_RefFinal, "MET_RefFinal" );	\
    DeclareVariable( o_m_MET_RefFinal_STVF, "MET_RefFinal_STVF" );	\
    DeclareVariable( o_m_MET_RefGamma, "MET_RefGamma" );	\
    DeclareVariable( o_m_MET_RefJet, "MET_RefJet" );	\
    DeclareVariable( o_m_MET_RefJet_JVF, "MET_RefJet_JVF" );	\
    DeclareVariable( o_m_MET_RefJet_JVFCut, "MET_RefJet_JVFCut" );	\
    DeclareVariable( o_m_MET_RefTau, "MET_RefTau" );	\
    DeclareVariable( o_m_MET_Track, "MET_Track" );	\
    DeclareVariable( o_m_GSFTrackAssociation, "GSFTrackAssociation" );	\
    DeclareVariable( o_m_LArNoisyROSummary, "LArNoisyROSummary" );	\
    DeclareVariable( o_m_MET_RefComposition, "MET_RefComposition" );	\
    DeclareVariable( o_m_ElectronCollection, "ElectronCollection" );	\
    DeclareVariable( o_m_ElectronFrwdCollection, "ElectronFrwdCollection" );	\
    DeclareVariable( o_m_AllPhotonsVxCandidates, "AllPhotonsVxCandidates" );	\
    DeclareVariable( o_m_PrimaryVertices, "PrimaryVertices" );	\
    DeclareVariable( o_m_PhotonCollection, "PhotonCollection" );	\
    DeclareVariable( o_m_TruthParticleAux., "TruthParticleAux." );	\
    DeclareVariable( o_m_TruthParticleAux.xAOD::AuxContainerBase, "TruthParticleAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_TruthParticleAux.pdgId, "TruthParticleAux.pdgId" );	\
    DeclareVariable( o_m_TruthParticleAux.barcode, "TruthParticleAux.barcode" );	\
    DeclareVariable( o_m_TruthParticleAux.status, "TruthParticleAux.status" );	\
    DeclareVariable( o_m_TruthParticleAux.px, "TruthParticleAux.px" );	\
    DeclareVariable( o_m_TruthParticleAux.py, "TruthParticleAux.py" );	\
    DeclareVariable( o_m_TruthParticleAux.pz, "TruthParticleAux.pz" );	\
    DeclareVariable( o_m_TruthParticleAux.e, "TruthParticleAux.e" );	\
    DeclareVariable( o_m_TruthParticleAux.m, "TruthParticleAux.m" );	\
    DeclareVariable( o_m_ElectronCollectionAux., "ElectronCollectionAux." );	\
    DeclareVariable( o_m_ElectronCollectionAux.xAOD::EgammaAuxContainer_v1, "ElectronCollectionAux.xAOD::EgammaAuxContainer_v1" );	\
    DeclareVariable( o_m_ElectronCollectionAux.charge, "ElectronCollectionAux.charge" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaEta0, "ElectronCollectionAux.deltaEta0" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaEta1, "ElectronCollectionAux.deltaEta1" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaEta2, "ElectronCollectionAux.deltaEta2" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaEta3, "ElectronCollectionAux.deltaEta3" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaPhi0, "ElectronCollectionAux.deltaPhi0" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaPhi1, "ElectronCollectionAux.deltaPhi1" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaPhi2, "ElectronCollectionAux.deltaPhi2" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaPhi3, "ElectronCollectionAux.deltaPhi3" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaPhiFromLastMeasurement, "ElectronCollectionAux.deltaPhiFromLastMeasurement" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaPhiRescaled, "ElectronCollectionAux.deltaPhiRescaled" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaPhiRescaled0, "ElectronCollectionAux.deltaPhiRescaled0" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaPhiRescaled1, "ElectronCollectionAux.deltaPhiRescaled1" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaPhiRescaled2, "ElectronCollectionAux.deltaPhiRescaled2" );	\
    DeclareVariable( o_m_ElectronCollectionAux.deltaPhiRescaled3, "ElectronCollectionAux.deltaPhiRescaled3" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux., "ElectronFrwdCollectionAux." );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.xAOD::EgammaAuxContainer_v1, "ElectronFrwdCollectionAux.xAOD::EgammaAuxContainer_v1" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.charge, "ElectronFrwdCollectionAux.charge" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaEta0, "ElectronFrwdCollectionAux.deltaEta0" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaEta1, "ElectronFrwdCollectionAux.deltaEta1" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaEta2, "ElectronFrwdCollectionAux.deltaEta2" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaEta3, "ElectronFrwdCollectionAux.deltaEta3" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaPhi0, "ElectronFrwdCollectionAux.deltaPhi0" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaPhi1, "ElectronFrwdCollectionAux.deltaPhi1" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaPhi2, "ElectronFrwdCollectionAux.deltaPhi2" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaPhi3, "ElectronFrwdCollectionAux.deltaPhi3" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaPhiFromLastMeasurement, "ElectronFrwdCollectionAux.deltaPhiFromLastMeasurement" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaPhiRescaled, "ElectronFrwdCollectionAux.deltaPhiRescaled" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaPhiRescaled0, "ElectronFrwdCollectionAux.deltaPhiRescaled0" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaPhiRescaled1, "ElectronFrwdCollectionAux.deltaPhiRescaled1" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaPhiRescaled2, "ElectronFrwdCollectionAux.deltaPhiRescaled2" );	\
    DeclareVariable( o_m_ElectronFrwdCollectionAux.deltaPhiRescaled3, "ElectronFrwdCollectionAux.deltaPhiRescaled3" );	\
    DeclareVariable( o_m_egClusterCollection_links, "egClusterCollection_links" );	\
    DeclareVariable( o_m_MuonsAux., "MuonsAux." );	\
    DeclareVariable( o_m_MuonsAux.xAOD::AuxContainerBase, "MuonsAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_MuonsAux.pt, "MuonsAux.pt" );	\
    DeclareVariable( o_m_MuonsAux.eta, "MuonsAux.eta" );	\
    DeclareVariable( o_m_MuonsAux.phi, "MuonsAux.phi" );	\
    DeclareVariable( o_m_MuonsAux.e, "MuonsAux.e" );	\
    DeclareVariable( o_m_MuonsAux.allAuthors, "MuonsAux.allAuthors" );	\
    DeclareVariable( o_m_MuonsAux.author, "MuonsAux.author" );	\
    DeclareVariable( o_m_MuonsAux.muonType, "MuonsAux.muonType" );	\
    DeclareVariable( o_m_MuonsAux.quality, "MuonsAux.quality" );	\
    DeclareVariable( o_m_MuonsAux.numberOfPrecisionLayers, "MuonsAux.numberOfPrecisionLayers" );	\
    DeclareVariable( o_m_MuonsAux.numberOfPrecisionHoleLayers, "MuonsAux.numberOfPrecisionHoleLayers" );	\
    DeclareVariable( o_m_MuonsAux.numberOfPhiLayers, "MuonsAux.numberOfPhiLayers" );	\
    DeclareVariable( o_m_MuonsAux.numberOfPhiHoleLayers, "MuonsAux.numberOfPhiHoleLayers" );	\
    DeclareVariable( o_m_MuonsAux.numberOfTriggerEtaLayers, "MuonsAux.numberOfTriggerEtaLayers" );	\
    DeclareVariable( o_m_MuonsAux.numberOfTriggerEtaHoleLayers, "MuonsAux.numberOfTriggerEtaHoleLayers" );	\
    DeclareVariable( o_m_MuonsAux.primarySector, "MuonsAux.primarySector" );	\
    DeclareVariable( o_m_MuonsAux.secondarySector, "MuonsAux.secondarySector" );	\
    DeclareVariable( o_m_MuonsAux.innerSmallHits, "MuonsAux.innerSmallHits" );	\
    DeclareVariable( o_m_MuonsAux.innerLargeHits, "MuonsAux.innerLargeHits" );	\
    DeclareVariable( o_m_MuonsAux.middleSmallHits, "MuonsAux.middleSmallHits" );	\
    DeclareVariable( o_m_MuonsAux.middleLargeHits, "MuonsAux.middleLargeHits" );	\
    DeclareVariable( o_m_MuonsAux.outerSmallHits, "MuonsAux.outerSmallHits" );	\
    DeclareVariable( o_m_MuonsAux.outerLargeHits, "MuonsAux.outerLargeHits" );	\
    DeclareVariable( o_m_MuonsAux.extendedSmallHits, "MuonsAux.extendedSmallHits" );	\
    DeclareVariable( o_m_MuonsAux.extendedLargeHits, "MuonsAux.extendedLargeHits" );	\
    DeclareVariable( o_m_MuonsAux.innerSmallHoles, "MuonsAux.innerSmallHoles" );	\
    DeclareVariable( o_m_MuonsAux.innerLargeHoles, "MuonsAux.innerLargeHoles" );	\
    DeclareVariable( o_m_MuonsAux.middleSmallHoles, "MuonsAux.middleSmallHoles" );	\
    DeclareVariable( o_m_MuonsAux.middleLargeHoles, "MuonsAux.middleLargeHoles" );	\
    DeclareVariable( o_m_MuonsAux.outerSmallHoles, "MuonsAux.outerSmallHoles" );	\
    DeclareVariable( o_m_MuonsAux.outerLargeHoles, "MuonsAux.outerLargeHoles" );	\
    DeclareVariable( o_m_MuonsAux.extendedSmallHoles, "MuonsAux.extendedSmallHoles" );	\
    DeclareVariable( o_m_MuonsAux.extendedLargeHoles, "MuonsAux.extendedLargeHoles" );	\
    DeclareVariable( o_m_MuonsAux.phiLayer1Hits, "MuonsAux.phiLayer1Hits" );	\
    DeclareVariable( o_m_MuonsAux.phiLayer2Hits, "MuonsAux.phiLayer2Hits" );	\
    DeclareVariable( o_m_MuonsAux.phiLayer3Hits, "MuonsAux.phiLayer3Hits" );	\
    DeclareVariable( o_m_MuonsAux.phiLayer4Hits, "MuonsAux.phiLayer4Hits" );	\
    DeclareVariable( o_m_MuonsAux.etaLayer1Hits, "MuonsAux.etaLayer1Hits" );	\
    DeclareVariable( o_m_MuonsAux.etaLayer2Hits, "MuonsAux.etaLayer2Hits" );	\
    DeclareVariable( o_m_MuonsAux.etaLayer3Hits, "MuonsAux.etaLayer3Hits" );	\
    DeclareVariable( o_m_MuonsAux.etaLayer4Hits, "MuonsAux.etaLayer4Hits" );	\
    DeclareVariable( o_m_MuonsAux.phiLayer1Holes, "MuonsAux.phiLayer1Holes" );	\
    DeclareVariable( o_m_MuonsAux.phiLayer2Holes, "MuonsAux.phiLayer2Holes" );	\
    DeclareVariable( o_m_MuonsAux.phiLayer3Holes, "MuonsAux.phiLayer3Holes" );	\
    DeclareVariable( o_m_MuonsAux.phiLayer4Holes, "MuonsAux.phiLayer4Holes" );	\
    DeclareVariable( o_m_MuonsAux.etaLayer1Holes, "MuonsAux.etaLayer1Holes" );	\
    DeclareVariable( o_m_MuonsAux.etaLayer2Holes, "MuonsAux.etaLayer2Holes" );	\
    DeclareVariable( o_m_MuonsAux.etaLayer3Holes, "MuonsAux.etaLayer3Holes" );	\
    DeclareVariable( o_m_MuonsAux.etaLayer4Holes, "MuonsAux.etaLayer4Holes" );	\
    DeclareVariable( o_m_MuonsAux.energyLossType, "MuonsAux.energyLossType" );	\
    DeclareVariable( o_m_TauRecContainer, "TauRecContainer" );	\
    DeclareVariable( o_m_Muons, "Muons" );	\
    DeclareVariable( o_m_egDetailAOD, "egDetailAOD" );	\
    DeclareVariable( o_m_TruthEvent, "TruthEvent" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux., "GSFTrackParticlesAux." );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.xAOD::AuxContainerBase, "GSFTrackParticlesAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.d0, "GSFTrackParticlesAux.d0" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.z0, "GSFTrackParticlesAux.z0" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.phi, "GSFTrackParticlesAux.phi" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.theta, "GSFTrackParticlesAux.theta" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.qOverP, "GSFTrackParticlesAux.qOverP" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.definingParametersCovMatrix, "GSFTrackParticlesAux.definingParametersCovMatrix" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.vx, "GSFTrackParticlesAux.vx" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.vy, "GSFTrackParticlesAux.vy" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.vz, "GSFTrackParticlesAux.vz" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.parameterX, "GSFTrackParticlesAux.parameterX" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.parameterY, "GSFTrackParticlesAux.parameterY" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.parameterZ, "GSFTrackParticlesAux.parameterZ" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.parameterPX, "GSFTrackParticlesAux.parameterPX" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.parameterPY, "GSFTrackParticlesAux.parameterPY" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.parameterPZ, "GSFTrackParticlesAux.parameterPZ" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.trackParameterCovarianceMatrices, "GSFTrackParticlesAux.trackParameterCovarianceMatrices" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.parameterPosition, "GSFTrackParticlesAux.parameterPosition" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.chiSquared, "GSFTrackParticlesAux.chiSquared" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberDoF, "GSFTrackParticlesAux.numberDoF" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.trackFitter, "GSFTrackParticlesAux.trackFitter" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.particleHypothesis, "GSFTrackParticlesAux.particleHypothesis" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.trackProperties, "GSFTrackParticlesAux.trackProperties" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.patternRecoInfo, "GSFTrackParticlesAux.patternRecoInfo" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfContribPixelLayers, "GSFTrackParticlesAux.numberOfContribPixelLayers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfBLayerHits, "GSFTrackParticlesAux.numberOfBLayerHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfBLayerOutliers, "GSFTrackParticlesAux.numberOfBLayerOutliers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfBLayerSharedHits, "GSFTrackParticlesAux.numberOfBLayerSharedHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfBLayerSplitHits, "GSFTrackParticlesAux.numberOfBLayerSplitHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.expectBLayerHit, "GSFTrackParticlesAux.expectBLayerHit" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPixelHits, "GSFTrackParticlesAux.numberOfPixelHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPixelOutliers, "GSFTrackParticlesAux.numberOfPixelOutliers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPixelHoles, "GSFTrackParticlesAux.numberOfPixelHoles" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPixelSharedHits, "GSFTrackParticlesAux.numberOfPixelSharedHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPixelSplitHits, "GSFTrackParticlesAux.numberOfPixelSplitHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfGangedPixels, "GSFTrackParticlesAux.numberOfGangedPixels" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfGangedFlaggedFakes, "GSFTrackParticlesAux.numberOfGangedFlaggedFakes" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPixelDeadSensors, "GSFTrackParticlesAux.numberOfPixelDeadSensors" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPixelSpoiltHits, "GSFTrackParticlesAux.numberOfPixelSpoiltHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfSCTHits, "GSFTrackParticlesAux.numberOfSCTHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfSCTOutliers, "GSFTrackParticlesAux.numberOfSCTOutliers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfSCTHoles, "GSFTrackParticlesAux.numberOfSCTHoles" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfSCTDoubleHoles, "GSFTrackParticlesAux.numberOfSCTDoubleHoles" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfSCTSharedHits, "GSFTrackParticlesAux.numberOfSCTSharedHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfSCTDeadSensors, "GSFTrackParticlesAux.numberOfSCTDeadSensors" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfSCTSpoiltHits, "GSFTrackParticlesAux.numberOfSCTSpoiltHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfTRTHits, "GSFTrackParticlesAux.numberOfTRTHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfTRTOutliers, "GSFTrackParticlesAux.numberOfTRTOutliers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfTRTHoles, "GSFTrackParticlesAux.numberOfTRTHoles" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfTRTHighThresholdHits, "GSFTrackParticlesAux.numberOfTRTHighThresholdHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers, "GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfTRTDeadStraws, "GSFTrackParticlesAux.numberOfTRTDeadStraws" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfTRTTubeHits, "GSFTrackParticlesAux.numberOfTRTTubeHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfTRTXenonHits, "GSFTrackParticlesAux.numberOfTRTXenonHits" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPrecisionLayers, "GSFTrackParticlesAux.numberOfPrecisionLayers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPrecisionHoleLayers, "GSFTrackParticlesAux.numberOfPrecisionHoleLayers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPhiLayers, "GSFTrackParticlesAux.numberOfPhiLayers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfPhiHoleLayers, "GSFTrackParticlesAux.numberOfPhiHoleLayers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfTriggerEtaLayers, "GSFTrackParticlesAux.numberOfTriggerEtaLayers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers, "GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.numberOfOutliersOnTrack, "GSFTrackParticlesAux.numberOfOutliersOnTrack" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.standardDeviationOfChi2OS, "GSFTrackParticlesAux.standardDeviationOfChi2OS" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.eProbabilityComb, "GSFTrackParticlesAux.eProbabilityComb" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.eProbabilityHT, "GSFTrackParticlesAux.eProbabilityHT" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.eProbabilityToT, "GSFTrackParticlesAux.eProbabilityToT" );	\
    DeclareVariable( o_m_GSFTrackParticlesAux.eProbabilityBrem, "GSFTrackParticlesAux.eProbabilityBrem" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux., "InDetTrackParticlesAux." );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.xAOD::AuxContainerBase, "InDetTrackParticlesAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.d0, "InDetTrackParticlesAux.d0" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.z0, "InDetTrackParticlesAux.z0" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.phi, "InDetTrackParticlesAux.phi" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.theta, "InDetTrackParticlesAux.theta" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.qOverP, "InDetTrackParticlesAux.qOverP" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.definingParametersCovMatrix, "InDetTrackParticlesAux.definingParametersCovMatrix" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.vx, "InDetTrackParticlesAux.vx" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.vy, "InDetTrackParticlesAux.vy" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.vz, "InDetTrackParticlesAux.vz" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.parameterX, "InDetTrackParticlesAux.parameterX" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.parameterY, "InDetTrackParticlesAux.parameterY" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.parameterZ, "InDetTrackParticlesAux.parameterZ" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.parameterPX, "InDetTrackParticlesAux.parameterPX" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.parameterPY, "InDetTrackParticlesAux.parameterPY" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.parameterPZ, "InDetTrackParticlesAux.parameterPZ" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.trackParameterCovarianceMatrices, "InDetTrackParticlesAux.trackParameterCovarianceMatrices" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.parameterPosition, "InDetTrackParticlesAux.parameterPosition" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.chiSquared, "InDetTrackParticlesAux.chiSquared" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberDoF, "InDetTrackParticlesAux.numberDoF" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.trackFitter, "InDetTrackParticlesAux.trackFitter" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.particleHypothesis, "InDetTrackParticlesAux.particleHypothesis" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.trackProperties, "InDetTrackParticlesAux.trackProperties" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.patternRecoInfo, "InDetTrackParticlesAux.patternRecoInfo" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfContribPixelLayers, "InDetTrackParticlesAux.numberOfContribPixelLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfBLayerHits, "InDetTrackParticlesAux.numberOfBLayerHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfBLayerOutliers, "InDetTrackParticlesAux.numberOfBLayerOutliers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfBLayerSharedHits, "InDetTrackParticlesAux.numberOfBLayerSharedHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfBLayerSplitHits, "InDetTrackParticlesAux.numberOfBLayerSplitHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.expectBLayerHit, "InDetTrackParticlesAux.expectBLayerHit" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPixelHits, "InDetTrackParticlesAux.numberOfPixelHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPixelOutliers, "InDetTrackParticlesAux.numberOfPixelOutliers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPixelHoles, "InDetTrackParticlesAux.numberOfPixelHoles" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPixelSharedHits, "InDetTrackParticlesAux.numberOfPixelSharedHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPixelSplitHits, "InDetTrackParticlesAux.numberOfPixelSplitHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfGangedPixels, "InDetTrackParticlesAux.numberOfGangedPixels" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfGangedFlaggedFakes, "InDetTrackParticlesAux.numberOfGangedFlaggedFakes" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPixelDeadSensors, "InDetTrackParticlesAux.numberOfPixelDeadSensors" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPixelSpoiltHits, "InDetTrackParticlesAux.numberOfPixelSpoiltHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfSCTHits, "InDetTrackParticlesAux.numberOfSCTHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfSCTOutliers, "InDetTrackParticlesAux.numberOfSCTOutliers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfSCTHoles, "InDetTrackParticlesAux.numberOfSCTHoles" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfSCTDoubleHoles, "InDetTrackParticlesAux.numberOfSCTDoubleHoles" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfSCTSharedHits, "InDetTrackParticlesAux.numberOfSCTSharedHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfSCTDeadSensors, "InDetTrackParticlesAux.numberOfSCTDeadSensors" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfSCTSpoiltHits, "InDetTrackParticlesAux.numberOfSCTSpoiltHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfTRTHits, "InDetTrackParticlesAux.numberOfTRTHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfTRTOutliers, "InDetTrackParticlesAux.numberOfTRTOutliers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfTRTHoles, "InDetTrackParticlesAux.numberOfTRTHoles" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfTRTHighThresholdHits, "InDetTrackParticlesAux.numberOfTRTHighThresholdHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers, "InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfTRTDeadStraws, "InDetTrackParticlesAux.numberOfTRTDeadStraws" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfTRTTubeHits, "InDetTrackParticlesAux.numberOfTRTTubeHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfTRTXenonHits, "InDetTrackParticlesAux.numberOfTRTXenonHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPrecisionLayers, "InDetTrackParticlesAux.numberOfPrecisionLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPrecisionHoleLayers, "InDetTrackParticlesAux.numberOfPrecisionHoleLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPhiLayers, "InDetTrackParticlesAux.numberOfPhiLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfPhiHoleLayers, "InDetTrackParticlesAux.numberOfPhiHoleLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfTriggerEtaLayers, "InDetTrackParticlesAux.numberOfTriggerEtaLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers, "InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.numberOfOutliersOnTrack, "InDetTrackParticlesAux.numberOfOutliersOnTrack" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.standardDeviationOfChi2OS, "InDetTrackParticlesAux.standardDeviationOfChi2OS" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.eProbabilityComb, "InDetTrackParticlesAux.eProbabilityComb" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.eProbabilityHT, "InDetTrackParticlesAux.eProbabilityHT" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.eProbabilityToT, "InDetTrackParticlesAux.eProbabilityToT" );	\
    DeclareVariable( o_m_InDetTrackParticlesAux.eProbabilityBrem, "InDetTrackParticlesAux.eProbabilityBrem" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux., "InDetTrackParticlesForwardAux." );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.xAOD::AuxContainerBase, "InDetTrackParticlesForwardAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.d0, "InDetTrackParticlesForwardAux.d0" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.z0, "InDetTrackParticlesForwardAux.z0" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.phi, "InDetTrackParticlesForwardAux.phi" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.theta, "InDetTrackParticlesForwardAux.theta" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.qOverP, "InDetTrackParticlesForwardAux.qOverP" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.definingParametersCovMatrix, "InDetTrackParticlesForwardAux.definingParametersCovMatrix" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.vx, "InDetTrackParticlesForwardAux.vx" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.vy, "InDetTrackParticlesForwardAux.vy" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.vz, "InDetTrackParticlesForwardAux.vz" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.parameterX, "InDetTrackParticlesForwardAux.parameterX" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.parameterY, "InDetTrackParticlesForwardAux.parameterY" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.parameterZ, "InDetTrackParticlesForwardAux.parameterZ" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.parameterPX, "InDetTrackParticlesForwardAux.parameterPX" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.parameterPY, "InDetTrackParticlesForwardAux.parameterPY" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.parameterPZ, "InDetTrackParticlesForwardAux.parameterPZ" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.trackParameterCovarianceMatrices, "InDetTrackParticlesForwardAux.trackParameterCovarianceMatrices" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.parameterPosition, "InDetTrackParticlesForwardAux.parameterPosition" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.chiSquared, "InDetTrackParticlesForwardAux.chiSquared" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberDoF, "InDetTrackParticlesForwardAux.numberDoF" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.trackFitter, "InDetTrackParticlesForwardAux.trackFitter" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.particleHypothesis, "InDetTrackParticlesForwardAux.particleHypothesis" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.trackProperties, "InDetTrackParticlesForwardAux.trackProperties" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.patternRecoInfo, "InDetTrackParticlesForwardAux.patternRecoInfo" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfContribPixelLayers, "InDetTrackParticlesForwardAux.numberOfContribPixelLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfBLayerHits, "InDetTrackParticlesForwardAux.numberOfBLayerHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfBLayerOutliers, "InDetTrackParticlesForwardAux.numberOfBLayerOutliers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfBLayerSharedHits, "InDetTrackParticlesForwardAux.numberOfBLayerSharedHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfBLayerSplitHits, "InDetTrackParticlesForwardAux.numberOfBLayerSplitHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.expectBLayerHit, "InDetTrackParticlesForwardAux.expectBLayerHit" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPixelHits, "InDetTrackParticlesForwardAux.numberOfPixelHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPixelOutliers, "InDetTrackParticlesForwardAux.numberOfPixelOutliers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPixelHoles, "InDetTrackParticlesForwardAux.numberOfPixelHoles" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPixelSharedHits, "InDetTrackParticlesForwardAux.numberOfPixelSharedHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPixelSplitHits, "InDetTrackParticlesForwardAux.numberOfPixelSplitHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfGangedPixels, "InDetTrackParticlesForwardAux.numberOfGangedPixels" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes, "InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPixelDeadSensors, "InDetTrackParticlesForwardAux.numberOfPixelDeadSensors" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits, "InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfSCTHits, "InDetTrackParticlesForwardAux.numberOfSCTHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfSCTOutliers, "InDetTrackParticlesForwardAux.numberOfSCTOutliers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfSCTHoles, "InDetTrackParticlesForwardAux.numberOfSCTHoles" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles, "InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfSCTSharedHits, "InDetTrackParticlesForwardAux.numberOfSCTSharedHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfSCTDeadSensors, "InDetTrackParticlesForwardAux.numberOfSCTDeadSensors" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits, "InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfTRTHits, "InDetTrackParticlesForwardAux.numberOfTRTHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfTRTOutliers, "InDetTrackParticlesForwardAux.numberOfTRTOutliers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfTRTHoles, "InDetTrackParticlesForwardAux.numberOfTRTHoles" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits, "InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers, "InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfTRTDeadStraws, "InDetTrackParticlesForwardAux.numberOfTRTDeadStraws" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfTRTTubeHits, "InDetTrackParticlesForwardAux.numberOfTRTTubeHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfTRTXenonHits, "InDetTrackParticlesForwardAux.numberOfTRTXenonHits" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPrecisionLayers, "InDetTrackParticlesForwardAux.numberOfPrecisionLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers, "InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPhiLayers, "InDetTrackParticlesForwardAux.numberOfPhiLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfPhiHoleLayers, "InDetTrackParticlesForwardAux.numberOfPhiHoleLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers, "InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers, "InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.numberOfOutliersOnTrack, "InDetTrackParticlesForwardAux.numberOfOutliersOnTrack" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.standardDeviationOfChi2OS, "InDetTrackParticlesForwardAux.standardDeviationOfChi2OS" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.eProbabilityComb, "InDetTrackParticlesForwardAux.eProbabilityComb" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.eProbabilityHT, "InDetTrackParticlesForwardAux.eProbabilityHT" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.eProbabilityToT, "InDetTrackParticlesForwardAux.eProbabilityToT" );	\
    DeclareVariable( o_m_InDetTrackParticlesForwardAux.eProbabilityBrem, "InDetTrackParticlesForwardAux.eProbabilityBrem" );	\
    DeclareVariable( o_m_CaloCalTopoCluster, "CaloCalTopoCluster" );	\
    DeclareVariable( o_m_EMTopoSW35, "EMTopoSW35" );	\
    DeclareVariable( o_m_LArClusterEMFrwd, "LArClusterEMFrwd" );	\
    DeclareVariable( o_m_LArClusterEMSofte, "LArClusterEMSofte" );	\
    DeclareVariable( o_m_egClusterCollection, "egClusterCollection" );	\
    DeclareVariable( o_m_MuonEntryLayerFilter, "MuonEntryLayerFilter" );	\
    DeclareVariable( o_m_TruthParticle, "TruthParticle" );	\
    DeclareVariable( o_m_TruthVertex, "TruthVertex" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJets, "AntiKt4LCTopoJets" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJets, "AntiKt4TopoEMJets" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJets, "AntiKt6LCTopoJets" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJets, "AntiKt6TopoEMJets" );	\
    DeclareVariable( o_m_PhotonCollectionAux., "PhotonCollectionAux." );	\
    DeclareVariable( o_m_PhotonCollectionAux.xAOD::EgammaAuxContainer_v1, "PhotonCollectionAux.xAOD::EgammaAuxContainer_v1" );	\
    DeclareVariable( o_m_PhotonCollectionAux.convMatchDeltaEta1, "PhotonCollectionAux.convMatchDeltaEta1" );	\
    DeclareVariable( o_m_PhotonCollectionAux.convMatchDeltaEta2, "PhotonCollectionAux.convMatchDeltaEta2" );	\
    DeclareVariable( o_m_PhotonCollectionAux.convMatchDeltaPhi1, "PhotonCollectionAux.convMatchDeltaPhi1" );	\
    DeclareVariable( o_m_PhotonCollectionAux.convMatchDeltaPhi2, "PhotonCollectionAux.convMatchDeltaPhi2" );	\
    DeclareVariable( o_m_TruthVertexAux., "TruthVertexAux." );	\
    DeclareVariable( o_m_TruthVertexAux.xAOD::AuxContainerBase, "TruthVertexAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_TruthVertexAux.id, "TruthVertexAux.id" );	\
    DeclareVariable( o_m_TruthVertexAux.barcode, "TruthVertexAux.barcode" );	\
    DeclareVariable( o_m_TruthVertexAux.x, "TruthVertexAux.x" );	\
    DeclareVariable( o_m_TruthVertexAux.y, "TruthVertexAux.y" );	\
    DeclareVariable( o_m_TruthVertexAux.z, "TruthVertexAux.z" );	\
    DeclareVariable( o_m_TruthVertexAux.t, "TruthVertexAux.t" );	\
    DeclareVariable( o_m_TruthVertexAux.weights, "TruthVertexAux.weights" );	\
    DeclareVariable( o_m_TruthEventAux., "TruthEventAux." );	\
    DeclareVariable( o_m_TruthEventAux.xAOD::AuxContainerBase, "TruthEventAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_TruthEventAux.eventScale, "TruthEventAux.eventScale" );	\
    DeclareVariable( o_m_TruthEventAux.alphaQCD, "TruthEventAux.alphaQCD" );	\
    DeclareVariable( o_m_TruthEventAux.alphaQED, "TruthEventAux.alphaQED" );	\
    DeclareVariable( o_m_TruthEventAux.weights, "TruthEventAux.weights" );	\
    DeclareVariable( o_m_TruthEventAux.crossSection, "TruthEventAux.crossSection" );	\
    DeclareVariable( o_m_TruthEventAux.crossSectionError, "TruthEventAux.crossSectionError" );	\
    DeclareVariable( o_m_GSFTrackParticles, "GSFTrackParticles" );	\
    DeclareVariable( o_m_InDetTrackParticles, "InDetTrackParticles" );	\
    DeclareVariable( o_m_InDetTrackParticlesForward, "InDetTrackParticlesForward" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAux., "AntiKt4LCTopoJetsAux." );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAux.xAOD::AuxContainerBase, "AntiKt4LCTopoJetsAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAux.pt, "AntiKt4LCTopoJetsAux.pt" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAux.eta, "AntiKt4LCTopoJetsAux.eta" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAux.phi, "AntiKt4LCTopoJetsAux.phi" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAux.m, "AntiKt4LCTopoJetsAux.m" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAux.constituentWeights, "AntiKt4LCTopoJetsAux.constituentWeights" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAux., "AntiKt4TopoEMJetsAux." );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAux.xAOD::AuxContainerBase, "AntiKt4TopoEMJetsAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAux.pt, "AntiKt4TopoEMJetsAux.pt" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAux.eta, "AntiKt4TopoEMJetsAux.eta" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAux.phi, "AntiKt4TopoEMJetsAux.phi" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAux.m, "AntiKt4TopoEMJetsAux.m" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAux.constituentWeights, "AntiKt4TopoEMJetsAux.constituentWeights" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAux., "AntiKt6LCTopoJetsAux." );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAux.xAOD::AuxContainerBase, "AntiKt6LCTopoJetsAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAux.pt, "AntiKt6LCTopoJetsAux.pt" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAux.eta, "AntiKt6LCTopoJetsAux.eta" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAux.phi, "AntiKt6LCTopoJetsAux.phi" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAux.m, "AntiKt6LCTopoJetsAux.m" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAux.constituentWeights, "AntiKt6LCTopoJetsAux.constituentWeights" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAux., "AntiKt6TopoEMJetsAux." );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAux.xAOD::AuxContainerBase, "AntiKt6TopoEMJetsAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAux.pt, "AntiKt6TopoEMJetsAux.pt" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAux.eta, "AntiKt6TopoEMJetsAux.eta" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAux.phi, "AntiKt6TopoEMJetsAux.phi" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAux.m, "AntiKt6TopoEMJetsAux.m" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAux.constituentWeights, "AntiKt6TopoEMJetsAux.constituentWeights" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux., "CaloCalTopoClusterAux." );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.xAOD::AuxContainerBase, "CaloCalTopoClusterAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.basicSignal, "CaloCalTopoClusterAux.basicSignal" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.time, "CaloCalTopoClusterAux.time" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.samplingPattern, "CaloCalTopoClusterAux.samplingPattern" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.clusterSize, "CaloCalTopoClusterAux.clusterSize" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.eta0, "CaloCalTopoClusterAux.eta0" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.phi0, "CaloCalTopoClusterAux.phi0" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.nBarrel, "CaloCalTopoClusterAux.nBarrel" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.nEndcap, "CaloCalTopoClusterAux.nEndcap" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.rawE, "CaloCalTopoClusterAux.rawE" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.rawEta, "CaloCalTopoClusterAux.rawEta" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.rawPhi, "CaloCalTopoClusterAux.rawPhi" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.rawM, "CaloCalTopoClusterAux.rawM" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.altE, "CaloCalTopoClusterAux.altE" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.altEta, "CaloCalTopoClusterAux.altEta" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.altPhi, "CaloCalTopoClusterAux.altPhi" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.altM, "CaloCalTopoClusterAux.altM" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.calE, "CaloCalTopoClusterAux.calE" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.calEta, "CaloCalTopoClusterAux.calEta" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.calPhi, "CaloCalTopoClusterAux.calPhi" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.calM, "CaloCalTopoClusterAux.calM" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.e_sampl, "CaloCalTopoClusterAux.e_sampl" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.eta_sampl, "CaloCalTopoClusterAux.eta_sampl" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAux.phi_sampl, "CaloCalTopoClusterAux.phi_sampl" );	\
    DeclareVariable( o_m_EMTopoSW35Aux., "EMTopoSW35Aux." );	\
    DeclareVariable( o_m_EMTopoSW35Aux.xAOD::AuxContainerBase, "EMTopoSW35Aux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.basicSignal, "EMTopoSW35Aux.basicSignal" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.time, "EMTopoSW35Aux.time" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.samplingPattern, "EMTopoSW35Aux.samplingPattern" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.clusterSize, "EMTopoSW35Aux.clusterSize" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.eta0, "EMTopoSW35Aux.eta0" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.phi0, "EMTopoSW35Aux.phi0" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.nBarrel, "EMTopoSW35Aux.nBarrel" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.nEndcap, "EMTopoSW35Aux.nEndcap" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.rawE, "EMTopoSW35Aux.rawE" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.rawEta, "EMTopoSW35Aux.rawEta" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.rawPhi, "EMTopoSW35Aux.rawPhi" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.rawM, "EMTopoSW35Aux.rawM" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.altE, "EMTopoSW35Aux.altE" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.altEta, "EMTopoSW35Aux.altEta" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.altPhi, "EMTopoSW35Aux.altPhi" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.altM, "EMTopoSW35Aux.altM" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.calE, "EMTopoSW35Aux.calE" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.calEta, "EMTopoSW35Aux.calEta" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.calPhi, "EMTopoSW35Aux.calPhi" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.calM, "EMTopoSW35Aux.calM" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.e_sampl, "EMTopoSW35Aux.e_sampl" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.eta_sampl, "EMTopoSW35Aux.eta_sampl" );	\
    DeclareVariable( o_m_EMTopoSW35Aux.phi_sampl, "EMTopoSW35Aux.phi_sampl" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux., "LArClusterEMFrwdAux." );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.xAOD::AuxContainerBase, "LArClusterEMFrwdAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.basicSignal, "LArClusterEMFrwdAux.basicSignal" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.time, "LArClusterEMFrwdAux.time" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.samplingPattern, "LArClusterEMFrwdAux.samplingPattern" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.clusterSize, "LArClusterEMFrwdAux.clusterSize" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.eta0, "LArClusterEMFrwdAux.eta0" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.phi0, "LArClusterEMFrwdAux.phi0" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.nBarrel, "LArClusterEMFrwdAux.nBarrel" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.nEndcap, "LArClusterEMFrwdAux.nEndcap" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.rawE, "LArClusterEMFrwdAux.rawE" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.rawEta, "LArClusterEMFrwdAux.rawEta" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.rawPhi, "LArClusterEMFrwdAux.rawPhi" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.rawM, "LArClusterEMFrwdAux.rawM" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.altE, "LArClusterEMFrwdAux.altE" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.altEta, "LArClusterEMFrwdAux.altEta" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.altPhi, "LArClusterEMFrwdAux.altPhi" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.altM, "LArClusterEMFrwdAux.altM" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.calE, "LArClusterEMFrwdAux.calE" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.calEta, "LArClusterEMFrwdAux.calEta" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.calPhi, "LArClusterEMFrwdAux.calPhi" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.calM, "LArClusterEMFrwdAux.calM" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.e_sampl, "LArClusterEMFrwdAux.e_sampl" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.eta_sampl, "LArClusterEMFrwdAux.eta_sampl" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAux.phi_sampl, "LArClusterEMFrwdAux.phi_sampl" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux., "LArClusterEMSofteAux." );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.xAOD::AuxContainerBase, "LArClusterEMSofteAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.basicSignal, "LArClusterEMSofteAux.basicSignal" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.time, "LArClusterEMSofteAux.time" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.samplingPattern, "LArClusterEMSofteAux.samplingPattern" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.clusterSize, "LArClusterEMSofteAux.clusterSize" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.eta0, "LArClusterEMSofteAux.eta0" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.phi0, "LArClusterEMSofteAux.phi0" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.nBarrel, "LArClusterEMSofteAux.nBarrel" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.nEndcap, "LArClusterEMSofteAux.nEndcap" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.rawE, "LArClusterEMSofteAux.rawE" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.rawEta, "LArClusterEMSofteAux.rawEta" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.rawPhi, "LArClusterEMSofteAux.rawPhi" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.rawM, "LArClusterEMSofteAux.rawM" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.altE, "LArClusterEMSofteAux.altE" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.altEta, "LArClusterEMSofteAux.altEta" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.altPhi, "LArClusterEMSofteAux.altPhi" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.altM, "LArClusterEMSofteAux.altM" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.calE, "LArClusterEMSofteAux.calE" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.calEta, "LArClusterEMSofteAux.calEta" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.calPhi, "LArClusterEMSofteAux.calPhi" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.calM, "LArClusterEMSofteAux.calM" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.e_sampl, "LArClusterEMSofteAux.e_sampl" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.eta_sampl, "LArClusterEMSofteAux.eta_sampl" );	\
    DeclareVariable( o_m_LArClusterEMSofteAux.phi_sampl, "LArClusterEMSofteAux.phi_sampl" );	\
    DeclareVariable( o_m_egClusterCollectionAux., "egClusterCollectionAux." );	\
    DeclareVariable( o_m_egClusterCollectionAux.xAOD::AuxContainerBase, "egClusterCollectionAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_egClusterCollectionAux.basicSignal, "egClusterCollectionAux.basicSignal" );	\
    DeclareVariable( o_m_egClusterCollectionAux.time, "egClusterCollectionAux.time" );	\
    DeclareVariable( o_m_egClusterCollectionAux.samplingPattern, "egClusterCollectionAux.samplingPattern" );	\
    DeclareVariable( o_m_egClusterCollectionAux.clusterSize, "egClusterCollectionAux.clusterSize" );	\
    DeclareVariable( o_m_egClusterCollectionAux.eta0, "egClusterCollectionAux.eta0" );	\
    DeclareVariable( o_m_egClusterCollectionAux.phi0, "egClusterCollectionAux.phi0" );	\
    DeclareVariable( o_m_egClusterCollectionAux.nBarrel, "egClusterCollectionAux.nBarrel" );	\
    DeclareVariable( o_m_egClusterCollectionAux.nEndcap, "egClusterCollectionAux.nEndcap" );	\
    DeclareVariable( o_m_egClusterCollectionAux.rawE, "egClusterCollectionAux.rawE" );	\
    DeclareVariable( o_m_egClusterCollectionAux.rawEta, "egClusterCollectionAux.rawEta" );	\
    DeclareVariable( o_m_egClusterCollectionAux.rawPhi, "egClusterCollectionAux.rawPhi" );	\
    DeclareVariable( o_m_egClusterCollectionAux.rawM, "egClusterCollectionAux.rawM" );	\
    DeclareVariable( o_m_egClusterCollectionAux.altE, "egClusterCollectionAux.altE" );	\
    DeclareVariable( o_m_egClusterCollectionAux.altEta, "egClusterCollectionAux.altEta" );	\
    DeclareVariable( o_m_egClusterCollectionAux.altPhi, "egClusterCollectionAux.altPhi" );	\
    DeclareVariable( o_m_egClusterCollectionAux.altM, "egClusterCollectionAux.altM" );	\
    DeclareVariable( o_m_egClusterCollectionAux.calE, "egClusterCollectionAux.calE" );	\
    DeclareVariable( o_m_egClusterCollectionAux.calEta, "egClusterCollectionAux.calEta" );	\
    DeclareVariable( o_m_egClusterCollectionAux.calPhi, "egClusterCollectionAux.calPhi" );	\
    DeclareVariable( o_m_egClusterCollectionAux.calM, "egClusterCollectionAux.calM" );	\
    DeclareVariable( o_m_egClusterCollectionAux.e_sampl, "egClusterCollectionAux.e_sampl" );	\
    DeclareVariable( o_m_egClusterCollectionAux.eta_sampl, "egClusterCollectionAux.eta_sampl" );	\
    DeclareVariable( o_m_egClusterCollectionAux.phi_sampl, "egClusterCollectionAux.phi_sampl" );	\
    DeclareVariable( o_m_TauRecContainerAux., "TauRecContainerAux." );	\
    DeclareVariable( o_m_TauRecContainerAux.xAOD::AuxContainerBase, "TauRecContainerAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_TauRecContainerAux.pt, "TauRecContainerAux.pt" );	\
    DeclareVariable( o_m_TauRecContainerAux.eta, "TauRecContainerAux.eta" );	\
    DeclareVariable( o_m_TauRecContainerAux.phi, "TauRecContainerAux.phi" );	\
    DeclareVariable( o_m_TauRecContainerAux.e, "TauRecContainerAux.e" );	\
    DeclareVariable( o_m_TauRecContainerAux.m, "TauRecContainerAux.m" );	\
    DeclareVariable( o_m_TauRecContainerAux.ROIWord, "TauRecContainerAux.ROIWord" );	\
    DeclareVariable( o_m_TauRecContainerAux.charge, "TauRecContainerAux.charge" );	\
    DeclareVariable( o_m_TauRecContainerAux.vetoFlags, "TauRecContainerAux.vetoFlags" );	\
    DeclareVariable( o_m_TauRecContainerAux.isTauFlags, "TauRecContainerAux.isTauFlags" );	\
    DeclareVariable( o_m_TauRecContainerAux.Likelihood, "TauRecContainerAux.Likelihood" );	\
    DeclareVariable( o_m_TauRecContainerAux.SafeLikelihood, "TauRecContainerAux.SafeLikelihood" );	\
    DeclareVariable( o_m_TauRecContainerAux.BDTJetScore, "TauRecContainerAux.BDTJetScore" );	\
    DeclareVariable( o_m_TauRecContainerAux.BDTEleScore, "TauRecContainerAux.BDTEleScore" );	\
    DeclareVariable( o_m_TauRecContainerAux.PanTauScore, "TauRecContainerAux.PanTauScore" );	\
    DeclareVariable( o_m_TauRecContainerAux.trackFilterPass, "TauRecContainerAux.trackFilterPass" );	\
    DeclareVariable( o_m_TauRecContainerAux.trackFilterProngs, "TauRecContainerAux.trackFilterProngs" );	\
    DeclareVariable( o_m_TauRecContainerAux.trackFilterQuality, "TauRecContainerAux.trackFilterQuality" );	\
    DeclareVariable( o_m_TauRecContainerAux.pi0ConeDR, "TauRecContainerAux.pi0ConeDR" );	\
    DeclareVariable( o_m_TauRecContainerAux.ipZ0SinThetaSigLeadTrk, "TauRecContainerAux.ipZ0SinThetaSigLeadTrk" );	\
    DeclareVariable( o_m_TauRecContainerAux.etOverPtLeadTrk, "TauRecContainerAux.etOverPtLeadTrk" );	\
    DeclareVariable( o_m_TauRecContainerAux.leadTrkPt, "TauRecContainerAux.leadTrkPt" );	\
    DeclareVariable( o_m_TauRecContainerAux.ipSigLeadTrk, "TauRecContainerAux.ipSigLeadTrk" );	\
    DeclareVariable( o_m_TauRecContainerAux.ipSigLeadLooseTrk, "TauRecContainerAux.ipSigLeadLooseTrk" );	\
    DeclareVariable( o_m_TauRecContainerAux.etOverPtLeadLooseTrk, "TauRecContainerAux.etOverPtLeadLooseTrk" );	\
    DeclareVariable( o_m_TauRecContainerAux.leadLooseTrkPt, "TauRecContainerAux.leadLooseTrkPt" );	\
    DeclareVariable( o_m_TauRecContainerAux.chrgLooseTrk, "TauRecContainerAux.chrgLooseTrk" );	\
    DeclareVariable( o_m_TauRecContainerAux.massTrkSys, "TauRecContainerAux.massTrkSys" );	\
    DeclareVariable( o_m_TauRecContainerAux.trkWidth2, "TauRecContainerAux.trkWidth2" );	\
    DeclareVariable( o_m_TauRecContainerAux.trFlightPathSig, "TauRecContainerAux.trFlightPathSig" );	\
    DeclareVariable( o_m_TauRecContainerAux.etEflow, "TauRecContainerAux.etEflow" );	\
    DeclareVariable( o_m_TauRecContainerAux.mEflow, "TauRecContainerAux.mEflow" );	\
    DeclareVariable( o_m_TauRecContainerAux.ele_E237E277, "TauRecContainerAux.ele_E237E277" );	\
    DeclareVariable( o_m_TauRecContainerAux.ele_PresamplerFraction, "TauRecContainerAux.ele_PresamplerFraction" );	\
    DeclareVariable( o_m_TauRecContainerAux.ele_ECALFirstFraction, "TauRecContainerAux.ele_ECALFirstFraction" );	\
    DeclareVariable( o_m_TauRecContainerAux.numCells, "TauRecContainerAux.numCells" );	\
    DeclareVariable( o_m_TauRecContainerAux.numTopoClusters, "TauRecContainerAux.numTopoClusters" );	\
    DeclareVariable( o_m_TauRecContainerAux.numEffTopoClusters, "TauRecContainerAux.numEffTopoClusters" );	\
    DeclareVariable( o_m_TauRecContainerAux.topoInvMass, "TauRecContainerAux.topoInvMass" );	\
    DeclareVariable( o_m_TauRecContainerAux.effTopoInvMass, "TauRecContainerAux.effTopoInvMass" );	\
    DeclareVariable( o_m_TauRecContainerAux.topoMeanDeltaR, "TauRecContainerAux.topoMeanDeltaR" );	\
    DeclareVariable( o_m_TauRecContainerAux.effTopoMeanDeltaR, "TauRecContainerAux.effTopoMeanDeltaR" );	\
    DeclareVariable( o_m_TauRecContainerAux.EMRadius, "TauRecContainerAux.EMRadius" );	\
    DeclareVariable( o_m_TauRecContainerAux.hadRadius, "TauRecContainerAux.hadRadius" );	\
    DeclareVariable( o_m_TauRecContainerAux.etEMAtEMScale, "TauRecContainerAux.etEMAtEMScale" );	\
    DeclareVariable( o_m_TauRecContainerAux.etHadAtEMScale, "TauRecContainerAux.etHadAtEMScale" );	\
    DeclareVariable( o_m_TauRecContainerAux.isolFrac, "TauRecContainerAux.isolFrac" );	\
    DeclareVariable( o_m_TauRecContainerAux.centFrac, "TauRecContainerAux.centFrac" );	\
    DeclareVariable( o_m_TauRecContainerAux.stripWidth2, "TauRecContainerAux.stripWidth2" );	\
    DeclareVariable( o_m_TauRecContainerAux.nStrip, "TauRecContainerAux.nStrip" );	\
    DeclareVariable( o_m_TauRecContainerAux.etEMCalib, "TauRecContainerAux.etEMCalib" );	\
    DeclareVariable( o_m_TauRecContainerAux.etHadCalib, "TauRecContainerAux.etHadCalib" );	\
    DeclareVariable( o_m_TauRecContainerAux.seedCalo_eta, "TauRecContainerAux.seedCalo_eta" );	\
    DeclareVariable( o_m_TauRecContainerAux.seedCalo_phi, "TauRecContainerAux.seedCalo_phi" );	\
    DeclareVariable( o_m_TauRecContainerAux.nIsolLooseTrk, "TauRecContainerAux.nIsolLooseTrk" );	\
    DeclareVariable( o_m_TauRecContainerAux.trkAvgDist, "TauRecContainerAux.trkAvgDist" );	\
    DeclareVariable( o_m_TauRecContainerAux.trkRmsDist, "TauRecContainerAux.trkRmsDist" );	\
    DeclareVariable( o_m_TauRecContainerAux.lead2ClusterEOverAllClusterE, "TauRecContainerAux.lead2ClusterEOverAllClusterE" );	\
    DeclareVariable( o_m_TauRecContainerAux.lead3ClusterEOverAllClusterE, "TauRecContainerAux.lead3ClusterEOverAllClusterE" );	\
    DeclareVariable( o_m_TauRecContainerAux.caloIso, "TauRecContainerAux.caloIso" );	\
    DeclareVariable( o_m_TauRecContainerAux.caloIsoCorrected, "TauRecContainerAux.caloIsoCorrected" );	\
    DeclareVariable( o_m_TauRecContainerAux.dRmax, "TauRecContainerAux.dRmax" );	\
    DeclareVariable( o_m_TauRecContainerAux.secMaxStripEt, "TauRecContainerAux.secMaxStripEt" );	\
    DeclareVariable( o_m_TauRecContainerAux.sumEMCellEtOverLeadTrkPt, "TauRecContainerAux.sumEMCellEtOverLeadTrkPt" );	\
    DeclareVariable( o_m_TauRecContainerAux.hadLeakEt, "TauRecContainerAux.hadLeakEt" );	\
    DeclareVariable( o_m_TauRecContainerAux.EM_TES_scale, "TauRecContainerAux.EM_TES_scale" );	\
    DeclareVariable( o_m_TauRecContainerAux.LC_TES_precalib, "TauRecContainerAux.LC_TES_precalib" );	\
    DeclareVariable( o_m_TauRecContainerAux.cellBasedEnergyRing1, "TauRecContainerAux.cellBasedEnergyRing1" );	\
    DeclareVariable( o_m_TauRecContainerAux.cellBasedEnergyRing2, "TauRecContainerAux.cellBasedEnergyRing2" );	\
    DeclareVariable( o_m_TauRecContainerAux.cellBasedEnergyRing3, "TauRecContainerAux.cellBasedEnergyRing3" );	\
    DeclareVariable( o_m_TauRecContainerAux.cellBasedEnergyRing4, "TauRecContainerAux.cellBasedEnergyRing4" );	\
    DeclareVariable( o_m_TauRecContainerAux.cellBasedEnergyRing5, "TauRecContainerAux.cellBasedEnergyRing5" );	\
    DeclareVariable( o_m_TauRecContainerAux.cellBasedEnergyRing6, "TauRecContainerAux.cellBasedEnergyRing6" );	\
    DeclareVariable( o_m_TauRecContainerAux.cellBasedEnergyRing7, "TauRecContainerAux.cellBasedEnergyRing7" );	\
    DeclareVariable( o_m_TauRecContainerAux.TRT_NHT_OVER_NLT, "TauRecContainerAux.TRT_NHT_OVER_NLT" );	\
    DeclareVariable( o_m_TauRecContainerAux.TauJetVtxFraction, "TauRecContainerAux.TauJetVtxFraction" );	\
    DeclareVariable( o_m_TauRecContainerAux.nPi0, "TauRecContainerAux.nPi0" );	\
    DeclareVariable( o_m_TauRecContainerAux.nCharged, "TauRecContainerAux.nCharged" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate, "TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_DecayModeProto, "TauRecContainerAux.pantau_CellBasedInput_DecayModeProto" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_DecayMode, "TauRecContainerAux.pantau_CellBasedInput_DecayMode" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n, "TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn, "TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn, "TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts, "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt, "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts, "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM, "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1, "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2, "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts, "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts, "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed, "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged, "TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate, "TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_DecayModeProto, "TauRecContainerAux.pantau_eflowRecInput_DecayModeProto" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_DecayMode, "TauRecContainerAux.pantau_eflowRecInput_DecayMode" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n, "TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn, "TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn, "TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts, "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts, "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt, "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts, "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM, "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1, "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2, "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts, "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts, "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts" );	\
    DeclareVariable( o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged, "TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged" );	\
    DeclareVariable( o_m_LArCalibrationHitActive, "LArCalibrationHitActive" );	\
    DeclareVariable( o_m_LArCalibrationHitDeadMaterial, "LArCalibrationHitDeadMaterial" );	\
    DeclareVariable( o_m_LArCalibrationHitInactive, "LArCalibrationHitInactive" );	\
    DeclareVariable( o_m_GSFTrackParticleTruthCollection, "GSFTrackParticleTruthCollection" );	\
    DeclareVariable( o_m_AllPhotonsVxCandidatesAux., "AllPhotonsVxCandidatesAux." );	\
    DeclareVariable( o_m_AllPhotonsVxCandidatesAux.xAOD::AuxContainerBase, "AllPhotonsVxCandidatesAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_AllPhotonsVxCandidatesAux.chiSquared, "AllPhotonsVxCandidatesAux.chiSquared" );	\
    DeclareVariable( o_m_AllPhotonsVxCandidatesAux.numberDoF, "AllPhotonsVxCandidatesAux.numberDoF" );	\
    DeclareVariable( o_m_AllPhotonsVxCandidatesAux.x, "AllPhotonsVxCandidatesAux.x" );	\
    DeclareVariable( o_m_AllPhotonsVxCandidatesAux.y, "AllPhotonsVxCandidatesAux.y" );	\
    DeclareVariable( o_m_AllPhotonsVxCandidatesAux.z, "AllPhotonsVxCandidatesAux.z" );	\
    DeclareVariable( o_m_AllPhotonsVxCandidatesAux.covariance, "AllPhotonsVxCandidatesAux.covariance" );	\
    DeclareVariable( o_m_AllPhotonsVxCandidatesAux.vertexType, "AllPhotonsVxCandidatesAux.vertexType" );	\
    DeclareVariable( o_m_AllPhotonsVxCandidatesAux.trackWeights, "AllPhotonsVxCandidatesAux.trackWeights" );	\
    DeclareVariable( o_m_PrimaryVerticesAux., "PrimaryVerticesAux." );	\
    DeclareVariable( o_m_PrimaryVerticesAux.xAOD::AuxContainerBase, "PrimaryVerticesAux.xAOD::AuxContainerBase" );	\
    DeclareVariable( o_m_PrimaryVerticesAux.chiSquared, "PrimaryVerticesAux.chiSquared" );	\
    DeclareVariable( o_m_PrimaryVerticesAux.numberDoF, "PrimaryVerticesAux.numberDoF" );	\
    DeclareVariable( o_m_PrimaryVerticesAux.x, "PrimaryVerticesAux.x" );	\
    DeclareVariable( o_m_PrimaryVerticesAux.y, "PrimaryVerticesAux.y" );	\
    DeclareVariable( o_m_PrimaryVerticesAux.z, "PrimaryVerticesAux.z" );	\
    DeclareVariable( o_m_PrimaryVerticesAux.covariance, "PrimaryVerticesAux.covariance" );	\
    DeclareVariable( o_m_PrimaryVerticesAux.vertexType, "PrimaryVerticesAux.vertexType" );	\
    DeclareVariable( o_m_PrimaryVerticesAux.trackWeights, "PrimaryVerticesAux.trackWeights" );	\
    DeclareVariable( o_m_MuonClusterCollection_Link, "MuonClusterCollection_Link" );	\
    DeclareVariable( o_m_MuonCaloEnergyCollection, "MuonCaloEnergyCollection" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Perp, "AntiKt4LCTopoJetsAuxDyn.IsoDelta2Perp" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Par, "AntiKt4LCTopoJetsAuxDyn.IsoDelta2Par" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2SumPt, "AntiKt4LCTopoJetsAuxDyn.IsoDelta2SumPt" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Perp, "AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Perp" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Par, "AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Par" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8SumPt, "AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8SumPt" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Perp, "AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Perp" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Par, "AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Par" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13SumPt, "AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13SumPt" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Perp, "AntiKt4LCTopoJetsAuxDyn.Iso6To88Perp" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Par, "AntiKt4LCTopoJetsAuxDyn.Iso6To88Par" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88SumPt, "AntiKt4LCTopoJetsAuxDyn.Iso6To88SumPt" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.WIDTH, "AntiKt4LCTopoJetsAuxDyn.WIDTH" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.pt_truth, "AntiKt4LCTopoJetsAuxDyn.pt_truth" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerB, "AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerB" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB1, "AntiKt4LCTopoJetsAuxDyn.energy_EMB1" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB2, "AntiKt4LCTopoJetsAuxDyn.energy_EMB2" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB3, "AntiKt4LCTopoJetsAuxDyn.energy_EMB3" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar0, "AntiKt4LCTopoJetsAuxDyn.energy_TileBar0" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap1, "AntiKt4LCTopoJetsAuxDyn.energy_TileGap1" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap3, "AntiKt4LCTopoJetsAuxDyn.energy_TileGap3" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar1, "AntiKt4LCTopoJetsAuxDyn.energy_TileBar1" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar2, "AntiKt4LCTopoJetsAuxDyn.energy_TileBar2" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap2, "AntiKt4LCTopoJetsAuxDyn.energy_TileGap2" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.constituentScale, "AntiKt4LCTopoJetsAuxDyn.constituentScale" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.KtDr, "AntiKt4LCTopoJetsAuxDyn.KtDr" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_pt, "AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_pt" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.OriginIndex, "AntiKt4LCTopoJetsAuxDyn.OriginIndex" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_eta, "AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_eta" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.JVF, "AntiKt4LCTopoJetsAuxDyn.JVF" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_phi, "AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_phi" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_CELL, "AntiKt4LCTopoJetsAuxDyn.BCH_CORR_CELL" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_m, "AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_m" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_DOTX, "AntiKt4LCTopoJetsAuxDyn.BCH_CORR_DOTX" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_pt, "AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_pt" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_JET, "AntiKt4LCTopoJetsAuxDyn.BCH_CORR_JET" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_eta, "AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_eta" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.nTrk_pv0_1GeV, "AntiKt4LCTopoJetsAuxDyn.nTrk_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_phi, "AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_phi" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV, "AntiKt4LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_m, "AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_m" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV, "AntiKt4LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.LArQuality, "AntiKt4LCTopoJetsAuxDyn.LArQuality" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.Timing, "AntiKt4LCTopoJetsAuxDyn.Timing" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.HECQuality, "AntiKt4LCTopoJetsAuxDyn.HECQuality" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.NegativeE, "AntiKt4LCTopoJetsAuxDyn.NegativeE" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.AverageLArQF, "AntiKt4LCTopoJetsAuxDyn.AverageLArQF" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.Centroid_r, "AntiKt4LCTopoJetsAuxDyn.Centroid_r" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters5, "AntiKt4LCTopoJetsAuxDyn.ootFracClusters5" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters10, "AntiKt4LCTopoJetsAuxDyn.ootFracClusters10" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.TruthMFindex, "AntiKt4LCTopoJetsAuxDyn.TruthMFindex" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.TruthMF, "AntiKt4LCTopoJetsAuxDyn.TruthMF" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.NumTowers, "AntiKt4LCTopoJetsAuxDyn.NumTowers" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.ActiveArea, "AntiKt4LCTopoJetsAuxDyn.ActiveArea" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPx, "AntiKt4LCTopoJetsAuxDyn.ActiveAreaPx" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPy, "AntiKt4LCTopoJetsAuxDyn.ActiveAreaPy" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPz, "AntiKt4LCTopoJetsAuxDyn.ActiveAreaPz" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaE, "AntiKt4LCTopoJetsAuxDyn.ActiveAreaE" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Perp, "AntiKt4LCTopoJetsAuxDyn.IsoKR20Perp" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Par, "AntiKt4LCTopoJetsAuxDyn.IsoKR20Par" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20SumPt, "AntiKt4LCTopoJetsAuxDyn.IsoKR20SumPt" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Perp, "AntiKt4TopoEMJetsAuxDyn.IsoDelta2Perp" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Par, "AntiKt4TopoEMJetsAuxDyn.IsoDelta2Par" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2SumPt, "AntiKt4TopoEMJetsAuxDyn.IsoDelta2SumPt" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Perp, "AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Perp" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Par, "AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Par" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8SumPt, "AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8SumPt" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Perp, "AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Perp" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Par, "AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Par" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13SumPt, "AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13SumPt" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Perp, "AntiKt4TopoEMJetsAuxDyn.Iso6To88Perp" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Par, "AntiKt4TopoEMJetsAuxDyn.Iso6To88Par" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88SumPt, "AntiKt4TopoEMJetsAuxDyn.Iso6To88SumPt" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.WIDTH, "AntiKt4TopoEMJetsAuxDyn.WIDTH" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.pt_truth, "AntiKt4TopoEMJetsAuxDyn.pt_truth" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerB, "AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerB" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB1, "AntiKt4TopoEMJetsAuxDyn.energy_EMB1" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB2, "AntiKt4TopoEMJetsAuxDyn.energy_EMB2" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB3, "AntiKt4TopoEMJetsAuxDyn.energy_EMB3" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap3, "AntiKt4TopoEMJetsAuxDyn.energy_TileGap3" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.constituentScale, "AntiKt4TopoEMJetsAuxDyn.constituentScale" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_pt, "AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_pt" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.OriginIndex, "AntiKt4TopoEMJetsAuxDyn.OriginIndex" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_eta, "AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_eta" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.JVF, "AntiKt4TopoEMJetsAuxDyn.JVF" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_phi, "AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_phi" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_CELL, "AntiKt4TopoEMJetsAuxDyn.BCH_CORR_CELL" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_m, "AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_m" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_DOTX, "AntiKt4TopoEMJetsAuxDyn.BCH_CORR_DOTX" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_pt, "AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_pt" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_JET, "AntiKt4TopoEMJetsAuxDyn.BCH_CORR_JET" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_eta, "AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_eta" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.nTrk_pv0_1GeV, "AntiKt4TopoEMJetsAuxDyn.nTrk_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_phi, "AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_phi" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV, "AntiKt4TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_m, "AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_m" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV, "AntiKt4TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.LArQuality, "AntiKt4TopoEMJetsAuxDyn.LArQuality" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.Timing, "AntiKt4TopoEMJetsAuxDyn.Timing" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.HECQuality, "AntiKt4TopoEMJetsAuxDyn.HECQuality" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.NegativeE, "AntiKt4TopoEMJetsAuxDyn.NegativeE" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.AverageLArQF, "AntiKt4TopoEMJetsAuxDyn.AverageLArQF" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.Centroid_r, "AntiKt4TopoEMJetsAuxDyn.Centroid_r" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters5, "AntiKt4TopoEMJetsAuxDyn.ootFracClusters5" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters10, "AntiKt4TopoEMJetsAuxDyn.ootFracClusters10" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.TruthMFindex, "AntiKt4TopoEMJetsAuxDyn.TruthMFindex" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.TruthMF, "AntiKt4TopoEMJetsAuxDyn.TruthMF" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.NumTowers, "AntiKt4TopoEMJetsAuxDyn.NumTowers" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerE, "AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerE" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME1, "AntiKt4TopoEMJetsAuxDyn.energy_EME1" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME2, "AntiKt4TopoEMJetsAuxDyn.energy_EME2" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME3, "AntiKt4TopoEMJetsAuxDyn.energy_EME3" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC0, "AntiKt4TopoEMJetsAuxDyn.energy_HEC0" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC1, "AntiKt4TopoEMJetsAuxDyn.energy_HEC1" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt0, "AntiKt4TopoEMJetsAuxDyn.energy_TileExt0" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt1, "AntiKt4TopoEMJetsAuxDyn.energy_TileExt1" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.n90, "AntiKt4TopoEMJetsAuxDyn.n90" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.ActiveArea, "AntiKt4TopoEMJetsAuxDyn.ActiveArea" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPx, "AntiKt4TopoEMJetsAuxDyn.ActiveAreaPx" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPy, "AntiKt4TopoEMJetsAuxDyn.ActiveAreaPy" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPz, "AntiKt4TopoEMJetsAuxDyn.ActiveAreaPz" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaE, "AntiKt4TopoEMJetsAuxDyn.ActiveAreaE" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Perp, "AntiKt4TopoEMJetsAuxDyn.IsoKR20Perp" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Par, "AntiKt4TopoEMJetsAuxDyn.IsoKR20Par" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20SumPt, "AntiKt4TopoEMJetsAuxDyn.IsoKR20SumPt" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Perp, "AntiKt6LCTopoJetsAuxDyn.IsoDelta2Perp" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Par, "AntiKt6LCTopoJetsAuxDyn.IsoDelta2Par" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2SumPt, "AntiKt6LCTopoJetsAuxDyn.IsoDelta2SumPt" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Perp, "AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Perp" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Par, "AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Par" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8SumPt, "AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8SumPt" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Perp, "AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Perp" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Par, "AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Par" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13SumPt, "AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13SumPt" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Perp, "AntiKt6LCTopoJetsAuxDyn.Iso6To88Perp" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Par, "AntiKt6LCTopoJetsAuxDyn.Iso6To88Par" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88SumPt, "AntiKt6LCTopoJetsAuxDyn.Iso6To88SumPt" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.WIDTH, "AntiKt6LCTopoJetsAuxDyn.WIDTH" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.pt_truth, "AntiKt6LCTopoJetsAuxDyn.pt_truth" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerB, "AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerB" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB1, "AntiKt6LCTopoJetsAuxDyn.energy_EMB1" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB2, "AntiKt6LCTopoJetsAuxDyn.energy_EMB2" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB3, "AntiKt6LCTopoJetsAuxDyn.energy_EMB3" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar0, "AntiKt6LCTopoJetsAuxDyn.energy_TileBar0" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar1, "AntiKt6LCTopoJetsAuxDyn.energy_TileBar1" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar2, "AntiKt6LCTopoJetsAuxDyn.energy_TileBar2" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.constituentScale, "AntiKt6LCTopoJetsAuxDyn.constituentScale" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.KtDr, "AntiKt6LCTopoJetsAuxDyn.KtDr" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_pt, "AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_pt" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.OriginIndex, "AntiKt6LCTopoJetsAuxDyn.OriginIndex" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_eta, "AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_eta" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.JVF, "AntiKt6LCTopoJetsAuxDyn.JVF" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_phi, "AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_phi" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_CELL, "AntiKt6LCTopoJetsAuxDyn.BCH_CORR_CELL" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_m, "AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_m" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_DOTX, "AntiKt6LCTopoJetsAuxDyn.BCH_CORR_DOTX" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_pt, "AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_pt" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_JET, "AntiKt6LCTopoJetsAuxDyn.BCH_CORR_JET" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_eta, "AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_eta" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.nTrk_pv0_1GeV, "AntiKt6LCTopoJetsAuxDyn.nTrk_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_phi, "AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_phi" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV, "AntiKt6LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_m, "AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_m" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV, "AntiKt6LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.LArQuality, "AntiKt6LCTopoJetsAuxDyn.LArQuality" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.Timing, "AntiKt6LCTopoJetsAuxDyn.Timing" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.HECQuality, "AntiKt6LCTopoJetsAuxDyn.HECQuality" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.NegativeE, "AntiKt6LCTopoJetsAuxDyn.NegativeE" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.AverageLArQF, "AntiKt6LCTopoJetsAuxDyn.AverageLArQF" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.Centroid_r, "AntiKt6LCTopoJetsAuxDyn.Centroid_r" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters5, "AntiKt6LCTopoJetsAuxDyn.ootFracClusters5" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters10, "AntiKt6LCTopoJetsAuxDyn.ootFracClusters10" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.TruthMFindex, "AntiKt6LCTopoJetsAuxDyn.TruthMFindex" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.TruthMF, "AntiKt6LCTopoJetsAuxDyn.TruthMF" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.NumTowers, "AntiKt6LCTopoJetsAuxDyn.NumTowers" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.ActiveArea, "AntiKt6LCTopoJetsAuxDyn.ActiveArea" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPx, "AntiKt6LCTopoJetsAuxDyn.ActiveAreaPx" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPy, "AntiKt6LCTopoJetsAuxDyn.ActiveAreaPy" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPz, "AntiKt6LCTopoJetsAuxDyn.ActiveAreaPz" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaE, "AntiKt6LCTopoJetsAuxDyn.ActiveAreaE" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Perp, "AntiKt6LCTopoJetsAuxDyn.IsoKR20Perp" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Par, "AntiKt6LCTopoJetsAuxDyn.IsoKR20Par" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20SumPt, "AntiKt6LCTopoJetsAuxDyn.IsoKR20SumPt" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Perp, "AntiKt6TopoEMJetsAuxDyn.IsoDelta2Perp" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Par, "AntiKt6TopoEMJetsAuxDyn.IsoDelta2Par" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2SumPt, "AntiKt6TopoEMJetsAuxDyn.IsoDelta2SumPt" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Perp, "AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Perp" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Par, "AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Par" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8SumPt, "AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8SumPt" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Perp, "AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Perp" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Par, "AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Par" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13SumPt, "AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13SumPt" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Perp, "AntiKt6TopoEMJetsAuxDyn.Iso6To88Perp" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Par, "AntiKt6TopoEMJetsAuxDyn.Iso6To88Par" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88SumPt, "AntiKt6TopoEMJetsAuxDyn.Iso6To88SumPt" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.WIDTH, "AntiKt6TopoEMJetsAuxDyn.WIDTH" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.pt_truth, "AntiKt6TopoEMJetsAuxDyn.pt_truth" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerB, "AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerB" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB1, "AntiKt6TopoEMJetsAuxDyn.energy_EMB1" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB2, "AntiKt6TopoEMJetsAuxDyn.energy_EMB2" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB3, "AntiKt6TopoEMJetsAuxDyn.energy_EMB3" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar0, "AntiKt6TopoEMJetsAuxDyn.energy_TileBar0" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap1, "AntiKt6TopoEMJetsAuxDyn.energy_TileGap1" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap3, "AntiKt6TopoEMJetsAuxDyn.energy_TileGap3" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar1, "AntiKt6TopoEMJetsAuxDyn.energy_TileBar1" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar2, "AntiKt6TopoEMJetsAuxDyn.energy_TileBar2" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap2, "AntiKt6TopoEMJetsAuxDyn.energy_TileGap2" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.constituentScale, "AntiKt6TopoEMJetsAuxDyn.constituentScale" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.KtDr, "AntiKt6TopoEMJetsAuxDyn.KtDr" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_pt, "AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_pt" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.OriginIndex, "AntiKt6TopoEMJetsAuxDyn.OriginIndex" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_eta, "AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_eta" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.JVF, "AntiKt6TopoEMJetsAuxDyn.JVF" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_phi, "AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_phi" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_CELL, "AntiKt6TopoEMJetsAuxDyn.BCH_CORR_CELL" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_m, "AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_m" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_DOTX, "AntiKt6TopoEMJetsAuxDyn.BCH_CORR_DOTX" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_pt, "AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_pt" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_JET, "AntiKt6TopoEMJetsAuxDyn.BCH_CORR_JET" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_eta, "AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_eta" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.nTrk_pv0_1GeV, "AntiKt6TopoEMJetsAuxDyn.nTrk_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_phi, "AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_phi" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV, "AntiKt6TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_m, "AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_m" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV, "AntiKt6TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.LArQuality, "AntiKt6TopoEMJetsAuxDyn.LArQuality" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.Timing, "AntiKt6TopoEMJetsAuxDyn.Timing" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.HECQuality, "AntiKt6TopoEMJetsAuxDyn.HECQuality" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.NegativeE, "AntiKt6TopoEMJetsAuxDyn.NegativeE" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.AverageLArQF, "AntiKt6TopoEMJetsAuxDyn.AverageLArQF" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.Centroid_r, "AntiKt6TopoEMJetsAuxDyn.Centroid_r" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters5, "AntiKt6TopoEMJetsAuxDyn.ootFracClusters5" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters10, "AntiKt6TopoEMJetsAuxDyn.ootFracClusters10" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.TruthMFindex, "AntiKt6TopoEMJetsAuxDyn.TruthMFindex" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.TruthMF, "AntiKt6TopoEMJetsAuxDyn.TruthMF" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.NumTowers, "AntiKt6TopoEMJetsAuxDyn.NumTowers" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt0, "AntiKt6TopoEMJetsAuxDyn.energy_TileExt0" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt1, "AntiKt6TopoEMJetsAuxDyn.energy_TileExt1" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.ActiveArea, "AntiKt6TopoEMJetsAuxDyn.ActiveArea" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPx, "AntiKt6TopoEMJetsAuxDyn.ActiveAreaPx" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPy, "AntiKt6TopoEMJetsAuxDyn.ActiveAreaPy" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPz, "AntiKt6TopoEMJetsAuxDyn.ActiveAreaPz" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaE, "AntiKt6TopoEMJetsAuxDyn.ActiveAreaE" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Perp, "AntiKt6TopoEMJetsAuxDyn.IsoKR20Perp" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Par, "AntiKt6TopoEMJetsAuxDyn.IsoKR20Par" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20SumPt, "AntiKt6TopoEMJetsAuxDyn.IsoKR20SumPt" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING, "CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.AVG_LAR_Q, "CaloCalTopoClusterAuxDyn.AVG_LAR_Q" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.AVG_TILE_Q, "CaloCalTopoClusterAuxDyn.AVG_TILE_Q" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.EM_PROBABILITY, "CaloCalTopoClusterAuxDyn.EM_PROBABILITY" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.HAD_WEIGHT, "CaloCalTopoClusterAuxDyn.HAD_WEIGHT" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.OOC_WEIGHT, "CaloCalTopoClusterAuxDyn.OOC_WEIGHT" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.DM_WEIGHT, "CaloCalTopoClusterAuxDyn.DM_WEIGHT" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.FIRST_PHI, "CaloCalTopoClusterAuxDyn.FIRST_PHI" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.FIRST_ETA, "CaloCalTopoClusterAuxDyn.FIRST_ETA" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.DELTA_PHI, "CaloCalTopoClusterAuxDyn.DELTA_PHI" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.DELTA_THETA, "CaloCalTopoClusterAuxDyn.DELTA_THETA" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.DELTA_ALPHA, "CaloCalTopoClusterAuxDyn.DELTA_ALPHA" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.CENTER_X, "CaloCalTopoClusterAuxDyn.CENTER_X" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.CENTER_Y, "CaloCalTopoClusterAuxDyn.CENTER_Y" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.CENTER_Z, "CaloCalTopoClusterAuxDyn.CENTER_Z" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_EM, "CaloCalTopoClusterAuxDyn.ENG_FRAC_EM" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_CORE, "CaloCalTopoClusterAuxDyn.ENG_FRAC_CORE" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.SECOND_ENG_DENS, "CaloCalTopoClusterAuxDyn.SECOND_ENG_DENS" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS_CORR, "CaloCalTopoClusterAuxDyn.N_BAD_CELLS_CORR" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.BAD_CELLS_CORR_E, "CaloCalTopoClusterAuxDyn.BAD_CELLS_CORR_E" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.CellLink_, "CaloCalTopoClusterAuxDyn.CellLink_" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.CellLink.m_persKey, "CaloCalTopoClusterAuxDyn.CellLink.m_persKey" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.CellLink.m_persIndex, "CaloCalTopoClusterAuxDyn.CellLink.m_persIndex" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.SECOND_R, "CaloCalTopoClusterAuxDyn.SECOND_R" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.SECOND_LAMBDA, "CaloCalTopoClusterAuxDyn.SECOND_LAMBDA" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.CENTER_MAG, "CaloCalTopoClusterAuxDyn.CENTER_MAG" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.CENTER_LAMBDA, "CaloCalTopoClusterAuxDyn.CENTER_LAMBDA" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.LATERAL, "CaloCalTopoClusterAuxDyn.LATERAL" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.LONGITUDINAL, "CaloCalTopoClusterAuxDyn.LONGITUDINAL" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX, "CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS, "CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.ISOLATION, "CaloCalTopoClusterAuxDyn.ISOLATION" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS, "CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS, "CaloCalTopoClusterAuxDyn.N_BAD_CELLS" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.BADLARQ_FRAC, "CaloCalTopoClusterAuxDyn.BADLARQ_FRAC" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.ENG_POS, "CaloCalTopoClusterAuxDyn.ENG_POS" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.SIGNIFICANCE, "CaloCalTopoClusterAuxDyn.SIGNIFICANCE" );	\
    DeclareVariable( o_m_CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE, "CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE" );	\
    DeclareVariable( o_m_EMTopoSW35AuxDyn.CellLink_, "EMTopoSW35AuxDyn.CellLink_" );	\
    DeclareVariable( o_m_EMTopoSW35AuxDyn.CellLink.m_persKey, "EMTopoSW35AuxDyn.CellLink.m_persKey" );	\
    DeclareVariable( o_m_EMTopoSW35AuxDyn.CellLink.m_persIndex, "EMTopoSW35AuxDyn.CellLink.m_persIndex" );	\
    DeclareVariable( o_m_ElectronCollectionAuxDyn.ElectronIDLoosePP, "ElectronCollectionAuxDyn.ElectronIDLoosePP" );	\
    DeclareVariable( o_m_ElectronCollectionAuxDyn.ElectronIDMediumPP, "ElectronCollectionAuxDyn.ElectronIDMediumPP" );	\
    DeclareVariable( o_m_ElectronCollectionAuxDyn.ElectronIDTightPP, "ElectronCollectionAuxDyn.ElectronIDTightPP" );	\
    DeclareVariable( o_m_GSFTrackParticlesAuxDyn.originalTrackParticle_, "GSFTrackParticlesAuxDyn.originalTrackParticle_" );	\
    DeclareVariable( o_m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey, "GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey" );	\
    DeclareVariable( o_m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex, "GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex" );	\
    DeclareVariable( o_m_InDetTrackParticlesAuxDyn.truth_, "InDetTrackParticlesAuxDyn.truth_" );	\
    DeclareVariable( o_m_InDetTrackParticlesAuxDyn.truth.m_persKey, "InDetTrackParticlesAuxDyn.truth.m_persKey" );	\
    DeclareVariable( o_m_InDetTrackParticlesAuxDyn.truth.m_persIndex, "InDetTrackParticlesAuxDyn.truth.m_persIndex" );	\
    DeclareVariable( o_m_InDetTrackParticlesAuxDyn.type, "InDetTrackParticlesAuxDyn.type" );	\
    DeclareVariable( o_m_InDetTrackParticlesAuxDyn.origin, "InDetTrackParticlesAuxDyn.origin" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING, "LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.AVG_LAR_Q, "LArClusterEMFrwdAuxDyn.AVG_LAR_Q" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.AVG_TILE_Q, "LArClusterEMFrwdAuxDyn.AVG_TILE_Q" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.EM_PROBABILITY, "LArClusterEMFrwdAuxDyn.EM_PROBABILITY" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.HAD_WEIGHT, "LArClusterEMFrwdAuxDyn.HAD_WEIGHT" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.OOC_WEIGHT, "LArClusterEMFrwdAuxDyn.OOC_WEIGHT" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.DM_WEIGHT, "LArClusterEMFrwdAuxDyn.DM_WEIGHT" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.FIRST_PHI, "LArClusterEMFrwdAuxDyn.FIRST_PHI" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.FIRST_ETA, "LArClusterEMFrwdAuxDyn.FIRST_ETA" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.DELTA_PHI, "LArClusterEMFrwdAuxDyn.DELTA_PHI" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.DELTA_THETA, "LArClusterEMFrwdAuxDyn.DELTA_THETA" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.DELTA_ALPHA, "LArClusterEMFrwdAuxDyn.DELTA_ALPHA" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.CENTER_X, "LArClusterEMFrwdAuxDyn.CENTER_X" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.CENTER_Y, "LArClusterEMFrwdAuxDyn.CENTER_Y" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.CENTER_Z, "LArClusterEMFrwdAuxDyn.CENTER_Z" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_EM, "LArClusterEMFrwdAuxDyn.ENG_FRAC_EM" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE, "LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS, "LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR, "LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E, "LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.CellLink_, "LArClusterEMFrwdAuxDyn.CellLink_" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.CellLink.m_persKey, "LArClusterEMFrwdAuxDyn.CellLink.m_persKey" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.CellLink.m_persIndex, "LArClusterEMFrwdAuxDyn.CellLink.m_persIndex" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.SECOND_R, "LArClusterEMFrwdAuxDyn.SECOND_R" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.SECOND_LAMBDA, "LArClusterEMFrwdAuxDyn.SECOND_LAMBDA" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.CENTER_MAG, "LArClusterEMFrwdAuxDyn.CENTER_MAG" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.CENTER_LAMBDA, "LArClusterEMFrwdAuxDyn.CENTER_LAMBDA" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.LATERAL, "LArClusterEMFrwdAuxDyn.LATERAL" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.LONGITUDINAL, "LArClusterEMFrwdAuxDyn.LONGITUDINAL" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX, "LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS, "LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.ISOLATION, "LArClusterEMFrwdAuxDyn.ISOLATION" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS, "LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS, "LArClusterEMFrwdAuxDyn.N_BAD_CELLS" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.BADLARQ_FRAC, "LArClusterEMFrwdAuxDyn.BADLARQ_FRAC" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.ENG_POS, "LArClusterEMFrwdAuxDyn.ENG_POS" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.SIGNIFICANCE, "LArClusterEMFrwdAuxDyn.SIGNIFICANCE" );	\
    DeclareVariable( o_m_LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE, "LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE" );	\
    DeclareVariable( o_m_LArClusterEMSofteAuxDyn.CellLink_, "LArClusterEMSofteAuxDyn.CellLink_" );	\
    DeclareVariable( o_m_LArClusterEMSofteAuxDyn.CellLink.m_persKey, "LArClusterEMSofteAuxDyn.CellLink.m_persKey" );	\
    DeclareVariable( o_m_LArClusterEMSofteAuxDyn.CellLink.m_persIndex, "LArClusterEMSofteAuxDyn.CellLink.m_persIndex" );	\
    DeclareVariable( o_m_MuonsAuxDyn.m, "MuonsAuxDyn.m" );	\
    DeclareVariable( o_m_TruthEventAuxDyn.pdf2, "TruthEventAuxDyn.pdf2" );	\
    DeclareVariable( o_m_TruthEventAuxDyn.id1, "TruthEventAuxDyn.id1" );	\
    DeclareVariable( o_m_TruthEventAuxDyn.id2, "TruthEventAuxDyn.id2" );	\
    DeclareVariable( o_m_TruthEventAuxDyn.pdfId1, "TruthEventAuxDyn.pdfId1" );	\
    DeclareVariable( o_m_TruthEventAuxDyn.pdfId2, "TruthEventAuxDyn.pdfId2" );	\
    DeclareVariable( o_m_TruthEventAuxDyn.x1, "TruthEventAuxDyn.x1" );	\
    DeclareVariable( o_m_TruthEventAuxDyn.x2, "TruthEventAuxDyn.x2" );	\
    DeclareVariable( o_m_TruthEventAuxDyn.scalePDF, "TruthEventAuxDyn.scalePDF" );	\
    DeclareVariable( o_m_TruthEventAuxDyn.pdf1, "TruthEventAuxDyn.pdf1" );	\
    DeclareVariable( o_m_TruthParticleAuxDyn.polarizationTheta, "TruthParticleAuxDyn.polarizationTheta" );	\
    DeclareVariable( o_m_TruthParticleAuxDyn.polarizationPhi, "TruthParticleAuxDyn.polarizationPhi" );	\
    DeclareVariable( o_m_egClusterCollectionAuxDyn.CellLink_, "egClusterCollectionAuxDyn.CellLink_" );	\
    DeclareVariable( o_m_egClusterCollectionAuxDyn.CellLink.m_persKey, "egClusterCollectionAuxDyn.CellLink.m_persKey" );	\
    DeclareVariable( o_m_egClusterCollectionAuxDyn.CellLink.m_persIndex, "egClusterCollectionAuxDyn.CellLink.m_persIndex" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar0, "AntiKt4TopoEMJetsAuxDyn.energy_TileBar0" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar1, "AntiKt4TopoEMJetsAuxDyn.energy_TileBar1" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar2, "AntiKt4TopoEMJetsAuxDyn.energy_TileBar2" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.KtDr, "AntiKt4TopoEMJetsAuxDyn.KtDr" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerE, "AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerE" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME1, "AntiKt4LCTopoJetsAuxDyn.energy_EME1" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME2, "AntiKt4LCTopoJetsAuxDyn.energy_EME2" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME3, "AntiKt4LCTopoJetsAuxDyn.energy_EME3" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC0, "AntiKt4LCTopoJetsAuxDyn.energy_HEC0" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC1, "AntiKt4LCTopoJetsAuxDyn.energy_HEC1" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC2, "AntiKt4LCTopoJetsAuxDyn.energy_HEC2" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC3, "AntiKt4LCTopoJetsAuxDyn.energy_HEC3" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC2, "AntiKt4TopoEMJetsAuxDyn.energy_HEC2" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC3, "AntiKt4TopoEMJetsAuxDyn.energy_HEC3" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerE, "AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerE" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME1, "AntiKt6LCTopoJetsAuxDyn.energy_EME1" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME2, "AntiKt6LCTopoJetsAuxDyn.energy_EME2" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME3, "AntiKt6LCTopoJetsAuxDyn.energy_EME3" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC0, "AntiKt6LCTopoJetsAuxDyn.energy_HEC0" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC1, "AntiKt6LCTopoJetsAuxDyn.energy_HEC1" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt0, "AntiKt6LCTopoJetsAuxDyn.energy_TileExt0" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC2, "AntiKt6LCTopoJetsAuxDyn.energy_HEC2" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC3, "AntiKt6LCTopoJetsAuxDyn.energy_HEC3" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerE, "AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerE" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME1, "AntiKt6TopoEMJetsAuxDyn.energy_EME1" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME2, "AntiKt6TopoEMJetsAuxDyn.energy_EME2" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME3, "AntiKt6TopoEMJetsAuxDyn.energy_EME3" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC0, "AntiKt6TopoEMJetsAuxDyn.energy_HEC0" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC1, "AntiKt6TopoEMJetsAuxDyn.energy_HEC1" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC2, "AntiKt6TopoEMJetsAuxDyn.energy_HEC2" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC3, "AntiKt6TopoEMJetsAuxDyn.energy_HEC3" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap3, "AntiKt6LCTopoJetsAuxDyn.energy_TileGap3" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt2, "AntiKt4LCTopoJetsAuxDyn.energy_TileExt2" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap1, "AntiKt4TopoEMJetsAuxDyn.energy_TileGap1" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap2, "AntiKt4TopoEMJetsAuxDyn.energy_TileGap2" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt2, "AntiKt4TopoEMJetsAuxDyn.energy_TileExt2" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap1, "AntiKt6LCTopoJetsAuxDyn.energy_TileGap1" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap2, "AntiKt6LCTopoJetsAuxDyn.energy_TileGap2" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt1, "AntiKt6LCTopoJetsAuxDyn.energy_TileExt1" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt2, "AntiKt6LCTopoJetsAuxDyn.energy_TileExt2" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt2, "AntiKt6TopoEMJetsAuxDyn.energy_TileExt2" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt0, "AntiKt4LCTopoJetsAuxDyn.energy_TileExt0" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt1, "AntiKt4LCTopoJetsAuxDyn.energy_TileExt1" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL0, "AntiKt4LCTopoJetsAuxDyn.energy_FCAL0" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL0, "AntiKt4TopoEMJetsAuxDyn.energy_FCAL0" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL0, "AntiKt6LCTopoJetsAuxDyn.energy_FCAL0" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL0, "AntiKt6TopoEMJetsAuxDyn.energy_FCAL0" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL1, "AntiKt4LCTopoJetsAuxDyn.energy_FCAL1" );	\
    DeclareVariable( o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL2, "AntiKt4LCTopoJetsAuxDyn.energy_FCAL2" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL1, "AntiKt4TopoEMJetsAuxDyn.energy_FCAL1" );	\
    DeclareVariable( o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL2, "AntiKt4TopoEMJetsAuxDyn.energy_FCAL2" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL1, "AntiKt6LCTopoJetsAuxDyn.energy_FCAL1" );	\
    DeclareVariable( o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL2, "AntiKt6LCTopoJetsAuxDyn.energy_FCAL2" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL1, "AntiKt6TopoEMJetsAuxDyn.energy_FCAL1" );	\
    DeclareVariable( o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL2, "AntiKt6TopoEMJetsAuxDyn.energy_FCAL2" );	\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define RESETVAR                      \
  {    o_m_McEventInfo = -999;\
    o_m_AODCellContainer = -999;\
    o_m_MBTSContainer = -999;\
    o_m_TileMuObj = -999;\
    o_m_ElectronAODCollection = -999;\
    o_m_PhotonAODCollection = -999;\
    o_m_EventInfoAux. = -999;\
    o_m_EventInfoAux.xAOD::AuxInfoBase = -999;\
    o_m_EventInfoAux.runNumber = -999;\
    o_m_EventInfoAux.eventNumber = -999;\
    o_m_EventInfoAux.lumiBlock = -999;\
    o_m_EventInfoAux.timeStamp = -999;\
    o_m_EventInfoAux.timeStampNSOffset = -999;\
    o_m_EventInfoAux.bcid = -999;\
    o_m_EventInfoAux.detectorMask0 = -999;\
    o_m_EventInfoAux.detectorMask1 = -999;\
    o_m_EventInfoAux.statusElement = -999;\
    o_m_EventInfoAux.extendedLevel1ID = -999;\
    o_m_EventInfoAux.level1TriggerType = -999;\
    o_m_EventInfoAux.streamTagNames.clear();\
    o_m_EventInfoAux.streamTagTypes.clear();\
    o_m_EventInfoAux.streamTagObeysLumiblock.clear();\
    o_m_EventInfoAux.actualInteractionsPerCrossing = -999;\
    o_m_EventInfoAux.averageInteractionsPerCrossing = -999;\
    o_m_EventInfoAux.pixelFlags = -999;\
    o_m_EventInfoAux.sctFlags = -999;\
    o_m_EventInfoAux.trtFlags = -999;\
    o_m_EventInfoAux.larFlags = -999;\
    o_m_EventInfoAux.tileFlags = -999;\
    o_m_EventInfoAux.muonFlags = -999;\
    o_m_EventInfoAux.forwardDetFlags = -999;\
    o_m_EventInfoAux.coreFlags = -999;\
    o_m_EventInfoAux.backgroundFlags = -999;\
    o_m_EventInfoAux.lumiFlags = -999;\
    o_m_EventInfo = -999;\
    o_m_MET_CellOut_Eflow = -999;\
    o_m_MET_CellOut_Eflow_JetArea = -999;\
    o_m_MET_CellOut_Eflow_JetAreaJVF = -999;\
    o_m_MET_CellOut_Eflow_JetAreaRhoEta5JVF = -999;\
    o_m_MET_CellOut_Eflow_STVF = -999;\
    o_m_MET_MuonMuons = -999;\
    o_m_MET_Muons = -999;\
    o_m_MET_Muons_Spectro = -999;\
    o_m_MET_Muons_Track = -999;\
    o_m_MET_RefEle = -999;\
    o_m_MET_RefFinal = -999;\
    o_m_MET_RefFinal_STVF = -999;\
    o_m_MET_RefGamma = -999;\
    o_m_MET_RefJet = -999;\
    o_m_MET_RefJet_JVF = -999;\
    o_m_MET_RefJet_JVFCut = -999;\
    o_m_MET_RefTau = -999;\
    o_m_MET_Track = -999;\
    o_m_GSFTrackAssociation = -999;\
    o_m_LArNoisyROSummary = -999;\
    o_m_MET_RefComposition = -999;\
    o_m_ElectronCollection = -999;\
    o_m_ElectronFrwdCollection = -999;\
    o_m_AllPhotonsVxCandidates = -999;\
    o_m_PrimaryVertices = -999;\
    o_m_PhotonCollection = -999;\
    o_m_TruthParticleAux. = -999;\
    o_m_TruthParticleAux.xAOD::AuxContainerBase = -999;\
    o_m_TruthParticleAux.pdgId.clear();\
    o_m_TruthParticleAux.barcode.clear();\
    o_m_TruthParticleAux.status.clear();\
    o_m_TruthParticleAux.px.clear();\
    o_m_TruthParticleAux.py.clear();\
    o_m_TruthParticleAux.pz.clear();\
    o_m_TruthParticleAux.e.clear();\
    o_m_TruthParticleAux.m.clear();\
    o_m_ElectronCollectionAux. = -999;\
    o_m_ElectronCollectionAux.xAOD::EgammaAuxContainer_v1 = -999;\
    o_m_ElectronCollectionAux.charge.clear();\
    o_m_ElectronCollectionAux.deltaEta0.clear();\
    o_m_ElectronCollectionAux.deltaEta1.clear();\
    o_m_ElectronCollectionAux.deltaEta2.clear();\
    o_m_ElectronCollectionAux.deltaEta3.clear();\
    o_m_ElectronCollectionAux.deltaPhi0.clear();\
    o_m_ElectronCollectionAux.deltaPhi1.clear();\
    o_m_ElectronCollectionAux.deltaPhi2.clear();\
    o_m_ElectronCollectionAux.deltaPhi3.clear();\
    o_m_ElectronCollectionAux.deltaPhiFromLastMeasurement.clear();\
    o_m_ElectronCollectionAux.deltaPhiRescaled.clear();\
    o_m_ElectronCollectionAux.deltaPhiRescaled0.clear();\
    o_m_ElectronCollectionAux.deltaPhiRescaled1.clear();\
    o_m_ElectronCollectionAux.deltaPhiRescaled2.clear();\
    o_m_ElectronCollectionAux.deltaPhiRescaled3.clear();\
    o_m_ElectronFrwdCollectionAux. = -999;\
    o_m_ElectronFrwdCollectionAux.xAOD::EgammaAuxContainer_v1 = -999;\
    o_m_ElectronFrwdCollectionAux.charge.clear();\
    o_m_ElectronFrwdCollectionAux.deltaEta0.clear();\
    o_m_ElectronFrwdCollectionAux.deltaEta1.clear();\
    o_m_ElectronFrwdCollectionAux.deltaEta2.clear();\
    o_m_ElectronFrwdCollectionAux.deltaEta3.clear();\
    o_m_ElectronFrwdCollectionAux.deltaPhi0.clear();\
    o_m_ElectronFrwdCollectionAux.deltaPhi1.clear();\
    o_m_ElectronFrwdCollectionAux.deltaPhi2.clear();\
    o_m_ElectronFrwdCollectionAux.deltaPhi3.clear();\
    o_m_ElectronFrwdCollectionAux.deltaPhiFromLastMeasurement.clear();\
    o_m_ElectronFrwdCollectionAux.deltaPhiRescaled.clear();\
    o_m_ElectronFrwdCollectionAux.deltaPhiRescaled0.clear();\
    o_m_ElectronFrwdCollectionAux.deltaPhiRescaled1.clear();\
    o_m_ElectronFrwdCollectionAux.deltaPhiRescaled2.clear();\
    o_m_ElectronFrwdCollectionAux.deltaPhiRescaled3.clear();\
    o_m_egClusterCollection_links = -999;\
    o_m_MuonsAux. = -999;\
    o_m_MuonsAux.xAOD::AuxContainerBase = -999;\
    o_m_MuonsAux.pt.clear();\
    o_m_MuonsAux.eta.clear();\
    o_m_MuonsAux.phi.clear();\
    o_m_MuonsAux.e.clear();\
    o_m_MuonsAux.allAuthors.clear();\
    o_m_MuonsAux.author.clear();\
    o_m_MuonsAux.muonType.clear();\
    o_m_MuonsAux.quality.clear();\
    o_m_MuonsAux.numberOfPrecisionLayers.clear();\
    o_m_MuonsAux.numberOfPrecisionHoleLayers.clear();\
    o_m_MuonsAux.numberOfPhiLayers.clear();\
    o_m_MuonsAux.numberOfPhiHoleLayers.clear();\
    o_m_MuonsAux.numberOfTriggerEtaLayers.clear();\
    o_m_MuonsAux.numberOfTriggerEtaHoleLayers.clear();\
    o_m_MuonsAux.primarySector.clear();\
    o_m_MuonsAux.secondarySector.clear();\
    o_m_MuonsAux.innerSmallHits.clear();\
    o_m_MuonsAux.innerLargeHits.clear();\
    o_m_MuonsAux.middleSmallHits.clear();\
    o_m_MuonsAux.middleLargeHits.clear();\
    o_m_MuonsAux.outerSmallHits.clear();\
    o_m_MuonsAux.outerLargeHits.clear();\
    o_m_MuonsAux.extendedSmallHits.clear();\
    o_m_MuonsAux.extendedLargeHits.clear();\
    o_m_MuonsAux.innerSmallHoles.clear();\
    o_m_MuonsAux.innerLargeHoles.clear();\
    o_m_MuonsAux.middleSmallHoles.clear();\
    o_m_MuonsAux.middleLargeHoles.clear();\
    o_m_MuonsAux.outerSmallHoles.clear();\
    o_m_MuonsAux.outerLargeHoles.clear();\
    o_m_MuonsAux.extendedSmallHoles.clear();\
    o_m_MuonsAux.extendedLargeHoles.clear();\
    o_m_MuonsAux.phiLayer1Hits.clear();\
    o_m_MuonsAux.phiLayer2Hits.clear();\
    o_m_MuonsAux.phiLayer3Hits.clear();\
    o_m_MuonsAux.phiLayer4Hits.clear();\
    o_m_MuonsAux.etaLayer1Hits.clear();\
    o_m_MuonsAux.etaLayer2Hits.clear();\
    o_m_MuonsAux.etaLayer3Hits.clear();\
    o_m_MuonsAux.etaLayer4Hits.clear();\
    o_m_MuonsAux.phiLayer1Holes.clear();\
    o_m_MuonsAux.phiLayer2Holes.clear();\
    o_m_MuonsAux.phiLayer3Holes.clear();\
    o_m_MuonsAux.phiLayer4Holes.clear();\
    o_m_MuonsAux.etaLayer1Holes.clear();\
    o_m_MuonsAux.etaLayer2Holes.clear();\
    o_m_MuonsAux.etaLayer3Holes.clear();\
    o_m_MuonsAux.etaLayer4Holes.clear();\
    o_m_MuonsAux.energyLossType.clear();\
    o_m_TauRecContainer = -999;\
    o_m_Muons = -999;\
    o_m_egDetailAOD = -999;\
    o_m_TruthEvent = -999;\
    o_m_GSFTrackParticlesAux. = -999;\
    o_m_GSFTrackParticlesAux.xAOD::AuxContainerBase = -999;\
    o_m_GSFTrackParticlesAux.d0.clear();\
    o_m_GSFTrackParticlesAux.z0.clear();\
    o_m_GSFTrackParticlesAux.phi.clear();\
    o_m_GSFTrackParticlesAux.theta.clear();\
    o_m_GSFTrackParticlesAux.qOverP.clear();\
    o_m_GSFTrackParticlesAux.definingParametersCovMatrix.clear();\
    o_m_GSFTrackParticlesAux.vx.clear();\
    o_m_GSFTrackParticlesAux.vy.clear();\
    o_m_GSFTrackParticlesAux.vz.clear();\
    o_m_GSFTrackParticlesAux.parameterX.clear();\
    o_m_GSFTrackParticlesAux.parameterY.clear();\
    o_m_GSFTrackParticlesAux.parameterZ.clear();\
    o_m_GSFTrackParticlesAux.parameterPX.clear();\
    o_m_GSFTrackParticlesAux.parameterPY.clear();\
    o_m_GSFTrackParticlesAux.parameterPZ.clear();\
    o_m_GSFTrackParticlesAux.trackParameterCovarianceMatrices.clear();\
    o_m_GSFTrackParticlesAux.parameterPosition.clear();\
    o_m_GSFTrackParticlesAux.chiSquared.clear();\
    o_m_GSFTrackParticlesAux.numberDoF.clear();\
    o_m_GSFTrackParticlesAux.trackFitter.clear();\
    o_m_GSFTrackParticlesAux.particleHypothesis.clear();\
    o_m_GSFTrackParticlesAux.trackProperties.clear();\
    o_m_GSFTrackParticlesAux.patternRecoInfo.clear();\
    o_m_GSFTrackParticlesAux.numberOfContribPixelLayers.clear();\
    o_m_GSFTrackParticlesAux.numberOfBLayerHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfBLayerOutliers.clear();\
    o_m_GSFTrackParticlesAux.numberOfBLayerSharedHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfBLayerSplitHits.clear();\
    o_m_GSFTrackParticlesAux.expectBLayerHit.clear();\
    o_m_GSFTrackParticlesAux.numberOfPixelHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfPixelOutliers.clear();\
    o_m_GSFTrackParticlesAux.numberOfPixelHoles.clear();\
    o_m_GSFTrackParticlesAux.numberOfPixelSharedHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfPixelSplitHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfGangedPixels.clear();\
    o_m_GSFTrackParticlesAux.numberOfGangedFlaggedFakes.clear();\
    o_m_GSFTrackParticlesAux.numberOfPixelDeadSensors.clear();\
    o_m_GSFTrackParticlesAux.numberOfPixelSpoiltHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfSCTHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfSCTOutliers.clear();\
    o_m_GSFTrackParticlesAux.numberOfSCTHoles.clear();\
    o_m_GSFTrackParticlesAux.numberOfSCTDoubleHoles.clear();\
    o_m_GSFTrackParticlesAux.numberOfSCTSharedHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfSCTDeadSensors.clear();\
    o_m_GSFTrackParticlesAux.numberOfSCTSpoiltHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfTRTHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfTRTOutliers.clear();\
    o_m_GSFTrackParticlesAux.numberOfTRTHoles.clear();\
    o_m_GSFTrackParticlesAux.numberOfTRTHighThresholdHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers.clear();\
    o_m_GSFTrackParticlesAux.numberOfTRTDeadStraws.clear();\
    o_m_GSFTrackParticlesAux.numberOfTRTTubeHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfTRTXenonHits.clear();\
    o_m_GSFTrackParticlesAux.numberOfPrecisionLayers.clear();\
    o_m_GSFTrackParticlesAux.numberOfPrecisionHoleLayers.clear();\
    o_m_GSFTrackParticlesAux.numberOfPhiLayers.clear();\
    o_m_GSFTrackParticlesAux.numberOfPhiHoleLayers.clear();\
    o_m_GSFTrackParticlesAux.numberOfTriggerEtaLayers.clear();\
    o_m_GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers.clear();\
    o_m_GSFTrackParticlesAux.numberOfOutliersOnTrack.clear();\
    o_m_GSFTrackParticlesAux.standardDeviationOfChi2OS.clear();\
    o_m_GSFTrackParticlesAux.eProbabilityComb.clear();\
    o_m_GSFTrackParticlesAux.eProbabilityHT.clear();\
    o_m_GSFTrackParticlesAux.eProbabilityToT.clear();\
    o_m_GSFTrackParticlesAux.eProbabilityBrem.clear();\
    o_m_InDetTrackParticlesAux. = -999;\
    o_m_InDetTrackParticlesAux.xAOD::AuxContainerBase = -999;\
    o_m_InDetTrackParticlesAux.d0.clear();\
    o_m_InDetTrackParticlesAux.z0.clear();\
    o_m_InDetTrackParticlesAux.phi.clear();\
    o_m_InDetTrackParticlesAux.theta.clear();\
    o_m_InDetTrackParticlesAux.qOverP.clear();\
    o_m_InDetTrackParticlesAux.definingParametersCovMatrix.clear();\
    o_m_InDetTrackParticlesAux.vx.clear();\
    o_m_InDetTrackParticlesAux.vy.clear();\
    o_m_InDetTrackParticlesAux.vz.clear();\
    o_m_InDetTrackParticlesAux.parameterX.clear();\
    o_m_InDetTrackParticlesAux.parameterY.clear();\
    o_m_InDetTrackParticlesAux.parameterZ.clear();\
    o_m_InDetTrackParticlesAux.parameterPX.clear();\
    o_m_InDetTrackParticlesAux.parameterPY.clear();\
    o_m_InDetTrackParticlesAux.parameterPZ.clear();\
    o_m_InDetTrackParticlesAux.trackParameterCovarianceMatrices.clear();\
    o_m_InDetTrackParticlesAux.parameterPosition.clear();\
    o_m_InDetTrackParticlesAux.chiSquared.clear();\
    o_m_InDetTrackParticlesAux.numberDoF.clear();\
    o_m_InDetTrackParticlesAux.trackFitter.clear();\
    o_m_InDetTrackParticlesAux.particleHypothesis.clear();\
    o_m_InDetTrackParticlesAux.trackProperties.clear();\
    o_m_InDetTrackParticlesAux.patternRecoInfo.clear();\
    o_m_InDetTrackParticlesAux.numberOfContribPixelLayers.clear();\
    o_m_InDetTrackParticlesAux.numberOfBLayerHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfBLayerOutliers.clear();\
    o_m_InDetTrackParticlesAux.numberOfBLayerSharedHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfBLayerSplitHits.clear();\
    o_m_InDetTrackParticlesAux.expectBLayerHit.clear();\
    o_m_InDetTrackParticlesAux.numberOfPixelHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfPixelOutliers.clear();\
    o_m_InDetTrackParticlesAux.numberOfPixelHoles.clear();\
    o_m_InDetTrackParticlesAux.numberOfPixelSharedHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfPixelSplitHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfGangedPixels.clear();\
    o_m_InDetTrackParticlesAux.numberOfGangedFlaggedFakes.clear();\
    o_m_InDetTrackParticlesAux.numberOfPixelDeadSensors.clear();\
    o_m_InDetTrackParticlesAux.numberOfPixelSpoiltHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfSCTHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfSCTOutliers.clear();\
    o_m_InDetTrackParticlesAux.numberOfSCTHoles.clear();\
    o_m_InDetTrackParticlesAux.numberOfSCTDoubleHoles.clear();\
    o_m_InDetTrackParticlesAux.numberOfSCTSharedHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfSCTDeadSensors.clear();\
    o_m_InDetTrackParticlesAux.numberOfSCTSpoiltHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfTRTHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfTRTOutliers.clear();\
    o_m_InDetTrackParticlesAux.numberOfTRTHoles.clear();\
    o_m_InDetTrackParticlesAux.numberOfTRTHighThresholdHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers.clear();\
    o_m_InDetTrackParticlesAux.numberOfTRTDeadStraws.clear();\
    o_m_InDetTrackParticlesAux.numberOfTRTTubeHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfTRTXenonHits.clear();\
    o_m_InDetTrackParticlesAux.numberOfPrecisionLayers.clear();\
    o_m_InDetTrackParticlesAux.numberOfPrecisionHoleLayers.clear();\
    o_m_InDetTrackParticlesAux.numberOfPhiLayers.clear();\
    o_m_InDetTrackParticlesAux.numberOfPhiHoleLayers.clear();\
    o_m_InDetTrackParticlesAux.numberOfTriggerEtaLayers.clear();\
    o_m_InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers.clear();\
    o_m_InDetTrackParticlesAux.numberOfOutliersOnTrack.clear();\
    o_m_InDetTrackParticlesAux.standardDeviationOfChi2OS.clear();\
    o_m_InDetTrackParticlesAux.eProbabilityComb.clear();\
    o_m_InDetTrackParticlesAux.eProbabilityHT.clear();\
    o_m_InDetTrackParticlesAux.eProbabilityToT.clear();\
    o_m_InDetTrackParticlesAux.eProbabilityBrem.clear();\
    o_m_InDetTrackParticlesForwardAux. = -999;\
    o_m_InDetTrackParticlesForwardAux.xAOD::AuxContainerBase = -999;\
    o_m_InDetTrackParticlesForwardAux.d0.clear();\
    o_m_InDetTrackParticlesForwardAux.z0.clear();\
    o_m_InDetTrackParticlesForwardAux.phi.clear();\
    o_m_InDetTrackParticlesForwardAux.theta.clear();\
    o_m_InDetTrackParticlesForwardAux.qOverP.clear();\
    o_m_InDetTrackParticlesForwardAux.definingParametersCovMatrix.clear();\
    o_m_InDetTrackParticlesForwardAux.vx.clear();\
    o_m_InDetTrackParticlesForwardAux.vy.clear();\
    o_m_InDetTrackParticlesForwardAux.vz.clear();\
    o_m_InDetTrackParticlesForwardAux.parameterX.clear();\
    o_m_InDetTrackParticlesForwardAux.parameterY.clear();\
    o_m_InDetTrackParticlesForwardAux.parameterZ.clear();\
    o_m_InDetTrackParticlesForwardAux.parameterPX.clear();\
    o_m_InDetTrackParticlesForwardAux.parameterPY.clear();\
    o_m_InDetTrackParticlesForwardAux.parameterPZ.clear();\
    o_m_InDetTrackParticlesForwardAux.trackParameterCovarianceMatrices.clear();\
    o_m_InDetTrackParticlesForwardAux.parameterPosition.clear();\
    o_m_InDetTrackParticlesForwardAux.chiSquared.clear();\
    o_m_InDetTrackParticlesForwardAux.numberDoF.clear();\
    o_m_InDetTrackParticlesForwardAux.trackFitter.clear();\
    o_m_InDetTrackParticlesForwardAux.particleHypothesis.clear();\
    o_m_InDetTrackParticlesForwardAux.trackProperties.clear();\
    o_m_InDetTrackParticlesForwardAux.patternRecoInfo.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfContribPixelLayers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfBLayerHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfBLayerOutliers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfBLayerSharedHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfBLayerSplitHits.clear();\
    o_m_InDetTrackParticlesForwardAux.expectBLayerHit.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPixelHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPixelOutliers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPixelHoles.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPixelSharedHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPixelSplitHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfGangedPixels.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPixelDeadSensors.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfSCTHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfSCTOutliers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfSCTHoles.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfSCTSharedHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfSCTDeadSensors.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfTRTHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfTRTOutliers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfTRTHoles.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfTRTDeadStraws.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfTRTTubeHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfTRTXenonHits.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPrecisionLayers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPhiLayers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfPhiHoleLayers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers.clear();\
    o_m_InDetTrackParticlesForwardAux.numberOfOutliersOnTrack.clear();\
    o_m_InDetTrackParticlesForwardAux.standardDeviationOfChi2OS.clear();\
    o_m_InDetTrackParticlesForwardAux.eProbabilityComb.clear();\
    o_m_InDetTrackParticlesForwardAux.eProbabilityHT.clear();\
    o_m_InDetTrackParticlesForwardAux.eProbabilityToT.clear();\
    o_m_InDetTrackParticlesForwardAux.eProbabilityBrem.clear();\
    o_m_CaloCalTopoCluster = -999;\
    o_m_EMTopoSW35 = -999;\
    o_m_LArClusterEMFrwd = -999;\
    o_m_LArClusterEMSofte = -999;\
    o_m_egClusterCollection = -999;\
    o_m_MuonEntryLayerFilter = -999;\
    o_m_TruthParticle = -999;\
    o_m_TruthVertex = -999;\
    o_m_AntiKt4LCTopoJets = -999;\
    o_m_AntiKt4TopoEMJets = -999;\
    o_m_AntiKt6LCTopoJets = -999;\
    o_m_AntiKt6TopoEMJets = -999;\
    o_m_PhotonCollectionAux. = -999;\
    o_m_PhotonCollectionAux.xAOD::EgammaAuxContainer_v1 = -999;\
    o_m_PhotonCollectionAux.convMatchDeltaEta1.clear();\
    o_m_PhotonCollectionAux.convMatchDeltaEta2.clear();\
    o_m_PhotonCollectionAux.convMatchDeltaPhi1.clear();\
    o_m_PhotonCollectionAux.convMatchDeltaPhi2.clear();\
    o_m_TruthVertexAux. = -999;\
    o_m_TruthVertexAux.xAOD::AuxContainerBase = -999;\
    o_m_TruthVertexAux.id.clear();\
    o_m_TruthVertexAux.barcode.clear();\
    o_m_TruthVertexAux.x.clear();\
    o_m_TruthVertexAux.y.clear();\
    o_m_TruthVertexAux.z.clear();\
    o_m_TruthVertexAux.t.clear();\
    o_m_TruthVertexAux.weights.clear();\
    o_m_TruthEventAux. = -999;\
    o_m_TruthEventAux.xAOD::AuxContainerBase = -999;\
    o_m_TruthEventAux.eventScale.clear();\
    o_m_TruthEventAux.alphaQCD.clear();\
    o_m_TruthEventAux.alphaQED.clear();\
    o_m_TruthEventAux.weights.clear();\
    o_m_TruthEventAux.crossSection.clear();\
    o_m_TruthEventAux.crossSectionError.clear();\
    o_m_GSFTrackParticles = -999;\
    o_m_InDetTrackParticles = -999;\
    o_m_InDetTrackParticlesForward = -999;\
    o_m_AntiKt4LCTopoJetsAux. = -999;\
    o_m_AntiKt4LCTopoJetsAux.xAOD::AuxContainerBase = -999;\
    o_m_AntiKt4LCTopoJetsAux.pt.clear();\
    o_m_AntiKt4LCTopoJetsAux.eta.clear();\
    o_m_AntiKt4LCTopoJetsAux.phi.clear();\
    o_m_AntiKt4LCTopoJetsAux.m.clear();\
    o_m_AntiKt4LCTopoJetsAux.constituentWeights.clear();\
    o_m_AntiKt4TopoEMJetsAux. = -999;\
    o_m_AntiKt4TopoEMJetsAux.xAOD::AuxContainerBase = -999;\
    o_m_AntiKt4TopoEMJetsAux.pt.clear();\
    o_m_AntiKt4TopoEMJetsAux.eta.clear();\
    o_m_AntiKt4TopoEMJetsAux.phi.clear();\
    o_m_AntiKt4TopoEMJetsAux.m.clear();\
    o_m_AntiKt4TopoEMJetsAux.constituentWeights.clear();\
    o_m_AntiKt6LCTopoJetsAux. = -999;\
    o_m_AntiKt6LCTopoJetsAux.xAOD::AuxContainerBase = -999;\
    o_m_AntiKt6LCTopoJetsAux.pt.clear();\
    o_m_AntiKt6LCTopoJetsAux.eta.clear();\
    o_m_AntiKt6LCTopoJetsAux.phi.clear();\
    o_m_AntiKt6LCTopoJetsAux.m.clear();\
    o_m_AntiKt6LCTopoJetsAux.constituentWeights.clear();\
    o_m_AntiKt6TopoEMJetsAux. = -999;\
    o_m_AntiKt6TopoEMJetsAux.xAOD::AuxContainerBase = -999;\
    o_m_AntiKt6TopoEMJetsAux.pt.clear();\
    o_m_AntiKt6TopoEMJetsAux.eta.clear();\
    o_m_AntiKt6TopoEMJetsAux.phi.clear();\
    o_m_AntiKt6TopoEMJetsAux.m.clear();\
    o_m_AntiKt6TopoEMJetsAux.constituentWeights.clear();\
    o_m_CaloCalTopoClusterAux. = -999;\
    o_m_CaloCalTopoClusterAux.xAOD::AuxContainerBase = -999;\
    o_m_CaloCalTopoClusterAux.basicSignal.clear();\
    o_m_CaloCalTopoClusterAux.time.clear();\
    o_m_CaloCalTopoClusterAux.samplingPattern.clear();\
    o_m_CaloCalTopoClusterAux.clusterSize.clear();\
    o_m_CaloCalTopoClusterAux.eta0.clear();\
    o_m_CaloCalTopoClusterAux.phi0.clear();\
    o_m_CaloCalTopoClusterAux.nBarrel.clear();\
    o_m_CaloCalTopoClusterAux.nEndcap.clear();\
    o_m_CaloCalTopoClusterAux.rawE.clear();\
    o_m_CaloCalTopoClusterAux.rawEta.clear();\
    o_m_CaloCalTopoClusterAux.rawPhi.clear();\
    o_m_CaloCalTopoClusterAux.rawM.clear();\
    o_m_CaloCalTopoClusterAux.altE.clear();\
    o_m_CaloCalTopoClusterAux.altEta.clear();\
    o_m_CaloCalTopoClusterAux.altPhi.clear();\
    o_m_CaloCalTopoClusterAux.altM.clear();\
    o_m_CaloCalTopoClusterAux.calE.clear();\
    o_m_CaloCalTopoClusterAux.calEta.clear();\
    o_m_CaloCalTopoClusterAux.calPhi.clear();\
    o_m_CaloCalTopoClusterAux.calM.clear();\
    o_m_CaloCalTopoClusterAux.e_sampl.clear();\
    o_m_CaloCalTopoClusterAux.eta_sampl.clear();\
    o_m_CaloCalTopoClusterAux.phi_sampl.clear();\
    o_m_EMTopoSW35Aux. = -999;\
    o_m_EMTopoSW35Aux.xAOD::AuxContainerBase = -999;\
    o_m_EMTopoSW35Aux.basicSignal.clear();\
    o_m_EMTopoSW35Aux.time.clear();\
    o_m_EMTopoSW35Aux.samplingPattern.clear();\
    o_m_EMTopoSW35Aux.clusterSize.clear();\
    o_m_EMTopoSW35Aux.eta0.clear();\
    o_m_EMTopoSW35Aux.phi0.clear();\
    o_m_EMTopoSW35Aux.nBarrel.clear();\
    o_m_EMTopoSW35Aux.nEndcap.clear();\
    o_m_EMTopoSW35Aux.rawE.clear();\
    o_m_EMTopoSW35Aux.rawEta.clear();\
    o_m_EMTopoSW35Aux.rawPhi.clear();\
    o_m_EMTopoSW35Aux.rawM.clear();\
    o_m_EMTopoSW35Aux.altE.clear();\
    o_m_EMTopoSW35Aux.altEta.clear();\
    o_m_EMTopoSW35Aux.altPhi.clear();\
    o_m_EMTopoSW35Aux.altM.clear();\
    o_m_EMTopoSW35Aux.calE.clear();\
    o_m_EMTopoSW35Aux.calEta.clear();\
    o_m_EMTopoSW35Aux.calPhi.clear();\
    o_m_EMTopoSW35Aux.calM.clear();\
    o_m_EMTopoSW35Aux.e_sampl.clear();\
    o_m_EMTopoSW35Aux.eta_sampl.clear();\
    o_m_EMTopoSW35Aux.phi_sampl.clear();\
    o_m_LArClusterEMFrwdAux. = -999;\
    o_m_LArClusterEMFrwdAux.xAOD::AuxContainerBase = -999;\
    o_m_LArClusterEMFrwdAux.basicSignal.clear();\
    o_m_LArClusterEMFrwdAux.time.clear();\
    o_m_LArClusterEMFrwdAux.samplingPattern.clear();\
    o_m_LArClusterEMFrwdAux.clusterSize.clear();\
    o_m_LArClusterEMFrwdAux.eta0.clear();\
    o_m_LArClusterEMFrwdAux.phi0.clear();\
    o_m_LArClusterEMFrwdAux.nBarrel.clear();\
    o_m_LArClusterEMFrwdAux.nEndcap.clear();\
    o_m_LArClusterEMFrwdAux.rawE.clear();\
    o_m_LArClusterEMFrwdAux.rawEta.clear();\
    o_m_LArClusterEMFrwdAux.rawPhi.clear();\
    o_m_LArClusterEMFrwdAux.rawM.clear();\
    o_m_LArClusterEMFrwdAux.altE.clear();\
    o_m_LArClusterEMFrwdAux.altEta.clear();\
    o_m_LArClusterEMFrwdAux.altPhi.clear();\
    o_m_LArClusterEMFrwdAux.altM.clear();\
    o_m_LArClusterEMFrwdAux.calE.clear();\
    o_m_LArClusterEMFrwdAux.calEta.clear();\
    o_m_LArClusterEMFrwdAux.calPhi.clear();\
    o_m_LArClusterEMFrwdAux.calM.clear();\
    o_m_LArClusterEMFrwdAux.e_sampl.clear();\
    o_m_LArClusterEMFrwdAux.eta_sampl.clear();\
    o_m_LArClusterEMFrwdAux.phi_sampl.clear();\
    o_m_LArClusterEMSofteAux. = -999;\
    o_m_LArClusterEMSofteAux.xAOD::AuxContainerBase = -999;\
    o_m_LArClusterEMSofteAux.basicSignal.clear();\
    o_m_LArClusterEMSofteAux.time.clear();\
    o_m_LArClusterEMSofteAux.samplingPattern.clear();\
    o_m_LArClusterEMSofteAux.clusterSize.clear();\
    o_m_LArClusterEMSofteAux.eta0.clear();\
    o_m_LArClusterEMSofteAux.phi0.clear();\
    o_m_LArClusterEMSofteAux.nBarrel.clear();\
    o_m_LArClusterEMSofteAux.nEndcap.clear();\
    o_m_LArClusterEMSofteAux.rawE.clear();\
    o_m_LArClusterEMSofteAux.rawEta.clear();\
    o_m_LArClusterEMSofteAux.rawPhi.clear();\
    o_m_LArClusterEMSofteAux.rawM.clear();\
    o_m_LArClusterEMSofteAux.altE.clear();\
    o_m_LArClusterEMSofteAux.altEta.clear();\
    o_m_LArClusterEMSofteAux.altPhi.clear();\
    o_m_LArClusterEMSofteAux.altM.clear();\
    o_m_LArClusterEMSofteAux.calE.clear();\
    o_m_LArClusterEMSofteAux.calEta.clear();\
    o_m_LArClusterEMSofteAux.calPhi.clear();\
    o_m_LArClusterEMSofteAux.calM.clear();\
    o_m_LArClusterEMSofteAux.e_sampl.clear();\
    o_m_LArClusterEMSofteAux.eta_sampl.clear();\
    o_m_LArClusterEMSofteAux.phi_sampl.clear();\
    o_m_egClusterCollectionAux. = -999;\
    o_m_egClusterCollectionAux.xAOD::AuxContainerBase = -999;\
    o_m_egClusterCollectionAux.basicSignal.clear();\
    o_m_egClusterCollectionAux.time.clear();\
    o_m_egClusterCollectionAux.samplingPattern.clear();\
    o_m_egClusterCollectionAux.clusterSize.clear();\
    o_m_egClusterCollectionAux.eta0.clear();\
    o_m_egClusterCollectionAux.phi0.clear();\
    o_m_egClusterCollectionAux.nBarrel.clear();\
    o_m_egClusterCollectionAux.nEndcap.clear();\
    o_m_egClusterCollectionAux.rawE.clear();\
    o_m_egClusterCollectionAux.rawEta.clear();\
    o_m_egClusterCollectionAux.rawPhi.clear();\
    o_m_egClusterCollectionAux.rawM.clear();\
    o_m_egClusterCollectionAux.altE.clear();\
    o_m_egClusterCollectionAux.altEta.clear();\
    o_m_egClusterCollectionAux.altPhi.clear();\
    o_m_egClusterCollectionAux.altM.clear();\
    o_m_egClusterCollectionAux.calE.clear();\
    o_m_egClusterCollectionAux.calEta.clear();\
    o_m_egClusterCollectionAux.calPhi.clear();\
    o_m_egClusterCollectionAux.calM.clear();\
    o_m_egClusterCollectionAux.e_sampl.clear();\
    o_m_egClusterCollectionAux.eta_sampl.clear();\
    o_m_egClusterCollectionAux.phi_sampl.clear();\
    o_m_TauRecContainerAux. = -999;\
    o_m_TauRecContainerAux.xAOD::AuxContainerBase = -999;\
    o_m_TauRecContainerAux.pt.clear();\
    o_m_TauRecContainerAux.eta.clear();\
    o_m_TauRecContainerAux.phi.clear();\
    o_m_TauRecContainerAux.e.clear();\
    o_m_TauRecContainerAux.m.clear();\
    o_m_TauRecContainerAux.ROIWord.clear();\
    o_m_TauRecContainerAux.charge.clear();\
    o_m_TauRecContainerAux.vetoFlags.clear();\
    o_m_TauRecContainerAux.isTauFlags.clear();\
    o_m_TauRecContainerAux.Likelihood.clear();\
    o_m_TauRecContainerAux.SafeLikelihood.clear();\
    o_m_TauRecContainerAux.BDTJetScore.clear();\
    o_m_TauRecContainerAux.BDTEleScore.clear();\
    o_m_TauRecContainerAux.PanTauScore.clear();\
    o_m_TauRecContainerAux.trackFilterPass.clear();\
    o_m_TauRecContainerAux.trackFilterProngs.clear();\
    o_m_TauRecContainerAux.trackFilterQuality.clear();\
    o_m_TauRecContainerAux.pi0ConeDR.clear();\
    o_m_TauRecContainerAux.ipZ0SinThetaSigLeadTrk.clear();\
    o_m_TauRecContainerAux.etOverPtLeadTrk.clear();\
    o_m_TauRecContainerAux.leadTrkPt.clear();\
    o_m_TauRecContainerAux.ipSigLeadTrk.clear();\
    o_m_TauRecContainerAux.ipSigLeadLooseTrk.clear();\
    o_m_TauRecContainerAux.etOverPtLeadLooseTrk.clear();\
    o_m_TauRecContainerAux.leadLooseTrkPt.clear();\
    o_m_TauRecContainerAux.chrgLooseTrk.clear();\
    o_m_TauRecContainerAux.massTrkSys.clear();\
    o_m_TauRecContainerAux.trkWidth2.clear();\
    o_m_TauRecContainerAux.trFlightPathSig.clear();\
    o_m_TauRecContainerAux.etEflow.clear();\
    o_m_TauRecContainerAux.mEflow.clear();\
    o_m_TauRecContainerAux.ele_E237E277.clear();\
    o_m_TauRecContainerAux.ele_PresamplerFraction.clear();\
    o_m_TauRecContainerAux.ele_ECALFirstFraction.clear();\
    o_m_TauRecContainerAux.numCells.clear();\
    o_m_TauRecContainerAux.numTopoClusters.clear();\
    o_m_TauRecContainerAux.numEffTopoClusters.clear();\
    o_m_TauRecContainerAux.topoInvMass.clear();\
    o_m_TauRecContainerAux.effTopoInvMass.clear();\
    o_m_TauRecContainerAux.topoMeanDeltaR.clear();\
    o_m_TauRecContainerAux.effTopoMeanDeltaR.clear();\
    o_m_TauRecContainerAux.EMRadius.clear();\
    o_m_TauRecContainerAux.hadRadius.clear();\
    o_m_TauRecContainerAux.etEMAtEMScale.clear();\
    o_m_TauRecContainerAux.etHadAtEMScale.clear();\
    o_m_TauRecContainerAux.isolFrac.clear();\
    o_m_TauRecContainerAux.centFrac.clear();\
    o_m_TauRecContainerAux.stripWidth2.clear();\
    o_m_TauRecContainerAux.nStrip.clear();\
    o_m_TauRecContainerAux.etEMCalib.clear();\
    o_m_TauRecContainerAux.etHadCalib.clear();\
    o_m_TauRecContainerAux.seedCalo_eta.clear();\
    o_m_TauRecContainerAux.seedCalo_phi.clear();\
    o_m_TauRecContainerAux.nIsolLooseTrk.clear();\
    o_m_TauRecContainerAux.trkAvgDist.clear();\
    o_m_TauRecContainerAux.trkRmsDist.clear();\
    o_m_TauRecContainerAux.lead2ClusterEOverAllClusterE.clear();\
    o_m_TauRecContainerAux.lead3ClusterEOverAllClusterE.clear();\
    o_m_TauRecContainerAux.caloIso.clear();\
    o_m_TauRecContainerAux.caloIsoCorrected.clear();\
    o_m_TauRecContainerAux.dRmax.clear();\
    o_m_TauRecContainerAux.secMaxStripEt.clear();\
    o_m_TauRecContainerAux.sumEMCellEtOverLeadTrkPt.clear();\
    o_m_TauRecContainerAux.hadLeakEt.clear();\
    o_m_TauRecContainerAux.EM_TES_scale.clear();\
    o_m_TauRecContainerAux.LC_TES_precalib.clear();\
    o_m_TauRecContainerAux.cellBasedEnergyRing1.clear();\
    o_m_TauRecContainerAux.cellBasedEnergyRing2.clear();\
    o_m_TauRecContainerAux.cellBasedEnergyRing3.clear();\
    o_m_TauRecContainerAux.cellBasedEnergyRing4.clear();\
    o_m_TauRecContainerAux.cellBasedEnergyRing5.clear();\
    o_m_TauRecContainerAux.cellBasedEnergyRing6.clear();\
    o_m_TauRecContainerAux.cellBasedEnergyRing7.clear();\
    o_m_TauRecContainerAux.TRT_NHT_OVER_NLT.clear();\
    o_m_TauRecContainerAux.TauJetVtxFraction.clear();\
    o_m_TauRecContainerAux.nPi0.clear();\
    o_m_TauRecContainerAux.nCharged.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_DecayModeProto.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_DecayMode.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed.clear();\
    o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_DecayModeProto.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_DecayMode.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts.clear();\
    o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged.clear();\
    o_m_LArCalibrationHitActive = -999;\
    o_m_LArCalibrationHitDeadMaterial = -999;\
    o_m_LArCalibrationHitInactive = -999;\
    o_m_GSFTrackParticleTruthCollection = -999;\
    o_m_AllPhotonsVxCandidatesAux. = -999;\
    o_m_AllPhotonsVxCandidatesAux.xAOD::AuxContainerBase = -999;\
    o_m_AllPhotonsVxCandidatesAux.chiSquared.clear();\
    o_m_AllPhotonsVxCandidatesAux.numberDoF.clear();\
    o_m_AllPhotonsVxCandidatesAux.x.clear();\
    o_m_AllPhotonsVxCandidatesAux.y.clear();\
    o_m_AllPhotonsVxCandidatesAux.z.clear();\
    o_m_AllPhotonsVxCandidatesAux.covariance.clear();\
    o_m_AllPhotonsVxCandidatesAux.vertexType.clear();\
    o_m_AllPhotonsVxCandidatesAux.trackWeights.clear();\
    o_m_PrimaryVerticesAux. = -999;\
    o_m_PrimaryVerticesAux.xAOD::AuxContainerBase = -999;\
    o_m_PrimaryVerticesAux.chiSquared.clear();\
    o_m_PrimaryVerticesAux.numberDoF.clear();\
    o_m_PrimaryVerticesAux.x.clear();\
    o_m_PrimaryVerticesAux.y.clear();\
    o_m_PrimaryVerticesAux.z.clear();\
    o_m_PrimaryVerticesAux.covariance.clear();\
    o_m_PrimaryVerticesAux.vertexType.clear();\
    o_m_PrimaryVerticesAux.trackWeights.clear();\
    o_m_MuonClusterCollection_Link = -999;\
    o_m_MuonCaloEnergyCollection = -999;\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Perp.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Par.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2SumPt.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Perp.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Par.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8SumPt.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Perp.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Par.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13SumPt.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Perp.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Par.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88SumPt.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.WIDTH.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.pt_truth.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerB.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB1.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB2.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB3.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar0.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap1.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap3.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar1.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar2.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap2.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.constituentScale.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.KtDr.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_pt.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.OriginIndex.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_eta.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.JVF.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_phi.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_CELL.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_m.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_DOTX.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_pt.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_JET.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_eta.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.nTrk_pv0_1GeV.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_phi.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_m.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.LArQuality.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.Timing.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.HECQuality.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.NegativeE.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.AverageLArQF.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.Centroid_r.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters5.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters10.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.TruthMFindex.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.TruthMF.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.NumTowers.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.ActiveArea.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPx.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPy.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPz.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaE.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Perp.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Par.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20SumPt.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Perp.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Par.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2SumPt.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Perp.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Par.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8SumPt.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Perp.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Par.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13SumPt.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Perp.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Par.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88SumPt.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.WIDTH.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.pt_truth.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerB.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB1.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB2.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB3.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap3.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.constituentScale.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_pt.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.OriginIndex.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_eta.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.JVF.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_phi.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_CELL.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_m.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_DOTX.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_pt.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_JET.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_eta.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.nTrk_pv0_1GeV.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_phi.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_m.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.LArQuality.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.Timing.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.HECQuality.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.NegativeE.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.AverageLArQF.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.Centroid_r.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters5.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters10.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.TruthMFindex.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.TruthMF.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.NumTowers.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerE.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME1.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME2.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME3.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC0.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC1.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt0.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt1.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.n90.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.ActiveArea.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPx.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPy.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPz.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaE.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Perp.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Par.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20SumPt.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Perp.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Par.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2SumPt.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Perp.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Par.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8SumPt.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Perp.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Par.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13SumPt.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Perp.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Par.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88SumPt.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.WIDTH.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.pt_truth.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerB.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB1.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB2.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB3.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar0.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar1.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar2.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.constituentScale.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.KtDr.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_pt.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.OriginIndex.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_eta.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.JVF.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_phi.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_CELL.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_m.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_DOTX.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_pt.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_JET.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_eta.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.nTrk_pv0_1GeV.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_phi.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_m.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.LArQuality.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.Timing.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.HECQuality.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.NegativeE.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.AverageLArQF.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.Centroid_r.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters5.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters10.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.TruthMFindex.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.TruthMF.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.NumTowers.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.ActiveArea.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPx.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPy.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPz.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaE.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Perp.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Par.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20SumPt.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Perp.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Par.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2SumPt.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Perp.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Par.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8SumPt.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Perp.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Par.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13SumPt.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Perp.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Par.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88SumPt.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.WIDTH.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.pt_truth.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerB.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB1.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB2.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB3.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar0.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap1.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap3.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar1.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar2.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap2.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.constituentScale.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.KtDr.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_pt.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.OriginIndex.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_eta.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.JVF.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_phi.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_CELL.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_m.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_DOTX.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_pt.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_JET.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_eta.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.nTrk_pv0_1GeV.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_phi.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_m.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.LArQuality.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.Timing.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.HECQuality.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.NegativeE.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.AverageLArQF.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.Centroid_r.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters5.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters10.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.TruthMFindex.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.TruthMF.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.NumTowers.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt0.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt1.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.ActiveArea.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPx.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPy.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPz.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaE.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Perp.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Par.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20SumPt.clear();\
    o_m_CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING.clear();\
    o_m_CaloCalTopoClusterAuxDyn.AVG_LAR_Q.clear();\
    o_m_CaloCalTopoClusterAuxDyn.AVG_TILE_Q.clear();\
    o_m_CaloCalTopoClusterAuxDyn.EM_PROBABILITY.clear();\
    o_m_CaloCalTopoClusterAuxDyn.HAD_WEIGHT.clear();\
    o_m_CaloCalTopoClusterAuxDyn.OOC_WEIGHT.clear();\
    o_m_CaloCalTopoClusterAuxDyn.DM_WEIGHT.clear();\
    o_m_CaloCalTopoClusterAuxDyn.FIRST_PHI.clear();\
    o_m_CaloCalTopoClusterAuxDyn.FIRST_ETA.clear();\
    o_m_CaloCalTopoClusterAuxDyn.DELTA_PHI.clear();\
    o_m_CaloCalTopoClusterAuxDyn.DELTA_THETA.clear();\
    o_m_CaloCalTopoClusterAuxDyn.DELTA_ALPHA.clear();\
    o_m_CaloCalTopoClusterAuxDyn.CENTER_X.clear();\
    o_m_CaloCalTopoClusterAuxDyn.CENTER_Y.clear();\
    o_m_CaloCalTopoClusterAuxDyn.CENTER_Z.clear();\
    o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_EM.clear();\
    o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_CORE.clear();\
    o_m_CaloCalTopoClusterAuxDyn.SECOND_ENG_DENS.clear();\
    o_m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS_CORR.clear();\
    o_m_CaloCalTopoClusterAuxDyn.BAD_CELLS_CORR_E.clear();\
    o_m_CaloCalTopoClusterAuxDyn.CellLink_ = -999;\
    o_m_CaloCalTopoClusterAuxDyn.CellLink.m_persKey = -999;\
    o_m_CaloCalTopoClusterAuxDyn.CellLink.m_persIndex = -999;\
    o_m_CaloCalTopoClusterAuxDyn.SECOND_R.clear();\
    o_m_CaloCalTopoClusterAuxDyn.SECOND_LAMBDA.clear();\
    o_m_CaloCalTopoClusterAuxDyn.CENTER_MAG.clear();\
    o_m_CaloCalTopoClusterAuxDyn.CENTER_LAMBDA.clear();\
    o_m_CaloCalTopoClusterAuxDyn.LATERAL.clear();\
    o_m_CaloCalTopoClusterAuxDyn.LONGITUDINAL.clear();\
    o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX.clear();\
    o_m_CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS.clear();\
    o_m_CaloCalTopoClusterAuxDyn.ISOLATION.clear();\
    o_m_CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS.clear();\
    o_m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS.clear();\
    o_m_CaloCalTopoClusterAuxDyn.BADLARQ_FRAC.clear();\
    o_m_CaloCalTopoClusterAuxDyn.ENG_POS.clear();\
    o_m_CaloCalTopoClusterAuxDyn.SIGNIFICANCE.clear();\
    o_m_CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE.clear();\
    o_m_EMTopoSW35AuxDyn.CellLink_ = -999;\
    o_m_EMTopoSW35AuxDyn.CellLink.m_persKey = -999;\
    o_m_EMTopoSW35AuxDyn.CellLink.m_persIndex = -999;\
    o_m_ElectronCollectionAuxDyn.ElectronIDLoosePP.clear();\
    o_m_ElectronCollectionAuxDyn.ElectronIDMediumPP.clear();\
    o_m_ElectronCollectionAuxDyn.ElectronIDTightPP.clear();\
    o_m_GSFTrackParticlesAuxDyn.originalTrackParticle_ = -999;\
    o_m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey = -999;\
    o_m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex = -999;\
    o_m_InDetTrackParticlesAuxDyn.truth_ = -999;\
    o_m_InDetTrackParticlesAuxDyn.truth.m_persKey = -999;\
    o_m_InDetTrackParticlesAuxDyn.truth.m_persIndex = -999;\
    o_m_InDetTrackParticlesAuxDyn.type.clear();\
    o_m_InDetTrackParticlesAuxDyn.origin.clear();\
    o_m_LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING.clear();\
    o_m_LArClusterEMFrwdAuxDyn.AVG_LAR_Q.clear();\
    o_m_LArClusterEMFrwdAuxDyn.AVG_TILE_Q.clear();\
    o_m_LArClusterEMFrwdAuxDyn.EM_PROBABILITY.clear();\
    o_m_LArClusterEMFrwdAuxDyn.HAD_WEIGHT.clear();\
    o_m_LArClusterEMFrwdAuxDyn.OOC_WEIGHT.clear();\
    o_m_LArClusterEMFrwdAuxDyn.DM_WEIGHT.clear();\
    o_m_LArClusterEMFrwdAuxDyn.FIRST_PHI.clear();\
    o_m_LArClusterEMFrwdAuxDyn.FIRST_ETA.clear();\
    o_m_LArClusterEMFrwdAuxDyn.DELTA_PHI.clear();\
    o_m_LArClusterEMFrwdAuxDyn.DELTA_THETA.clear();\
    o_m_LArClusterEMFrwdAuxDyn.DELTA_ALPHA.clear();\
    o_m_LArClusterEMFrwdAuxDyn.CENTER_X.clear();\
    o_m_LArClusterEMFrwdAuxDyn.CENTER_Y.clear();\
    o_m_LArClusterEMFrwdAuxDyn.CENTER_Z.clear();\
    o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_EM.clear();\
    o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE.clear();\
    o_m_LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS.clear();\
    o_m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR.clear();\
    o_m_LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E.clear();\
    o_m_LArClusterEMFrwdAuxDyn.CellLink_ = -999;\
    o_m_LArClusterEMFrwdAuxDyn.CellLink.m_persKey = -999;\
    o_m_LArClusterEMFrwdAuxDyn.CellLink.m_persIndex = -999;\
    o_m_LArClusterEMFrwdAuxDyn.SECOND_R.clear();\
    o_m_LArClusterEMFrwdAuxDyn.SECOND_LAMBDA.clear();\
    o_m_LArClusterEMFrwdAuxDyn.CENTER_MAG.clear();\
    o_m_LArClusterEMFrwdAuxDyn.CENTER_LAMBDA.clear();\
    o_m_LArClusterEMFrwdAuxDyn.LATERAL.clear();\
    o_m_LArClusterEMFrwdAuxDyn.LONGITUDINAL.clear();\
    o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX.clear();\
    o_m_LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS.clear();\
    o_m_LArClusterEMFrwdAuxDyn.ISOLATION.clear();\
    o_m_LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS.clear();\
    o_m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS.clear();\
    o_m_LArClusterEMFrwdAuxDyn.BADLARQ_FRAC.clear();\
    o_m_LArClusterEMFrwdAuxDyn.ENG_POS.clear();\
    o_m_LArClusterEMFrwdAuxDyn.SIGNIFICANCE.clear();\
    o_m_LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE.clear();\
    o_m_LArClusterEMSofteAuxDyn.CellLink_ = -999;\
    o_m_LArClusterEMSofteAuxDyn.CellLink.m_persKey = -999;\
    o_m_LArClusterEMSofteAuxDyn.CellLink.m_persIndex = -999;\
    o_m_MuonsAuxDyn.m.clear();\
    o_m_TruthEventAuxDyn.pdf2.clear();\
    o_m_TruthEventAuxDyn.id1.clear();\
    o_m_TruthEventAuxDyn.id2.clear();\
    o_m_TruthEventAuxDyn.pdfId1.clear();\
    o_m_TruthEventAuxDyn.pdfId2.clear();\
    o_m_TruthEventAuxDyn.x1.clear();\
    o_m_TruthEventAuxDyn.x2.clear();\
    o_m_TruthEventAuxDyn.scalePDF.clear();\
    o_m_TruthEventAuxDyn.pdf1.clear();\
    o_m_TruthParticleAuxDyn.polarizationTheta.clear();\
    o_m_TruthParticleAuxDyn.polarizationPhi.clear();\
    o_m_egClusterCollectionAuxDyn.CellLink_ = -999;\
    o_m_egClusterCollectionAuxDyn.CellLink.m_persKey = -999;\
    o_m_egClusterCollectionAuxDyn.CellLink.m_persIndex = -999;\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar0.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar1.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar2.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.KtDr.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerE.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME1.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME2.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME3.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC0.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC1.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC2.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC3.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC2.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC3.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerE.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME1.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME2.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME3.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC0.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC1.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt0.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC2.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC3.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerE.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME1.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME2.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME3.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC0.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC1.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC2.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC3.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap3.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt2.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap1.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap2.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt2.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap1.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap2.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt1.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt2.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt2.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt0.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt1.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL0.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL0.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL0.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL0.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL1.clear();\
    o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL2.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL1.clear();\
    o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL2.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL1.clear();\
    o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL2.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL1.clear();\
    o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL2.clear();\
  }
#endif


#if DUKHEPFILTER_TYPE == DEF_FILTER
#define COPYVAR                      \
  {   o_m_McEventInfo = m_McEventInfo;\
   o_m_AODCellContainer = m_AODCellContainer;\
   o_m_MBTSContainer = m_MBTSContainer;\
   o_m_TileMuObj = m_TileMuObj;\
   o_m_ElectronAODCollection = m_ElectronAODCollection;\
   o_m_PhotonAODCollection = m_PhotonAODCollection;\
   o_m_EventInfoAux. = m_EventInfoAux.;\
   o_m_EventInfoAux.xAOD::AuxInfoBase = m_EventInfoAux.xAOD::AuxInfoBase;\
   o_m_EventInfoAux.runNumber = m_EventInfoAux.runNumber;\
   o_m_EventInfoAux.eventNumber = m_EventInfoAux.eventNumber;\
   o_m_EventInfoAux.lumiBlock = m_EventInfoAux.lumiBlock;\
   o_m_EventInfoAux.timeStamp = m_EventInfoAux.timeStamp;\
   o_m_EventInfoAux.timeStampNSOffset = m_EventInfoAux.timeStampNSOffset;\
   o_m_EventInfoAux.bcid = m_EventInfoAux.bcid;\
   o_m_EventInfoAux.detectorMask0 = m_EventInfoAux.detectorMask0;\
   o_m_EventInfoAux.detectorMask1 = m_EventInfoAux.detectorMask1;\
   o_m_EventInfoAux.statusElement = m_EventInfoAux.statusElement;\
   o_m_EventInfoAux.extendedLevel1ID = m_EventInfoAux.extendedLevel1ID;\
   o_m_EventInfoAux.level1TriggerType = m_EventInfoAux.level1TriggerType;\
   o_m_EventInfoAux.streamTagNames = std::vector<string>(*m_EventInfoAux.streamTagNames);\
   o_m_EventInfoAux.streamTagTypes = std::vector<string>(*m_EventInfoAux.streamTagTypes);\
   o_m_EventInfoAux.streamTagObeysLumiblock = std::vector<char>(*m_EventInfoAux.streamTagObeysLumiblock);\
   o_m_EventInfoAux.actualInteractionsPerCrossing = m_EventInfoAux.actualInteractionsPerCrossing;\
   o_m_EventInfoAux.averageInteractionsPerCrossing = m_EventInfoAux.averageInteractionsPerCrossing;\
   o_m_EventInfoAux.pixelFlags = m_EventInfoAux.pixelFlags;\
   o_m_EventInfoAux.sctFlags = m_EventInfoAux.sctFlags;\
   o_m_EventInfoAux.trtFlags = m_EventInfoAux.trtFlags;\
   o_m_EventInfoAux.larFlags = m_EventInfoAux.larFlags;\
   o_m_EventInfoAux.tileFlags = m_EventInfoAux.tileFlags;\
   o_m_EventInfoAux.muonFlags = m_EventInfoAux.muonFlags;\
   o_m_EventInfoAux.forwardDetFlags = m_EventInfoAux.forwardDetFlags;\
   o_m_EventInfoAux.coreFlags = m_EventInfoAux.coreFlags;\
   o_m_EventInfoAux.backgroundFlags = m_EventInfoAux.backgroundFlags;\
   o_m_EventInfoAux.lumiFlags = m_EventInfoAux.lumiFlags;\
   o_m_EventInfo = m_EventInfo;\
   o_m_MET_CellOut_Eflow = m_MET_CellOut_Eflow;\
   o_m_MET_CellOut_Eflow_JetArea = m_MET_CellOut_Eflow_JetArea;\
   o_m_MET_CellOut_Eflow_JetAreaJVF = m_MET_CellOut_Eflow_JetAreaJVF;\
   o_m_MET_CellOut_Eflow_JetAreaRhoEta5JVF = m_MET_CellOut_Eflow_JetAreaRhoEta5JVF;\
   o_m_MET_CellOut_Eflow_STVF = m_MET_CellOut_Eflow_STVF;\
   o_m_MET_MuonMuons = m_MET_MuonMuons;\
   o_m_MET_Muons = m_MET_Muons;\
   o_m_MET_Muons_Spectro = m_MET_Muons_Spectro;\
   o_m_MET_Muons_Track = m_MET_Muons_Track;\
   o_m_MET_RefEle = m_MET_RefEle;\
   o_m_MET_RefFinal = m_MET_RefFinal;\
   o_m_MET_RefFinal_STVF = m_MET_RefFinal_STVF;\
   o_m_MET_RefGamma = m_MET_RefGamma;\
   o_m_MET_RefJet = m_MET_RefJet;\
   o_m_MET_RefJet_JVF = m_MET_RefJet_JVF;\
   o_m_MET_RefJet_JVFCut = m_MET_RefJet_JVFCut;\
   o_m_MET_RefTau = m_MET_RefTau;\
   o_m_MET_Track = m_MET_Track;\
   o_m_GSFTrackAssociation = m_GSFTrackAssociation;\
   o_m_LArNoisyROSummary = m_LArNoisyROSummary;\
   o_m_MET_RefComposition = m_MET_RefComposition;\
   o_m_ElectronCollection = m_ElectronCollection;\
   o_m_ElectronFrwdCollection = m_ElectronFrwdCollection;\
   o_m_AllPhotonsVxCandidates = m_AllPhotonsVxCandidates;\
   o_m_PrimaryVertices = m_PrimaryVertices;\
   o_m_PhotonCollection = m_PhotonCollection;\
   o_m_TruthParticleAux. = m_TruthParticleAux.;\
   o_m_TruthParticleAux.xAOD::AuxContainerBase = m_TruthParticleAux.xAOD::AuxContainerBase;\
   o_m_TruthParticleAux.pdgId = std::vector<int>(*m_TruthParticleAux.pdgId);\
   o_m_TruthParticleAux.barcode = std::vector<int>(*m_TruthParticleAux.barcode);\
   o_m_TruthParticleAux.status = std::vector<int>(*m_TruthParticleAux.status);\
   o_m_TruthParticleAux.px = std::vector<float>(*m_TruthParticleAux.px);\
   o_m_TruthParticleAux.py = std::vector<float>(*m_TruthParticleAux.py);\
   o_m_TruthParticleAux.pz = std::vector<float>(*m_TruthParticleAux.pz);\
   o_m_TruthParticleAux.e = std::vector<float>(*m_TruthParticleAux.e);\
   o_m_TruthParticleAux.m = std::vector<float>(*m_TruthParticleAux.m);\
   o_m_ElectronCollectionAux. = m_ElectronCollectionAux.;\
   o_m_ElectronCollectionAux.xAOD::EgammaAuxContainer_v1 = m_ElectronCollectionAux.xAOD::EgammaAuxContainer_v1;\
   o_m_ElectronCollectionAux.charge = std::vector<float>(*m_ElectronCollectionAux.charge);\
   o_m_ElectronCollectionAux.deltaEta0 = std::vector<float>(*m_ElectronCollectionAux.deltaEta0);\
   o_m_ElectronCollectionAux.deltaEta1 = std::vector<float>(*m_ElectronCollectionAux.deltaEta1);\
   o_m_ElectronCollectionAux.deltaEta2 = std::vector<float>(*m_ElectronCollectionAux.deltaEta2);\
   o_m_ElectronCollectionAux.deltaEta3 = std::vector<float>(*m_ElectronCollectionAux.deltaEta3);\
   o_m_ElectronCollectionAux.deltaPhi0 = std::vector<float>(*m_ElectronCollectionAux.deltaPhi0);\
   o_m_ElectronCollectionAux.deltaPhi1 = std::vector<float>(*m_ElectronCollectionAux.deltaPhi1);\
   o_m_ElectronCollectionAux.deltaPhi2 = std::vector<float>(*m_ElectronCollectionAux.deltaPhi2);\
   o_m_ElectronCollectionAux.deltaPhi3 = std::vector<float>(*m_ElectronCollectionAux.deltaPhi3);\
   o_m_ElectronCollectionAux.deltaPhiFromLastMeasurement = std::vector<float>(*m_ElectronCollectionAux.deltaPhiFromLastMeasurement);\
   o_m_ElectronCollectionAux.deltaPhiRescaled = std::vector<float>(*m_ElectronCollectionAux.deltaPhiRescaled);\
   o_m_ElectronCollectionAux.deltaPhiRescaled0 = std::vector<float>(*m_ElectronCollectionAux.deltaPhiRescaled0);\
   o_m_ElectronCollectionAux.deltaPhiRescaled1 = std::vector<float>(*m_ElectronCollectionAux.deltaPhiRescaled1);\
   o_m_ElectronCollectionAux.deltaPhiRescaled2 = std::vector<float>(*m_ElectronCollectionAux.deltaPhiRescaled2);\
   o_m_ElectronCollectionAux.deltaPhiRescaled3 = std::vector<float>(*m_ElectronCollectionAux.deltaPhiRescaled3);\
   o_m_ElectronFrwdCollectionAux. = m_ElectronFrwdCollectionAux.;\
   o_m_ElectronFrwdCollectionAux.xAOD::EgammaAuxContainer_v1 = m_ElectronFrwdCollectionAux.xAOD::EgammaAuxContainer_v1;\
   o_m_ElectronFrwdCollectionAux.charge = std::vector<float>(*m_ElectronFrwdCollectionAux.charge);\
   o_m_ElectronFrwdCollectionAux.deltaEta0 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaEta0);\
   o_m_ElectronFrwdCollectionAux.deltaEta1 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaEta1);\
   o_m_ElectronFrwdCollectionAux.deltaEta2 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaEta2);\
   o_m_ElectronFrwdCollectionAux.deltaEta3 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaEta3);\
   o_m_ElectronFrwdCollectionAux.deltaPhi0 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaPhi0);\
   o_m_ElectronFrwdCollectionAux.deltaPhi1 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaPhi1);\
   o_m_ElectronFrwdCollectionAux.deltaPhi2 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaPhi2);\
   o_m_ElectronFrwdCollectionAux.deltaPhi3 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaPhi3);\
   o_m_ElectronFrwdCollectionAux.deltaPhiFromLastMeasurement = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaPhiFromLastMeasurement);\
   o_m_ElectronFrwdCollectionAux.deltaPhiRescaled = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaPhiRescaled);\
   o_m_ElectronFrwdCollectionAux.deltaPhiRescaled0 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaPhiRescaled0);\
   o_m_ElectronFrwdCollectionAux.deltaPhiRescaled1 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaPhiRescaled1);\
   o_m_ElectronFrwdCollectionAux.deltaPhiRescaled2 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaPhiRescaled2);\
   o_m_ElectronFrwdCollectionAux.deltaPhiRescaled3 = std::vector<float>(*m_ElectronFrwdCollectionAux.deltaPhiRescaled3);\
   o_m_egClusterCollection_links = m_egClusterCollection_links;\
   o_m_MuonsAux. = m_MuonsAux.;\
   o_m_MuonsAux.xAOD::AuxContainerBase = m_MuonsAux.xAOD::AuxContainerBase;\
   o_m_MuonsAux.pt = std::vector<float>(*m_MuonsAux.pt);\
   o_m_MuonsAux.eta = std::vector<float>(*m_MuonsAux.eta);\
   o_m_MuonsAux.phi = std::vector<float>(*m_MuonsAux.phi);\
   o_m_MuonsAux.e = std::vector<float>(*m_MuonsAux.e);\
   o_m_MuonsAux.allAuthors = std::vector<unsigned short>(*m_MuonsAux.allAuthors);\
   o_m_MuonsAux.author = std::vector<unsigned short>(*m_MuonsAux.author);\
   o_m_MuonsAux.muonType = std::vector<unsigned short>(*m_MuonsAux.muonType);\
   o_m_MuonsAux.quality = std::vector<unsigned char>(*m_MuonsAux.quality);\
   o_m_MuonsAux.numberOfPrecisionLayers = std::vector<unsigned char>(*m_MuonsAux.numberOfPrecisionLayers);\
   o_m_MuonsAux.numberOfPrecisionHoleLayers = std::vector<unsigned char>(*m_MuonsAux.numberOfPrecisionHoleLayers);\
   o_m_MuonsAux.numberOfPhiLayers = std::vector<unsigned char>(*m_MuonsAux.numberOfPhiLayers);\
   o_m_MuonsAux.numberOfPhiHoleLayers = std::vector<unsigned char>(*m_MuonsAux.numberOfPhiHoleLayers);\
   o_m_MuonsAux.numberOfTriggerEtaLayers = std::vector<unsigned char>(*m_MuonsAux.numberOfTriggerEtaLayers);\
   o_m_MuonsAux.numberOfTriggerEtaHoleLayers = std::vector<unsigned char>(*m_MuonsAux.numberOfTriggerEtaHoleLayers);\
   o_m_MuonsAux.primarySector = std::vector<unsigned char>(*m_MuonsAux.primarySector);\
   o_m_MuonsAux.secondarySector = std::vector<unsigned char>(*m_MuonsAux.secondarySector);\
   o_m_MuonsAux.innerSmallHits = std::vector<unsigned char>(*m_MuonsAux.innerSmallHits);\
   o_m_MuonsAux.innerLargeHits = std::vector<unsigned char>(*m_MuonsAux.innerLargeHits);\
   o_m_MuonsAux.middleSmallHits = std::vector<unsigned char>(*m_MuonsAux.middleSmallHits);\
   o_m_MuonsAux.middleLargeHits = std::vector<unsigned char>(*m_MuonsAux.middleLargeHits);\
   o_m_MuonsAux.outerSmallHits = std::vector<unsigned char>(*m_MuonsAux.outerSmallHits);\
   o_m_MuonsAux.outerLargeHits = std::vector<unsigned char>(*m_MuonsAux.outerLargeHits);\
   o_m_MuonsAux.extendedSmallHits = std::vector<unsigned char>(*m_MuonsAux.extendedSmallHits);\
   o_m_MuonsAux.extendedLargeHits = std::vector<unsigned char>(*m_MuonsAux.extendedLargeHits);\
   o_m_MuonsAux.innerSmallHoles = std::vector<unsigned char>(*m_MuonsAux.innerSmallHoles);\
   o_m_MuonsAux.innerLargeHoles = std::vector<unsigned char>(*m_MuonsAux.innerLargeHoles);\
   o_m_MuonsAux.middleSmallHoles = std::vector<unsigned char>(*m_MuonsAux.middleSmallHoles);\
   o_m_MuonsAux.middleLargeHoles = std::vector<unsigned char>(*m_MuonsAux.middleLargeHoles);\
   o_m_MuonsAux.outerSmallHoles = std::vector<unsigned char>(*m_MuonsAux.outerSmallHoles);\
   o_m_MuonsAux.outerLargeHoles = std::vector<unsigned char>(*m_MuonsAux.outerLargeHoles);\
   o_m_MuonsAux.extendedSmallHoles = std::vector<unsigned char>(*m_MuonsAux.extendedSmallHoles);\
   o_m_MuonsAux.extendedLargeHoles = std::vector<unsigned char>(*m_MuonsAux.extendedLargeHoles);\
   o_m_MuonsAux.phiLayer1Hits = std::vector<unsigned char>(*m_MuonsAux.phiLayer1Hits);\
   o_m_MuonsAux.phiLayer2Hits = std::vector<unsigned char>(*m_MuonsAux.phiLayer2Hits);\
   o_m_MuonsAux.phiLayer3Hits = std::vector<unsigned char>(*m_MuonsAux.phiLayer3Hits);\
   o_m_MuonsAux.phiLayer4Hits = std::vector<unsigned char>(*m_MuonsAux.phiLayer4Hits);\
   o_m_MuonsAux.etaLayer1Hits = std::vector<unsigned char>(*m_MuonsAux.etaLayer1Hits);\
   o_m_MuonsAux.etaLayer2Hits = std::vector<unsigned char>(*m_MuonsAux.etaLayer2Hits);\
   o_m_MuonsAux.etaLayer3Hits = std::vector<unsigned char>(*m_MuonsAux.etaLayer3Hits);\
   o_m_MuonsAux.etaLayer4Hits = std::vector<unsigned char>(*m_MuonsAux.etaLayer4Hits);\
   o_m_MuonsAux.phiLayer1Holes = std::vector<unsigned char>(*m_MuonsAux.phiLayer1Holes);\
   o_m_MuonsAux.phiLayer2Holes = std::vector<unsigned char>(*m_MuonsAux.phiLayer2Holes);\
   o_m_MuonsAux.phiLayer3Holes = std::vector<unsigned char>(*m_MuonsAux.phiLayer3Holes);\
   o_m_MuonsAux.phiLayer4Holes = std::vector<unsigned char>(*m_MuonsAux.phiLayer4Holes);\
   o_m_MuonsAux.etaLayer1Holes = std::vector<unsigned char>(*m_MuonsAux.etaLayer1Holes);\
   o_m_MuonsAux.etaLayer2Holes = std::vector<unsigned char>(*m_MuonsAux.etaLayer2Holes);\
   o_m_MuonsAux.etaLayer3Holes = std::vector<unsigned char>(*m_MuonsAux.etaLayer3Holes);\
   o_m_MuonsAux.etaLayer4Holes = std::vector<unsigned char>(*m_MuonsAux.etaLayer4Holes);\
   o_m_MuonsAux.energyLossType = std::vector<unsigned char>(*m_MuonsAux.energyLossType);\
   o_m_TauRecContainer = m_TauRecContainer;\
   o_m_Muons = m_Muons;\
   o_m_egDetailAOD = m_egDetailAOD;\
   o_m_TruthEvent = m_TruthEvent;\
   o_m_GSFTrackParticlesAux. = m_GSFTrackParticlesAux.;\
   o_m_GSFTrackParticlesAux.xAOD::AuxContainerBase = m_GSFTrackParticlesAux.xAOD::AuxContainerBase;\
   o_m_GSFTrackParticlesAux.d0 = std::vector<float>(*m_GSFTrackParticlesAux.d0);\
   o_m_GSFTrackParticlesAux.z0 = std::vector<float>(*m_GSFTrackParticlesAux.z0);\
   o_m_GSFTrackParticlesAux.phi = std::vector<float>(*m_GSFTrackParticlesAux.phi);\
   o_m_GSFTrackParticlesAux.theta = std::vector<float>(*m_GSFTrackParticlesAux.theta);\
   o_m_GSFTrackParticlesAux.qOverP = std::vector<float>(*m_GSFTrackParticlesAux.qOverP);\
   o_m_GSFTrackParticlesAux.definingParametersCovMatrix = std::vector<std::vector<float> >(*m_GSFTrackParticlesAux.definingParametersCovMatrix);\
   o_m_GSFTrackParticlesAux.vx = std::vector<float>(*m_GSFTrackParticlesAux.vx);\
   o_m_GSFTrackParticlesAux.vy = std::vector<float>(*m_GSFTrackParticlesAux.vy);\
   o_m_GSFTrackParticlesAux.vz = std::vector<float>(*m_GSFTrackParticlesAux.vz);\
   o_m_GSFTrackParticlesAux.parameterX = std::vector<std::vector<float> >(*m_GSFTrackParticlesAux.parameterX);\
   o_m_GSFTrackParticlesAux.parameterY = std::vector<std::vector<float> >(*m_GSFTrackParticlesAux.parameterY);\
   o_m_GSFTrackParticlesAux.parameterZ = std::vector<std::vector<float> >(*m_GSFTrackParticlesAux.parameterZ);\
   o_m_GSFTrackParticlesAux.parameterPX = std::vector<std::vector<float> >(*m_GSFTrackParticlesAux.parameterPX);\
   o_m_GSFTrackParticlesAux.parameterPY = std::vector<std::vector<float> >(*m_GSFTrackParticlesAux.parameterPY);\
   o_m_GSFTrackParticlesAux.parameterPZ = std::vector<std::vector<float> >(*m_GSFTrackParticlesAux.parameterPZ);\
   o_m_GSFTrackParticlesAux.trackParameterCovarianceMatrices = std::vector<std::vector<float> >(*m_GSFTrackParticlesAux.trackParameterCovarianceMatrices);\
   o_m_GSFTrackParticlesAux.parameterPosition = std::vector<unsigned char>(*m_GSFTrackParticlesAux.parameterPosition);\
   o_m_GSFTrackParticlesAux.chiSquared = std::vector<float>(*m_GSFTrackParticlesAux.chiSquared);\
   o_m_GSFTrackParticlesAux.numberDoF = std::vector<float>(*m_GSFTrackParticlesAux.numberDoF);\
   o_m_GSFTrackParticlesAux.trackFitter = std::vector<unsigned char>(*m_GSFTrackParticlesAux.trackFitter);\
   o_m_GSFTrackParticlesAux.particleHypothesis = std::vector<unsigned char>(*m_GSFTrackParticlesAux.particleHypothesis);\
   o_m_GSFTrackParticlesAux.trackProperties = std::vector<unsigned char>(*m_GSFTrackParticlesAux.trackProperties);\
   o_m_GSFTrackParticlesAux.patternRecoInfo = std::vector<unsigned long>(*m_GSFTrackParticlesAux.patternRecoInfo);\
   o_m_GSFTrackParticlesAux.numberOfContribPixelLayers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfContribPixelLayers);\
   o_m_GSFTrackParticlesAux.numberOfBLayerHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfBLayerHits);\
   o_m_GSFTrackParticlesAux.numberOfBLayerOutliers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfBLayerOutliers);\
   o_m_GSFTrackParticlesAux.numberOfBLayerSharedHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfBLayerSharedHits);\
   o_m_GSFTrackParticlesAux.numberOfBLayerSplitHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfBLayerSplitHits);\
   o_m_GSFTrackParticlesAux.expectBLayerHit = std::vector<unsigned char>(*m_GSFTrackParticlesAux.expectBLayerHit);\
   o_m_GSFTrackParticlesAux.numberOfPixelHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPixelHits);\
   o_m_GSFTrackParticlesAux.numberOfPixelOutliers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPixelOutliers);\
   o_m_GSFTrackParticlesAux.numberOfPixelHoles = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPixelHoles);\
   o_m_GSFTrackParticlesAux.numberOfPixelSharedHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPixelSharedHits);\
   o_m_GSFTrackParticlesAux.numberOfPixelSplitHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPixelSplitHits);\
   o_m_GSFTrackParticlesAux.numberOfGangedPixels = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfGangedPixels);\
   o_m_GSFTrackParticlesAux.numberOfGangedFlaggedFakes = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfGangedFlaggedFakes);\
   o_m_GSFTrackParticlesAux.numberOfPixelDeadSensors = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPixelDeadSensors);\
   o_m_GSFTrackParticlesAux.numberOfPixelSpoiltHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPixelSpoiltHits);\
   o_m_GSFTrackParticlesAux.numberOfSCTHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfSCTHits);\
   o_m_GSFTrackParticlesAux.numberOfSCTOutliers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfSCTOutliers);\
   o_m_GSFTrackParticlesAux.numberOfSCTHoles = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfSCTHoles);\
   o_m_GSFTrackParticlesAux.numberOfSCTDoubleHoles = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfSCTDoubleHoles);\
   o_m_GSFTrackParticlesAux.numberOfSCTSharedHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfSCTSharedHits);\
   o_m_GSFTrackParticlesAux.numberOfSCTDeadSensors = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfSCTDeadSensors);\
   o_m_GSFTrackParticlesAux.numberOfSCTSpoiltHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfSCTSpoiltHits);\
   o_m_GSFTrackParticlesAux.numberOfTRTHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfTRTHits);\
   o_m_GSFTrackParticlesAux.numberOfTRTOutliers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfTRTOutliers);\
   o_m_GSFTrackParticlesAux.numberOfTRTHoles = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfTRTHoles);\
   o_m_GSFTrackParticlesAux.numberOfTRTHighThresholdHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfTRTHighThresholdHits);\
   o_m_GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfTRTHighThresholdOutliers);\
   o_m_GSFTrackParticlesAux.numberOfTRTDeadStraws = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfTRTDeadStraws);\
   o_m_GSFTrackParticlesAux.numberOfTRTTubeHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfTRTTubeHits);\
   o_m_GSFTrackParticlesAux.numberOfTRTXenonHits = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfTRTXenonHits);\
   o_m_GSFTrackParticlesAux.numberOfPrecisionLayers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPrecisionLayers);\
   o_m_GSFTrackParticlesAux.numberOfPrecisionHoleLayers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPrecisionHoleLayers);\
   o_m_GSFTrackParticlesAux.numberOfPhiLayers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPhiLayers);\
   o_m_GSFTrackParticlesAux.numberOfPhiHoleLayers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfPhiHoleLayers);\
   o_m_GSFTrackParticlesAux.numberOfTriggerEtaLayers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfTriggerEtaLayers);\
   o_m_GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfTriggerEtaHoleLayers);\
   o_m_GSFTrackParticlesAux.numberOfOutliersOnTrack = std::vector<unsigned char>(*m_GSFTrackParticlesAux.numberOfOutliersOnTrack);\
   o_m_GSFTrackParticlesAux.standardDeviationOfChi2OS = std::vector<unsigned char>(*m_GSFTrackParticlesAux.standardDeviationOfChi2OS);\
   o_m_GSFTrackParticlesAux.eProbabilityComb = std::vector<float>(*m_GSFTrackParticlesAux.eProbabilityComb);\
   o_m_GSFTrackParticlesAux.eProbabilityHT = std::vector<float>(*m_GSFTrackParticlesAux.eProbabilityHT);\
   o_m_GSFTrackParticlesAux.eProbabilityToT = std::vector<float>(*m_GSFTrackParticlesAux.eProbabilityToT);\
   o_m_GSFTrackParticlesAux.eProbabilityBrem = std::vector<float>(*m_GSFTrackParticlesAux.eProbabilityBrem);\
   o_m_InDetTrackParticlesAux. = m_InDetTrackParticlesAux.;\
   o_m_InDetTrackParticlesAux.xAOD::AuxContainerBase = m_InDetTrackParticlesAux.xAOD::AuxContainerBase;\
   o_m_InDetTrackParticlesAux.d0 = std::vector<float>(*m_InDetTrackParticlesAux.d0);\
   o_m_InDetTrackParticlesAux.z0 = std::vector<float>(*m_InDetTrackParticlesAux.z0);\
   o_m_InDetTrackParticlesAux.phi = std::vector<float>(*m_InDetTrackParticlesAux.phi);\
   o_m_InDetTrackParticlesAux.theta = std::vector<float>(*m_InDetTrackParticlesAux.theta);\
   o_m_InDetTrackParticlesAux.qOverP = std::vector<float>(*m_InDetTrackParticlesAux.qOverP);\
   o_m_InDetTrackParticlesAux.definingParametersCovMatrix = std::vector<std::vector<float> >(*m_InDetTrackParticlesAux.definingParametersCovMatrix);\
   o_m_InDetTrackParticlesAux.vx = std::vector<float>(*m_InDetTrackParticlesAux.vx);\
   o_m_InDetTrackParticlesAux.vy = std::vector<float>(*m_InDetTrackParticlesAux.vy);\
   o_m_InDetTrackParticlesAux.vz = std::vector<float>(*m_InDetTrackParticlesAux.vz);\
   o_m_InDetTrackParticlesAux.parameterX = std::vector<std::vector<float> >(*m_InDetTrackParticlesAux.parameterX);\
   o_m_InDetTrackParticlesAux.parameterY = std::vector<std::vector<float> >(*m_InDetTrackParticlesAux.parameterY);\
   o_m_InDetTrackParticlesAux.parameterZ = std::vector<std::vector<float> >(*m_InDetTrackParticlesAux.parameterZ);\
   o_m_InDetTrackParticlesAux.parameterPX = std::vector<std::vector<float> >(*m_InDetTrackParticlesAux.parameterPX);\
   o_m_InDetTrackParticlesAux.parameterPY = std::vector<std::vector<float> >(*m_InDetTrackParticlesAux.parameterPY);\
   o_m_InDetTrackParticlesAux.parameterPZ = std::vector<std::vector<float> >(*m_InDetTrackParticlesAux.parameterPZ);\
   o_m_InDetTrackParticlesAux.trackParameterCovarianceMatrices = std::vector<std::vector<float> >(*m_InDetTrackParticlesAux.trackParameterCovarianceMatrices);\
   o_m_InDetTrackParticlesAux.parameterPosition = std::vector<unsigned char>(*m_InDetTrackParticlesAux.parameterPosition);\
   o_m_InDetTrackParticlesAux.chiSquared = std::vector<float>(*m_InDetTrackParticlesAux.chiSquared);\
   o_m_InDetTrackParticlesAux.numberDoF = std::vector<float>(*m_InDetTrackParticlesAux.numberDoF);\
   o_m_InDetTrackParticlesAux.trackFitter = std::vector<unsigned char>(*m_InDetTrackParticlesAux.trackFitter);\
   o_m_InDetTrackParticlesAux.particleHypothesis = std::vector<unsigned char>(*m_InDetTrackParticlesAux.particleHypothesis);\
   o_m_InDetTrackParticlesAux.trackProperties = std::vector<unsigned char>(*m_InDetTrackParticlesAux.trackProperties);\
   o_m_InDetTrackParticlesAux.patternRecoInfo = std::vector<unsigned long>(*m_InDetTrackParticlesAux.patternRecoInfo);\
   o_m_InDetTrackParticlesAux.numberOfContribPixelLayers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfContribPixelLayers);\
   o_m_InDetTrackParticlesAux.numberOfBLayerHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfBLayerHits);\
   o_m_InDetTrackParticlesAux.numberOfBLayerOutliers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfBLayerOutliers);\
   o_m_InDetTrackParticlesAux.numberOfBLayerSharedHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfBLayerSharedHits);\
   o_m_InDetTrackParticlesAux.numberOfBLayerSplitHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfBLayerSplitHits);\
   o_m_InDetTrackParticlesAux.expectBLayerHit = std::vector<unsigned char>(*m_InDetTrackParticlesAux.expectBLayerHit);\
   o_m_InDetTrackParticlesAux.numberOfPixelHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPixelHits);\
   o_m_InDetTrackParticlesAux.numberOfPixelOutliers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPixelOutliers);\
   o_m_InDetTrackParticlesAux.numberOfPixelHoles = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPixelHoles);\
   o_m_InDetTrackParticlesAux.numberOfPixelSharedHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPixelSharedHits);\
   o_m_InDetTrackParticlesAux.numberOfPixelSplitHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPixelSplitHits);\
   o_m_InDetTrackParticlesAux.numberOfGangedPixels = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfGangedPixels);\
   o_m_InDetTrackParticlesAux.numberOfGangedFlaggedFakes = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfGangedFlaggedFakes);\
   o_m_InDetTrackParticlesAux.numberOfPixelDeadSensors = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPixelDeadSensors);\
   o_m_InDetTrackParticlesAux.numberOfPixelSpoiltHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPixelSpoiltHits);\
   o_m_InDetTrackParticlesAux.numberOfSCTHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfSCTHits);\
   o_m_InDetTrackParticlesAux.numberOfSCTOutliers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfSCTOutliers);\
   o_m_InDetTrackParticlesAux.numberOfSCTHoles = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfSCTHoles);\
   o_m_InDetTrackParticlesAux.numberOfSCTDoubleHoles = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfSCTDoubleHoles);\
   o_m_InDetTrackParticlesAux.numberOfSCTSharedHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfSCTSharedHits);\
   o_m_InDetTrackParticlesAux.numberOfSCTDeadSensors = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfSCTDeadSensors);\
   o_m_InDetTrackParticlesAux.numberOfSCTSpoiltHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfSCTSpoiltHits);\
   o_m_InDetTrackParticlesAux.numberOfTRTHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfTRTHits);\
   o_m_InDetTrackParticlesAux.numberOfTRTOutliers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfTRTOutliers);\
   o_m_InDetTrackParticlesAux.numberOfTRTHoles = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfTRTHoles);\
   o_m_InDetTrackParticlesAux.numberOfTRTHighThresholdHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfTRTHighThresholdHits);\
   o_m_InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfTRTHighThresholdOutliers);\
   o_m_InDetTrackParticlesAux.numberOfTRTDeadStraws = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfTRTDeadStraws);\
   o_m_InDetTrackParticlesAux.numberOfTRTTubeHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfTRTTubeHits);\
   o_m_InDetTrackParticlesAux.numberOfTRTXenonHits = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfTRTXenonHits);\
   o_m_InDetTrackParticlesAux.numberOfPrecisionLayers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPrecisionLayers);\
   o_m_InDetTrackParticlesAux.numberOfPrecisionHoleLayers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPrecisionHoleLayers);\
   o_m_InDetTrackParticlesAux.numberOfPhiLayers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPhiLayers);\
   o_m_InDetTrackParticlesAux.numberOfPhiHoleLayers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfPhiHoleLayers);\
   o_m_InDetTrackParticlesAux.numberOfTriggerEtaLayers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfTriggerEtaLayers);\
   o_m_InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfTriggerEtaHoleLayers);\
   o_m_InDetTrackParticlesAux.numberOfOutliersOnTrack = std::vector<unsigned char>(*m_InDetTrackParticlesAux.numberOfOutliersOnTrack);\
   o_m_InDetTrackParticlesAux.standardDeviationOfChi2OS = std::vector<unsigned char>(*m_InDetTrackParticlesAux.standardDeviationOfChi2OS);\
   o_m_InDetTrackParticlesAux.eProbabilityComb = std::vector<float>(*m_InDetTrackParticlesAux.eProbabilityComb);\
   o_m_InDetTrackParticlesAux.eProbabilityHT = std::vector<float>(*m_InDetTrackParticlesAux.eProbabilityHT);\
   o_m_InDetTrackParticlesAux.eProbabilityToT = std::vector<float>(*m_InDetTrackParticlesAux.eProbabilityToT);\
   o_m_InDetTrackParticlesAux.eProbabilityBrem = std::vector<float>(*m_InDetTrackParticlesAux.eProbabilityBrem);\
   o_m_InDetTrackParticlesForwardAux. = m_InDetTrackParticlesForwardAux.;\
   o_m_InDetTrackParticlesForwardAux.xAOD::AuxContainerBase = m_InDetTrackParticlesForwardAux.xAOD::AuxContainerBase;\
   o_m_InDetTrackParticlesForwardAux.d0 = std::vector<float>(*m_InDetTrackParticlesForwardAux.d0);\
   o_m_InDetTrackParticlesForwardAux.z0 = std::vector<float>(*m_InDetTrackParticlesForwardAux.z0);\
   o_m_InDetTrackParticlesForwardAux.phi = std::vector<float>(*m_InDetTrackParticlesForwardAux.phi);\
   o_m_InDetTrackParticlesForwardAux.theta = std::vector<float>(*m_InDetTrackParticlesForwardAux.theta);\
   o_m_InDetTrackParticlesForwardAux.qOverP = std::vector<float>(*m_InDetTrackParticlesForwardAux.qOverP);\
   o_m_InDetTrackParticlesForwardAux.definingParametersCovMatrix = std::vector<std::vector<float> >(*m_InDetTrackParticlesForwardAux.definingParametersCovMatrix);\
   o_m_InDetTrackParticlesForwardAux.vx = std::vector<float>(*m_InDetTrackParticlesForwardAux.vx);\
   o_m_InDetTrackParticlesForwardAux.vy = std::vector<float>(*m_InDetTrackParticlesForwardAux.vy);\
   o_m_InDetTrackParticlesForwardAux.vz = std::vector<float>(*m_InDetTrackParticlesForwardAux.vz);\
   o_m_InDetTrackParticlesForwardAux.parameterX = std::vector<std::vector<float> >(*m_InDetTrackParticlesForwardAux.parameterX);\
   o_m_InDetTrackParticlesForwardAux.parameterY = std::vector<std::vector<float> >(*m_InDetTrackParticlesForwardAux.parameterY);\
   o_m_InDetTrackParticlesForwardAux.parameterZ = std::vector<std::vector<float> >(*m_InDetTrackParticlesForwardAux.parameterZ);\
   o_m_InDetTrackParticlesForwardAux.parameterPX = std::vector<std::vector<float> >(*m_InDetTrackParticlesForwardAux.parameterPX);\
   o_m_InDetTrackParticlesForwardAux.parameterPY = std::vector<std::vector<float> >(*m_InDetTrackParticlesForwardAux.parameterPY);\
   o_m_InDetTrackParticlesForwardAux.parameterPZ = std::vector<std::vector<float> >(*m_InDetTrackParticlesForwardAux.parameterPZ);\
   o_m_InDetTrackParticlesForwardAux.trackParameterCovarianceMatrices = std::vector<std::vector<float> >(*m_InDetTrackParticlesForwardAux.trackParameterCovarianceMatrices);\
   o_m_InDetTrackParticlesForwardAux.parameterPosition = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.parameterPosition);\
   o_m_InDetTrackParticlesForwardAux.chiSquared = std::vector<float>(*m_InDetTrackParticlesForwardAux.chiSquared);\
   o_m_InDetTrackParticlesForwardAux.numberDoF = std::vector<float>(*m_InDetTrackParticlesForwardAux.numberDoF);\
   o_m_InDetTrackParticlesForwardAux.trackFitter = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.trackFitter);\
   o_m_InDetTrackParticlesForwardAux.particleHypothesis = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.particleHypothesis);\
   o_m_InDetTrackParticlesForwardAux.trackProperties = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.trackProperties);\
   o_m_InDetTrackParticlesForwardAux.patternRecoInfo = std::vector<unsigned long>(*m_InDetTrackParticlesForwardAux.patternRecoInfo);\
   o_m_InDetTrackParticlesForwardAux.numberOfContribPixelLayers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfContribPixelLayers);\
   o_m_InDetTrackParticlesForwardAux.numberOfBLayerHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfBLayerHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfBLayerOutliers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfBLayerOutliers);\
   o_m_InDetTrackParticlesForwardAux.numberOfBLayerSharedHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfBLayerSharedHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfBLayerSplitHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfBLayerSplitHits);\
   o_m_InDetTrackParticlesForwardAux.expectBLayerHit = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.expectBLayerHit);\
   o_m_InDetTrackParticlesForwardAux.numberOfPixelHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPixelHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfPixelOutliers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPixelOutliers);\
   o_m_InDetTrackParticlesForwardAux.numberOfPixelHoles = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPixelHoles);\
   o_m_InDetTrackParticlesForwardAux.numberOfPixelSharedHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPixelSharedHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfPixelSplitHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPixelSplitHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfGangedPixels = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfGangedPixels);\
   o_m_InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfGangedFlaggedFakes);\
   o_m_InDetTrackParticlesForwardAux.numberOfPixelDeadSensors = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPixelDeadSensors);\
   o_m_InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPixelSpoiltHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfSCTHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfSCTHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfSCTOutliers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfSCTOutliers);\
   o_m_InDetTrackParticlesForwardAux.numberOfSCTHoles = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfSCTHoles);\
   o_m_InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfSCTDoubleHoles);\
   o_m_InDetTrackParticlesForwardAux.numberOfSCTSharedHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfSCTSharedHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfSCTDeadSensors = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfSCTDeadSensors);\
   o_m_InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfSCTSpoiltHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfTRTHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfTRTHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfTRTOutliers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfTRTOutliers);\
   o_m_InDetTrackParticlesForwardAux.numberOfTRTHoles = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfTRTHoles);\
   o_m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfTRTHighThresholdOutliers);\
   o_m_InDetTrackParticlesForwardAux.numberOfTRTDeadStraws = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfTRTDeadStraws);\
   o_m_InDetTrackParticlesForwardAux.numberOfTRTTubeHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfTRTTubeHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfTRTXenonHits = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfTRTXenonHits);\
   o_m_InDetTrackParticlesForwardAux.numberOfPrecisionLayers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPrecisionLayers);\
   o_m_InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPrecisionHoleLayers);\
   o_m_InDetTrackParticlesForwardAux.numberOfPhiLayers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPhiLayers);\
   o_m_InDetTrackParticlesForwardAux.numberOfPhiHoleLayers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfPhiHoleLayers);\
   o_m_InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfTriggerEtaLayers);\
   o_m_InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfTriggerEtaHoleLayers);\
   o_m_InDetTrackParticlesForwardAux.numberOfOutliersOnTrack = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.numberOfOutliersOnTrack);\
   o_m_InDetTrackParticlesForwardAux.standardDeviationOfChi2OS = std::vector<unsigned char>(*m_InDetTrackParticlesForwardAux.standardDeviationOfChi2OS);\
   o_m_InDetTrackParticlesForwardAux.eProbabilityComb = std::vector<float>(*m_InDetTrackParticlesForwardAux.eProbabilityComb);\
   o_m_InDetTrackParticlesForwardAux.eProbabilityHT = std::vector<float>(*m_InDetTrackParticlesForwardAux.eProbabilityHT);\
   o_m_InDetTrackParticlesForwardAux.eProbabilityToT = std::vector<float>(*m_InDetTrackParticlesForwardAux.eProbabilityToT);\
   o_m_InDetTrackParticlesForwardAux.eProbabilityBrem = std::vector<float>(*m_InDetTrackParticlesForwardAux.eProbabilityBrem);\
   o_m_CaloCalTopoCluster = m_CaloCalTopoCluster;\
   o_m_EMTopoSW35 = m_EMTopoSW35;\
   o_m_LArClusterEMFrwd = m_LArClusterEMFrwd;\
   o_m_LArClusterEMSofte = m_LArClusterEMSofte;\
   o_m_egClusterCollection = m_egClusterCollection;\
   o_m_MuonEntryLayerFilter = m_MuonEntryLayerFilter;\
   o_m_TruthParticle = m_TruthParticle;\
   o_m_TruthVertex = m_TruthVertex;\
   o_m_AntiKt4LCTopoJets = m_AntiKt4LCTopoJets;\
   o_m_AntiKt4TopoEMJets = m_AntiKt4TopoEMJets;\
   o_m_AntiKt6LCTopoJets = m_AntiKt6LCTopoJets;\
   o_m_AntiKt6TopoEMJets = m_AntiKt6TopoEMJets;\
   o_m_PhotonCollectionAux. = m_PhotonCollectionAux.;\
   o_m_PhotonCollectionAux.xAOD::EgammaAuxContainer_v1 = m_PhotonCollectionAux.xAOD::EgammaAuxContainer_v1;\
   o_m_PhotonCollectionAux.convMatchDeltaEta1 = std::vector<float>(*m_PhotonCollectionAux.convMatchDeltaEta1);\
   o_m_PhotonCollectionAux.convMatchDeltaEta2 = std::vector<float>(*m_PhotonCollectionAux.convMatchDeltaEta2);\
   o_m_PhotonCollectionAux.convMatchDeltaPhi1 = std::vector<float>(*m_PhotonCollectionAux.convMatchDeltaPhi1);\
   o_m_PhotonCollectionAux.convMatchDeltaPhi2 = std::vector<float>(*m_PhotonCollectionAux.convMatchDeltaPhi2);\
   o_m_TruthVertexAux. = m_TruthVertexAux.;\
   o_m_TruthVertexAux.xAOD::AuxContainerBase = m_TruthVertexAux.xAOD::AuxContainerBase;\
   o_m_TruthVertexAux.id = std::vector<int>(*m_TruthVertexAux.id);\
   o_m_TruthVertexAux.barcode = std::vector<int>(*m_TruthVertexAux.barcode);\
   o_m_TruthVertexAux.x = std::vector<float>(*m_TruthVertexAux.x);\
   o_m_TruthVertexAux.y = std::vector<float>(*m_TruthVertexAux.y);\
   o_m_TruthVertexAux.z = std::vector<float>(*m_TruthVertexAux.z);\
   o_m_TruthVertexAux.t = std::vector<float>(*m_TruthVertexAux.t);\
   o_m_TruthVertexAux.weights = std::vector<std::vector<float> >(*m_TruthVertexAux.weights);\
   o_m_TruthEventAux. = m_TruthEventAux.;\
   o_m_TruthEventAux.xAOD::AuxContainerBase = m_TruthEventAux.xAOD::AuxContainerBase;\
   o_m_TruthEventAux.eventScale = std::vector<float>(*m_TruthEventAux.eventScale);\
   o_m_TruthEventAux.alphaQCD = std::vector<float>(*m_TruthEventAux.alphaQCD);\
   o_m_TruthEventAux.alphaQED = std::vector<float>(*m_TruthEventAux.alphaQED);\
   o_m_TruthEventAux.weights = std::vector<std::vector<float> >(*m_TruthEventAux.weights);\
   o_m_TruthEventAux.crossSection = std::vector<float>(*m_TruthEventAux.crossSection);\
   o_m_TruthEventAux.crossSectionError = std::vector<float>(*m_TruthEventAux.crossSectionError);\
   o_m_GSFTrackParticles = m_GSFTrackParticles;\
   o_m_InDetTrackParticles = m_InDetTrackParticles;\
   o_m_InDetTrackParticlesForward = m_InDetTrackParticlesForward;\
   o_m_AntiKt4LCTopoJetsAux. = m_AntiKt4LCTopoJetsAux.;\
   o_m_AntiKt4LCTopoJetsAux.xAOD::AuxContainerBase = m_AntiKt4LCTopoJetsAux.xAOD::AuxContainerBase;\
   o_m_AntiKt4LCTopoJetsAux.pt = std::vector<float>(*m_AntiKt4LCTopoJetsAux.pt);\
   o_m_AntiKt4LCTopoJetsAux.eta = std::vector<float>(*m_AntiKt4LCTopoJetsAux.eta);\
   o_m_AntiKt4LCTopoJetsAux.phi = std::vector<float>(*m_AntiKt4LCTopoJetsAux.phi);\
   o_m_AntiKt4LCTopoJetsAux.m = std::vector<float>(*m_AntiKt4LCTopoJetsAux.m);\
   o_m_AntiKt4LCTopoJetsAux.constituentWeights = std::vector<std::vector<float> >(*m_AntiKt4LCTopoJetsAux.constituentWeights);\
   o_m_AntiKt4TopoEMJetsAux. = m_AntiKt4TopoEMJetsAux.;\
   o_m_AntiKt4TopoEMJetsAux.xAOD::AuxContainerBase = m_AntiKt4TopoEMJetsAux.xAOD::AuxContainerBase;\
   o_m_AntiKt4TopoEMJetsAux.pt = std::vector<float>(*m_AntiKt4TopoEMJetsAux.pt);\
   o_m_AntiKt4TopoEMJetsAux.eta = std::vector<float>(*m_AntiKt4TopoEMJetsAux.eta);\
   o_m_AntiKt4TopoEMJetsAux.phi = std::vector<float>(*m_AntiKt4TopoEMJetsAux.phi);\
   o_m_AntiKt4TopoEMJetsAux.m = std::vector<float>(*m_AntiKt4TopoEMJetsAux.m);\
   o_m_AntiKt4TopoEMJetsAux.constituentWeights = std::vector<std::vector<float> >(*m_AntiKt4TopoEMJetsAux.constituentWeights);\
   o_m_AntiKt6LCTopoJetsAux. = m_AntiKt6LCTopoJetsAux.;\
   o_m_AntiKt6LCTopoJetsAux.xAOD::AuxContainerBase = m_AntiKt6LCTopoJetsAux.xAOD::AuxContainerBase;\
   o_m_AntiKt6LCTopoJetsAux.pt = std::vector<float>(*m_AntiKt6LCTopoJetsAux.pt);\
   o_m_AntiKt6LCTopoJetsAux.eta = std::vector<float>(*m_AntiKt6LCTopoJetsAux.eta);\
   o_m_AntiKt6LCTopoJetsAux.phi = std::vector<float>(*m_AntiKt6LCTopoJetsAux.phi);\
   o_m_AntiKt6LCTopoJetsAux.m = std::vector<float>(*m_AntiKt6LCTopoJetsAux.m);\
   o_m_AntiKt6LCTopoJetsAux.constituentWeights = std::vector<std::vector<float> >(*m_AntiKt6LCTopoJetsAux.constituentWeights);\
   o_m_AntiKt6TopoEMJetsAux. = m_AntiKt6TopoEMJetsAux.;\
   o_m_AntiKt6TopoEMJetsAux.xAOD::AuxContainerBase = m_AntiKt6TopoEMJetsAux.xAOD::AuxContainerBase;\
   o_m_AntiKt6TopoEMJetsAux.pt = std::vector<float>(*m_AntiKt6TopoEMJetsAux.pt);\
   o_m_AntiKt6TopoEMJetsAux.eta = std::vector<float>(*m_AntiKt6TopoEMJetsAux.eta);\
   o_m_AntiKt6TopoEMJetsAux.phi = std::vector<float>(*m_AntiKt6TopoEMJetsAux.phi);\
   o_m_AntiKt6TopoEMJetsAux.m = std::vector<float>(*m_AntiKt6TopoEMJetsAux.m);\
   o_m_AntiKt6TopoEMJetsAux.constituentWeights = std::vector<std::vector<float> >(*m_AntiKt6TopoEMJetsAux.constituentWeights);\
   o_m_CaloCalTopoClusterAux. = m_CaloCalTopoClusterAux.;\
   o_m_CaloCalTopoClusterAux.xAOD::AuxContainerBase = m_CaloCalTopoClusterAux.xAOD::AuxContainerBase;\
   o_m_CaloCalTopoClusterAux.basicSignal = std::vector<float>(*m_CaloCalTopoClusterAux.basicSignal);\
   o_m_CaloCalTopoClusterAux.time = std::vector<float>(*m_CaloCalTopoClusterAux.time);\
   o_m_CaloCalTopoClusterAux.samplingPattern = std::vector<unsigned int>(*m_CaloCalTopoClusterAux.samplingPattern);\
   o_m_CaloCalTopoClusterAux.clusterSize = std::vector<unsigned int>(*m_CaloCalTopoClusterAux.clusterSize);\
   o_m_CaloCalTopoClusterAux.eta0 = std::vector<float>(*m_CaloCalTopoClusterAux.eta0);\
   o_m_CaloCalTopoClusterAux.phi0 = std::vector<float>(*m_CaloCalTopoClusterAux.phi0);\
   o_m_CaloCalTopoClusterAux.nBarrel = std::vector<int>(*m_CaloCalTopoClusterAux.nBarrel);\
   o_m_CaloCalTopoClusterAux.nEndcap = std::vector<int>(*m_CaloCalTopoClusterAux.nEndcap);\
   o_m_CaloCalTopoClusterAux.rawE = std::vector<float>(*m_CaloCalTopoClusterAux.rawE);\
   o_m_CaloCalTopoClusterAux.rawEta = std::vector<float>(*m_CaloCalTopoClusterAux.rawEta);\
   o_m_CaloCalTopoClusterAux.rawPhi = std::vector<float>(*m_CaloCalTopoClusterAux.rawPhi);\
   o_m_CaloCalTopoClusterAux.rawM = std::vector<float>(*m_CaloCalTopoClusterAux.rawM);\
   o_m_CaloCalTopoClusterAux.altE = std::vector<float>(*m_CaloCalTopoClusterAux.altE);\
   o_m_CaloCalTopoClusterAux.altEta = std::vector<float>(*m_CaloCalTopoClusterAux.altEta);\
   o_m_CaloCalTopoClusterAux.altPhi = std::vector<float>(*m_CaloCalTopoClusterAux.altPhi);\
   o_m_CaloCalTopoClusterAux.altM = std::vector<float>(*m_CaloCalTopoClusterAux.altM);\
   o_m_CaloCalTopoClusterAux.calE = std::vector<float>(*m_CaloCalTopoClusterAux.calE);\
   o_m_CaloCalTopoClusterAux.calEta = std::vector<float>(*m_CaloCalTopoClusterAux.calEta);\
   o_m_CaloCalTopoClusterAux.calPhi = std::vector<float>(*m_CaloCalTopoClusterAux.calPhi);\
   o_m_CaloCalTopoClusterAux.calM = std::vector<float>(*m_CaloCalTopoClusterAux.calM);\
   o_m_CaloCalTopoClusterAux.e_sampl = std::vector<std::vector<float> >(*m_CaloCalTopoClusterAux.e_sampl);\
   o_m_CaloCalTopoClusterAux.eta_sampl = std::vector<std::vector<float> >(*m_CaloCalTopoClusterAux.eta_sampl);\
   o_m_CaloCalTopoClusterAux.phi_sampl = std::vector<std::vector<float> >(*m_CaloCalTopoClusterAux.phi_sampl);\
   o_m_EMTopoSW35Aux. = m_EMTopoSW35Aux.;\
   o_m_EMTopoSW35Aux.xAOD::AuxContainerBase = m_EMTopoSW35Aux.xAOD::AuxContainerBase;\
   o_m_EMTopoSW35Aux.basicSignal = std::vector<float>(*m_EMTopoSW35Aux.basicSignal);\
   o_m_EMTopoSW35Aux.time = std::vector<float>(*m_EMTopoSW35Aux.time);\
   o_m_EMTopoSW35Aux.samplingPattern = std::vector<unsigned int>(*m_EMTopoSW35Aux.samplingPattern);\
   o_m_EMTopoSW35Aux.clusterSize = std::vector<unsigned int>(*m_EMTopoSW35Aux.clusterSize);\
   o_m_EMTopoSW35Aux.eta0 = std::vector<float>(*m_EMTopoSW35Aux.eta0);\
   o_m_EMTopoSW35Aux.phi0 = std::vector<float>(*m_EMTopoSW35Aux.phi0);\
   o_m_EMTopoSW35Aux.nBarrel = std::vector<int>(*m_EMTopoSW35Aux.nBarrel);\
   o_m_EMTopoSW35Aux.nEndcap = std::vector<int>(*m_EMTopoSW35Aux.nEndcap);\
   o_m_EMTopoSW35Aux.rawE = std::vector<float>(*m_EMTopoSW35Aux.rawE);\
   o_m_EMTopoSW35Aux.rawEta = std::vector<float>(*m_EMTopoSW35Aux.rawEta);\
   o_m_EMTopoSW35Aux.rawPhi = std::vector<float>(*m_EMTopoSW35Aux.rawPhi);\
   o_m_EMTopoSW35Aux.rawM = std::vector<float>(*m_EMTopoSW35Aux.rawM);\
   o_m_EMTopoSW35Aux.altE = std::vector<float>(*m_EMTopoSW35Aux.altE);\
   o_m_EMTopoSW35Aux.altEta = std::vector<float>(*m_EMTopoSW35Aux.altEta);\
   o_m_EMTopoSW35Aux.altPhi = std::vector<float>(*m_EMTopoSW35Aux.altPhi);\
   o_m_EMTopoSW35Aux.altM = std::vector<float>(*m_EMTopoSW35Aux.altM);\
   o_m_EMTopoSW35Aux.calE = std::vector<float>(*m_EMTopoSW35Aux.calE);\
   o_m_EMTopoSW35Aux.calEta = std::vector<float>(*m_EMTopoSW35Aux.calEta);\
   o_m_EMTopoSW35Aux.calPhi = std::vector<float>(*m_EMTopoSW35Aux.calPhi);\
   o_m_EMTopoSW35Aux.calM = std::vector<float>(*m_EMTopoSW35Aux.calM);\
   o_m_EMTopoSW35Aux.e_sampl = std::vector<std::vector<float> >(*m_EMTopoSW35Aux.e_sampl);\
   o_m_EMTopoSW35Aux.eta_sampl = std::vector<std::vector<float> >(*m_EMTopoSW35Aux.eta_sampl);\
   o_m_EMTopoSW35Aux.phi_sampl = std::vector<std::vector<float> >(*m_EMTopoSW35Aux.phi_sampl);\
   o_m_LArClusterEMFrwdAux. = m_LArClusterEMFrwdAux.;\
   o_m_LArClusterEMFrwdAux.xAOD::AuxContainerBase = m_LArClusterEMFrwdAux.xAOD::AuxContainerBase;\
   o_m_LArClusterEMFrwdAux.basicSignal = std::vector<float>(*m_LArClusterEMFrwdAux.basicSignal);\
   o_m_LArClusterEMFrwdAux.time = std::vector<float>(*m_LArClusterEMFrwdAux.time);\
   o_m_LArClusterEMFrwdAux.samplingPattern = std::vector<unsigned int>(*m_LArClusterEMFrwdAux.samplingPattern);\
   o_m_LArClusterEMFrwdAux.clusterSize = std::vector<unsigned int>(*m_LArClusterEMFrwdAux.clusterSize);\
   o_m_LArClusterEMFrwdAux.eta0 = std::vector<float>(*m_LArClusterEMFrwdAux.eta0);\
   o_m_LArClusterEMFrwdAux.phi0 = std::vector<float>(*m_LArClusterEMFrwdAux.phi0);\
   o_m_LArClusterEMFrwdAux.nBarrel = std::vector<int>(*m_LArClusterEMFrwdAux.nBarrel);\
   o_m_LArClusterEMFrwdAux.nEndcap = std::vector<int>(*m_LArClusterEMFrwdAux.nEndcap);\
   o_m_LArClusterEMFrwdAux.rawE = std::vector<float>(*m_LArClusterEMFrwdAux.rawE);\
   o_m_LArClusterEMFrwdAux.rawEta = std::vector<float>(*m_LArClusterEMFrwdAux.rawEta);\
   o_m_LArClusterEMFrwdAux.rawPhi = std::vector<float>(*m_LArClusterEMFrwdAux.rawPhi);\
   o_m_LArClusterEMFrwdAux.rawM = std::vector<float>(*m_LArClusterEMFrwdAux.rawM);\
   o_m_LArClusterEMFrwdAux.altE = std::vector<float>(*m_LArClusterEMFrwdAux.altE);\
   o_m_LArClusterEMFrwdAux.altEta = std::vector<float>(*m_LArClusterEMFrwdAux.altEta);\
   o_m_LArClusterEMFrwdAux.altPhi = std::vector<float>(*m_LArClusterEMFrwdAux.altPhi);\
   o_m_LArClusterEMFrwdAux.altM = std::vector<float>(*m_LArClusterEMFrwdAux.altM);\
   o_m_LArClusterEMFrwdAux.calE = std::vector<float>(*m_LArClusterEMFrwdAux.calE);\
   o_m_LArClusterEMFrwdAux.calEta = std::vector<float>(*m_LArClusterEMFrwdAux.calEta);\
   o_m_LArClusterEMFrwdAux.calPhi = std::vector<float>(*m_LArClusterEMFrwdAux.calPhi);\
   o_m_LArClusterEMFrwdAux.calM = std::vector<float>(*m_LArClusterEMFrwdAux.calM);\
   o_m_LArClusterEMFrwdAux.e_sampl = std::vector<std::vector<float> >(*m_LArClusterEMFrwdAux.e_sampl);\
   o_m_LArClusterEMFrwdAux.eta_sampl = std::vector<std::vector<float> >(*m_LArClusterEMFrwdAux.eta_sampl);\
   o_m_LArClusterEMFrwdAux.phi_sampl = std::vector<std::vector<float> >(*m_LArClusterEMFrwdAux.phi_sampl);\
   o_m_LArClusterEMSofteAux. = m_LArClusterEMSofteAux.;\
   o_m_LArClusterEMSofteAux.xAOD::AuxContainerBase = m_LArClusterEMSofteAux.xAOD::AuxContainerBase;\
   o_m_LArClusterEMSofteAux.basicSignal = std::vector<float>(*m_LArClusterEMSofteAux.basicSignal);\
   o_m_LArClusterEMSofteAux.time = std::vector<float>(*m_LArClusterEMSofteAux.time);\
   o_m_LArClusterEMSofteAux.samplingPattern = std::vector<unsigned int>(*m_LArClusterEMSofteAux.samplingPattern);\
   o_m_LArClusterEMSofteAux.clusterSize = std::vector<unsigned int>(*m_LArClusterEMSofteAux.clusterSize);\
   o_m_LArClusterEMSofteAux.eta0 = std::vector<float>(*m_LArClusterEMSofteAux.eta0);\
   o_m_LArClusterEMSofteAux.phi0 = std::vector<float>(*m_LArClusterEMSofteAux.phi0);\
   o_m_LArClusterEMSofteAux.nBarrel = std::vector<int>(*m_LArClusterEMSofteAux.nBarrel);\
   o_m_LArClusterEMSofteAux.nEndcap = std::vector<int>(*m_LArClusterEMSofteAux.nEndcap);\
   o_m_LArClusterEMSofteAux.rawE = std::vector<float>(*m_LArClusterEMSofteAux.rawE);\
   o_m_LArClusterEMSofteAux.rawEta = std::vector<float>(*m_LArClusterEMSofteAux.rawEta);\
   o_m_LArClusterEMSofteAux.rawPhi = std::vector<float>(*m_LArClusterEMSofteAux.rawPhi);\
   o_m_LArClusterEMSofteAux.rawM = std::vector<float>(*m_LArClusterEMSofteAux.rawM);\
   o_m_LArClusterEMSofteAux.altE = std::vector<float>(*m_LArClusterEMSofteAux.altE);\
   o_m_LArClusterEMSofteAux.altEta = std::vector<float>(*m_LArClusterEMSofteAux.altEta);\
   o_m_LArClusterEMSofteAux.altPhi = std::vector<float>(*m_LArClusterEMSofteAux.altPhi);\
   o_m_LArClusterEMSofteAux.altM = std::vector<float>(*m_LArClusterEMSofteAux.altM);\
   o_m_LArClusterEMSofteAux.calE = std::vector<float>(*m_LArClusterEMSofteAux.calE);\
   o_m_LArClusterEMSofteAux.calEta = std::vector<float>(*m_LArClusterEMSofteAux.calEta);\
   o_m_LArClusterEMSofteAux.calPhi = std::vector<float>(*m_LArClusterEMSofteAux.calPhi);\
   o_m_LArClusterEMSofteAux.calM = std::vector<float>(*m_LArClusterEMSofteAux.calM);\
   o_m_LArClusterEMSofteAux.e_sampl = std::vector<std::vector<float> >(*m_LArClusterEMSofteAux.e_sampl);\
   o_m_LArClusterEMSofteAux.eta_sampl = std::vector<std::vector<float> >(*m_LArClusterEMSofteAux.eta_sampl);\
   o_m_LArClusterEMSofteAux.phi_sampl = std::vector<std::vector<float> >(*m_LArClusterEMSofteAux.phi_sampl);\
   o_m_egClusterCollectionAux. = m_egClusterCollectionAux.;\
   o_m_egClusterCollectionAux.xAOD::AuxContainerBase = m_egClusterCollectionAux.xAOD::AuxContainerBase;\
   o_m_egClusterCollectionAux.basicSignal = std::vector<float>(*m_egClusterCollectionAux.basicSignal);\
   o_m_egClusterCollectionAux.time = std::vector<float>(*m_egClusterCollectionAux.time);\
   o_m_egClusterCollectionAux.samplingPattern = std::vector<unsigned int>(*m_egClusterCollectionAux.samplingPattern);\
   o_m_egClusterCollectionAux.clusterSize = std::vector<unsigned int>(*m_egClusterCollectionAux.clusterSize);\
   o_m_egClusterCollectionAux.eta0 = std::vector<float>(*m_egClusterCollectionAux.eta0);\
   o_m_egClusterCollectionAux.phi0 = std::vector<float>(*m_egClusterCollectionAux.phi0);\
   o_m_egClusterCollectionAux.nBarrel = std::vector<int>(*m_egClusterCollectionAux.nBarrel);\
   o_m_egClusterCollectionAux.nEndcap = std::vector<int>(*m_egClusterCollectionAux.nEndcap);\
   o_m_egClusterCollectionAux.rawE = std::vector<float>(*m_egClusterCollectionAux.rawE);\
   o_m_egClusterCollectionAux.rawEta = std::vector<float>(*m_egClusterCollectionAux.rawEta);\
   o_m_egClusterCollectionAux.rawPhi = std::vector<float>(*m_egClusterCollectionAux.rawPhi);\
   o_m_egClusterCollectionAux.rawM = std::vector<float>(*m_egClusterCollectionAux.rawM);\
   o_m_egClusterCollectionAux.altE = std::vector<float>(*m_egClusterCollectionAux.altE);\
   o_m_egClusterCollectionAux.altEta = std::vector<float>(*m_egClusterCollectionAux.altEta);\
   o_m_egClusterCollectionAux.altPhi = std::vector<float>(*m_egClusterCollectionAux.altPhi);\
   o_m_egClusterCollectionAux.altM = std::vector<float>(*m_egClusterCollectionAux.altM);\
   o_m_egClusterCollectionAux.calE = std::vector<float>(*m_egClusterCollectionAux.calE);\
   o_m_egClusterCollectionAux.calEta = std::vector<float>(*m_egClusterCollectionAux.calEta);\
   o_m_egClusterCollectionAux.calPhi = std::vector<float>(*m_egClusterCollectionAux.calPhi);\
   o_m_egClusterCollectionAux.calM = std::vector<float>(*m_egClusterCollectionAux.calM);\
   o_m_egClusterCollectionAux.e_sampl = std::vector<std::vector<float> >(*m_egClusterCollectionAux.e_sampl);\
   o_m_egClusterCollectionAux.eta_sampl = std::vector<std::vector<float> >(*m_egClusterCollectionAux.eta_sampl);\
   o_m_egClusterCollectionAux.phi_sampl = std::vector<std::vector<float> >(*m_egClusterCollectionAux.phi_sampl);\
   o_m_TauRecContainerAux. = m_TauRecContainerAux.;\
   o_m_TauRecContainerAux.xAOD::AuxContainerBase = m_TauRecContainerAux.xAOD::AuxContainerBase;\
   o_m_TauRecContainerAux.pt = std::vector<float>(*m_TauRecContainerAux.pt);\
   o_m_TauRecContainerAux.eta = std::vector<float>(*m_TauRecContainerAux.eta);\
   o_m_TauRecContainerAux.phi = std::vector<float>(*m_TauRecContainerAux.phi);\
   o_m_TauRecContainerAux.e = std::vector<float>(*m_TauRecContainerAux.e);\
   o_m_TauRecContainerAux.m = std::vector<float>(*m_TauRecContainerAux.m);\
   o_m_TauRecContainerAux.ROIWord = std::vector<unsigned int>(*m_TauRecContainerAux.ROIWord);\
   o_m_TauRecContainerAux.charge = std::vector<float>(*m_TauRecContainerAux.charge);\
   o_m_TauRecContainerAux.vetoFlags = std::vector<unsigned int>(*m_TauRecContainerAux.vetoFlags);\
   o_m_TauRecContainerAux.isTauFlags = std::vector<unsigned int>(*m_TauRecContainerAux.isTauFlags);\
   o_m_TauRecContainerAux.Likelihood = std::vector<float>(*m_TauRecContainerAux.Likelihood);\
   o_m_TauRecContainerAux.SafeLikelihood = std::vector<float>(*m_TauRecContainerAux.SafeLikelihood);\
   o_m_TauRecContainerAux.BDTJetScore = std::vector<float>(*m_TauRecContainerAux.BDTJetScore);\
   o_m_TauRecContainerAux.BDTEleScore = std::vector<float>(*m_TauRecContainerAux.BDTEleScore);\
   o_m_TauRecContainerAux.PanTauScore = std::vector<float>(*m_TauRecContainerAux.PanTauScore);\
   o_m_TauRecContainerAux.trackFilterPass = std::vector<std::vector<int> >(*m_TauRecContainerAux.trackFilterPass);\
   o_m_TauRecContainerAux.trackFilterProngs = std::vector<int>(*m_TauRecContainerAux.trackFilterProngs);\
   o_m_TauRecContainerAux.trackFilterQuality = std::vector<int>(*m_TauRecContainerAux.trackFilterQuality);\
   o_m_TauRecContainerAux.pi0ConeDR = std::vector<float>(*m_TauRecContainerAux.pi0ConeDR);\
   o_m_TauRecContainerAux.ipZ0SinThetaSigLeadTrk = std::vector<float>(*m_TauRecContainerAux.ipZ0SinThetaSigLeadTrk);\
   o_m_TauRecContainerAux.etOverPtLeadTrk = std::vector<float>(*m_TauRecContainerAux.etOverPtLeadTrk);\
   o_m_TauRecContainerAux.leadTrkPt = std::vector<float>(*m_TauRecContainerAux.leadTrkPt);\
   o_m_TauRecContainerAux.ipSigLeadTrk = std::vector<float>(*m_TauRecContainerAux.ipSigLeadTrk);\
   o_m_TauRecContainerAux.ipSigLeadLooseTrk = std::vector<float>(*m_TauRecContainerAux.ipSigLeadLooseTrk);\
   o_m_TauRecContainerAux.etOverPtLeadLooseTrk = std::vector<float>(*m_TauRecContainerAux.etOverPtLeadLooseTrk);\
   o_m_TauRecContainerAux.leadLooseTrkPt = std::vector<float>(*m_TauRecContainerAux.leadLooseTrkPt);\
   o_m_TauRecContainerAux.chrgLooseTrk = std::vector<float>(*m_TauRecContainerAux.chrgLooseTrk);\
   o_m_TauRecContainerAux.massTrkSys = std::vector<float>(*m_TauRecContainerAux.massTrkSys);\
   o_m_TauRecContainerAux.trkWidth2 = std::vector<float>(*m_TauRecContainerAux.trkWidth2);\
   o_m_TauRecContainerAux.trFlightPathSig = std::vector<float>(*m_TauRecContainerAux.trFlightPathSig);\
   o_m_TauRecContainerAux.etEflow = std::vector<float>(*m_TauRecContainerAux.etEflow);\
   o_m_TauRecContainerAux.mEflow = std::vector<float>(*m_TauRecContainerAux.mEflow);\
   o_m_TauRecContainerAux.ele_E237E277 = std::vector<float>(*m_TauRecContainerAux.ele_E237E277);\
   o_m_TauRecContainerAux.ele_PresamplerFraction = std::vector<float>(*m_TauRecContainerAux.ele_PresamplerFraction);\
   o_m_TauRecContainerAux.ele_ECALFirstFraction = std::vector<float>(*m_TauRecContainerAux.ele_ECALFirstFraction);\
   o_m_TauRecContainerAux.numCells = std::vector<int>(*m_TauRecContainerAux.numCells);\
   o_m_TauRecContainerAux.numTopoClusters = std::vector<int>(*m_TauRecContainerAux.numTopoClusters);\
   o_m_TauRecContainerAux.numEffTopoClusters = std::vector<float>(*m_TauRecContainerAux.numEffTopoClusters);\
   o_m_TauRecContainerAux.topoInvMass = std::vector<float>(*m_TauRecContainerAux.topoInvMass);\
   o_m_TauRecContainerAux.effTopoInvMass = std::vector<float>(*m_TauRecContainerAux.effTopoInvMass);\
   o_m_TauRecContainerAux.topoMeanDeltaR = std::vector<float>(*m_TauRecContainerAux.topoMeanDeltaR);\
   o_m_TauRecContainerAux.effTopoMeanDeltaR = std::vector<float>(*m_TauRecContainerAux.effTopoMeanDeltaR);\
   o_m_TauRecContainerAux.EMRadius = std::vector<float>(*m_TauRecContainerAux.EMRadius);\
   o_m_TauRecContainerAux.hadRadius = std::vector<float>(*m_TauRecContainerAux.hadRadius);\
   o_m_TauRecContainerAux.etEMAtEMScale = std::vector<float>(*m_TauRecContainerAux.etEMAtEMScale);\
   o_m_TauRecContainerAux.etHadAtEMScale = std::vector<float>(*m_TauRecContainerAux.etHadAtEMScale);\
   o_m_TauRecContainerAux.isolFrac = std::vector<float>(*m_TauRecContainerAux.isolFrac);\
   o_m_TauRecContainerAux.centFrac = std::vector<float>(*m_TauRecContainerAux.centFrac);\
   o_m_TauRecContainerAux.stripWidth2 = std::vector<float>(*m_TauRecContainerAux.stripWidth2);\
   o_m_TauRecContainerAux.nStrip = std::vector<int>(*m_TauRecContainerAux.nStrip);\
   o_m_TauRecContainerAux.etEMCalib = std::vector<float>(*m_TauRecContainerAux.etEMCalib);\
   o_m_TauRecContainerAux.etHadCalib = std::vector<float>(*m_TauRecContainerAux.etHadCalib);\
   o_m_TauRecContainerAux.seedCalo_eta = std::vector<float>(*m_TauRecContainerAux.seedCalo_eta);\
   o_m_TauRecContainerAux.seedCalo_phi = std::vector<float>(*m_TauRecContainerAux.seedCalo_phi);\
   o_m_TauRecContainerAux.nIsolLooseTrk = std::vector<float>(*m_TauRecContainerAux.nIsolLooseTrk);\
   o_m_TauRecContainerAux.trkAvgDist = std::vector<float>(*m_TauRecContainerAux.trkAvgDist);\
   o_m_TauRecContainerAux.trkRmsDist = std::vector<float>(*m_TauRecContainerAux.trkRmsDist);\
   o_m_TauRecContainerAux.lead2ClusterEOverAllClusterE = std::vector<float>(*m_TauRecContainerAux.lead2ClusterEOverAllClusterE);\
   o_m_TauRecContainerAux.lead3ClusterEOverAllClusterE = std::vector<float>(*m_TauRecContainerAux.lead3ClusterEOverAllClusterE);\
   o_m_TauRecContainerAux.caloIso = std::vector<float>(*m_TauRecContainerAux.caloIso);\
   o_m_TauRecContainerAux.caloIsoCorrected = std::vector<float>(*m_TauRecContainerAux.caloIsoCorrected);\
   o_m_TauRecContainerAux.dRmax = std::vector<float>(*m_TauRecContainerAux.dRmax);\
   o_m_TauRecContainerAux.secMaxStripEt = std::vector<float>(*m_TauRecContainerAux.secMaxStripEt);\
   o_m_TauRecContainerAux.sumEMCellEtOverLeadTrkPt = std::vector<float>(*m_TauRecContainerAux.sumEMCellEtOverLeadTrkPt);\
   o_m_TauRecContainerAux.hadLeakEt = std::vector<float>(*m_TauRecContainerAux.hadLeakEt);\
   o_m_TauRecContainerAux.EM_TES_scale = std::vector<float>(*m_TauRecContainerAux.EM_TES_scale);\
   o_m_TauRecContainerAux.LC_TES_precalib = std::vector<float>(*m_TauRecContainerAux.LC_TES_precalib);\
   o_m_TauRecContainerAux.cellBasedEnergyRing1 = std::vector<float>(*m_TauRecContainerAux.cellBasedEnergyRing1);\
   o_m_TauRecContainerAux.cellBasedEnergyRing2 = std::vector<float>(*m_TauRecContainerAux.cellBasedEnergyRing2);\
   o_m_TauRecContainerAux.cellBasedEnergyRing3 = std::vector<float>(*m_TauRecContainerAux.cellBasedEnergyRing3);\
   o_m_TauRecContainerAux.cellBasedEnergyRing4 = std::vector<float>(*m_TauRecContainerAux.cellBasedEnergyRing4);\
   o_m_TauRecContainerAux.cellBasedEnergyRing5 = std::vector<float>(*m_TauRecContainerAux.cellBasedEnergyRing5);\
   o_m_TauRecContainerAux.cellBasedEnergyRing6 = std::vector<float>(*m_TauRecContainerAux.cellBasedEnergyRing6);\
   o_m_TauRecContainerAux.cellBasedEnergyRing7 = std::vector<float>(*m_TauRecContainerAux.cellBasedEnergyRing7);\
   o_m_TauRecContainerAux.TRT_NHT_OVER_NLT = std::vector<float>(*m_TauRecContainerAux.TRT_NHT_OVER_NLT);\
   o_m_TauRecContainerAux.TauJetVtxFraction = std::vector<float>(*m_TauRecContainerAux.TauJetVtxFraction);\
   o_m_TauRecContainerAux.nPi0 = std::vector<int>(*m_TauRecContainerAux.nPi0);\
   o_m_TauRecContainerAux.nCharged = std::vector<int>(*m_TauRecContainerAux.nCharged);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate = std::vector<int>(*m_TauRecContainerAux.pantau_CellBasedInput_isPanTauCandidate);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_DecayModeProto = std::vector<int>(*m_TauRecContainerAux.pantau_CellBasedInput_DecayModeProto);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_DecayMode = std::vector<int>(*m_TauRecContainerAux.pantau_CellBasedInput_DecayMode);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p0n_vs_1p1n);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_1p1n_vs_1pXn);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTValue_3p0n_vs_3pXn);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts = std::vector<int>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Basic_NNeutralConsts);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_JetMoment_EtDRxTotalEt);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Charged_StdDev_Et_WrtEtAllConsts);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_HLV_SumM);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1 = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_1);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2 = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_1stBDTEtOverEtAllConsts);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Neutral_Shots_NPhotonsInSeed);\
   o_m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged = std::vector<float>(*m_TauRecContainerAux.pantau_CellBasedInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate = std::vector<int>(*m_TauRecContainerAux.pantau_eflowRecInput_isPanTauCandidate);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_DecayModeProto = std::vector<int>(*m_TauRecContainerAux.pantau_eflowRecInput_DecayModeProto);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_DecayMode = std::vector<int>(*m_TauRecContainerAux.pantau_eflowRecInput_DecayMode);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p0n_vs_1p1n);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_1p1n_vs_1pXn);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTValue_3p0n_vs_3pXn);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts = std::vector<int>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NPi0NeutConsts);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts = std::vector<int>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Basic_NNeutralConsts);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_HLV_SumPt);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Charged_Ratio_EtOverEtAllConsts);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_HLV_SumM);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1 = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_EtSort_1);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2 = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_PID_BDTValues_BDTSort_2);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Ratio_EtOverEtAllConsts);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Neutral_Mean_DRToLeading_WrtEtAllConsts);\
   o_m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged = std::vector<float>(*m_TauRecContainerAux.pantau_eflowRecInput_BDTVar_Combined_DeltaR1stNeutralTo1stCharged);\
   o_m_LArCalibrationHitActive = m_LArCalibrationHitActive;\
   o_m_LArCalibrationHitDeadMaterial = m_LArCalibrationHitDeadMaterial;\
   o_m_LArCalibrationHitInactive = m_LArCalibrationHitInactive;\
   o_m_GSFTrackParticleTruthCollection = m_GSFTrackParticleTruthCollection;\
   o_m_AllPhotonsVxCandidatesAux. = m_AllPhotonsVxCandidatesAux.;\
   o_m_AllPhotonsVxCandidatesAux.xAOD::AuxContainerBase = m_AllPhotonsVxCandidatesAux.xAOD::AuxContainerBase;\
   o_m_AllPhotonsVxCandidatesAux.chiSquared = std::vector<float>(*m_AllPhotonsVxCandidatesAux.chiSquared);\
   o_m_AllPhotonsVxCandidatesAux.numberDoF = std::vector<float>(*m_AllPhotonsVxCandidatesAux.numberDoF);\
   o_m_AllPhotonsVxCandidatesAux.x = std::vector<float>(*m_AllPhotonsVxCandidatesAux.x);\
   o_m_AllPhotonsVxCandidatesAux.y = std::vector<float>(*m_AllPhotonsVxCandidatesAux.y);\
   o_m_AllPhotonsVxCandidatesAux.z = std::vector<float>(*m_AllPhotonsVxCandidatesAux.z);\
   o_m_AllPhotonsVxCandidatesAux.covariance = std::vector<std::vector<float> >(*m_AllPhotonsVxCandidatesAux.covariance);\
   o_m_AllPhotonsVxCandidatesAux.vertexType = std::vector<short>(*m_AllPhotonsVxCandidatesAux.vertexType);\
   o_m_AllPhotonsVxCandidatesAux.trackWeights = std::vector<std::vector<float> >(*m_AllPhotonsVxCandidatesAux.trackWeights);\
   o_m_PrimaryVerticesAux. = m_PrimaryVerticesAux.;\
   o_m_PrimaryVerticesAux.xAOD::AuxContainerBase = m_PrimaryVerticesAux.xAOD::AuxContainerBase;\
   o_m_PrimaryVerticesAux.chiSquared = std::vector<float>(*m_PrimaryVerticesAux.chiSquared);\
   o_m_PrimaryVerticesAux.numberDoF = std::vector<float>(*m_PrimaryVerticesAux.numberDoF);\
   o_m_PrimaryVerticesAux.x = std::vector<float>(*m_PrimaryVerticesAux.x);\
   o_m_PrimaryVerticesAux.y = std::vector<float>(*m_PrimaryVerticesAux.y);\
   o_m_PrimaryVerticesAux.z = std::vector<float>(*m_PrimaryVerticesAux.z);\
   o_m_PrimaryVerticesAux.covariance = std::vector<std::vector<float> >(*m_PrimaryVerticesAux.covariance);\
   o_m_PrimaryVerticesAux.vertexType = std::vector<short>(*m_PrimaryVerticesAux.vertexType);\
   o_m_PrimaryVerticesAux.trackWeights = std::vector<std::vector<float> >(*m_PrimaryVerticesAux.trackWeights);\
   o_m_MuonClusterCollection_Link = m_MuonClusterCollection_Link;\
   o_m_MuonCaloEnergyCollection = m_MuonCaloEnergyCollection;\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Perp = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Perp);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Par = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2Par);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2SumPt = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoDelta2SumPt);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Perp = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Perp);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Par = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8Par);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8SumPt = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoFixedCone8SumPt);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Perp = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Perp);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Par = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13Par);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13SumPt = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoFixedArea13SumPt);\
   o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Perp = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Perp);\
   o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Par = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.Iso6To88Par);\
   o_m_AntiKt4LCTopoJetsAuxDyn.Iso6To88SumPt = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.Iso6To88SumPt);\
   o_m_AntiKt4LCTopoJetsAuxDyn.WIDTH = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.WIDTH);\
   o_m_AntiKt4LCTopoJetsAuxDyn.pt_truth = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.pt_truth);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerB = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerB);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB1 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_EMB1);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB2 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_EMB2);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_EMB3 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_EMB3);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar0 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar0);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap1 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap1);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap3 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap3);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar1 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar1);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar2 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_TileBar2);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap2 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_TileGap2);\
   o_m_AntiKt4LCTopoJetsAuxDyn.constituentScale = std::vector<int>(*m_AntiKt4LCTopoJetsAuxDyn.constituentScale);\
   o_m_AntiKt4LCTopoJetsAuxDyn.KtDr = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.KtDr);\
   o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_pt = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_pt);\
   o_m_AntiKt4LCTopoJetsAuxDyn.OriginIndex = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.OriginIndex);\
   o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_eta = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_eta);\
   o_m_AntiKt4LCTopoJetsAuxDyn.JVF = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.JVF);\
   o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_phi = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_phi);\
   o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_CELL = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_CELL);\
   o_m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_m = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.jetfinding_scale_m);\
   o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_DOTX = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_DOTX);\
   o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_pt = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_pt);\
   o_m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_JET = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.BCH_CORR_JET);\
   o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_eta = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_eta);\
   o_m_AntiKt4LCTopoJetsAuxDyn.nTrk_pv0_1GeV = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.nTrk_pv0_1GeV);\
   o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_phi = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_phi);\
   o_m_AntiKt4LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV);\
   o_m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_m = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.uncalconstit_scale_m);\
   o_m_AntiKt4LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV);\
   o_m_AntiKt4LCTopoJetsAuxDyn.LArQuality = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.LArQuality);\
   o_m_AntiKt4LCTopoJetsAuxDyn.Timing = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.Timing);\
   o_m_AntiKt4LCTopoJetsAuxDyn.HECQuality = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.HECQuality);\
   o_m_AntiKt4LCTopoJetsAuxDyn.NegativeE = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.NegativeE);\
   o_m_AntiKt4LCTopoJetsAuxDyn.AverageLArQF = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.AverageLArQF);\
   o_m_AntiKt4LCTopoJetsAuxDyn.Centroid_r = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.Centroid_r);\
   o_m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters5 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters5);\
   o_m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters10 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.ootFracClusters10);\
   o_m_AntiKt4LCTopoJetsAuxDyn.TruthMFindex = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.TruthMFindex);\
   o_m_AntiKt4LCTopoJetsAuxDyn.TruthMF = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.TruthMF);\
   o_m_AntiKt4LCTopoJetsAuxDyn.NumTowers = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.NumTowers);\
   o_m_AntiKt4LCTopoJetsAuxDyn.ActiveArea = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.ActiveArea);\
   o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPx = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPx);\
   o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPy = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPy);\
   o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPz = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaPz);\
   o_m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaE = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.ActiveAreaE);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Perp = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Perp);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Par = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoKR20Par);\
   o_m_AntiKt4LCTopoJetsAuxDyn.IsoKR20SumPt = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.IsoKR20SumPt);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Perp = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Perp);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Par = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2Par);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2SumPt = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoDelta2SumPt);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Perp = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Perp);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Par = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8Par);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8SumPt = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoFixedCone8SumPt);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Perp = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Perp);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Par = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13Par);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13SumPt = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoFixedArea13SumPt);\
   o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Perp = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Perp);\
   o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Par = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.Iso6To88Par);\
   o_m_AntiKt4TopoEMJetsAuxDyn.Iso6To88SumPt = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.Iso6To88SumPt);\
   o_m_AntiKt4TopoEMJetsAuxDyn.WIDTH = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.WIDTH);\
   o_m_AntiKt4TopoEMJetsAuxDyn.pt_truth = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.pt_truth);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerB = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerB);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB1 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_EMB1);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB2 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_EMB2);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_EMB3 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_EMB3);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap3 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap3);\
   o_m_AntiKt4TopoEMJetsAuxDyn.constituentScale = std::vector<int>(*m_AntiKt4TopoEMJetsAuxDyn.constituentScale);\
   o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_pt = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_pt);\
   o_m_AntiKt4TopoEMJetsAuxDyn.OriginIndex = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.OriginIndex);\
   o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_eta = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_eta);\
   o_m_AntiKt4TopoEMJetsAuxDyn.JVF = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.JVF);\
   o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_phi = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_phi);\
   o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_CELL = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_CELL);\
   o_m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_m = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.jetfinding_scale_m);\
   o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_DOTX = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_DOTX);\
   o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_pt = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_pt);\
   o_m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_JET = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.BCH_CORR_JET);\
   o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_eta = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_eta);\
   o_m_AntiKt4TopoEMJetsAuxDyn.nTrk_pv0_1GeV = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.nTrk_pv0_1GeV);\
   o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_phi = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_phi);\
   o_m_AntiKt4TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV);\
   o_m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_m = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.uncalconstit_scale_m);\
   o_m_AntiKt4TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV);\
   o_m_AntiKt4TopoEMJetsAuxDyn.LArQuality = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.LArQuality);\
   o_m_AntiKt4TopoEMJetsAuxDyn.Timing = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.Timing);\
   o_m_AntiKt4TopoEMJetsAuxDyn.HECQuality = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.HECQuality);\
   o_m_AntiKt4TopoEMJetsAuxDyn.NegativeE = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.NegativeE);\
   o_m_AntiKt4TopoEMJetsAuxDyn.AverageLArQF = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.AverageLArQF);\
   o_m_AntiKt4TopoEMJetsAuxDyn.Centroid_r = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.Centroid_r);\
   o_m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters5 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters5);\
   o_m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters10 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.ootFracClusters10);\
   o_m_AntiKt4TopoEMJetsAuxDyn.TruthMFindex = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.TruthMFindex);\
   o_m_AntiKt4TopoEMJetsAuxDyn.TruthMF = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.TruthMF);\
   o_m_AntiKt4TopoEMJetsAuxDyn.NumTowers = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.NumTowers);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerE = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_PreSamplerE);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME1 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_EME1);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME2 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_EME2);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_EME3 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_EME3);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC0 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_HEC0);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC1 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_HEC1);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt0 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt0);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt1 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt1);\
   o_m_AntiKt4TopoEMJetsAuxDyn.n90 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.n90);\
   o_m_AntiKt4TopoEMJetsAuxDyn.ActiveArea = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.ActiveArea);\
   o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPx = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPx);\
   o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPy = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPy);\
   o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPz = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaPz);\
   o_m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaE = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.ActiveAreaE);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Perp = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Perp);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Par = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoKR20Par);\
   o_m_AntiKt4TopoEMJetsAuxDyn.IsoKR20SumPt = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.IsoKR20SumPt);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Perp = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Perp);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Par = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2Par);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2SumPt = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoDelta2SumPt);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Perp = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Perp);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Par = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8Par);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8SumPt = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoFixedCone8SumPt);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Perp = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Perp);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Par = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13Par);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13SumPt = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoFixedArea13SumPt);\
   o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Perp = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Perp);\
   o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Par = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.Iso6To88Par);\
   o_m_AntiKt6LCTopoJetsAuxDyn.Iso6To88SumPt = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.Iso6To88SumPt);\
   o_m_AntiKt6LCTopoJetsAuxDyn.WIDTH = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.WIDTH);\
   o_m_AntiKt6LCTopoJetsAuxDyn.pt_truth = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.pt_truth);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerB = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerB);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB1 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_EMB1);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB2 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_EMB2);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_EMB3 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_EMB3);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar0 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar0);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar1 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar1);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar2 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_TileBar2);\
   o_m_AntiKt6LCTopoJetsAuxDyn.constituentScale = std::vector<int>(*m_AntiKt6LCTopoJetsAuxDyn.constituentScale);\
   o_m_AntiKt6LCTopoJetsAuxDyn.KtDr = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.KtDr);\
   o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_pt = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_pt);\
   o_m_AntiKt6LCTopoJetsAuxDyn.OriginIndex = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.OriginIndex);\
   o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_eta = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_eta);\
   o_m_AntiKt6LCTopoJetsAuxDyn.JVF = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.JVF);\
   o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_phi = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_phi);\
   o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_CELL = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_CELL);\
   o_m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_m = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.jetfinding_scale_m);\
   o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_DOTX = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_DOTX);\
   o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_pt = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_pt);\
   o_m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_JET = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.BCH_CORR_JET);\
   o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_eta = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_eta);\
   o_m_AntiKt6LCTopoJetsAuxDyn.nTrk_pv0_1GeV = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.nTrk_pv0_1GeV);\
   o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_phi = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_phi);\
   o_m_AntiKt6LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.sumPtTrk_pv0_1GeV);\
   o_m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_m = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.uncalconstit_scale_m);\
   o_m_AntiKt6LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.trackWIDTH_pv0_1GeV);\
   o_m_AntiKt6LCTopoJetsAuxDyn.LArQuality = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.LArQuality);\
   o_m_AntiKt6LCTopoJetsAuxDyn.Timing = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.Timing);\
   o_m_AntiKt6LCTopoJetsAuxDyn.HECQuality = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.HECQuality);\
   o_m_AntiKt6LCTopoJetsAuxDyn.NegativeE = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.NegativeE);\
   o_m_AntiKt6LCTopoJetsAuxDyn.AverageLArQF = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.AverageLArQF);\
   o_m_AntiKt6LCTopoJetsAuxDyn.Centroid_r = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.Centroid_r);\
   o_m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters5 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters5);\
   o_m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters10 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.ootFracClusters10);\
   o_m_AntiKt6LCTopoJetsAuxDyn.TruthMFindex = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.TruthMFindex);\
   o_m_AntiKt6LCTopoJetsAuxDyn.TruthMF = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.TruthMF);\
   o_m_AntiKt6LCTopoJetsAuxDyn.NumTowers = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.NumTowers);\
   o_m_AntiKt6LCTopoJetsAuxDyn.ActiveArea = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.ActiveArea);\
   o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPx = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPx);\
   o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPy = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPy);\
   o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPz = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaPz);\
   o_m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaE = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.ActiveAreaE);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Perp = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Perp);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Par = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoKR20Par);\
   o_m_AntiKt6LCTopoJetsAuxDyn.IsoKR20SumPt = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.IsoKR20SumPt);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Perp = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Perp);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Par = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2Par);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2SumPt = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoDelta2SumPt);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Perp = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Perp);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Par = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8Par);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8SumPt = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoFixedCone8SumPt);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Perp = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Perp);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Par = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13Par);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13SumPt = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoFixedArea13SumPt);\
   o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Perp = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Perp);\
   o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Par = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.Iso6To88Par);\
   o_m_AntiKt6TopoEMJetsAuxDyn.Iso6To88SumPt = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.Iso6To88SumPt);\
   o_m_AntiKt6TopoEMJetsAuxDyn.WIDTH = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.WIDTH);\
   o_m_AntiKt6TopoEMJetsAuxDyn.pt_truth = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.pt_truth);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerB = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerB);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB1 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_EMB1);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB2 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_EMB2);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_EMB3 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_EMB3);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar0 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar0);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap1 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap1);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap3 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap3);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar1 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar1);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar2 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_TileBar2);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap2 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_TileGap2);\
   o_m_AntiKt6TopoEMJetsAuxDyn.constituentScale = std::vector<int>(*m_AntiKt6TopoEMJetsAuxDyn.constituentScale);\
   o_m_AntiKt6TopoEMJetsAuxDyn.KtDr = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.KtDr);\
   o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_pt = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_pt);\
   o_m_AntiKt6TopoEMJetsAuxDyn.OriginIndex = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.OriginIndex);\
   o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_eta = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_eta);\
   o_m_AntiKt6TopoEMJetsAuxDyn.JVF = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.JVF);\
   o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_phi = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_phi);\
   o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_CELL = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_CELL);\
   o_m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_m = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.jetfinding_scale_m);\
   o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_DOTX = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_DOTX);\
   o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_pt = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_pt);\
   o_m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_JET = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.BCH_CORR_JET);\
   o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_eta = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_eta);\
   o_m_AntiKt6TopoEMJetsAuxDyn.nTrk_pv0_1GeV = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.nTrk_pv0_1GeV);\
   o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_phi = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_phi);\
   o_m_AntiKt6TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.sumPtTrk_pv0_1GeV);\
   o_m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_m = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.uncalconstit_scale_m);\
   o_m_AntiKt6TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.trackWIDTH_pv0_1GeV);\
   o_m_AntiKt6TopoEMJetsAuxDyn.LArQuality = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.LArQuality);\
   o_m_AntiKt6TopoEMJetsAuxDyn.Timing = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.Timing);\
   o_m_AntiKt6TopoEMJetsAuxDyn.HECQuality = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.HECQuality);\
   o_m_AntiKt6TopoEMJetsAuxDyn.NegativeE = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.NegativeE);\
   o_m_AntiKt6TopoEMJetsAuxDyn.AverageLArQF = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.AverageLArQF);\
   o_m_AntiKt6TopoEMJetsAuxDyn.Centroid_r = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.Centroid_r);\
   o_m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters5 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters5);\
   o_m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters10 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.ootFracClusters10);\
   o_m_AntiKt6TopoEMJetsAuxDyn.TruthMFindex = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.TruthMFindex);\
   o_m_AntiKt6TopoEMJetsAuxDyn.TruthMF = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.TruthMF);\
   o_m_AntiKt6TopoEMJetsAuxDyn.NumTowers = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.NumTowers);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt0 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt0);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt1 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt1);\
   o_m_AntiKt6TopoEMJetsAuxDyn.ActiveArea = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.ActiveArea);\
   o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPx = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPx);\
   o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPy = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPy);\
   o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPz = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaPz);\
   o_m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaE = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.ActiveAreaE);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Perp = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Perp);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Par = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoKR20Par);\
   o_m_AntiKt6TopoEMJetsAuxDyn.IsoKR20SumPt = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.IsoKR20SumPt);\
   o_m_CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.CELL_SIG_SAMPLING);\
   o_m_CaloCalTopoClusterAuxDyn.AVG_LAR_Q = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.AVG_LAR_Q);\
   o_m_CaloCalTopoClusterAuxDyn.AVG_TILE_Q = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.AVG_TILE_Q);\
   o_m_CaloCalTopoClusterAuxDyn.EM_PROBABILITY = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.EM_PROBABILITY);\
   o_m_CaloCalTopoClusterAuxDyn.HAD_WEIGHT = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.HAD_WEIGHT);\
   o_m_CaloCalTopoClusterAuxDyn.OOC_WEIGHT = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.OOC_WEIGHT);\
   o_m_CaloCalTopoClusterAuxDyn.DM_WEIGHT = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.DM_WEIGHT);\
   o_m_CaloCalTopoClusterAuxDyn.FIRST_PHI = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.FIRST_PHI);\
   o_m_CaloCalTopoClusterAuxDyn.FIRST_ETA = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.FIRST_ETA);\
   o_m_CaloCalTopoClusterAuxDyn.DELTA_PHI = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.DELTA_PHI);\
   o_m_CaloCalTopoClusterAuxDyn.DELTA_THETA = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.DELTA_THETA);\
   o_m_CaloCalTopoClusterAuxDyn.DELTA_ALPHA = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.DELTA_ALPHA);\
   o_m_CaloCalTopoClusterAuxDyn.CENTER_X = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.CENTER_X);\
   o_m_CaloCalTopoClusterAuxDyn.CENTER_Y = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.CENTER_Y);\
   o_m_CaloCalTopoClusterAuxDyn.CENTER_Z = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.CENTER_Z);\
   o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_EM = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.ENG_FRAC_EM);\
   o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_CORE = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.ENG_FRAC_CORE);\
   o_m_CaloCalTopoClusterAuxDyn.SECOND_ENG_DENS = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.SECOND_ENG_DENS);\
   o_m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS_CORR = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS_CORR);\
   o_m_CaloCalTopoClusterAuxDyn.BAD_CELLS_CORR_E = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.BAD_CELLS_CORR_E);\
   o_m_CaloCalTopoClusterAuxDyn.CellLink_ = m_CaloCalTopoClusterAuxDyn.CellLink_;\
   o_m_CaloCalTopoClusterAuxDyn.CellLink.m_persKey = m_CaloCalTopoClusterAuxDyn.CellLink.m_persKey;\
   o_m_CaloCalTopoClusterAuxDyn.CellLink.m_persIndex = m_CaloCalTopoClusterAuxDyn.CellLink.m_persIndex;\
   o_m_CaloCalTopoClusterAuxDyn.SECOND_R = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.SECOND_R);\
   o_m_CaloCalTopoClusterAuxDyn.SECOND_LAMBDA = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.SECOND_LAMBDA);\
   o_m_CaloCalTopoClusterAuxDyn.CENTER_MAG = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.CENTER_MAG);\
   o_m_CaloCalTopoClusterAuxDyn.CENTER_LAMBDA = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.CENTER_LAMBDA);\
   o_m_CaloCalTopoClusterAuxDyn.LATERAL = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.LATERAL);\
   o_m_CaloCalTopoClusterAuxDyn.LONGITUDINAL = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.LONGITUDINAL);\
   o_m_CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.ENG_FRAC_MAX);\
   o_m_CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.FIRST_ENG_DENS);\
   o_m_CaloCalTopoClusterAuxDyn.ISOLATION = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.ISOLATION);\
   o_m_CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.ENG_BAD_CELLS);\
   o_m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.N_BAD_CELLS);\
   o_m_CaloCalTopoClusterAuxDyn.BADLARQ_FRAC = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.BADLARQ_FRAC);\
   o_m_CaloCalTopoClusterAuxDyn.ENG_POS = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.ENG_POS);\
   o_m_CaloCalTopoClusterAuxDyn.SIGNIFICANCE = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.SIGNIFICANCE);\
   o_m_CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE = std::vector<float>(*m_CaloCalTopoClusterAuxDyn.CELL_SIGNIFICANCE);\
   o_m_EMTopoSW35AuxDyn.CellLink_ = m_EMTopoSW35AuxDyn.CellLink_;\
   o_m_EMTopoSW35AuxDyn.CellLink.m_persKey = m_EMTopoSW35AuxDyn.CellLink.m_persKey;\
   o_m_EMTopoSW35AuxDyn.CellLink.m_persIndex = m_EMTopoSW35AuxDyn.CellLink.m_persIndex;\
   o_m_ElectronCollectionAuxDyn.ElectronIDLoosePP = std::vector<char>(*m_ElectronCollectionAuxDyn.ElectronIDLoosePP);\
   o_m_ElectronCollectionAuxDyn.ElectronIDMediumPP = std::vector<char>(*m_ElectronCollectionAuxDyn.ElectronIDMediumPP);\
   o_m_ElectronCollectionAuxDyn.ElectronIDTightPP = std::vector<char>(*m_ElectronCollectionAuxDyn.ElectronIDTightPP);\
   o_m_GSFTrackParticlesAuxDyn.originalTrackParticle_ = m_GSFTrackParticlesAuxDyn.originalTrackParticle_;\
   o_m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey = m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persKey;\
   o_m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex = m_GSFTrackParticlesAuxDyn.originalTrackParticle.m_persIndex;\
   o_m_InDetTrackParticlesAuxDyn.truth_ = m_InDetTrackParticlesAuxDyn.truth_;\
   o_m_InDetTrackParticlesAuxDyn.truth.m_persKey = m_InDetTrackParticlesAuxDyn.truth.m_persKey;\
   o_m_InDetTrackParticlesAuxDyn.truth.m_persIndex = m_InDetTrackParticlesAuxDyn.truth.m_persIndex;\
   o_m_InDetTrackParticlesAuxDyn.type = std::vector<int>(*m_InDetTrackParticlesAuxDyn.type);\
   o_m_InDetTrackParticlesAuxDyn.origin = std::vector<int>(*m_InDetTrackParticlesAuxDyn.origin);\
   o_m_LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.CELL_SIG_SAMPLING);\
   o_m_LArClusterEMFrwdAuxDyn.AVG_LAR_Q = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.AVG_LAR_Q);\
   o_m_LArClusterEMFrwdAuxDyn.AVG_TILE_Q = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.AVG_TILE_Q);\
   o_m_LArClusterEMFrwdAuxDyn.EM_PROBABILITY = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.EM_PROBABILITY);\
   o_m_LArClusterEMFrwdAuxDyn.HAD_WEIGHT = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.HAD_WEIGHT);\
   o_m_LArClusterEMFrwdAuxDyn.OOC_WEIGHT = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.OOC_WEIGHT);\
   o_m_LArClusterEMFrwdAuxDyn.DM_WEIGHT = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.DM_WEIGHT);\
   o_m_LArClusterEMFrwdAuxDyn.FIRST_PHI = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.FIRST_PHI);\
   o_m_LArClusterEMFrwdAuxDyn.FIRST_ETA = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.FIRST_ETA);\
   o_m_LArClusterEMFrwdAuxDyn.DELTA_PHI = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.DELTA_PHI);\
   o_m_LArClusterEMFrwdAuxDyn.DELTA_THETA = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.DELTA_THETA);\
   o_m_LArClusterEMFrwdAuxDyn.DELTA_ALPHA = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.DELTA_ALPHA);\
   o_m_LArClusterEMFrwdAuxDyn.CENTER_X = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.CENTER_X);\
   o_m_LArClusterEMFrwdAuxDyn.CENTER_Y = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.CENTER_Y);\
   o_m_LArClusterEMFrwdAuxDyn.CENTER_Z = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.CENTER_Z);\
   o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_EM = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.ENG_FRAC_EM);\
   o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.ENG_FRAC_CORE);\
   o_m_LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.SECOND_ENG_DENS);\
   o_m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS_CORR);\
   o_m_LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.BAD_CELLS_CORR_E);\
   o_m_LArClusterEMFrwdAuxDyn.CellLink_ = m_LArClusterEMFrwdAuxDyn.CellLink_;\
   o_m_LArClusterEMFrwdAuxDyn.CellLink.m_persKey = m_LArClusterEMFrwdAuxDyn.CellLink.m_persKey;\
   o_m_LArClusterEMFrwdAuxDyn.CellLink.m_persIndex = m_LArClusterEMFrwdAuxDyn.CellLink.m_persIndex;\
   o_m_LArClusterEMFrwdAuxDyn.SECOND_R = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.SECOND_R);\
   o_m_LArClusterEMFrwdAuxDyn.SECOND_LAMBDA = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.SECOND_LAMBDA);\
   o_m_LArClusterEMFrwdAuxDyn.CENTER_MAG = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.CENTER_MAG);\
   o_m_LArClusterEMFrwdAuxDyn.CENTER_LAMBDA = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.CENTER_LAMBDA);\
   o_m_LArClusterEMFrwdAuxDyn.LATERAL = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.LATERAL);\
   o_m_LArClusterEMFrwdAuxDyn.LONGITUDINAL = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.LONGITUDINAL);\
   o_m_LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.ENG_FRAC_MAX);\
   o_m_LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.FIRST_ENG_DENS);\
   o_m_LArClusterEMFrwdAuxDyn.ISOLATION = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.ISOLATION);\
   o_m_LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.ENG_BAD_CELLS);\
   o_m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.N_BAD_CELLS);\
   o_m_LArClusterEMFrwdAuxDyn.BADLARQ_FRAC = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.BADLARQ_FRAC);\
   o_m_LArClusterEMFrwdAuxDyn.ENG_POS = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.ENG_POS);\
   o_m_LArClusterEMFrwdAuxDyn.SIGNIFICANCE = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.SIGNIFICANCE);\
   o_m_LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE = std::vector<float>(*m_LArClusterEMFrwdAuxDyn.CELL_SIGNIFICANCE);\
   o_m_LArClusterEMSofteAuxDyn.CellLink_ = m_LArClusterEMSofteAuxDyn.CellLink_;\
   o_m_LArClusterEMSofteAuxDyn.CellLink.m_persKey = m_LArClusterEMSofteAuxDyn.CellLink.m_persKey;\
   o_m_LArClusterEMSofteAuxDyn.CellLink.m_persIndex = m_LArClusterEMSofteAuxDyn.CellLink.m_persIndex;\
   o_m_MuonsAuxDyn.m = std::vector<float>(*m_MuonsAuxDyn.m);\
   o_m_TruthEventAuxDyn.pdf2 = std::vector<float>(*m_TruthEventAuxDyn.pdf2);\
   o_m_TruthEventAuxDyn.id1 = std::vector<int>(*m_TruthEventAuxDyn.id1);\
   o_m_TruthEventAuxDyn.id2 = std::vector<int>(*m_TruthEventAuxDyn.id2);\
   o_m_TruthEventAuxDyn.pdfId1 = std::vector<int>(*m_TruthEventAuxDyn.pdfId1);\
   o_m_TruthEventAuxDyn.pdfId2 = std::vector<int>(*m_TruthEventAuxDyn.pdfId2);\
   o_m_TruthEventAuxDyn.x1 = std::vector<float>(*m_TruthEventAuxDyn.x1);\
   o_m_TruthEventAuxDyn.x2 = std::vector<float>(*m_TruthEventAuxDyn.x2);\
   o_m_TruthEventAuxDyn.scalePDF = std::vector<float>(*m_TruthEventAuxDyn.scalePDF);\
   o_m_TruthEventAuxDyn.pdf1 = std::vector<float>(*m_TruthEventAuxDyn.pdf1);\
   o_m_TruthParticleAuxDyn.polarizationTheta = std::vector<float>(*m_TruthParticleAuxDyn.polarizationTheta);\
   o_m_TruthParticleAuxDyn.polarizationPhi = std::vector<float>(*m_TruthParticleAuxDyn.polarizationPhi);\
   o_m_egClusterCollectionAuxDyn.CellLink_ = m_egClusterCollectionAuxDyn.CellLink_;\
   o_m_egClusterCollectionAuxDyn.CellLink.m_persKey = m_egClusterCollectionAuxDyn.CellLink.m_persKey;\
   o_m_egClusterCollectionAuxDyn.CellLink.m_persIndex = m_egClusterCollectionAuxDyn.CellLink.m_persIndex;\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar0 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar0);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar1 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar1);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar2 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_TileBar2);\
   o_m_AntiKt4TopoEMJetsAuxDyn.KtDr = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.KtDr);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerE = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_PreSamplerE);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME1 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_EME1);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME2 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_EME2);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_EME3 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_EME3);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC0 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_HEC0);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC1 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_HEC1);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC2 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_HEC2);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_HEC3 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_HEC3);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC2 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_HEC2);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_HEC3 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_HEC3);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerE = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_PreSamplerE);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME1 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_EME1);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME2 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_EME2);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_EME3 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_EME3);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC0 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_HEC0);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC1 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_HEC1);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt0 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt0);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC2 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_HEC2);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_HEC3 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_HEC3);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerE = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_PreSamplerE);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME1 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_EME1);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME2 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_EME2);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_EME3 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_EME3);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC0 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_HEC0);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC1 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_HEC1);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC2 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_HEC2);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_HEC3 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_HEC3);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap3 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap3);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt2 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt2);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap1 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap1);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap2 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_TileGap2);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt2 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_TileExt2);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap1 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap1);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap2 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_TileGap2);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt1 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt1);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt2 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_TileExt2);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt2 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_TileExt2);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt0 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt0);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt1 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_TileExt1);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL0 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL0);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL0 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL0);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL0 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL0);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL0 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL0);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL1 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL1);\
   o_m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL2 = std::vector<float>(*m_AntiKt4LCTopoJetsAuxDyn.energy_FCAL2);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL1 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL1);\
   o_m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL2 = std::vector<float>(*m_AntiKt4TopoEMJetsAuxDyn.energy_FCAL2);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL1 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL1);\
   o_m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL2 = std::vector<float>(*m_AntiKt6LCTopoJetsAuxDyn.energy_FCAL2);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL1 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL1);\
   o_m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL2 = std::vector<float>(*m_AntiKt6TopoEMJetsAuxDyn.energy_FCAL2);\
  }
#endif

//end definitions DEF_FILTER

//end macro definitions
