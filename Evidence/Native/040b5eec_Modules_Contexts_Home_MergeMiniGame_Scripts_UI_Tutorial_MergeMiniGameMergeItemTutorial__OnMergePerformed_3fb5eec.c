/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$OnMergePerformed
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__OnMergePerformed (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameMergeItemTutorial$$OnMergePerformed
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__OnMergePerformed
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__OnMergePerformed_3fb5eec
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar2 = PTR_DAT_057b8520;
  if ((bRam0000000005c39080 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057c39a8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057973b0);
    FUN_012d0dc8(PTR_DAT_05812470);
    FUN_012d0dc8(PTR_DAT_057611b0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    bRam0000000005c39080 = 1;
  }
  puVar3 = PTR_DAT_057611b0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  if (lVar4 != 0) {
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0578b048);
    if (lVar5 == 0) goto LAB_040b6168;
    System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057973b0,0);
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
  }
  if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar4 != 0)) &&
     (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar4,*(undefined8 *)PTR_DAT_057c39a8), lVar4 != 0)) {
    Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__EventStartTutorialCompleted_219b5e0
              (lVar4,0);
    DG_Tweening_ShortcutExtensions__DOKill_1eeb1dc(*(undefined8 *)(param_1 + 0x30),0,0);
    puVar7 = (undefined8 *)(param_1 + 0x70);
    Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__ResetCell_3fb5768
              (param_1,*puVar7);
    puVar9 = (undefined8 *)(param_1 + 0x78);
    Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameMergeItemTutorial__ResetCell_3fb5768
              (param_1,*puVar9);
    *puVar7 = 0;
    FUN_012d0d74(puVar7,0);
    *puVar9 = 0;
    FUN_012d0d74(puVar9,0);
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar4 != 0)) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
          lVar5 = *(long *)(lVar4 + (long)(int)uVar8 * 8 + 0x20);
          if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x60), lVar5 == 0)) goto LAB_040b6168;
          Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00(lVar5,param_1,0);
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      puVar2 = PTR_DAT_057606c8;
      if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      DG_Tweening_DOTween__Kill_1eda9a4(param_1,0,0);
      lVar4 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameTutorialBase__PlayFingerFadeOut_3fb2558
                        (param_1);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_0578afb0;
      if (lVar5 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_1,*(undefined8 *)PTR_DAT_05812470,0);
        uVar6 = *(undefined8 *)puVar2;
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
          *(long *)(lVar4 + 0x80) = lVar5;
          FUN_012d0d74((long *)(lVar4 + 0x80),lVar5,uVar6);
        }
        return lVar4;
      }
    }
  }
LAB_040b6168:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

