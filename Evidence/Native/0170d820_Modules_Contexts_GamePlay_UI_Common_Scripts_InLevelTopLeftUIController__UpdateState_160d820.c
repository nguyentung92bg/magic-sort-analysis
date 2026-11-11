/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTopLeftUIController$$UpdateState
void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController__UpdateState (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.InLevelTopLeftUIController$$UpdateState
   void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController__UpdateState
   (Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_Common_Scripts_InLevelTopLeftUIController__UpdateState_160d820
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24449 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c24449 = 1;
  }
  if ((((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
       (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 == 0)) ||
      (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar2,*(undefined8 *)PTR_DAT_057d9070), lVar2 == 0)) ||
     ((*(long *)(lVar2 + 0x18) == 0 ||
      (lVar2 = *(long *)(*(long *)(lVar2 + 0x18) + 0x10), lVar2 == 0)))) goto LAB_0170da54;
  if (*(char *)(lVar2 + 0x39) == '\0') {
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x28);
    FUN_012d0d74();
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0170da54;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x28),1,0);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  else {
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x30);
    FUN_012d0d74();
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0170da54;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x30),1,0);
    lVar2 = *(long *)(param_1 + 0x28);
  }
  if (lVar2 == 0) goto LAB_0170da54;
  UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_0170da54;
  uVar3 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__ShouldShowInLevelView_29706d0
                    (*(long *)(param_1 + 0x58),0);
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 0x20), lVar2 == 0)) goto LAB_0170da54;
  uVar4 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakStateService__ShouldShowInLevelStreakView_3fc020c
                    (lVar2,0);
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0x20), lVar2 == 0)) goto LAB_0170da54;
  uVar5 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakStateService__ShouldShowInLevelStreakView_32e4ba0
                    (lVar2,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0170da54;
    Modules_Contexts_GamePlay_SuperCharger_UI_InLevelSuperChargerView__Show_20e55b8
              (*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0170da54;
    Modules_Contexts_Home_BroomStreak_Scripts_UI_InLevelBroomStreakView__Hide_3fcb0f0
              (*(long *)(param_1 + 0x18),0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0170da54;
    Modules_Contexts_Home_TowerWinStreak_Scripts_UI_InLevelTowerWinStreakView__Hide_32e4e94
              (*(long *)(param_1 + 0x20),0);
    lVar2 = *(long *)(param_1 + 0x40);
    if (lVar2 == 0) goto LAB_0170da54;
    goto code_r0x0418e318;
  }
  if ((uVar4 & 1) == 0) {
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0170da54;
      Modules_Contexts_Home_TowerWinStreak_Scripts_UI_InLevelTowerWinStreakView__Show_32e4d78
                (*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0170da54;
      Modules_Contexts_Home_BroomStreak_Scripts_UI_InLevelBroomStreakView__Hide_3fcb0f0
                (*(long *)(param_1 + 0x18),0);
      goto LAB_0170d9f0;
    }
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0170da54;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),1,0);
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0170da54;
    Modules_Contexts_Home_BroomStreak_Scripts_UI_InLevelBroomStreakView__Hide_3fcb0f0
              (*(long *)(param_1 + 0x18),0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0170da54;
    Modules_Contexts_Home_TowerWinStreak_Scripts_UI_InLevelTowerWinStreakView__Hide_32e4e94
              (*(long *)(param_1 + 0x20),0);
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0170da54;
    Modules_Contexts_Home_BroomStreak_Scripts_UI_InLevelBroomStreakView__Show_3fcaeac
              (*(long *)(param_1 + 0x18),0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_0170da54;
    Modules_Contexts_Home_TowerWinStreak_Scripts_UI_InLevelTowerWinStreakView__Hide_32e4e94
              (*(long *)(param_1 + 0x20),0);
LAB_0170d9f0:
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_0170da54;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),0,0);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
code_r0x0418e318:
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar2,0);
    return;
  }
LAB_0170da54:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

