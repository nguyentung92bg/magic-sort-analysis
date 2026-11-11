/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemChainPopUp$$Show
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__Show (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemChainPopUp$$Show
   void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__Show
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__Show_3fa9d18
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c39005 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c39a8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057f9b30);
    bRam0000000005c39005 = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) == 0) ||
      (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 == 0)) ||
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_057c39a8), lVar3 == 0)) goto LAB_040a9e40;
  uVar4 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetChainPopupViewModel_219a9c4
                    (lVar3,0);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  FUN_012d0d74();
  if (param_2 == (long *)0x0) {
LAB_040a9df0:
    Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__SetupProgressItems_3fa9e44
              (param_1);
    uVar5 = 1;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057f9b30 + 300);
    if (((*(byte *)(*param_2 + 300) < bVar1) ||
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_057f9b30))
       || (*(char *)((long)param_2 + 0x21) != '\0')) goto LAB_040a9df0;
    Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemChainPopUp__SetupCollectibleItems_3fa9f4c
              (param_1);
    uVar5 = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x18),uVar5,0);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar3,uVar5 ^ 1);
      return;
    }
  }
LAB_040a9e40:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

