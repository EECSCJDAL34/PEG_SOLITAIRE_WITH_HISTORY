/*
 * Class OCCUPIED_SLOT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_890 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_890 [] = {0xFF11,236,0xFF12,889,0xFFFF};
static EIF_TYPE_INDEX gen_type2_890 [] = {0xFF11,889,0xFFFF};
static EIF_TYPE_INDEX gen_type3_890 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_890 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_890 [] = {0xFF11,889,0xFFFF};
static EIF_TYPE_INDEX gen_type6_890 [] = {0xFF11,889,0xFFFF};
static EIF_TYPE_INDEX gen_type7_890 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_890 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_890 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_890 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_890 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_890 [] = {0xFF11,889,0xFFFF};


static struct desc_info desc_890[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_890},
	{1, (BODY_INDEX)-1, 236, gen_type1_890},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{12850, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 889, gen_type2_890},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_890},
	{14, (BODY_INDEX)-1, 0, gen_type4_890},
	{15, (BODY_INDEX)-1, 889, gen_type5_890},
	{16, (BODY_INDEX)-1, 889, gen_type6_890},
	{17, (BODY_INDEX)-1, 0, gen_type7_890},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_890},
	{12856, (BODY_INDEX)-1, 219, gen_type9_890},
	{22, (BODY_INDEX)-1, 219, gen_type10_890},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_890},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 889, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 889, gen_type12_890},
	{12855, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init890(void);
void Init890(void)
{
	IDSC(desc_890, 0, 889);
	IDSC(desc_890 + 1, 1, 889);
	IDSC(desc_890 + 32, 360, 889);
}


#ifdef __cplusplus
}
#endif
