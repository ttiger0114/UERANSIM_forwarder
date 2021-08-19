/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.4.0/38413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_TimeToTrigger_H_
#define	_NGAP_TimeToTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_TimeToTrigger {
	NGAP_TimeToTrigger_ms0	= 0,
	NGAP_TimeToTrigger_ms40	= 1,
	NGAP_TimeToTrigger_ms64	= 2,
	NGAP_TimeToTrigger_ms80	= 3,
	NGAP_TimeToTrigger_ms100	= 4,
	NGAP_TimeToTrigger_ms128	= 5,
	NGAP_TimeToTrigger_ms160	= 6,
	NGAP_TimeToTrigger_ms256	= 7,
	NGAP_TimeToTrigger_ms320	= 8,
	NGAP_TimeToTrigger_ms480	= 9,
	NGAP_TimeToTrigger_ms512	= 10,
	NGAP_TimeToTrigger_ms640	= 11,
	NGAP_TimeToTrigger_ms1024	= 12,
	NGAP_TimeToTrigger_ms1280	= 13,
	NGAP_TimeToTrigger_ms2560	= 14,
	NGAP_TimeToTrigger_ms5120	= 15
} e_NGAP_TimeToTrigger;

/* NGAP_TimeToTrigger */
typedef long	 NGAP_TimeToTrigger_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_TimeToTrigger_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_TimeToTrigger;
extern const asn_INTEGER_specifics_t asn_SPC_TimeToTrigger_specs_1;
asn_struct_free_f TimeToTrigger_free;
asn_struct_print_f TimeToTrigger_print;
asn_constr_check_f TimeToTrigger_constraint;
per_type_decoder_f TimeToTrigger_decode_aper;
per_type_encoder_f TimeToTrigger_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_TimeToTrigger_H_ */
#include <asn_internal.h>
