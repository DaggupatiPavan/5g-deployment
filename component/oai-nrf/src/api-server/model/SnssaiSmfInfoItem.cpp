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

#include "SnssaiSmfInfoItem.h"

namespace oai {
namespace nrf {
namespace model {

SnssaiSmfInfoItem::SnssaiSmfInfoItem() {}

SnssaiSmfInfoItem::~SnssaiSmfInfoItem() {}

void SnssaiSmfInfoItem::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SnssaiSmfInfoItem& o) {
  j                   = nlohmann::json();
  j["sNssai"]         = o.m_SNssai;
  j["dnnSmfInfoList"] = o.m_DnnSmfInfoList;
}

void from_json(const nlohmann::json& j, SnssaiSmfInfoItem& o) {
  j.at("sNssai").get_to(o.m_SNssai);
  j.at("dnnSmfInfoList").get_to(o.m_DnnSmfInfoList);
}

Snssai SnssaiSmfInfoItem::getSNssai() const {
  return m_SNssai;
}
void SnssaiSmfInfoItem::setSNssai(Snssai const& value) {
  m_SNssai = value;
}
std::vector<DnnSmfInfoItem>& SnssaiSmfInfoItem::getDnnSmfInfoList() {
  return m_DnnSmfInfoList;
}
void SnssaiSmfInfoItem::setDnnSmfInfoList(
    std::vector<DnnSmfInfoItem> const& value) {
  m_DnnSmfInfoList = value;
}

}  // namespace model
}  // namespace nrf
}  // namespace oai