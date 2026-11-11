/* IL2CPP: MagicSort.V1.ClaimOnePlusOneOfferRequest$$Equals
bool MagicSort_V1_ClaimOnePlusOneOfferRequest__Equals (MagicSort_V1_ClaimOnePlusOneOfferRequest_o* __this, Il2CppObject* other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MagicSort.V1.ClaimOnePlusOneOfferRequest$$Equals
   bool MagicSort_V1_ClaimOnePlusOneOfferRequest__Equals
   (MagicSort_V1_ClaimOnePlusOneOfferRequest_o* __this, Il2CppObject* other, const MethodInfo*
   method); */

ulong MagicSort_V1_ClaimOnePlusOneOfferRequest__Equals_38606a8(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  if ((bRam0000000005c3497d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05778548);
    bRam0000000005c3497d = 1;
  }
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
  }
  else if (*param_2 != *(long *)PTR_DAT_05778548) {
    param_2 = (long *)0x0;
  }
  if (param_2 != (long *)0x0) {
    if (param_2 == param_1) {
      return 1;
    }
    if ((param_1[3] == param_2[3]) &&
       (uVar1 = System_String__op_Inequality_1ecf400(param_1[4],param_2[4],0), (uVar1 & 1) == 0)) {
      plVar2 = (long *)param_1[2];
      plVar3 = (long *)param_2[2];
      if (plVar2 == plVar3) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        if ((plVar2 != (long *)0x0) && (plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x024edf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x140));
          return uVar1;
        }
      }
      return (ulong)uVar4;
    }
  }
  return 0;
}

