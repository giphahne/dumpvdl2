/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CMMessageSetVersion1"
 * 	found in "atn-cm.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "LongTsap.h"

static int
memb_rDP_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_rDP_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LongTsap_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LongTsap, rDP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		memb_rDP_constraint_1,
		&asn_PER_memb_rDP_constr_2,
		0,
		"rDP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LongTsap, shortTsap),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ShortTsap,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"shortTsap"
		},
};
static const ber_tlv_tag_t asn_DEF_LongTsap_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LongTsap_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rDP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* shortTsap */
};
static asn_SEQUENCE_specifics_t asn_SPC_LongTsap_specs_1 = {
	sizeof(struct LongTsap),
	offsetof(struct LongTsap, _asn_ctx),
	asn_MAP_LongTsap_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LongTsap = {
	"LongTsap",
	"LongTsap",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LongTsap_tags_1,
	sizeof(asn_DEF_LongTsap_tags_1)
		/sizeof(asn_DEF_LongTsap_tags_1[0]), /* 1 */
	asn_DEF_LongTsap_tags_1,	/* Same as above */
	sizeof(asn_DEF_LongTsap_tags_1)
		/sizeof(asn_DEF_LongTsap_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LongTsap_1,
	2,	/* Elements count */
	&asn_SPC_LongTsap_specs_1	/* Additional specs */
};
