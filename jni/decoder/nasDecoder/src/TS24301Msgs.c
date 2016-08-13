/**
 * This file was generated by the Objective Systems ASN1C Compiler
 * (http://www.obj-sys.com).  Version: 6.6.2-pre4, Date: 04-Apr-2013.
 */
#include "TS24301Msgs.h"
#include "rtxsrc/rtxCommon.h"
#include "rtxsrc/rtxDiagBitTrace.h"

void asn1Init_TS24301Msg_AttachComplete (TS24301Msg_AttachComplete* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24301IE_ESMMessageContainer (pvalue);
}

void asn1Init_TS24301Msg_AuthResponse (TS24301Msg_AuthResponse* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24301IE_AuthRespParam (pvalue);
}

void asn1Init_TS24301Msg_DLNASTransport (TS24301Msg_DLNASTransport* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24301IE_NASMessageContainer (pvalue);
}

void asn1Init_TS24301Msg_IdentResp (TS24301Msg_IdentResp* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24008IE_MobileIdentity (pvalue);
}

void asn1Init_TS24301Msg_ULNASTransport (TS24301Msg_ULNASTransport* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24301IE_NASMessageContainer (pvalue);
}

void asn1Init_TS24301Msg_GenNASTransport_addnInfo (
   TS24301Msg_GenNASTransport_addnInfo* pvalue)
{
   if (0 == pvalue) return;
   pvalue->numocts = 0;
}

void asn1Init_TS24301Msg_GenNASTransport (TS24301Msg_GenNASTransport* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24301IE_GenMessageContainer (&pvalue->genMsgContainer);
   asn1Init_TS24301Msg_GenNASTransport_addnInfo (&pvalue->addnInfo);
}

void asn1Init_TS24301Msg_DLGenNASTransport (
   TS24301Msg_DLGenNASTransport* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24301Msg_GenNASTransport (pvalue);
}

void asn1Init_TS24301Msg_ULGenNASTransport (
   TS24301Msg_ULGenNASTransport* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24301Msg_GenNASTransport (pvalue);
}

void asn1Init_TS24301Msg_AttachAccept (TS24301Msg_AttachAccept* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   pvalue->spare = 0;
   asn1Init_TS24301IE_EPSAttachResult (&pvalue->result);
   asn1Init_TS24301IE_TrackingAreaIdentList (&pvalue->taiList);
   asn1Init_TS24301IE_ESMMessageContainer (&pvalue->esmMessageContainer);
   asn1Init_TS24301IE_EPSMobileIdentity (&pvalue->guti);
   asn1Init_TS24008IE_LocAreaIdent (&pvalue->locAreaIdent);
   asn1Init_TS24008IE_MobileIdentity (&pvalue->msIdentity);
   asn1Init_TS24008IE_PLMNList (&pvalue->equivPLMNs);
   asn1Init_TS24008IE_EmergencyNumberList (&pvalue->emergNumList);
   asn1Init_TS24301IE_EPSNetworkFeatureSupport (&pvalue->epsNetFeatSupp);
   asn1Init_TS24301IE_AddnUpdateResult (&pvalue->addnUpdateResult);
}

void asn1Init_TS24301Msg_AttachReject (TS24301Msg_AttachReject* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24301IE_ESMMessageContainer (&pvalue->esmMsgCont);
}

void asn1Init_TS24301Msg_AttachRequest (TS24301Msg_AttachRequest* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24301IE_EPSAttachType (&pvalue->epsAttachType);
   asn1Init_TS24301IE_EPSMobileIdentity (&pvalue->oldGUTIOrIMSI);
   asn1Init_TS24301IE_UENetworkCapability (&pvalue->ueNetworkCapability);
   asn1Init_TS24301IE_ESMMessageContainer (&pvalue->esmMessageContainer);
   asn1Init_TS24301IE_EPSMobileIdentity (&pvalue->additionalGUTI);
   asn1Init_TS24301IE_TrackingAreaIdent (&pvalue->lastVisitedRegisteredTAI);
   asn1Init_TS24008IE_MSNetworkCapability (&pvalue->msNetworkCapability);
   asn1Init_TS24008IE_LocAreaIdent (&pvalue->oldLocAreaIdent);
   asn1Init_TS24008IE_TMSIStatus (&pvalue->tmsiStatus);
   asn1Init_TS24008IE_MobileStationClassmark2 (&pvalue->mobileStationClassmark2);
   asn1Init_TS24008IE_MobileStationClassmark3 (&pvalue->mobileStationClassmark3);
   asn1Init_TS24008IE_SupportedCodecList (&pvalue->supportedCodecs);
   asn1Init_TS24301IE_AddnUpdateType (&pvalue->addnUpdateType);
   asn1Init_TS24008IE_VoiceDomainPref (&pvalue->voiceDomainPref);
   asn1Init_TS24008IE_DeviceProperties (&pvalue->deviceProperties);
   asn1Init_TS24301IE_GUTIType (&pvalue->oldGUTIType);
   asn1Init_TS24008IE_MSNetFeatureSupport (&pvalue->msNetFeatureSupport);
   asn1Init_TS24008IE_NetResourceIdentContainer (&pvalue->tmsiBasedNRIContainer);
}

