/*
 * Class TIME_MEASUREMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_880 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_880 [] = {0xFF11,236,0xFF12,879,0xFFFF};
static EIF_TYPE_INDEX gen_type2_880 [] = {0xFF11,879,0xFFFF};
static EIF_TYPE_INDEX gen_type3_880 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_880 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_880 [] = {0xFF11,879,0xFFFF};
static EIF_TYPE_INDEX gen_type6_880 [] = {0xFF11,879,0xFFFF};
static EIF_TYPE_INDEX gen_type7_880 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_880 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_880 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_880 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_880 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_880 [] = {0xFF11,879,0xFFFF};
static EIF_TYPE_INDEX gen_type13_880 [] = {0xFF11,872,0xFFFF};
static EIF_TYPE_INDEX gen_type14_880 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_880 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_880[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_880},
	{1, (BODY_INDEX)-1, 236, gen_type1_880},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 879, gen_type2_880},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_880},
	{14, (BODY_INDEX)-1, 0, gen_type4_880},
	{15, (BODY_INDEX)-1, 879, gen_type5_880},
	{16, (BODY_INDEX)-1, 879, gen_type6_880},
	{17, (BODY_INDEX)-1, 0, gen_type7_880},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_880},
	{21, (BODY_INDEX)-1, 219, gen_type9_880},
	{22, (BODY_INDEX)-1, 219, gen_type10_880},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_880},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 879, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 879, gen_type12_880},
	{12795, (BODY_INDEX)-1, 205, NULL},
	{12796, (BODY_INDEX)-1, 205, NULL},
	{12797, (BODY_INDEX)-1, 872, gen_type13_880},
	{12798, (BODY_INDEX)-1, 219, gen_type14_880},
	{12799, (BODY_INDEX)-1, 205, NULL},
	{12800, (BODY_INDEX)-1, 205, NULL},
	{12801, (BODY_INDEX)-1, 205, NULL},
	{12802, (BODY_INDEX)-1, 205, NULL},
	{12803, (BODY_INDEX)-1, 205, NULL},
	{12804, (BODY_INDEX)-1, 219, gen_type15_880},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 205, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 193, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init880(void);
void Init880(void)
{
	IDSC(desc_880, 0, 879);
	IDSC(desc_880 + 1, 1, 879);
	IDSC(desc_880 + 32, 395, 879);
	IDSC(desc_880 + 36, 392, 879);
	IDSC(desc_880 + 42, 391, 879);
}


#ifdef __cplusplus
}
#endif
