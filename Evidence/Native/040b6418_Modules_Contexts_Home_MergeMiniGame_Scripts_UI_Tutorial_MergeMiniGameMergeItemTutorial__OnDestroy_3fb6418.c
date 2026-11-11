/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$OnDestroy
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__OnDestroy (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01fda9f0) */
/* WARNING: Removing unreachable block (ram,0x01fdaa04) */
/* WARNING: Removing unreachable block (ram,0x01fdaa08) */
/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$OnDestroy
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__OnDestroy
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o*
   __this, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__OnDestroy_3fb6418
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x30;
  
  if ((bRam0000000005c39083 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577eb80);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05779358);
    FUN_012d0dc8(PTR_DAT_057973b0);
    FUN_012d0dc8(PTR_DAT_057dbf40);
    FUN_012d0dc8(PTR_DAT_057611b0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058119e8);
    bRam0000000005c39083 = 1;
  }
  puVar2 = PTR_DAT_057b8520;
  puVar1 = PTR_DAT_057611b0;
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_040b65d0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x68),0,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578b048);
    if (lVar5 == 0) goto LAB_040b65d0;
    System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057973b0,0);
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
  }
  puVar1 = PTR_DAT_057dbf40;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar4 != 0) {
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577eb80);
    puVar1 = PTR_DAT_058119e8;
    if (lVar5 == 0) goto LAB_040b65d0;
    System_Action_object____ctor_1647468(lVar5,param_1,*(undefined8 *)PTR_DAT_05779358,0);
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Unsubscribe_333d3e8
              (lVar4,lVar5,*(undefined8 *)puVar1);
  }
  if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if ((bRam0000000005c28433 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,0,0);
    FUN_012d0dc8(PTR_DAT_058163b8);
    bRam0000000005c28433 = 1;
  }
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = DG_Tweening_Core_TweenManager__FilteredOperation_3331d1c
                      (0,1,1,param_1,0,0,0,0,in_x7,unaff_x21,unaff_x20,unaff_x19,unaff_x30);
  }
  return uVar3;
}