void asn1Init_TS24301Msg_AuthFailure (TS24301Msg_AuthFailure* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_AuthFailureParam (&pvalue->authFailureParam);
}

void asn1Init_TS24301Msg_AuthRequest (TS24301Msg_AuthRequest* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = 0;
   asn1Init_TS24008IE_AuthParamAUTN (&pvalue->authParamAUTN);
}

void asn1Init_TS24301Msg_CSServiceNotif (TS24301Msg_CSServiceNotif* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24301IE_PagingIdentity (&pvalue->pagingIdentity);
   asn1Init_TS24301IE_CLI (&pvalue->cli);
   asn1Init_TS24301IE_LCSClientIdentity (&pvalue->lcsClientIdentity);
}

void asn1Init_TS24301Msg_DetachRequestUEOrig (
   TS24301Msg_DetachRequestUEOrig* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24301IE_EPSMobileIdentity (&pvalue->gUTIOrIMSI);
}

void asn1Init_TS24301Msg_DetachRequestUETerm (
   TS24301Msg_DetachRequestUETerm* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = 0;
}

void asn1Init_TS24301Msg_DetachRequest (TS24301Msg_DetachRequest* pvalue)
{
   if (0 == pvalue) return;
   pvalue->t = 0;
   OSCRTLMEMSET (&pvalue->u, 0, sizeof(pvalue->u));
}

void asn1Init_TS24301Msg_EMMInformation (TS24301Msg_EMMInformation* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_NetworkName (&pvalue->fullNameForNetwork);
   asn1Init_TS24008IE_NetworkName (&pvalue->shortNameForNetwork);
   asn1Init_TS24008IE_DaylightSavingTime (&pvalue->networkDaylightSavingTime);
}

void asn1Init_TS24301Msg_ExtServiceReq (TS24301Msg_ExtServiceReq* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_MobileIdentity (&pvalue->m_tmsi);
   asn1Init_TS24301IE_CSFBResponse (&pvalue->csfbResponse);
   asn1Init_TS24301IE_EPSBearerContextStatus (&pvalue->epsBearerContextStatus);
   asn1Init_TS24008IE_DeviceProperties (&pvalue->deviceProperties);
}

void asn1Init_TS24301Msg_GUTIReallocCmd (TS24301Msg_GUTIReallocCmd* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24301IE_EPSMobileIdentity (&pvalue->guti);
   asn1Init_TS24301IE_TrackingAreaIdentList (&pvalue->taiList);
}

void asn1Init_TS24301Msg_IdentReq (TS24301Msg_IdentReq* pvalue)
{
   if (0 == pvalue) return;
   pvalue->spare = 0;
   asn1Init_TS24008IE_IdentityType2Value (&pvalue->identType);
}

void asn1Init_TS24301Msg_SecModeCmd (TS24301Msg_SecModeCmd* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24301IE_NASSecurityAlgorithms (&pvalue->selNASSecurityAlgs);
   pvalue->spare = 0;
   asn1Init_TS24301IE_UESecurityCapability (&pvalue->replayedUESecurityCapabilities);
   asn1Init_TS24008IE_IMEISVRequest (&pvalue->imeisvRequest);
}

void asn1Init_TS24301Msg_SecModeCmplt (TS24301Msg_SecModeCmplt* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_MobileIdentity (&pvalue->imeisv);
}

void asn1Init_TS24301Msg_ServiceReject (TS24301Msg_ServiceReject* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
}

