/* IL2CPP: MagicSort.V1.ClaimOnePlusOneOfferRequest$$GetHashCode
int32_t MagicSort_V1_ClaimOnePlusOneOfferRequest__GetHashCode (MagicSort_V1_ClaimOnePlusOneOfferRequest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.ClaimOnePlusOneOfferRequest$$GetHashCode
   int32_t MagicSort_V1_ClaimOnePlusOneOfferRequest__GetHashCode
   (MagicSort_V1_ClaimOnePlusOneOfferRequest_o* __this, const MethodInfo* method); */

uint MagicSort_V1_ClaimOnePlusOneOfferRequest__GetHashCode_386077c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lStack_18;
  
  lStack_18 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 1;
  }
  else {
    lStack_18 = *(long *)(param_1 + 0x18);
    uVar1 = System_Int64__GetHashCode_26ca870(&lStack_18,0);
    uVar1 = uVar1 ^ 1;
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    if ((int)plVar3[2] != 0) {
      uVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
      uVar1 = uVar2 ^ uVar1;
    }
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 039607e0 to 03a60867 has its CatchHandler @ 039607e0
                       catch() { ... } // from try @ 039607e0 with catch @ 039607e0
                       catch() { ... } // from try @ 03960874 with catch @ 039607e0
                       catch() { ... } // from try @ 039608c4 with catch @ 039607e0
                       catch() { ... } // from try @ 03960908 with catch @ 039607e0 */
      uVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
      uVar1 = uVar2 ^ uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

