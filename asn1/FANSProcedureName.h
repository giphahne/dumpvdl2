/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSProcedureName_H_
#define	_FANSProcedureName_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSProcedureType.h"
#include "FANSProcedure.h"
#include "FANSProcedureTransition.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FANSProcedureName */
typedef struct FANSProcedureName {
	FANSProcedureType_t	 procedureType;
	FANSProcedure_t	 procedure;
	FANSProcedureTransition_t	*procedureTransition	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSProcedureName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSProcedureName;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSProcedureName_H_ */
#include <asn_internal.h>