void asn1Init_TS24301Msg_TrkAreaUpdAccept (TS24301Msg_TrkAreaUpdAccept* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   pvalue->spare = 0;
   asn1Init_TS24301IE_EPSUpdateResult (&pvalue->epsUpdateResult);
   asn1Init_TS24301IE_EPSMobileIdentity (&pvalue->guti);
   asn1Init_TS24301IE_TrackingAreaIdentList (&pvalue->taiList);
   asn1Init_TS24301IE_EPSBearerContextStatus (&pvalue->epsBearerContextStatus);
   asn1Init_TS24008IE_LocAreaIdent (&pvalue->locAreaIdent);
   asn1Init_TS24008IE_MobileIdentity (&pvalue->msIdentity);
   asn1Init_TS24008IE_PLMNList (&pvalue->equivalentPLMNs);
   asn1Init_TS24008IE_EmergencyNumberList (&pvalue->emergencyNumberList);
   asn1Init_TS24301IE_EPSNetworkFeatureSupport (&pvalue->epsNetworkFeatureSupport);
   asn1Init_TS24301IE_AddnUpdateResult (&pvalue->addnUpdateResult);
}

void asn1Init_TS24301Msg_TrkAreaUpdReject (TS24301Msg_TrkAreaUpdReject* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
}

void asn1Init_TS24301Msg_TrkAreaUpdRequest (
   TS24301Msg_TrkAreaUpdRequest* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24301IE_EPSMobileIdentity (&pvalue->oldGUTI);
   asn1Init_TS24301IE_EPSMobileIdentity (&pvalue->additionalGUTI);
   asn1Init_TS24301IE_UENetworkCapability (&pvalue->ueNetworkCapability);
   asn1Init_TS24301IE_TrackingAreaIdent (&pvalue->lastVisitedRegisteredTAI);
   asn1Init_TS24301IE_EPSBearerContextStatus (&pvalue->epsBearerContextStatus);
   asn1Init_TS24008IE_MSNetworkCapability (&pvalue->msNetworkCapability);
   asn1Init_TS24008IE_LocAreaIdent (&pvalue->oldLocAreaIdent);
   asn1Init_TS24008IE_TMSIStatus (&pvalue->tmsiStatus);
   asn1Init_TS24008IE_MobileStationClassmark2 (&pvalue->mobileStationClassmark2);
   asn1Init_TS24008IE_MobileStationClassmark3 (&pvalue->mobileStationClassmark3);
   asn1Init_TS24008IE_SupportedCodecList (&pvalue->supportedCodecs);
   asn1Init_TS24301IE_AddnUpdateType (&pvalue->addnUpdateType);
   asn1Init_TS24008IE_VoiceDomainPref (&pvalue->voiceDomainPref);
   asn1Init_TS24301IE_GUTIType (&pvalue->oldGUTIType);
   asn1Init_TS24008IE_DeviceProperties (&pvalue->deviceProperties);
   asn1Init_TS24008IE_MSNetFeatureSupport (&pvalue->msNetFeatureSupport);
   asn1Init_TS24008IE_NetResourceIdentContainer (&pvalue->tmsiBasedNRIContainer);
}

