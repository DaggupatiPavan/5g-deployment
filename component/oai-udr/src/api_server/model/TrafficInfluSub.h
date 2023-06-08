/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * TrafficInfluSub.h
 *
 *
 */

#ifndef TrafficInfluSub_H_
#define TrafficInfluSub_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "Snssai.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class TrafficInfluSub {
 public:
  TrafficInfluSub();
  virtual ~TrafficInfluSub();

  void validate();

  /////////////////////////////////////////////
  /// TrafficInfluSub members

  /// <summary>
  /// Each element identifies a DNN.
  /// </summary>
  std::vector<std::string>& getDnns();
  void setDnns(std::vector<std::string> const& value);
  bool dnnsIsSet() const;
  void unsetDnns();
  /// <summary>
  /// Each element identifies a slice.
  /// </summary>
  std::vector<Snssai>& getSnssais();
  void setSnssais(std::vector<Snssai> const& value);
  bool snssaisIsSet() const;
  void unsetSnssais();
  /// <summary>
  /// Each element identifies a group of users.
  /// </summary>
  std::vector<std::string>& getInternalGroupIds();
  void setInternalGroupIds(std::vector<std::string> const& value);
  bool internalGroupIdsIsSet() const;
  void unsetInternalGroupIds();
  /// <summary>
  /// Each element identifies the user.
  /// </summary>
  std::vector<std::string>& getSupis();
  void setSupis(std::vector<std::string> const& value);
  bool supisIsSet() const;
  void unsetSupis();
  /// <summary>
  ///
  /// </summary>
  std::string getNotificationUri() const;
  void setNotificationUri(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getExpiry() const;
  void setExpiry(std::string const& value);
  bool expiryIsSet() const;
  void unsetExpiry();
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();

  friend void to_json(nlohmann::json& j, const TrafficInfluSub& o);
  friend void from_json(const nlohmann::json& j, TrafficInfluSub& o);

 protected:
  std::vector<std::string> m_Dnns;
  bool m_DnnsIsSet;
  std::vector<Snssai> m_Snssais;
  bool m_SnssaisIsSet;
  std::vector<std::string> m_InternalGroupIds;
  bool m_InternalGroupIdsIsSet;
  std::vector<std::string> m_Supis;
  bool m_SupisIsSet;
  std::string m_NotificationUri;

  std::string m_Expiry;
  bool m_ExpiryIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

}  // namespace oai::udr::model

#endif /* TrafficInfluSub_H_ */
