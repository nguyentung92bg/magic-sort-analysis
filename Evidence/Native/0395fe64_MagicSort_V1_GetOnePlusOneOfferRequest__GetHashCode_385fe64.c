/* IL2CPP: MagicSort.V1.GetOnePlusOneOfferRequest$$GetHashCode
int32_t MagicSort_V1_GetOnePlusOneOfferRequest__GetHashCode (MagicSort_V1_GetOnePlusOneOfferRequest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.GetOnePlusOneOfferRequest$$GetHashCode
   int32_t MagicSort_V1_GetOnePlusOneOfferRequest__GetHashCode
   (MagicSort_V1_GetOnePlusOneOfferRequest_o* __this, const MethodInfo* method); */

uint MagicSort_V1_GetOnePlusOneOfferRequest__GetHashCode_385fe64(long param_1)

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
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}

