/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameGeneratorItemTutorial$$OnGeneratorItemClicked
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__OnGeneratorItemClicked (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial_o* __this, int32_t generatedItemSetId, int32_t generatedItemLevel, int32_t generatorCellId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial.MergeMiniGameGeneratorItemTutorial$$OnGeneratorItemClicked
   void 
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__OnGeneratorItemClicked
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial_o*
   __this, int32_t generatedItemSetId, int32_t generatedItemLevel, int32_t generatorCellId, const
   MethodInfo* method); */

long Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__OnGeneratorItemClicked_3fb4b18
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c39078 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576d128);
    FUN_012d0dc8(PTR_DAT_057c39a8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05815900);
    FUN_012d0dc8(PTR_DAT_057fd128);
    FUN_012d0dc8(PTR_DAT_057dad70);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057df148);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    FUN_012d0dc8(PTR_DAT_057d4590);
    bRam0000000005c39078 = 1;
  }
  puVar2 = PTR_DAT_057dad70;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576d128);
    puVar1 = PTR_DAT_057df148;
    if (lVar4 == 0) goto LAB_040b4d6c;
    System_Action_int__int__int____ctor_1c4e288(lVar4,param_1,*(undefined8 *)PTR_DAT_05815900,0);
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int__int__int___Unsubscribe_333ef18
              (lVar3,lVar4,*(undefined8 *)puVar1);
  }
  if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_057c39a8), lVar3 != 0)) {
    Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GeneratorItemTutorialCompleted_219b64c
              (lVar3,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      UnityEngine_Animation__Stop_1f79ea8
                (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_057d4590,0);
      puVar7 = (undefined8 *)(param_1 + 0x70);
      Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameGeneratorItemTutorial__ResetCell_3fb4d74
                (param_1,*puVar7);
      *puVar7 = 0;
      FUN_012d0d74(puVar7,0);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar3 != 0)) {
        uVar6 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar6) {
          uVar8 = 0;
          do {
            if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef8();
            }
            lVar4 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
            if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0)) goto LAB_040b4d6c;
            Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00(lVar4,param_1,0);
            uVar6 = *(uint *)(lVar3 + 0x18);
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar6);
        }
        puVar1 = PTR_DAT_057606c8;
        lVar3 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_Tutorial_MergeMiniGameTutorialBase__PlayFingerFadeOut_3fb2558
                          (param_1);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0578afb0;
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057fd128,0);
          uVar5 = *(undefined8 *)puVar1;
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
            *(long *)(lVar3 + 0x80) = lVar4;
            FUN_012d0d74((long *)(lVar3 + 0x80),lVar4,uVar5);
          }
          return lVar3;
        }
      }
    }
  }
LAB_040b4d6c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

