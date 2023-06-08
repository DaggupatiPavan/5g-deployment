/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "DiscNFInstancesStoreApi.h"
#include "Helpers.h"
#include "nrf_config.hpp"
#include "logger.hpp"

extern oai::nrf::app::nrf_config nrf_cfg;

namespace oai {
namespace nrf {
namespace api {

using namespace oai::nrf::helpers;
using namespace oai::nrf::model;

DiscNFInstancesStoreApi::DiscNFInstancesStoreApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void DiscNFInstancesStoreApi::init() {
  setupRoutes();
}

void DiscNFInstancesStoreApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router, base + nrf_cfg.sbi_api_version + "/nf-instances",
      Routes::bind(
          &DiscNFInstancesStoreApi::search_nf_instances_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &DiscNFInstancesStoreApi::nf_instances_store_api_default_handler, this));
}

void DiscNFInstancesStoreApi::search_nf_instances_handler(
    const Pistache::Rest::Request& request,
    Pistache::Http::ResponseWriter response) {
  // Getting the query params
  auto targetNfTypeQuery = request.query().get("target-nf-type");
  Pistache::Optional<std::string> targetNfType;
  if (!targetNfTypeQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(targetNfTypeQuery.get(), valueQuery_instance)) {
      targetNfType = Pistache::Some(valueQuery_instance);
    }
  }
  auto requesterNfTypeQuery = request.query().get("requester-nf-type");
  Pistache::Optional<std::string> requesterNfType;
  if (!requesterNfTypeQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(requesterNfTypeQuery.get(), valueQuery_instance)) {
      requesterNfType = Pistache::Some(valueQuery_instance);
    }
  }
  auto requesterNfInstanceIdQuery =
      request.query().get("requester-nf-instance-id");
  Pistache::Optional<std::string> requesterNfInstanceId;
  if (!requesterNfInstanceIdQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(
            requesterNfInstanceIdQuery.get(), valueQuery_instance)) {
      requesterNfInstanceId = Pistache::Some(valueQuery_instance);
    }
  }
  auto serviceNamesQuery = request.query().get("service-names");
  Pistache::Optional<std::vector<ServiceName>> serviceNames;
  if (!serviceNamesQuery.isEmpty()) {
    std::vector<ServiceName> valueQuery_instance;
    if (fromStringValue(serviceNamesQuery.get(), valueQuery_instance)) {
      serviceNames = Pistache::Some(valueQuery_instance);
    }
  }
  auto requesterNfInstanceFqdnQuery =
      request.query().get("requester-nf-instance-fqdn");
  Pistache::Optional<std::string> requesterNfInstanceFqdn;
  if (!requesterNfInstanceFqdnQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(
            requesterNfInstanceFqdnQuery.get(), valueQuery_instance)) {
      requesterNfInstanceFqdn = Pistache::Some(valueQuery_instance);
    }
  }
  auto targetPlmnListQuery = request.query().get("target-plmn-list");
  Pistache::Optional<std::vector<PlmnId>> targetPlmnList;
  if (!targetPlmnListQuery.isEmpty()) {
    std::vector<PlmnId> valueQuery_instance;
    if (fromStringValue(targetPlmnListQuery.get(), valueQuery_instance)) {
      targetPlmnList = Pistache::Some(valueQuery_instance);
    }
  }
  auto requesterPlmnListQuery = request.query().get("requester-plmn-list");
  Pistache::Optional<std::vector<PlmnId>> requesterPlmnList;
  if (!requesterPlmnListQuery.isEmpty()) {
    std::vector<PlmnId> valueQuery_instance;
    if (fromStringValue(requesterPlmnListQuery.get(), valueQuery_instance)) {
      requesterPlmnList = Pistache::Some(valueQuery_instance);
    }
  }
  auto targetNfInstanceIdQuery = request.query().get("target-nf-instance-id");
  Pistache::Optional<std::string> targetNfInstanceId;
  if (!targetNfInstanceIdQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(targetNfInstanceIdQuery.get(), valueQuery_instance)) {
      targetNfInstanceId = Pistache::Some(valueQuery_instance);
    }
  }
  auto targetNfFqdnQuery = request.query().get("target-nf-fqdn");
  Pistache::Optional<std::string> targetNfFqdn;
  if (!targetNfFqdnQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(targetNfFqdnQuery.get(), valueQuery_instance)) {
      targetNfFqdn = Pistache::Some(valueQuery_instance);
    }
  }
  auto hnrfUriQuery = request.query().get("hnrf-uri");
  Pistache::Optional<std::string> hnrfUri;
  if (!hnrfUriQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(hnrfUriQuery.get(), valueQuery_instance)) {
      hnrfUri = Pistache::Some(valueQuery_instance);
    }
  }
  auto snssaisQuery = request.query().get("snssais");
  Pistache::Optional<std::vector<Snssai>> snssais;
  if (!snssaisQuery.isEmpty()) {
    std::vector<Snssai> valueQuery_instance;
    if (fromStringValue(snssaisQuery.get(), valueQuery_instance)) {
      snssais = Pistache::Some(valueQuery_instance);
    }
  }
  auto requesterSnssaisQuery = request.query().get("requester-snssais");
  Pistache::Optional<std::vector<Snssai>> requesterSnssais;
  if (!requesterSnssaisQuery.isEmpty()) {
    std::vector<Snssai> valueQuery_instance;
    if (fromStringValue(requesterSnssaisQuery.get(), valueQuery_instance)) {
      requesterSnssais = Pistache::Some(valueQuery_instance);
    }
  }
  auto plmnSpecificSnssaiListQuery =
      request.query().get("plmn-specific-snssai-list");
  Pistache::Optional<std::vector<PlmnSnssai>> plmnSpecificSnssaiList;
  if (!plmnSpecificSnssaiListQuery.isEmpty()) {
    std::vector<PlmnSnssai> valueQuery_instance;
    if (fromStringValue(
            plmnSpecificSnssaiListQuery.get(), valueQuery_instance)) {
      plmnSpecificSnssaiList = Pistache::Some(valueQuery_instance);
    }
  }
  auto dnnQuery = request.query().get("dnn");
  Pistache::Optional<std::string> dnn;
  if (!dnnQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(dnnQuery.get(), valueQuery_instance)) {
      dnn = Pistache::Some(valueQuery_instance);
    }
  }
  auto nsiListQuery = request.query().get("nsi-list");
  Pistache::Optional<std::vector<std::string>> nsiList;
  if (!nsiListQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(nsiListQuery.get(), valueQuery_instance)) {
      nsiList = Pistache::Some(valueQuery_instance);
    }
  }
  auto smfServingAreaQuery = request.query().get("smf-serving-area");
  Pistache::Optional<std::string> smfServingArea;
  if (!smfServingAreaQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(smfServingAreaQuery.get(), valueQuery_instance)) {
      smfServingArea = Pistache::Some(valueQuery_instance);
    }
  }
  auto taiQuery = request.query().get("tai");
  Pistache::Optional<Tai> tai;
  if (!taiQuery.isEmpty()) {
    Tai valueQuery_instance;
    if (fromStringValue(taiQuery.get(), valueQuery_instance)) {
      tai = Pistache::Some(valueQuery_instance);
    }
  }
  auto amfRegionIdQuery = request.query().get("amf-region-id");
  Pistache::Optional<std::string> amfRegionId;
  if (!amfRegionIdQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(amfRegionIdQuery.get(), valueQuery_instance)) {
      amfRegionId = Pistache::Some(valueQuery_instance);
    }
  }
  auto amfSetIdQuery = request.query().get("amf-set-id");
  Pistache::Optional<std::string> amfSetId;
  if (!amfSetIdQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(amfSetIdQuery.get(), valueQuery_instance)) {
      amfSetId = Pistache::Some(valueQuery_instance);
    }
  }
  auto guamiQuery = request.query().get("guami");
  Pistache::Optional<Guami> guami;
  if (!guamiQuery.isEmpty()) {
    Guami valueQuery_instance;
    if (fromStringValue(guamiQuery.get(), valueQuery_instance)) {
      guami = Pistache::Some(valueQuery_instance);
    }
  }
  auto supiQuery = request.query().get("supi");
  Pistache::Optional<std::string> supi;
  if (!supiQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(supiQuery.get(), valueQuery_instance)) {
      supi = Pistache::Some(valueQuery_instance);
    }
  }
  auto ueIpv4AddressQuery = request.query().get("ue-ipv4-address");
  Pistache::Optional<std::string> ueIpv4Address;
  if (!ueIpv4AddressQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(ueIpv4AddressQuery.get(), valueQuery_instance)) {
      ueIpv4Address = Pistache::Some(valueQuery_instance);
    }
  }
  auto ipDomainQuery = request.query().get("ip-domain");
  Pistache::Optional<std::string> ipDomain;
  if (!ipDomainQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(ipDomainQuery.get(), valueQuery_instance)) {
      ipDomain = Pistache::Some(valueQuery_instance);
    }
  }
  auto ueIpv6PrefixQuery = request.query().get("ue-ipv6-prefix");
  Pistache::Optional<Ipv6Prefix> ueIpv6Prefix;
  if (!ueIpv6PrefixQuery.isEmpty()) {
    Ipv6Prefix valueQuery_instance;
    if (fromStringValue(ueIpv6PrefixQuery.get(), valueQuery_instance)) {
      ueIpv6Prefix = Pistache::Some(valueQuery_instance);
    }
  }
  auto pgwIndQuery = request.query().get("pgw-ind");
  Pistache::Optional<bool> pgwInd;
  if (!pgwIndQuery.isEmpty()) {
    bool valueQuery_instance;
    if (fromStringValue(pgwIndQuery.get(), valueQuery_instance)) {
      pgwInd = Pistache::Some(valueQuery_instance);
    }
  }
  auto pgwQuery = request.query().get("pgw");
  Pistache::Optional<std::string> pgw;
  if (!pgwQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(pgwQuery.get(), valueQuery_instance)) {
      pgw = Pistache::Some(valueQuery_instance);
    }
  }
  auto gpsiQuery = request.query().get("gpsi");
  Pistache::Optional<std::string> gpsi;
  if (!gpsiQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(gpsiQuery.get(), valueQuery_instance)) {
      gpsi = Pistache::Some(valueQuery_instance);
    }
  }
  auto externalGroupIdentityQuery =
      request.query().get("external-group-identity");
  Pistache::Optional<std::string> externalGroupIdentity;
  if (!externalGroupIdentityQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(
            externalGroupIdentityQuery.get(), valueQuery_instance)) {
      externalGroupIdentity = Pistache::Some(valueQuery_instance);
    }
  }
  auto dataSetQuery = request.query().get("data-set");
  Pistache::Optional<DataSetId> dataSet;
  if (!dataSetQuery.isEmpty()) {
    DataSetId valueQuery_instance;
    if (fromStringValue(dataSetQuery.get(), valueQuery_instance)) {
      dataSet = Pistache::Some(valueQuery_instance);
    }
  }
  auto routingIndicatorQuery = request.query().get("routing-indicator");
  Pistache::Optional<std::string> routingIndicator;
  if (!routingIndicatorQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(routingIndicatorQuery.get(), valueQuery_instance)) {
      routingIndicator = Pistache::Some(valueQuery_instance);
    }
  }
  auto groupIdListQuery = request.query().get("group-id-list");
  Pistache::Optional<std::vector<std::string>> groupIdList;
  if (!groupIdListQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(groupIdListQuery.get(), valueQuery_instance)) {
      groupIdList = Pistache::Some(valueQuery_instance);
    }
  }
  auto dnaiListQuery = request.query().get("dnai-list");
  Pistache::Optional<std::vector<std::string>> dnaiList;
  if (!dnaiListQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(dnaiListQuery.get(), valueQuery_instance)) {
      dnaiList = Pistache::Some(valueQuery_instance);
    }
  }
  auto pduSessionTypesQuery = request.query().get("pdu-session-types");
  Pistache::Optional<std::vector<PduSessionType>> pduSessionTypes;
  if (!pduSessionTypesQuery.isEmpty()) {
    std::vector<PduSessionType> valueQuery_instance;
    if (fromStringValue(pduSessionTypesQuery.get(), valueQuery_instance)) {
      pduSessionTypes = Pistache::Some(valueQuery_instance);
    }
  }
  auto eventIdListQuery = request.query().get("event-id-list");
  Pistache::Optional<std::vector<EventId>> eventIdList;
  if (!eventIdListQuery.isEmpty()) {
    std::vector<EventId> valueQuery_instance;
    if (fromStringValue(eventIdListQuery.get(), valueQuery_instance)) {
      eventIdList = Pistache::Some(valueQuery_instance);
    }
  }
  auto nwdafEventListQuery = request.query().get("nwdaf-event-list");
  Pistache::Optional<std::vector<NwdafEvent>> nwdafEventList;
  if (!nwdafEventListQuery.isEmpty()) {
    std::vector<NwdafEvent> valueQuery_instance;
    if (fromStringValue(nwdafEventListQuery.get(), valueQuery_instance)) {
      nwdafEventList = Pistache::Some(valueQuery_instance);
    }
  }
  auto supportedFeaturesQuery = request.query().get("supported-features");
  Pistache::Optional<std::string> supportedFeatures;
  if (!supportedFeaturesQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(supportedFeaturesQuery.get(), valueQuery_instance)) {
      supportedFeatures = Pistache::Some(valueQuery_instance);
    }
  }
  auto upfIwkEpsIndQuery = request.query().get("upf-iwk-eps-ind");
  Pistache::Optional<bool> upfIwkEpsInd;
  if (!upfIwkEpsIndQuery.isEmpty()) {
    bool valueQuery_instance;
    if (fromStringValue(upfIwkEpsIndQuery.get(), valueQuery_instance)) {
      upfIwkEpsInd = Pistache::Some(valueQuery_instance);
    }
  }
  auto chfSupportedPlmnQuery = request.query().get("chf-supported-plmn");
  Pistache::Optional<PlmnId> chfSupportedPlmn;
  if (!chfSupportedPlmnQuery.isEmpty()) {
    PlmnId valueQuery_instance;
    if (fromStringValue(chfSupportedPlmnQuery.get(), valueQuery_instance)) {
      chfSupportedPlmn = Pistache::Some(valueQuery_instance);
    }
  }
  auto preferredLocalityQuery = request.query().get("preferred-locality");
  Pistache::Optional<std::string> preferredLocality;
  if (!preferredLocalityQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(preferredLocalityQuery.get(), valueQuery_instance)) {
      preferredLocality = Pistache::Some(valueQuery_instance);
    }
  }
  auto accessTypeQuery = request.query().get("access-type");
  Pistache::Optional<AccessType> accessType;
  if (!accessTypeQuery.isEmpty()) {
    AccessType valueQuery_instance;
    if (fromStringValue(accessTypeQuery.get(), valueQuery_instance)) {
      accessType = Pistache::Some(valueQuery_instance);
    }
  }
  auto limitQuery = request.query().get("limit");
  Pistache::Optional<int32_t> limit;
  if (!limitQuery.isEmpty()) {
    int32_t valueQuery_instance;
    if (fromStringValue(limitQuery.get(), valueQuery_instance)) {
      limit = Pistache::Some(valueQuery_instance);
    }
  }
  auto requiredFeaturesQuery = request.query().get("required-features");
  Pistache::Optional<std::vector<std::string>> requiredFeatures;
  if (!requiredFeaturesQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(requiredFeaturesQuery.get(), valueQuery_instance)) {
      requiredFeatures = Pistache::Some(valueQuery_instance);
    }
  }
  auto complexQueryQuery = request.query().get("complex-query");
  Pistache::Optional<ComplexQuery> complexQuery;
  if (!complexQueryQuery.isEmpty()) {
    ComplexQuery valueQuery_instance;
    if (fromStringValue(complexQueryQuery.get(), valueQuery_instance)) {
      complexQuery = Pistache::Some(valueQuery_instance);
    }
  }
  auto maxPayloadSizeQuery = request.query().get("max-payload-size");
  Pistache::Optional<int32_t> maxPayloadSize;
  if (!maxPayloadSizeQuery.isEmpty()) {
    int32_t valueQuery_instance;
    if (fromStringValue(maxPayloadSizeQuery.get(), valueQuery_instance)) {
      maxPayloadSize = Pistache::Some(valueQuery_instance);
    }
  }
  auto atsssCapabilityQuery = request.query().get("atsss-capability");
  Pistache::Optional<AtsssCapability> atsssCapability;
  if (!atsssCapabilityQuery.isEmpty()) {
    AtsssCapability valueQuery_instance;
    if (fromStringValue(atsssCapabilityQuery.get(), valueQuery_instance)) {
      atsssCapability = Pistache::Some(valueQuery_instance);
    }
  }
  auto upfUeIpAddrIndQuery = request.query().get("upf-ue-ip-addr-ind");
  Pistache::Optional<bool> upfUeIpAddrInd;
  if (!upfUeIpAddrIndQuery.isEmpty()) {
    bool valueQuery_instance;
    if (fromStringValue(upfUeIpAddrIndQuery.get(), valueQuery_instance)) {
      upfUeIpAddrInd = Pistache::Some(valueQuery_instance);
    }
  }

  // Getting the header params
  auto ifNoneMatch = request.headers().tryGetRaw("If-None-Match");

  try {
    this->search_nf_instances(
        targetNfType, requesterNfType, requesterNfInstanceId, serviceNames,
        requesterNfInstanceFqdn, targetPlmnList, requesterPlmnList,
        targetNfInstanceId, targetNfFqdn, hnrfUri, snssais, requesterSnssais,
        plmnSpecificSnssaiList, dnn, nsiList, smfServingArea, tai, amfRegionId,
        amfSetId, guami, supi, ueIpv4Address, ipDomain, ueIpv6Prefix, pgwInd,
        pgw, gpsi, externalGroupIdentity, dataSet, routingIndicator,
        groupIdList, dnaiList, pduSessionTypes, eventIdList, nwdafEventList,
        supportedFeatures, upfIwkEpsInd, chfSupportedPlmn, preferredLocality,
        accessType, limit, requiredFeatures, complexQuery, maxPayloadSize,
        atsssCapability, upfUeIpAddrInd, ifNoneMatch, response);
  } catch (nlohmann::detail::exception& e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (Pistache::Http::HttpError& e) {
    response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
    return;
  } catch (std::exception& e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}

void DiscNFInstancesStoreApi::nf_instances_store_api_default_handler(
    const Pistache::Rest::Request&, Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace api
}  // namespace nrf
}  // namespace oai
