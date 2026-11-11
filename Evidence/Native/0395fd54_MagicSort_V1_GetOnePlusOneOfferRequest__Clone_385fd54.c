/* IL2CPP: MagicSort.V1.GetOnePlusOneOfferRequest$$Clone
MagicSort_V1_GetOnePlusOneOfferRequest_o* MagicSort_V1_GetOnePlusOneOfferRequest__Clone (MagicSort_V1_GetOnePlusOneOfferRequest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.GetOnePlusOneOfferRequest$$Clone
   MagicSort_V1_GetOnePlusOneOfferRequest_o* MagicSort_V1_GetOnePlusOneOfferRequest__Clone
   (MagicSort_V1_GetOnePlusOneOfferRequest_o* __this, const MethodInfo* method); */

long MagicSort_V1_GetOnePlusOneOfferRequest__Clone_385fd54(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_057a3ad0;
  if ((bRam0000000005c34970 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a3ad0);
    bRam0000000005c34970 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    MagicSort_V1_GetOnePlusOneOfferRequest___ctor_385fd08(lVar2,param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

