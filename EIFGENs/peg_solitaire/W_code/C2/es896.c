/*
 * Code for class ES_TEST_CASE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F896_7305(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F896_7306(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F896_7307(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7308(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7309(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7310(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7311(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7312(EIF_REFERENCE);
extern EIF_TYPED_VALUE F896_7313(EIF_REFERENCE);
extern void EIF_Minit896(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ES_TEST_CASE}.set_bookmark_name */
void F896_7305 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_bookmark_name";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 1, 12916);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12916);
	RTCC(arg1, 895, l_feature_name, 1, eif_attached_type(219));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("bm_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5207, 0xF80000DB, 0); /* bookmark_name */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5207, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {ES_TEST_CASE}.set_case_name */
void F896_7306 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_case_name";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 895, Current, 0, 1, 12917);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(895, Current, 12917);
	RTCC(arg1, 895, l_feature_name, 1, eif_attached_type(219));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5206, 0xF80000DB, 0); /* case_name */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(5206, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("case_name_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5206, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {ES_TEST_CASE}.passed */
EIF_TYPED_VALUE F896_7307 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5204,Dtype(Current)));
	return r;
}


/* {ES_TEST_CASE}.contract_violated */
EIF_TYPED_VALUE F896_7308 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5205,Dtype(Current)));
	return r;
}


/* {ES_TEST_CASE}.case_name */
EIF_TYPED_VALUE F896_7309 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5206,Dtype(Current)));
	return r;
}


/* {ES_TEST_CASE}.bookmark_name */
EIF_TYPED_VALUE F896_7310 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5207,Dtype(Current)));
	return r;
}


/* {ES_TEST_CASE}.violation_tag */
EIF_TYPED_VALUE F896_7311 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5208,Dtype(Current)));
	return r;
}


/* {ES_TEST_CASE}.violation_type */
EIF_TYPED_VALUE F896_7312 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5209,Dtype(Current)));
	return r;
}


/* {ES_TEST_CASE}.case */
EIF_TYPED_VALUE F896_7313 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5210,Dtype(Current)));
	return r;
}


void EIF_Minit896 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
