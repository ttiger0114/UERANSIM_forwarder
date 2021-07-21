/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_FeatureSetUplink_H_
#define	_ASN_RRC_FeatureSetUplink_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "ASN_RRC_FreqSeparationClass.h"
#include "ASN_RRC_FeatureSetUplinkPerCC-Id.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_FeatureSetUplink__scalingFactor {
	ASN_RRC_FeatureSetUplink__scalingFactor_f0p4	= 0,
	ASN_RRC_FeatureSetUplink__scalingFactor_f0p75	= 1,
	ASN_RRC_FeatureSetUplink__scalingFactor_f0p8	= 2
} e_ASN_RRC_FeatureSetUplink__scalingFactor;
typedef enum ASN_RRC_FeatureSetUplink__crossCarrierScheduling_OtherSCS {
	ASN_RRC_FeatureSetUplink__crossCarrierScheduling_OtherSCS_supported	= 0
} e_ASN_RRC_FeatureSetUplink__crossCarrierScheduling_OtherSCS;
typedef enum ASN_RRC_FeatureSetUplink__searchSpaceSharingCA_UL {
	ASN_RRC_FeatureSetUplink__searchSpaceSharingCA_UL_supported	= 0
} e_ASN_RRC_FeatureSetUplink__searchSpaceSharingCA_UL;
typedef enum ASN_RRC_FeatureSetUplink__twoPUCCH_Group {
	ASN_RRC_FeatureSetUplink__twoPUCCH_Group_supported	= 0
} e_ASN_RRC_FeatureSetUplink__twoPUCCH_Group;
typedef enum ASN_RRC_FeatureSetUplink__dynamicSwitchSUL {
	ASN_RRC_FeatureSetUplink__dynamicSwitchSUL_supported	= 0
} e_ASN_RRC_FeatureSetUplink__dynamicSwitchSUL;
typedef enum ASN_RRC_FeatureSetUplink__simultaneousTxSUL_NonSUL {
	ASN_RRC_FeatureSetUplink__simultaneousTxSUL_NonSUL_supported	= 0
} e_ASN_RRC_FeatureSetUplink__simultaneousTxSUL_NonSUL;
typedef enum ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz {
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz_upto2	= 0,
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz_upto4	= 1,
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz_upto7	= 2
} e_ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_15kHz;
typedef enum ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz {
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz_upto2	= 0,
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz_upto4	= 1,
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz_upto7	= 2
} e_ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_30kHz;
typedef enum ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz {
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz_upto2	= 0,
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz_upto4	= 1,
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz_upto7	= 2
} e_ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_60kHz;
typedef enum ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz {
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz_upto2	= 0,
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz_upto4	= 1,
	ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz_upto7	= 2
} e_ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot__scs_120kHz;

/* Forward declarations */
struct ASN_RRC_DummyI;
struct ASN_RRC_SRS_Resources;
struct ASN_RRC_DummyF;

/* ASN_RRC_FeatureSetUplink */
typedef struct ASN_RRC_FeatureSetUplink {
	struct ASN_RRC_FeatureSetUplink__featureSetListPerUplinkCC {
		A_SEQUENCE_OF(ASN_RRC_FeatureSetUplinkPerCC_Id_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} featureSetListPerUplinkCC;
	long	*scalingFactor;	/* OPTIONAL */
	long	*crossCarrierScheduling_OtherSCS;	/* OPTIONAL */
	ASN_RRC_FreqSeparationClass_t	*intraBandFreqSeparationUL;	/* OPTIONAL */
	long	*searchSpaceSharingCA_UL;	/* OPTIONAL */
	struct ASN_RRC_DummyI	*dummy1;	/* OPTIONAL */
	struct ASN_RRC_SRS_Resources	*supportedSRS_Resources;	/* OPTIONAL */
	long	*twoPUCCH_Group;	/* OPTIONAL */
	long	*dynamicSwitchSUL;	/* OPTIONAL */
	long	*simultaneousTxSUL_NonSUL;	/* OPTIONAL */
	struct ASN_RRC_FeatureSetUplink__pusch_ProcessingType1_DifferentTB_PerSlot {
		long	*scs_15kHz;	/* OPTIONAL */
		long	*scs_30kHz;	/* OPTIONAL */
		long	*scs_60kHz;	/* OPTIONAL */
		long	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_ProcessingType1_DifferentTB_PerSlot;
	struct ASN_RRC_DummyF	*dummy2;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_FeatureSetUplink_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_scalingFactor_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_crossCarrierScheduling_OtherSCS_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_searchSpaceSharingCA_UL_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_twoPUCCH_Group_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_dynamicSwitchSUL_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_simultaneousTxSUL_NonSUL_19;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_scs_15kHz_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_scs_30kHz_26;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_scs_60kHz_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_scs_120kHz_34;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_FeatureSetUplink;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_FeatureSetUplink_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_FeatureSetUplink_1[12];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_FeatureSetUplink_H_ */
#include <asn_internal.h>