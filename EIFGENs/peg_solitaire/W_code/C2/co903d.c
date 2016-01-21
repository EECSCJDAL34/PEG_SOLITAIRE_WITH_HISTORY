/*
 * Class COMMAND_MOVE_UP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_903 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_903 [] = {0xFF11,236,0xFF12,902,0xFFFF};
static EIF_TYPE_INDEX gen_type2_903 [] = {0xFF11,902,0xFFFF};
static EIF_TYPE_INDEX gen_type3_903 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_903 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_903 [] = {0xFF11,902,0xFFFF};
static EIF_TYPE_INDEX gen_type6_903 [] = {0xFF11,902,0xFFFF};
static EIF_TYPE_INDEX gen_type7_903 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_903 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_903 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_903 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_903 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_903 [] = {0xFF11,902,0xFFFF};
static EIF_TYPE_INDEX gen_type13_903 [] = {0xFF11,861,0xFFFF};


static struct desc_info desc_903[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_903},
	{1, (BODY_INDEX)-1, 236, gen_type1_903},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 902, gen_type2_903},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_903},
	{14, (BODY_INDEX)-1, 0, gen_type4_903},
	{15, (BODY_INDEX)-1, 902, gen_type5_903},
	{16, (BODY_INDEX)-1, 902, gen_type6_903},
	{17, (BODY_INDEX)-1, 0, gen_type7_903},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_903},
	{21, (BODY_INDEX)-1, 219, gen_type9_903},
	{22, (BODY_INDEX)-1, 219, gen_type10_903},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_903},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 902, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 902, gen_type12_903},
	{12934, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12935, 40, 862, NULL},
	{12936, 0, 861, gen_type13_903},
	{12937, 16, 205, NULL},
	{12938, 20, 205, NULL},
	{12948, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12949, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12950, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init903(void);
void Init903(void)
{
	IDSC(desc_903, 0, 902);
	IDSC(desc_903 + 1, 1, 902);
	IDSC(desc_903 + 32, 367, 902);
}


#ifdef __cplusplus
}
#endif
