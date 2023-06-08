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

#include "PointUncertaintyEllipse.h"

namespace oai::udr::model {

PointUncertaintyEllipse::PointUncertaintyEllipse() {
  m_Confidence = 0;
}

PointUncertaintyEllipse::~PointUncertaintyEllipse() {}

void PointUncertaintyEllipse::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const PointUncertaintyEllipse& o) {
  j                       = nlohmann::json();
  j["shape"]              = o.m_Shape;
  j["point"]              = o.m_Point;
  j["uncertaintyEllipse"] = o.m_UncertaintyEllipse;
  j["confidence"]         = o.m_Confidence;
}

void from_json(const nlohmann::json& j, PointUncertaintyEllipse& o) {
  j.at("shape").get_to(o.m_Shape);
  j.at("point").get_to(o.m_Point);
  j.at("uncertaintyEllipse").get_to(o.m_UncertaintyEllipse);
  j.at("confidence").get_to(o.m_Confidence);
}

SupportedGADShapes PointUncertaintyEllipse::getShape() const {
  return m_Shape;
}
void PointUncertaintyEllipse::setShape(SupportedGADShapes const& value) {
  m_Shape = value;
}
GeographicalCoordinates PointUncertaintyEllipse::getPoint() const {
  return m_Point;
}
void PointUncertaintyEllipse::setPoint(GeographicalCoordinates const& value) {
  m_Point = value;
}
UncertaintyEllipse PointUncertaintyEllipse::getUncertaintyEllipse() const {
  return m_UncertaintyEllipse;
}
void PointUncertaintyEllipse::setUncertaintyEllipse(
    UncertaintyEllipse const& value) {
  m_UncertaintyEllipse = value;
}
int32_t PointUncertaintyEllipse::getConfidence() const {
  return m_Confidence;
}
void PointUncertaintyEllipse::setConfidence(int32_t const value) {
  m_Confidence = value;
}

}  // namespace oai::udr::model