void asn1Init_TS24301Msg_ActvDedEPSBearerCtxtAcc (
   TS24301Msg_ActvDedEPSBearerCtxtAcc* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_ActvDedEPSBearerCtxtRej (
   TS24301Msg_ActvDedEPSBearerCtxtRej* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_ActvDedEPSBearerCtxtReq (
   TS24301Msg_ActvDedEPSBearerCtxtReq* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   pvalue->spare = 0;
   asn1Init_TS24301IE_EPSQualityOfService (&pvalue->epsQoS);
   asn1Init_TS24008IE_TFT (&pvalue->tft);
   asn1Init_TS24008IE_LinkedTI (&pvalue->transIdent);
   asn1Init_TS24008IE_QualityOfService (&pvalue->negotiatedQoS);
   asn1Init_TS24008IE_LLCSAPIValue (&pvalue->negotiatedLLCSAPI);
   asn1Init_TS24008IE_PacketFlowIdentValue (&pvalue->packetFlowIdentifier);
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_ActvDfltEPSBearerCtxtAcc (
   TS24301Msg_ActvDfltEPSBearerCtxtAcc* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_ActvDfltEPSBearerCtxtRej (
   TS24301Msg_ActvDfltEPSBearerCtxtRej* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_ActvDfltEPSBearerCtxtReq (
   TS24301Msg_ActvDfltEPSBearerCtxtReq* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24301IE_EPSQualityOfService (&pvalue->epsQoS);
   pvalue->accessPointName[0] = '\0';
   asn1Init_TS24301IE_PDNAddress (&pvalue->pdnAddress);
   asn1Init_TS24008IE_LinkedTI (&pvalue->transIdent);
   asn1Init_TS24008IE_QualityOfService (&pvalue->negotiatedQoS);
   asn1Init_TS24008IE_LLCSAPIValue (&pvalue->negotiatedLLCSAPI);
   asn1Init_TS24008IE_PacketFlowIdentValue (&pvalue->packetFlowIdentifier);
   asn1Init_TS24301IE_APNAggMaxBitRate (&pvalue->apn_AMBR);
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_BearerResAllocRej (
   TS24301Msg_BearerResAllocRej* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_BearerResAllocReq (
   TS24301Msg_BearerResAllocReq* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   pvalue->spare = 0;
   asn1Init_TS24008IE_TFT (&pvalue->trafficFlowAgg);
   asn1Init_TS24301IE_EPSQualityOfService (&pvalue->epsQoS);
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
   asn1Init_TS24008IE_DeviceProperties (&pvalue->deviceProperties);
}

void asn1Init_TS24301Msg_BearerResModRej (TS24301Msg_BearerResModRej* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_BearerResModReq (TS24301Msg_BearerResModReq* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   pvalue->spare = 0;
   asn1Init_TS24008IE_TFT (&pvalue->trafficFlowAgg);
   asn1Init_TS24301IE_EPSQualityOfService (&pvalue->reqTrafficFlowQoS);
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
   asn1Init_TS24008IE_DeviceProperties (&pvalue->deviceProperties);
}

void asn1Init_TS24301Msg_DeactEPSBearerCtxtAcc (
   TS24301Msg_DeactEPSBearerCtxtAcc* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_DeactEPSBearerCtxtReq (
   TS24301Msg_DeactEPSBearerCtxtReq* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_ESMInfoResp (TS24301Msg_ESMInfoResp* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   pvalue->accessPointName[0] = '\0';
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_ModEPSBearerCtxtAcc (
   TS24301Msg_ModEPSBearerCtxtAcc* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_ModEPSBearerCtxtRej (
   TS24301Msg_ModEPSBearerCtxtRej* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_ModEPSBearerCtxtReq (
   TS24301Msg_ModEPSBearerCtxtReq* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24301IE_EPSQualityOfService (&pvalue->newEPSQoS);
   asn1Init_TS24008IE_TFT (&pvalue->tft);
   asn1Init_TS24008IE_QualityOfService (&pvalue->newQoS);
   asn1Init_TS24008IE_LLCSAPIValue (&pvalue->negotiatedLLCSAPI);
   asn1Init_TS24008IE_PacketFlowIdentValue (&pvalue->packetFlowIdentifier);
   asn1Init_TS24301IE_APNAggMaxBitRate (&pvalue->apn_AMBR);
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_PDNConnectRej (TS24301Msg_PDNConnectRej* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_PDNConnectReq (TS24301Msg_PDNConnectReq* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24301IE_PDNType (&pvalue->pdnType);
   asn1Init_TS24008IE_RequestTypeValue (&pvalue->requestType);
   asn1Init_TS24301IE_ESMInfoXferFlag (&pvalue->esmInfoXferFlag);
   pvalue->accessPointName[0] = '\0';
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
   asn1Init_TS24008IE_DeviceProperties (&pvalue->deviceProperties);
}

void asn1Init_TS24301Msg_PDNDisconnRej (TS24301Msg_PDNDisconnRej* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1Init_TS24301Msg_PDNDisconnReq (TS24301Msg_PDNDisconnReq* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   pvalue->spare = 0;
   asn1Init_TS24008IE_ProtocolConfigOptions (&pvalue->protocolConfigOptions);
}

void asn1SetTC_TS24301Msg_PDU_obj_AttachAccept
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_AttachAccept *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 66;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_AttachAccept;
   pElem->data.u.obj_AttachAccept = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_AttachComplete
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_AttachComplete *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 67;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_AttachComplete;
   pElem->data.u.obj_AttachComplete = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_AttachReject
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_AttachReject *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 68;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_AttachReject;
   pElem->data.u.obj_AttachReject = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_AttachRequest
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_AttachRequest *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 65;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_AttachRequest;
   pElem->data.u.obj_AttachRequest = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_AuthFailure
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_AuthFailure *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 92;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_AuthFailure;
   pElem->data.u.obj_AuthFailure = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_AuthReject
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 84;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_AuthReject;
}

void asn1SetTC_TS24301Msg_PDU_obj_AuthRequest
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_AuthRequest *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 82;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_AuthRequest;
   pElem->data.u.obj_AuthRequest = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_AuthResponse
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_AuthResponse *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 83;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_AuthResponse;
   pElem->data.u.obj_AuthResponse = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_CSServiceNotif
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_CSServiceNotif *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 100;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_CSServiceNotif;
   pElem->data.u.obj_CSServiceNotif = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_DetachAccept
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 70;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_DetachAccept;
}

void asn1SetTC_TS24301Msg_PDU_obj_DetachRequest
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_DetachRequest *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 69;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_DetachRequest;
   pElem->data.u.obj_DetachRequest = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_DLNASTransport
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_DLNASTransport *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 98;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_DLNASTransport;
   pElem->data.u.obj_DLNASTransport = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_EMMInformation
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_EMMInformation *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 97;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_EMMInformation;
   pElem->data.u.obj_EMMInformation = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_EMMStatus
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_EMMStatus value)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 96;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_EMMStatus;
   pElem->data.u.obj_EMMStatus = value;
}

void asn1SetTC_TS24301Msg_PDU_obj_ExtServiceReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ExtServiceReq *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 76;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ExtServiceReq;
   pElem->data.u.obj_ExtServiceReq = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_GUTIReallocCmd
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_GUTIReallocCmd *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 80;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_GUTIReallocCmd;
   pElem->data.u.obj_GUTIReallocCmd = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_GUTIReallocCmplt
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 81;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_GUTIReallocCmplt;
}

void asn1SetTC_TS24301Msg_PDU_obj_IdentReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_IdentReq *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 85;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_IdentReq;
   pElem->data.u.obj_IdentReq = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_IdentResp
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_IdentResp *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 86;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_IdentResp;
   pElem->data.u.obj_IdentResp = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_SecModeCmd
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_SecModeCmd *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 93;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_SecModeCmd;
   pElem->data.u.obj_SecModeCmd = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_SecModeCmplt
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_SecModeCmplt *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 94;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_SecModeCmplt;
   pElem->data.u.obj_SecModeCmplt = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_SecModeReject
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_SecModeReject value)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 95;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_SecModeReject;
   pElem->data.u.obj_SecModeReject = value;
}

void asn1SetTC_TS24301Msg_PDU_obj_ServiceReject
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ServiceReject *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 78;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ServiceReject;
   pElem->data.u.obj_ServiceReject = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_TrkAreaUpdAccept
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_TrkAreaUpdAccept *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 73;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_TrkAreaUpdAccept;
   pElem->data.u.obj_TrkAreaUpdAccept = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_TrkAreaUpdCmplt
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 74;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_TrkAreaUpdCmplt;
}

void asn1SetTC_TS24301Msg_PDU_obj_TrkAreaUpdReject
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_TrkAreaUpdReject *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 75;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_TrkAreaUpdReject;
   pElem->data.u.obj_TrkAreaUpdReject = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_TrkAreaUpdRequest
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_TrkAreaUpdRequest *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 72;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_TrkAreaUpdRequest;
   pElem->data.u.obj_TrkAreaUpdRequest = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ULNASTransport
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ULNASTransport *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 99;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ULNASTransport;
   pElem->data.u.obj_ULNASTransport = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ULGenNASTransport
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ULGenNASTransport *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 105;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ULGenNASTransport;
   pElem->data.u.obj_ULGenNASTransport = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_DLGenNASTransport
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_DLGenNASTransport *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsMobMgmt;
   pElem->msgType = 104;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_DLGenNASTransport;
   pElem->data.u.obj_DLGenNASTransport = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ActvDedEPSBearerCtxtAcc
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ActvDedEPSBearerCtxtAcc *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 198;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ActvDedEPSBearerCtxtAcc;
   pElem->data.u.obj_ActvDedEPSBearerCtxtAcc = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ActvDedEPSBearerCtxtRej
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ActvDedEPSBearerCtxtRej *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 199;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ActvDedEPSBearerCtxtRej;
   pElem->data.u.obj_ActvDedEPSBearerCtxtRej = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ActvDedEPSBearerCtxtReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ActvDedEPSBearerCtxtReq *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 197;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ActvDedEPSBearerCtxtReq;
   pElem->data.u.obj_ActvDedEPSBearerCtxtReq = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ActvDfltEPSBearerCtxtAcc
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ActvDfltEPSBearerCtxtAcc *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 194;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ActvDfltEPSBearerCtxtAcc;
   pElem->data.u.obj_ActvDfltEPSBearerCtxtAcc = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ActvDfltEPSBearerCtxtRej
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ActvDfltEPSBearerCtxtRej *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 195;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ActvDfltEPSBearerCtxtRej;
   pElem->data.u.obj_ActvDfltEPSBearerCtxtRej = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ActvDfltEPSBearerCtxtReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ActvDfltEPSBearerCtxtReq *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 193;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ActvDfltEPSBearerCtxtReq;
   pElem->data.u.obj_ActvDfltEPSBearerCtxtReq = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_BearerResAllocRej
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_BearerResAllocRej *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 213;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_BearerResAllocRej;
   pElem->data.u.obj_BearerResAllocRej = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_BearerResAllocReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_BearerResAllocReq *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 212;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_BearerResAllocReq;
   pElem->data.u.obj_BearerResAllocReq = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_BearerResModRej
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_BearerResModRej *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 215;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_BearerResModRej;
   pElem->data.u.obj_BearerResModRej = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_BearerResModReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_BearerResModReq *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 214;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_BearerResModReq;
   pElem->data.u.obj_BearerResModReq = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_DeactEPSBearerCtxtAcc
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_DeactEPSBearerCtxtAcc *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 206;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_DeactEPSBearerCtxtAcc;
   pElem->data.u.obj_DeactEPSBearerCtxtAcc = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_DeactEPSBearerCtxtReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_DeactEPSBearerCtxtReq *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 205;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_DeactEPSBearerCtxtReq;
   pElem->data.u.obj_DeactEPSBearerCtxtReq = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ESMInfoReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 217;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ESMInfoReq;
}

void asn1SetTC_TS24301Msg_PDU_obj_ESMInfoResp
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ESMInfoResp *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 218;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ESMInfoResp;
   pElem->data.u.obj_ESMInfoResp = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ESMStatus
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ESMStatus value)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 232;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ESMStatus;
   pElem->data.u.obj_ESMStatus = value;
}

void asn1SetTC_TS24301Msg_PDU_obj_ModEPSBearerCtxtAcc
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ModEPSBearerCtxtAcc *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 202;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ModEPSBearerCtxtAcc;
   pElem->data.u.obj_ModEPSBearerCtxtAcc = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ModEPSBearerCtxtRej
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ModEPSBearerCtxtRej *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 203;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ModEPSBearerCtxtRej;
   pElem->data.u.obj_ModEPSBearerCtxtRej = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_ModEPSBearerCtxtReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_ModEPSBearerCtxtReq *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 201;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_ModEPSBearerCtxtReq;
   pElem->data.u.obj_ModEPSBearerCtxtReq = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_PDNConnectRej
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_PDNConnectRej *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 209;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_PDNConnectRej;
   pElem->data.u.obj_PDNConnectRej = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_PDNConnectReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_PDNConnectReq *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 208;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_PDNConnectReq;
   pElem->data.u.obj_PDNConnectReq = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_PDNDisconnRej
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_PDNDisconnRej *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 211;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_PDNDisconnRej;
   pElem->data.u.obj_PDNDisconnRej = pvalue;
}

void asn1SetTC_TS24301Msg_PDU_obj_PDNDisconnReq
   (OSCTXT* pctxt, TS24301Msg_PDU* pElem, TS24301Msg_PDNDisconnReq *pvalue)
{
   pElem->protoDiscr = TS24007L3_ProtoDiscr_epsSessMgmt;
   pElem->msgType = 210;
   pElem->data.t = T_TS24301Msgs_TS24301_IE_OBJECTSET_obj_PDNDisconnReq;
   pElem->data.u.obj_PDNDisconnReq = pvalue;
}

void asn1Init_TS24301Msg_PDU (TS24301Msg_PDU* pvalue)
{
   if (0 == pvalue) return;
   OSCRTLMEMSET (&pvalue->m, 0, sizeof (pvalue->m));
   asn1Init_TS24007L3_L3HdrOptions (&pvalue->l3HdrOpts);
   OSCRTLMEMSET (&pvalue->pti.u, 0, sizeof(pvalue->pti.u));
   OSCRTLMEMSET (&pvalue->data, 0, sizeof(pvalue->data));
}

void asn1Init_TS24301Msg_ServiceRequest (TS24301Msg_ServiceRequest* pvalue)
{
   if (0 == pvalue) return;
   asn1Init_TS24007L3_L3HdrOptions (&pvalue->l3HdrOpts);
}
