/*
 * Class reference GAME_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_864 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_864 [] = {0xFF11,236,863,0xFFFF};
static EIF_TYPE_INDEX gen_type2_864 [] = {0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type3_864 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_864 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_864 [] = {0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type6_864 [] = {0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type7_864 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_864 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_864 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_864 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_864 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_864 [] = {0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type13_864 [] = {0xFF11,863,0xFFFF};
static EIF_TYPE_INDEX gen_type14_864 [] = {0xFF11,861,0xFFFF};


static struct desc_info desc_864[] = {
	{(BODY_INDEX) 12659, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_864},
	{1, (BODY_INDEX)-1, 236, gen_type1_864},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 863, gen_type2_864},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_864},
	{14, (BODY_INDEX)-1, 0, gen_type4_864},
	{15, (BODY_INDEX)-1, 863, gen_type5_864},
	{16, (BODY_INDEX)-1, 863, gen_type6_864},
	{17, (BODY_INDEX)-1, 0, gen_type7_864},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_864},
	{21, (BODY_INDEX)-1, 219, gen_type9_864},
	{22, (BODY_INDEX)-1, 219, gen_type10_864},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_864},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 863, gen_type12_864},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 863, gen_type13_864},
	{12658, (BODY_INDEX)-1, 861, gen_type14_864},
};

extern void Init864(void);
void Init864(void)
{
	IDSC(desc_864, 0, 863);
	IDSC(desc_864 + 1, 1, 863);
	IDSC(desc_864 + 32, 357, 863);
}


#ifdef __cplusplus
}
#endif
