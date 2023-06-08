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

#include "SuggestedPacketNumDl.h"

namespace oai::udr::model {

SuggestedPacketNumDl::SuggestedPacketNumDl() {
  m_SuggestedPacketNumDl = 0;
  m_ValidityTime         = "";
  m_ValidityTimeIsSet    = false;
}

SuggestedPacketNumDl::~SuggestedPacketNumDl() {}

void SuggestedPacketNumDl::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SuggestedPacketNumDl& o) {
  j                         = nlohmann::json();
  j["suggestedPacketNumDl"] = o.m_SuggestedPacketNumDl;
  if (o.validityTimeIsSet()) j["validityTime"] = o.m_ValidityTime;
}

void from_json(const nlohmann::json& j, SuggestedPacketNumDl& o) {
  j.at("suggestedPacketNumDl").get_to(o.m_SuggestedPacketNumDl);
  if (j.find("validityTime") != j.end()) {
    j.at("validityTime").get_to(o.m_ValidityTime);
    o.m_ValidityTimeIsSet = true;
  }
}

int32_t SuggestedPacketNumDl::getSuggestedPacketNumDl() const {
  return m_SuggestedPacketNumDl;
}
void SuggestedPacketNumDl::setSuggestedPacketNumDl(int32_t const value) {
  m_SuggestedPacketNumDl = value;
}
std::string SuggestedPacketNumDl::getValidityTime() const {
  return m_ValidityTime;
}
void SuggestedPacketNumDl::setValidityTime(std::string const& value) {
  m_ValidityTime      = value;
  m_ValidityTimeIsSet = true;
}
bool SuggestedPacketNumDl::validityTimeIsSet() const {
  return m_ValidityTimeIsSet;
}
void SuggestedPacketNumDl::unsetValidityTime() {
  m_ValidityTimeIsSet = false;
}

}  // namespace oai::udr::model