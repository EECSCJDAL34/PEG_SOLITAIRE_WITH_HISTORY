/*
 * Class BOARD
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_866 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_866 [] = {0xFF11,236,0xFF12,865,0xFFFF};
static EIF_TYPE_INDEX gen_type2_866 [] = {0xFF11,865,0xFFFF};
static EIF_TYPE_INDEX gen_type3_866 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_866 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_866 [] = {0xFF11,865,0xFFFF};
static EIF_TYPE_INDEX gen_type6_866 [] = {0xFF11,865,0xFFFF};
static EIF_TYPE_INDEX gen_type7_866 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_866 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_866 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_866 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_866 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_866 [] = {0xFF11,865,0xFFFF};
static EIF_TYPE_INDEX gen_type13_866 [] = {0xFF11,886,0xFFFF};
static EIF_TYPE_INDEX gen_type14_866 [] = {0xFF11,889,0xFFFF};
static EIF_TYPE_INDEX gen_type15_866 [] = {0xFF11,888,0xFFFF};
static EIF_TYPE_INDEX gen_type16_866 [] = {0xFF11,885,0xFFFF};
static EIF_TYPE_INDEX gen_type17_866 [] = {0xFF11,922,0xFF11,885,0xFFFF};


static struct desc_info desc_866[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_866},
	{1, (BODY_INDEX)-1, 236, gen_type1_866},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{12683, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 865, gen_type2_866},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_866},
	{14, (BODY_INDEX)-1, 0, gen_type4_866},
	{15, (BODY_INDEX)-1, 865, gen_type5_866},
	{16, (BODY_INDEX)-1, 865, gen_type6_866},
	{17, (BODY_INDEX)-1, 0, gen_type7_866},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_866},
	{12684, (BODY_INDEX)-1, 219, gen_type9_866},
	{22, (BODY_INDEX)-1, 219, gen_type10_866},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_866},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 865, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 865, gen_type12_866},
	{12688, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12689, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12690, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12691, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12692, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12693, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12694, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12670, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12671, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12672, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12673, (BODY_INDEX)-1, 190, NULL},
	{12674, (BODY_INDEX)-1, 886, gen_type13_866},
	{12675, (BODY_INDEX)-1, 889, gen_type14_866},
	{12676, (BODY_INDEX)-1, 888, gen_type15_866},
	{12677, (BODY_INDEX)-1, 205, NULL},
	{12678, (BODY_INDEX)-1, 205, NULL},
	{12679, (BODY_INDEX)-1, 190, NULL},
	{12680, (BODY_INDEX)-1, 190, NULL},
	{12681, (BODY_INDEX)-1, 885, gen_type16_866},
	{12682, (BODY_INDEX)-1, 205, NULL},
	{12685, 40, 868, NULL},
	{12686, 56, 866, NULL},
	{12687, 0, 922, gen_type17_866},
};

extern void Init866(void);
void Init866(void)
{
	IDSC(desc_866, 0, 865);
	IDSC(desc_866 + 1, 1, 865);
	IDSC(desc_866 + 32, 347, 865);
}


#ifdef __cplusplus
}
#endif
