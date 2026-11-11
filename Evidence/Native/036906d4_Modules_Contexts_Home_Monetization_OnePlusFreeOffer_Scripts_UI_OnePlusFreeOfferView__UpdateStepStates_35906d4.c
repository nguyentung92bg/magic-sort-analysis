/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$UpdateStepStates
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__UpdateStepStates (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferView$$UpdateStepStates
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__UpdateStepStates
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__UpdateStepStates_35906d4
               (long param_1)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c32e2c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c32e2c = 1;
  }
  puVar2 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0xa8) != 0) {
    cVar1 = *(char *)(*(long *)(param_1 + 0xa8) + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_036907f0;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),cVar1 == '\0',0);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_036907f0;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x60),cVar1 == '\0',0);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar4,1);
      return;
    }
  }
LAB_036907f0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

