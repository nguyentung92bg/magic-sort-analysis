/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$Clone
MagicSort_V1_OnePlusOneOfferResponse_o* MagicSort_V1_OnePlusOneOfferResponse__Clone (MagicSort_V1_OnePlusOneOfferResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.OnePlusOneOfferResponse$$Clone
   MagicSort_V1_OnePlusOneOfferResponse_o* MagicSort_V1_OnePlusOneOfferResponse__Clone
   (MagicSort_V1_OnePlusOneOfferResponse_o* __this, const MethodInfo* method); */

long MagicSort_V1_OnePlusOneOfferResponse__Clone_38610ec(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_05795a78;
                    /* try { // try from 039610f4 to 03a610ff has its CatchHandler @ 039611ac */
                    /* try { // try from 03961100 to 03a61137 has its CatchHandler @ 03960f7c */
  if ((bRam0000000005c34987 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05795a78);
    bRam0000000005c34987 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    MagicSort_V1_OnePlusOneOfferResponse___ctor_3861014(lVar2,param_1);
                    /* try { // try from 03961138 to 03a6113f has its CatchHandler @ 03961198 */
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

