/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#include "Ngap_PDUSessionResourceNotifyTransfer.h"

#include "Ngap_QosFlowNotifyList.h"
#include "Ngap_QosFlowList.h"
#include "Ngap_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_Ngap_PDUSessionResourceNotifyTransfer_1[] = {
    {ATF_POINTER,
     3,
     offsetof(struct Ngap_PDUSessionResourceNotifyTransfer, qosFlowNotifyList),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_QosFlowNotifyList,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "qosFlowNotifyList"},
    {ATF_POINTER,
     2,
     offsetof(
         struct Ngap_PDUSessionResourceNotifyTransfer, qosFlowReleasedList),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_QosFlowList,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "qosFlowReleasedList"},
    {ATF_POINTER,
     1,
     offsetof(struct Ngap_PDUSessionResourceNotifyTransfer, iE_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ProtocolExtensionContainer_175P105,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "iE-Extensions"},
};
static const int asn_MAP_Ngap_PDUSessionResourceNotifyTransfer_oms_1[] = {0, 1,
                                                                          2};
static const ber_tlv_tag_t
    asn_DEF_Ngap_PDUSessionResourceNotifyTransfer_tags_1[] = {
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static const asn_TYPE_tag2member_t
    asn_MAP_Ngap_PDUSessionResourceNotifyTransfer_tag2el_1[] = {
        {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* qosFlowNotifyList */
        {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* qosFlowReleasedList */
        {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}  /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t
    asn_SPC_Ngap_PDUSessionResourceNotifyTransfer_specs_1 = {
        sizeof(struct Ngap_PDUSessionResourceNotifyTransfer),
        offsetof(struct Ngap_PDUSessionResourceNotifyTransfer, _asn_ctx),
        asn_MAP_Ngap_PDUSessionResourceNotifyTransfer_tag2el_1,
        3, /* Count of tags in the map */
        asn_MAP_Ngap_PDUSessionResourceNotifyTransfer_oms_1, /* Optional members
                                                              */
        3,
        0, /* Root/Additions */
        3, /* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_PDUSessionResourceNotifyTransfer = {
    "PDUSessionResourceNotifyTransfer",
    "PDUSessionResourceNotifyTransfer",
    &asn_OP_SEQUENCE,
    asn_DEF_Ngap_PDUSessionResourceNotifyTransfer_tags_1,
    sizeof(asn_DEF_Ngap_PDUSessionResourceNotifyTransfer_tags_1) /
        sizeof(asn_DEF_Ngap_PDUSessionResourceNotifyTransfer_tags_1[0]), /* 1 */
    asn_DEF_Ngap_PDUSessionResourceNotifyTransfer_tags_1, /* Same as above */
    sizeof(asn_DEF_Ngap_PDUSessionResourceNotifyTransfer_tags_1) /
        sizeof(asn_DEF_Ngap_PDUSessionResourceNotifyTransfer_tags_1[0]), /* 1 */
    {0, 0, SEQUENCE_constraint},
    asn_MBR_Ngap_PDUSessionResourceNotifyTransfer_1,
    3,                                                     /* Elements count */
    &asn_SPC_Ngap_PDUSessionResourceNotifyTransfer_specs_1 /* Additional specs
                                                            */
};