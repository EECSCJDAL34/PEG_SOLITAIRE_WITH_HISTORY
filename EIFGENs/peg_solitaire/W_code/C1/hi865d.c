/*
 * Class HISTORY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_865 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_865 [] = {0xFF11,236,0xFF12,864,0xFFFF};
static EIF_TYPE_INDEX gen_type2_865 [] = {0xFF11,864,0xFFFF};
static EIF_TYPE_INDEX gen_type3_865 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_865 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_865 [] = {0xFF11,864,0xFFFF};
static EIF_TYPE_INDEX gen_type6_865 [] = {0xFF11,864,0xFFFF};
static EIF_TYPE_INDEX gen_type7_865 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_865 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_865 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_865 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_865 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_865 [] = {0xFF11,864,0xFFFF};
static EIF_TYPE_INDEX gen_type13_865 [] = {0xFF11,262,0xFF11,898,0xFFFF};
static EIF_TYPE_INDEX gen_type14_865 [] = {0xFF11,898,0xFFFF};


static struct desc_info desc_865[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_865},
	{1, (BODY_INDEX)-1, 236, gen_type1_865},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 864, gen_type2_865},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_865},
	{14, (BODY_INDEX)-1, 0, gen_type4_865},
	{15, (BODY_INDEX)-1, 864, gen_type5_865},
	{16, (BODY_INDEX)-1, 864, gen_type6_865},
	{17, (BODY_INDEX)-1, 0, gen_type7_865},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_865},
	{21, (BODY_INDEX)-1, 219, gen_type9_865},
	{22, (BODY_INDEX)-1, 219, gen_type10_865},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_865},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 864, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 864, gen_type12_865},
	{12660, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12661, 0, 262, gen_type13_865},
	{12662, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12663, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12664, (BODY_INDEX)-1, 898, gen_type14_865},
	{12665, (BODY_INDEX)-1, 190, NULL},
	{12666, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12667, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12668, (BODY_INDEX)-1, 190, NULL},
	{12669, (BODY_INDEX)-1, 190, NULL},
};

extern void Init865(void);
void Init865(void)
{
	IDSC(desc_865, 0, 864);
	IDSC(desc_865 + 1, 1, 864);
	IDSC(desc_865 + 32, 351, 864);
}


#ifdef __cplusplus
}
#endif
