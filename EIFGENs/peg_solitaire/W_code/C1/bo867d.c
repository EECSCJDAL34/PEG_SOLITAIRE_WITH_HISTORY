/*
 * Class BOARD_TEMPLATES_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_867 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_867 [] = {0xFF11,920,866,0xFFFF};
static EIF_TYPE_INDEX gen_type2_867 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_867 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_867 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_867 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type6_867 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type7_867 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type8_867 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_867 [] = {0xFF11,860,0xFFFF};


static struct desc_info desc_867[] = {
	{(BODY_INDEX) 12696, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_867},
	{1, (BODY_INDEX)-1, 920, gen_type1_867},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 866, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_867},
	{14, (BODY_INDEX)-1, 0, gen_type3_867},
	{15, (BODY_INDEX)-1, 866, NULL},
	{16, (BODY_INDEX)-1, 866, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type4_867},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type5_867},
	{21, (BODY_INDEX)-1, 219, gen_type6_867},
	{22, (BODY_INDEX)-1, 219, gen_type7_867},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type8_867},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 866, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 866, NULL},
	{12695, (BODY_INDEX)-1, 860, gen_type9_867},
};

extern void Init867(void);
void Init867(void)
{
	IDSC(desc_867, 0, 866);
	IDSC(desc_867 + 1, 1, 866);
	IDSC(desc_867 + 32, 346, 866);
}


#ifdef __cplusplus
}
#endif
