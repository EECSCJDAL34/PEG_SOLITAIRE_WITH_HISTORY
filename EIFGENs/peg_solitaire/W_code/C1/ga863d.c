/*
 * Class GAME_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_863 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_863 [] = {0xFF11,923,862,0xFFFF};
static EIF_TYPE_INDEX gen_type2_863 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_863 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_863 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_863 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type6_863 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type7_863 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type8_863 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_863 [] = {0xFF11,861,0xFFFF};


static struct desc_info desc_863[] = {
	{(BODY_INDEX) 12657, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_863},
	{1, (BODY_INDEX)-1, 923, gen_type1_863},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 862, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_863},
	{14, (BODY_INDEX)-1, 0, gen_type3_863},
	{15, (BODY_INDEX)-1, 862, NULL},
	{16, (BODY_INDEX)-1, 862, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type4_863},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type5_863},
	{21, (BODY_INDEX)-1, 219, gen_type6_863},
	{22, (BODY_INDEX)-1, 219, gen_type7_863},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type8_863},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 862, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 862, NULL},
	{12656, (BODY_INDEX)-1, 861, gen_type9_863},
};

extern void Init863(void);
void Init863(void)
{
	IDSC(desc_863, 0, 862);
	IDSC(desc_863 + 1, 1, 862);
	IDSC(desc_863 + 32, 357, 862);
}


#ifdef __cplusplus
}
#endif
