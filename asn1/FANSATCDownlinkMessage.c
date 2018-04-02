/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "FANSATCDownlinkMessage.h"

static asn_TYPE_member_t asn_MBR_FANSATCDownlinkMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSATCDownlinkMessage, aTCMessageheader),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSATCMessageHeader,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aTCMessageheader"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSATCDownlinkMessage, aTCDownlinkmsgelementid),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSATCDownlinkMsgElementId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aTCDownlinkmsgelementid"
		},
	{ ATF_POINTER, 1, offsetof(struct FANSATCDownlinkMessage, aTCdownlinkmsgelementid_seqOf),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSATCDownlinkMsgElementIdSequence,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aTCdownlinkmsgelementid-seqOf"
		},
};
static const int asn_MAP_FANSATCDownlinkMessage_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_FANSATCDownlinkMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSATCDownlinkMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 1 }, /* aTCMessageheader */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -1, 0 }, /* aTCdownlinkmsgelementid-seqOf */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* dM0NULL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dM1NULL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 }, /* dM2NULL */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 1, 0, 0 }, /* dM3NULL */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 1, 0, 0 }, /* dM4NULL */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 1, 0, 0 }, /* dM5NULL */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 1, 0, 0 }, /* dM6Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 1, 0, 0 }, /* dM7AltitudeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 1, 0, 0 }, /* dM8Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 1, 0, 0 }, /* dM9Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 1, 0, 0 }, /* dM10Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 1, 0, 0 }, /* dM11PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 1, 0, 0 }, /* dM12PositionAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 1, 0, 0 }, /* dM13TimeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 1, 0, 0 }, /* dM14TimeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 1, 0, 0 }, /* dM15DistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 1, 0, 0 }, /* dM16PositionDistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 1, 0, 0 }, /* dM17TimeDistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 1, 0, 0 }, /* dM18Speed */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 1, 0, 0 }, /* dM19SpeedSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 1, 0, 0 }, /* dM20NULL */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 1, 0, 0 }, /* dM21Frequency */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 1, 0, 0 }, /* dM22Position */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 1, 0, 0 }, /* dM23ProcedureName */
    { (ASN_TAG_CLASS_CONTEXT | (24 << 2)), 1, 0, 0 }, /* dM24RouteClearance */
    { (ASN_TAG_CLASS_CONTEXT | (25 << 2)), 1, 0, 0 }, /* dM25NULL */
    { (ASN_TAG_CLASS_CONTEXT | (26 << 2)), 1, 0, 0 }, /* dM26PositionRouteClearance */
    { (ASN_TAG_CLASS_CONTEXT | (27 << 2)), 1, 0, 0 }, /* dM27DistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (28 << 2)), 1, 0, 0 }, /* dM28Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (29 << 2)), 1, 0, 0 }, /* dM29Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (30 << 2)), 1, 0, 0 }, /* dM30Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (31 << 2)), 1, 0, 0 }, /* dM31Position */
    { (ASN_TAG_CLASS_CONTEXT | (32 << 2)), 1, 0, 0 }, /* dM32Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (33 << 2)), 1, 0, 0 }, /* dM33Position */
    { (ASN_TAG_CLASS_CONTEXT | (34 << 2)), 1, 0, 0 }, /* dM34Speed */
    { (ASN_TAG_CLASS_CONTEXT | (35 << 2)), 1, 0, 0 }, /* dM35Degrees */
    { (ASN_TAG_CLASS_CONTEXT | (36 << 2)), 1, 0, 0 }, /* dM36Degrees */
    { (ASN_TAG_CLASS_CONTEXT | (37 << 2)), 1, 0, 0 }, /* dM37Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (38 << 2)), 1, 0, 0 }, /* dM38Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (39 << 2)), 1, 0, 0 }, /* dM39Speed */
    { (ASN_TAG_CLASS_CONTEXT | (40 << 2)), 1, 0, 0 }, /* dM40RouteClearance */
    { (ASN_TAG_CLASS_CONTEXT | (41 << 2)), 1, 0, 0 }, /* dM41NULL */
    { (ASN_TAG_CLASS_CONTEXT | (42 << 2)), 1, 0, 0 }, /* dM42Position */
    { (ASN_TAG_CLASS_CONTEXT | (43 << 2)), 1, 0, 0 }, /* dM43Time */
    { (ASN_TAG_CLASS_CONTEXT | (44 << 2)), 1, 0, 0 }, /* dM44Position */
    { (ASN_TAG_CLASS_CONTEXT | (45 << 2)), 1, 0, 0 }, /* dM45Position */
    { (ASN_TAG_CLASS_CONTEXT | (46 << 2)), 1, 0, 0 }, /* dM46Time */
    { (ASN_TAG_CLASS_CONTEXT | (47 << 2)), 1, 0, 0 }, /* dM47BeaconCode */
    { (ASN_TAG_CLASS_CONTEXT | (48 << 2)), 1, 0, 0 }, /* dM48PositionReport */
    { (ASN_TAG_CLASS_CONTEXT | (49 << 2)), 1, 0, 0 }, /* dM49Speed */
    { (ASN_TAG_CLASS_CONTEXT | (50 << 2)), 1, 0, 0 }, /* dM50SpeedSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (51 << 2)), 1, 0, 0 }, /* dM51NULL */
    { (ASN_TAG_CLASS_CONTEXT | (52 << 2)), 1, 0, 0 }, /* dM52NULL */
    { (ASN_TAG_CLASS_CONTEXT | (53 << 2)), 1, 0, 0 }, /* dM53NULL */
    { (ASN_TAG_CLASS_CONTEXT | (54 << 2)), 1, 0, 0 }, /* dM54Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (55 << 2)), 1, 0, 0 }, /* dM55NULL */
    { (ASN_TAG_CLASS_CONTEXT | (56 << 2)), 1, 0, 0 }, /* dM56NULL */
    { (ASN_TAG_CLASS_CONTEXT | (57 << 2)), 1, 0, 0 }, /* dM57RemainingFuelRemainingSouls */
    { (ASN_TAG_CLASS_CONTEXT | (58 << 2)), 1, 0, 0 }, /* dM58NULL */
    { (ASN_TAG_CLASS_CONTEXT | (59 << 2)), 1, 0, 0 }, /* dM59PositionRouteClearance */
    { (ASN_TAG_CLASS_CONTEXT | (60 << 2)), 1, 0, 0 }, /* dM60DistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (61 << 2)), 1, 0, 0 }, /* dM61Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (62 << 2)), 1, 0, 0 }, /* dM62ErrorInformation */
    { (ASN_TAG_CLASS_CONTEXT | (63 << 2)), 1, 0, 0 }, /* dM63NULL */
    { (ASN_TAG_CLASS_CONTEXT | (64 << 2)), 1, 0, 0 }, /* dM64ICAOfacilitydesignation */
    { (ASN_TAG_CLASS_CONTEXT | (65 << 2)), 1, 0, 0 }, /* dM65NULL */
    { (ASN_TAG_CLASS_CONTEXT | (66 << 2)), 1, 0, 0 }, /* dM66NULL */
    { (ASN_TAG_CLASS_CONTEXT | (67 << 2)), 1, 0, 0 }, /* dM67FreeText */
    { (ASN_TAG_CLASS_CONTEXT | (68 << 2)), 1, 0, 0 }, /* dM68FreeText */
    { (ASN_TAG_CLASS_CONTEXT | (69 << 2)), 1, 0, 0 }, /* dM69NULL */
    { (ASN_TAG_CLASS_CONTEXT | (70 << 2)), 1, 0, 0 }, /* dM70Degrees */
    { (ASN_TAG_CLASS_CONTEXT | (71 << 2)), 1, 0, 0 }, /* dM71Degrees */
    { (ASN_TAG_CLASS_CONTEXT | (72 << 2)), 1, 0, 0 }, /* dM72Altitude */
    { (ASN_TAG_CLASS_CONTEXT | (73 << 2)), 1, 0, 0 }, /* dM73VersionNumber */
    { (ASN_TAG_CLASS_CONTEXT | (74 << 2)), 1, 0, 0 }, /* dM74NULL */
    { (ASN_TAG_CLASS_CONTEXT | (75 << 2)), 1, 0, 0 }, /* dM75NULL */
    { (ASN_TAG_CLASS_CONTEXT | (76 << 2)), 1, 0, 0 }, /* dM76AltitudeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (77 << 2)), 1, 0, 0 }, /* dM77AltitudeAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (78 << 2)), 1, 0, 0 }, /* dM78TimeDistanceToFromPosition */
    { (ASN_TAG_CLASS_CONTEXT | (79 << 2)), 1, 0, 0 }, /* dM79ATISCode */
    { (ASN_TAG_CLASS_CONTEXT | (80 << 2)), 1, 0, 0 }, /* dM80DistanceOffsetDirection */
    { (ASN_TAG_CLASS_CONTEXT | (81 << 2)), 1, 0, 0 }, /* dM81NULL */
    { (ASN_TAG_CLASS_CONTEXT | (82 << 2)), 1, 0, 0 }, /* dM82NULL */
    { (ASN_TAG_CLASS_CONTEXT | (83 << 2)), 1, 0, 0 }, /* dM83NULL */
    { (ASN_TAG_CLASS_CONTEXT | (84 << 2)), 1, 0, 0 }, /* dM84NULL */
    { (ASN_TAG_CLASS_CONTEXT | (85 << 2)), 1, 0, 0 }, /* dM85NULL */
    { (ASN_TAG_CLASS_CONTEXT | (86 << 2)), 1, 0, 0 }, /* dM86NULL */
    { (ASN_TAG_CLASS_CONTEXT | (87 << 2)), 1, 0, 0 }, /* dM87NULL */
    { (ASN_TAG_CLASS_CONTEXT | (88 << 2)), 1, 0, 0 }, /* dM88NULL */
    { (ASN_TAG_CLASS_CONTEXT | (89 << 2)), 1, 0, 0 }, /* dM89NULL */
    { (ASN_TAG_CLASS_CONTEXT | (90 << 2)), 1, 0, 0 }, /* dM90NULL */
    { (ASN_TAG_CLASS_CONTEXT | (91 << 2)), 1, 0, 0 }, /* dM91NULL */
    { (ASN_TAG_CLASS_CONTEXT | (92 << 2)), 1, 0, 0 }, /* dM92NULL */
    { (ASN_TAG_CLASS_CONTEXT | (93 << 2)), 1, 0, 0 }, /* dM93NULL */
    { (ASN_TAG_CLASS_CONTEXT | (94 << 2)), 1, 0, 0 }, /* dM94NULL */
    { (ASN_TAG_CLASS_CONTEXT | (95 << 2)), 1, 0, 0 }, /* dM95NULL */
    { (ASN_TAG_CLASS_CONTEXT | (96 << 2)), 1, 0, 0 }, /* dM96NULL */
    { (ASN_TAG_CLASS_CONTEXT | (97 << 2)), 1, 0, 0 }, /* dM97NULL */
    { (ASN_TAG_CLASS_CONTEXT | (98 << 2)), 1, 0, 0 }, /* dM98NULL */
    { (ASN_TAG_CLASS_CONTEXT | (99 << 2)), 1, 0, 0 }, /* dM99NULL */
    { (ASN_TAG_CLASS_CONTEXT | (100 << 2)), 1, 0, 0 }, /* dM100NULL */
    { (ASN_TAG_CLASS_CONTEXT | (101 << 2)), 1, 0, 0 }, /* dM101NULL */
    { (ASN_TAG_CLASS_CONTEXT | (102 << 2)), 1, 0, 0 }, /* dM102NULL */
    { (ASN_TAG_CLASS_CONTEXT | (103 << 2)), 1, 0, 0 }, /* dM103NULL */
    { (ASN_TAG_CLASS_CONTEXT | (104 << 2)), 1, 0, 0 }, /* dM104NULL */
    { (ASN_TAG_CLASS_CONTEXT | (105 << 2)), 1, 0, 0 }, /* dM105NULL */
    { (ASN_TAG_CLASS_CONTEXT | (106 << 2)), 1, 0, 0 }, /* dM106NULL */
    { (ASN_TAG_CLASS_CONTEXT | (107 << 2)), 1, 0, 0 }, /* dM107NULL */
    { (ASN_TAG_CLASS_CONTEXT | (108 << 2)), 1, 0, 0 }, /* dM108NULL */
    { (ASN_TAG_CLASS_CONTEXT | (109 << 2)), 1, 0, 0 }, /* dM109NULL */
    { (ASN_TAG_CLASS_CONTEXT | (110 << 2)), 1, 0, 0 }, /* dM110NULL */
    { (ASN_TAG_CLASS_CONTEXT | (111 << 2)), 1, 0, 0 }, /* dM111NULL */
    { (ASN_TAG_CLASS_CONTEXT | (112 << 2)), 1, 0, 0 }, /* dM112NULL */
    { (ASN_TAG_CLASS_CONTEXT | (113 << 2)), 1, 0, 0 }, /* dM113NULL */
    { (ASN_TAG_CLASS_CONTEXT | (114 << 2)), 1, 0, 0 }, /* dM114NULL */
    { (ASN_TAG_CLASS_CONTEXT | (115 << 2)), 1, 0, 0 }, /* dM115NULL */
    { (ASN_TAG_CLASS_CONTEXT | (116 << 2)), 1, 0, 0 }, /* dM116NULL */
    { (ASN_TAG_CLASS_CONTEXT | (117 << 2)), 1, 0, 0 }, /* dM117NULL */
    { (ASN_TAG_CLASS_CONTEXT | (118 << 2)), 1, 0, 0 }, /* dM118NULL */
    { (ASN_TAG_CLASS_CONTEXT | (119 << 2)), 1, 0, 0 }, /* dM119NULL */
    { (ASN_TAG_CLASS_CONTEXT | (120 << 2)), 1, 0, 0 }, /* dM120NULL */
    { (ASN_TAG_CLASS_CONTEXT | (121 << 2)), 1, 0, 0 }, /* dM121NULL */
    { (ASN_TAG_CLASS_CONTEXT | (122 << 2)), 1, 0, 0 }, /* dM122NULL */
    { (ASN_TAG_CLASS_CONTEXT | (123 << 2)), 1, 0, 0 }, /* dM123NULL */
    { (ASN_TAG_CLASS_CONTEXT | (124 << 2)), 1, 0, 0 }, /* dM124NULL */
    { (ASN_TAG_CLASS_CONTEXT | (125 << 2)), 1, 0, 0 }, /* dM125NULL */
    { (ASN_TAG_CLASS_CONTEXT | (126 << 2)), 1, 0, 0 }, /* dM126NULL */
    { (ASN_TAG_CLASS_CONTEXT | (127 << 2)), 1, 0, 0 }, /* dM127NULL */
    { (ASN_TAG_CLASS_CONTEXT | (128 << 2)), 1, 0, 0 } /* dM128NULL */
};
static asn_SEQUENCE_specifics_t asn_SPC_FANSATCDownlinkMessage_specs_1 = {
	sizeof(struct FANSATCDownlinkMessage),
	offsetof(struct FANSATCDownlinkMessage, _asn_ctx),
	asn_MAP_FANSATCDownlinkMessage_tag2el_1,
	131,	/* Count of tags in the map */
	asn_MAP_FANSATCDownlinkMessage_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FANSATCDownlinkMessage = {
	"FANSATCDownlinkMessage",
	"FANSATCDownlinkMessage",
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
	asn_DEF_FANSATCDownlinkMessage_tags_1,
	sizeof(asn_DEF_FANSATCDownlinkMessage_tags_1)
		/sizeof(asn_DEF_FANSATCDownlinkMessage_tags_1[0]), /* 1 */
	asn_DEF_FANSATCDownlinkMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSATCDownlinkMessage_tags_1)
		/sizeof(asn_DEF_FANSATCDownlinkMessage_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_FANSATCDownlinkMessage_1,
	3,	/* Elements count */
	&asn_SPC_FANSATCDownlinkMessage_specs_1	/* Additional specs */
};

