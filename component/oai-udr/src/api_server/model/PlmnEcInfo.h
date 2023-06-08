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
 * PlmnEcInfo.h
 *
 *
 */

#ifndef PlmnEcInfo_H_
#define PlmnEcInfo_H_

#include <nlohmann/json.hpp>

#include "EcRestrictionDataWb.h"
#include "PlmnId.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class PlmnEcInfo {
 public:
  PlmnEcInfo();
  virtual ~PlmnEcInfo();

  void validate();

  /////////////////////////////////////////////
  /// PlmnEcInfo members

  /// <summary>
  ///
  /// </summary>
  PlmnId getPlmnId() const;
  void setPlmnId(PlmnId const& value);
  /// <summary>
  ///
  /// </summary>
  EcRestrictionDataWb getEcRestrictionDataWb() const;
  void setEcRestrictionDataWb(EcRestrictionDataWb const& value);
  bool ecRestrictionDataWbIsSet() const;
  void unsetEcRestrictionDataWb();
  /// <summary>
  ///
  /// </summary>
  bool isEcRestrictionDataNb() const;
  void setEcRestrictionDataNb(bool const value);
  bool ecRestrictionDataNbIsSet() const;
  void unsetEcRestrictionDataNb();

  friend void to_json(nlohmann::json& j, const PlmnEcInfo& o);
  friend void from_json(const nlohmann::json& j, PlmnEcInfo& o);

 protected:
  PlmnId m_PlmnId;

  EcRestrictionDataWb m_EcRestrictionDataWb;
  bool m_EcRestrictionDataWbIsSet;
  bool m_EcRestrictionDataNb;
  bool m_EcRestrictionDataNbIsSet;
};

}  // namespace oai::udr::model

#endif /* PlmnEcInfo_H_ */
