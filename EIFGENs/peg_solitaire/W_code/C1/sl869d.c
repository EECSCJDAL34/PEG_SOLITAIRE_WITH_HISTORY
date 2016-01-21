/*
 * Class SLOT_STATUS_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_869 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_869 [] = {0xFF11,919,868,0xFFFF};
static EIF_TYPE_INDEX gen_type2_869 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_869 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_869 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_869 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type6_869 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type7_869 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type8_869 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_869 [] = {0xFF11,886,0xFFFF};
static EIF_TYPE_INDEX gen_type10_869 [] = {0xFF11,889,0xFFFF};
static EIF_TYPE_INDEX gen_type11_869 [] = {0xFF11,888,0xFFFF};


static struct desc_info desc_869[] = {
	{(BODY_INDEX) 12702, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_869},
	{1, (BODY_INDEX)-1, 919, gen_type1_869},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 868, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_869},
	{14, (BODY_INDEX)-1, 0, gen_type3_869},
	{15, (BODY_INDEX)-1, 868, NULL},
	{16, (BODY_INDEX)-1, 868, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type4_869},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type5_869},
	{21, (BODY_INDEX)-1, 219, gen_type6_869},
	{22, (BODY_INDEX)-1, 219, gen_type7_869},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type8_869},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 868, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 868, NULL},
	{12699, (BODY_INDEX)-1, 886, gen_type9_869},
	{12700, (BODY_INDEX)-1, 889, gen_type10_869},
	{12701, (BODY_INDEX)-1, 888, gen_type11_869},
};

extern void Init869(void);
void Init869(void)
{
	IDSC(desc_869, 0, 868);
	IDSC(desc_869 + 1, 1, 868);
	IDSC(desc_869 + 32, 345, 868);
}


#ifdef __cplusplus
}
#endif
