/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SubscriptionData.h
 *
 *
 */

#ifndef SubscriptionData_H_
#define SubscriptionData_H_

//#include
//"OneOfNfInstanceIdCondNfTypeCondServiceNameCondAmfCondGuamiListCondNetworkSliceCondNfGroupCond.h"
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>
#include <vector>
#include "NotifCondition.h"
#include "NotificationEventType.h"
#include "PlmnId.h"
#include "Snssai.h"

#include "AmfCond.h"
#include "GuamiListCond.h"
#include "NetworkSliceCond.h"
#include "NfGroupCond.h"
#include "NfInstanceIdCond.h"
#include "NfTypeCond.h"
#include "ServiceNameCond.h"

namespace oai {
namespace nrf {
namespace model {

typedef struct subscription_condition_api_s {
  uint8_t type;
  union {
    NfInstanceIdCond nfInstanceIdCond;
    NfTypeCond nfTypeCond;
    ServiceNameCond serviceNameCond;
    AmfCond amfCond;
    GuamiListCond guamiListCond;
    NetworkSliceCond networkSliceCond;
    NfGroupCond nfGroupCond;
  };

  subscription_condition_api_s() : type(0) {
    // TODO
  }

  subscription_condition_api_s(subscription_condition_api_s const& s) {
    nfInstanceIdCond = s.nfInstanceIdCond;
    nfTypeCond       = s.nfTypeCond;
    serviceNameCond  = s.serviceNameCond;
    amfCond          = s.amfCond;
    guamiListCond    = s.guamiListCond;
    networkSliceCond = s.networkSliceCond;
    nfGroupCond      = s.nfGroupCond;
  }

  subscription_condition_api_s(uint8_t t) : type(t) {
    nfInstanceIdCond = {};
    nfTypeCond       = {};
    serviceNameCond  = {};
    amfCond          = {};
    guamiListCond    = {};
    networkSliceCond = {};
    nfGroupCond      = {};
  }

  bool operator==(const struct subscription_condition_api_s& s) const {
    return (s.type == type);
  }

  bool operator==(const uint8_t& t) const { return (t == type); }

  subscription_condition_api_s& operator=(subscription_condition_api_s& s) {
    // TODO:
    return *this;
  }

  friend void to_json(
      nlohmann::json& j, const subscription_condition_api_s& o) {
    switch (o.type) {
      case 1:
        j["NfInstanceIdCond"] = o.nfInstanceIdCond;
        break;
      case 2:
        j["NfTypeCond"] = o.nfTypeCond;
        break;
      case 3:
        j["ServiceNameCond"] = o.serviceNameCond;
        break;

      case 4:
        j["AmfCond"] = o.amfCond;
        break;

      case 5:
        j["GuamiListCond"] = o.guamiListCond;
        break;
      case 6:
        j["NetworkSliceCond"] = o.networkSliceCond;
        break;

      case 7:
        j["NfGroupCond"] = o.nfGroupCond;
        break;
      default: {
      }
    }
  }

  friend void from_json(
      const nlohmann::json& j, subscription_condition_api_s& o) {
    if (j.find("NfInstanceIdCond") != j.end()) {
      j.at("NfInstanceIdCond").get_to(o.nfInstanceIdCond);
      o.type = 1;
    }
    if (j.find("NfTypeCond") != j.end()) {
      o.nfTypeCond = {};

      j.at("NfTypeCond").get_to(o.nfTypeCond);
      o.type = 2;
    }

    if (j.find("ServiceNameCond") != j.end()) {
      j.at("ServiceNameCond").get_to(o.serviceNameCond);
      o.type = 3;
    }
    if (j.find("AmfCond") != j.end()) {
      j.at("AmfCond").get_to(o.amfCond);
      o.type = 4;
    }
    if (j.find("GuamiListCond") != j.end()) {
      j.at("GuamiListCond").get_to(o.guamiListCond);
      o.type = 5;
    }
    if (j.find("NetworkSliceCond") != j.end()) {
      j.at("NetworkSliceCond").get_to(o.networkSliceCond);
      o.type = 6;
    }

    if (j.find("NfGroupCond") != j.end()) {
      j.at("NfGroupCond").get_to(o.nfGroupCond);
      o.type = 7;
    }
  }

  virtual ~subscription_condition_api_s(){};

} subscription_condition_api_t;

/// <summary>
///
/// </summary>
class SubscriptionData {
 public:
  SubscriptionData();
  virtual ~SubscriptionData();

