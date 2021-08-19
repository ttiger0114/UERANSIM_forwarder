/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.4.0/36413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "S1AP_SourceNodeID-Extension.h"

/*
 * This type is implemented using S1AP_ProtocolIE_SingleContainer_7841P22,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_S1AP_SourceNodeID_Extension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_SourceNodeID_Extension = {
	"SourceNodeID-Extension",
	"SourceNodeID-Extension",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_SourceNodeID_Extension_tags_1,
	sizeof(asn_DEF_S1AP_SourceNodeID_Extension_tags_1)
		/sizeof(asn_DEF_S1AP_SourceNodeID_Extension_tags_1[0]), /* 1 */
	asn_DEF_S1AP_SourceNodeID_Extension_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_SourceNodeID_Extension_tags_1)
		/sizeof(asn_DEF_S1AP_SourceNodeID_Extension_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1AP_SourceNodeID_ExtensionIE_89,
	3,	/* Elements count */
	&asn_SPC_S1AP_SourceNodeID_ExtensionIE_specs_89	/* Additional specs */
};

