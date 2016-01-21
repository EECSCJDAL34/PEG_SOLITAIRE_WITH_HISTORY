/*
 * Class TIME_VALUE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_881 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_881 [] = {0xFF11,236,0xFF12,880,0xFFFF};
static EIF_TYPE_INDEX gen_type2_881 [] = {0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type3_881 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_881 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_881 [] = {0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type6_881 [] = {0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type7_881 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_881 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_881 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_881 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_881 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_881 [] = {0xFF11,880,0xFFFF};
static EIF_TYPE_INDEX gen_type13_881 [] = {0xFF11,872,0xFFFF};
static EIF_TYPE_INDEX gen_type14_881 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_881 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_881[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_881},
	{1, (BODY_INDEX)-1, 236, gen_type1_881},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 880, gen_type2_881},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_881},
	{14, (BODY_INDEX)-1, 0, gen_type4_881},
	{15, (BODY_INDEX)-1, 880, gen_type5_881},
	{16, (BODY_INDEX)-1, 880, gen_type6_881},
	{17, (BODY_INDEX)-1, 0, gen_type7_881},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_881},
	{21, (BODY_INDEX)-1, 219, gen_type9_881},
	{22, (BODY_INDEX)-1, 219, gen_type10_881},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_881},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 880, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 880, gen_type12_881},
	{12795, (BODY_INDEX)-1, 205, NULL},
	{12796, (BODY_INDEX)-1, 205, NULL},
	{12797, (BODY_INDEX)-1, 872, gen_type13_881},
	{12798, (BODY_INDEX)-1, 219, gen_type14_881},
	{12799, (BODY_INDEX)-1, 205, NULL},
	{12800, (BODY_INDEX)-1, 205, NULL},
	{12801, (BODY_INDEX)-1, 205, NULL},
	{12802, (BODY_INDEX)-1, 205, NULL},
	{12803, (BODY_INDEX)-1, 205, NULL},
	{12804, (BODY_INDEX)-1, 219, gen_type15_881},
	{12812, (BODY_INDEX)-1, 205, NULL},
	{12813, (BODY_INDEX)-1, 205, NULL},
	{12814, (BODY_INDEX)-1, 205, NULL},
	{12817, (BODY_INDEX)-1, 193, NULL},
	{12823, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12805, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12806, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12822, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12821, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12815, 8, 193, NULL},
	{12816, 0, 205, NULL},
	{12818, (BODY_INDEX)-1, 205, NULL},
	{12819, (BODY_INDEX)-1, 205, NULL},
	{12820, (BODY_INDEX)-1, 205, NULL},
	{12807, (BODY_INDEX)-1, 205, NULL},
	{12808, (BODY_INDEX)-1, 205, NULL},
	{12809, (BODY_INDEX)-1, 205, NULL},
	{12810, (BODY_INDEX)-1, 205, NULL},
	{12811, (BODY_INDEX)-1, 205, NULL},
};

extern void Init881(void);
void Init881(void)
{
	IDSC(desc_881, 0, 880);
	IDSC(desc_881 + 1, 1, 880);
	IDSC(desc_881 + 32, 395, 880);
	IDSC(desc_881 + 36, 392, 880);
	IDSC(desc_881 + 42, 391, 880);
	IDSC(desc_881 + 51, 379, 880);
}


#ifdef __cplusplus
}
#endif