  void validate();

  /////////////////////////////////////////////
  /// SubscriptionData members

  /// <summary>
  ///
  /// </summary>
  std::string getNfStatusNotificationUri() const;
  void setNfStatusNotificationUri(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getReqNfInstanceId() const;
  void setReqNfInstanceId(std::string const& value);
  bool reqNfInstanceIdIsSet() const;
  void unsetReqNfInstanceId();
  /// <summary>
  ///
  /// </summary>

  // OneOfNfInstanceIdCondNfTypeCondServiceNameCondAmfCondGuamiListCondNetworkSliceCondNfGroupCond
  // getSubscrCond() const;
  void getSubscrCond(nlohmann::json& s) const;

  void setSubscrCond(nlohmann::json const& value);
  bool subscrCondIsSet() const;
  void unsetSubscrCond();
  /// <summary>
  ///
  /// </summary>
  std::string getSubscriptionId() const;
  void setSubscriptionId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getValidityTime() const;
  void setValidityTime(std::string const& value);
  bool validityTimeIsSet() const;
  void unsetValidityTime();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> getReqNotifEvents() const;
  void getReqNotifEvents(std::vector<std::string>& value) const;
  void setReqNotifEvents(std::vector<std::string> const& value);
  bool reqNotifEventsIsSet() const;
  void unsetReqNotifEvents();
  /// <summary>
  ///
  /// </summary>
  PlmnId getPlmnId() const;
  void setPlmnId(PlmnId const& value);
  bool plmnIdIsSet() const;
  void unsetPlmnId();
  /// <summary>
  ///
  /// </summary>
  NotifCondition getNotifCondition() const;
  void setNotifCondition(NotifCondition const& value);
  bool notifConditionIsSet() const;
  void unsetNotifCondition();
  /// <summary>
  ///
  /// </summary>
  std::string getReqNfType() const;
  void setReqNfType(std::string const& value);
  bool reqNfTypeIsSet() const;
  void unsetReqNfType();
  /// <summary>
  ///
  /// </summary>
  std::string getReqNfFqdn() const;
  void setReqNfFqdn(std::string const& value);
  bool reqNfFqdnIsSet() const;
  void unsetReqNfFqdn();
  /// <summary>
  ///
  /// </summary>
  std::vector<Snssai>& getReqSnssais();
  void setReqSnssais(std::vector<Snssai> const& value);
  bool reqSnssaisIsSet() const;
  void unsetReqSnssais();

  friend void to_json(nlohmann::json& j, const SubscriptionData& o);
  friend void from_json(const nlohmann::json& j, SubscriptionData& o);

 protected:
  std::string m_NfStatusNotificationUri;

  std::string m_ReqNfInstanceId;
  bool m_ReqNfInstanceIdIsSet;
  // OneOfNfInstanceIdCondNfTypeCondServiceNameCondAmfCondGuamiListCondNetworkSliceCondNfGroupCond
  // m_SubscrCond;
  nlohmann::json m_SubscrCond;
  bool m_SubscrCondIsSet;
  std::string m_SubscriptionId;

  std::string m_ValidityTime;
  bool m_ValidityTimeIsSet;
  std::vector<std::string> m_ReqNotifEvents;
  bool m_ReqNotifEventsIsSet;
  PlmnId m_PlmnId;
  bool m_PlmnIdIsSet;
  NotifCondition m_NotifCondition;
  bool m_NotifConditionIsSet;
  std::string m_ReqNfType;
  bool m_ReqNfTypeIsSet;
  std::string m_ReqNfFqdn;
  bool m_ReqNfFqdnIsSet;
  std::vector<Snssai> m_ReqSnssais;
  bool m_ReqSnssaisIsSet;
};

}  // namespace model
}  // namespace nrf
}  // namespace oai

#endif /* SubscriptionData_H_ */
