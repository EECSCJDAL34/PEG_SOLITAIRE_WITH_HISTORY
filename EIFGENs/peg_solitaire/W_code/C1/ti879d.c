/*
 * Class TIME_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_879 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_879 [] = {0xFF11,236,0xFF12,878,0xFFFF};
static EIF_TYPE_INDEX gen_type2_879 [] = {0xFF11,878,0xFFFF};
static EIF_TYPE_INDEX gen_type3_879 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_879 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_879 [] = {0xFF11,878,0xFFFF};
static EIF_TYPE_INDEX gen_type6_879 [] = {0xFF11,878,0xFFFF};
static EIF_TYPE_INDEX gen_type7_879 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_879 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_879 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_879 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_879 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_879 [] = {0xFF11,878,0xFFFF};
static EIF_TYPE_INDEX gen_type13_879 [] = {0xFF11,872,0xFFFF};
static EIF_TYPE_INDEX gen_type14_879 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_879 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_879[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_879},
	{1, (BODY_INDEX)-1, 236, gen_type1_879},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 878, gen_type2_879},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_879},
	{14, (BODY_INDEX)-1, 0, gen_type4_879},
	{15, (BODY_INDEX)-1, 878, gen_type5_879},
	{16, (BODY_INDEX)-1, 878, gen_type6_879},
	{17, (BODY_INDEX)-1, 0, gen_type7_879},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_879},
	{21, (BODY_INDEX)-1, 219, gen_type9_879},
	{22, (BODY_INDEX)-1, 219, gen_type10_879},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_879},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 878, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 878, gen_type12_879},
	{12795, (BODY_INDEX)-1, 205, NULL},
	{12796, (BODY_INDEX)-1, 205, NULL},
	{12797, (BODY_INDEX)-1, 872, gen_type13_879},
	{12798, (BODY_INDEX)-1, 219, gen_type14_879},
	{12799, (BODY_INDEX)-1, 205, NULL},
	{12800, (BODY_INDEX)-1, 205, NULL},
	{12801, (BODY_INDEX)-1, 205, NULL},
	{12802, (BODY_INDEX)-1, 205, NULL},
	{12803, (BODY_INDEX)-1, 205, NULL},
	{12804, (BODY_INDEX)-1, 219, gen_type15_879},
};

extern void Init879(void);
void Init879(void)
{
	IDSC(desc_879, 0, 878);
	IDSC(desc_879 + 1, 1, 878);
	IDSC(desc_879 + 32, 395, 878);
	IDSC(desc_879 + 36, 392, 878);
}


#ifdef __cplusplus
}
#endif
