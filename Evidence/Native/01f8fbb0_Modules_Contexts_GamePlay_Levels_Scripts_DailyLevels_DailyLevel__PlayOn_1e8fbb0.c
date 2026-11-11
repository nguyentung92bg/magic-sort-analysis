/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevel$$PlayOn
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__PlayOn (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel_o* __this, System_Collections_Generic_List_PlayOnBehaviourType__o* behaviours, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevel$$PlayOn
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__PlayOn
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel_o* __this,
   System_Collections_Generic_List_PlayOnBehaviourType__o* behaviours, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__PlayOn_1e8fbb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((bRam0000000005c28126 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05778bc0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c28126 = 1;
  }
  puVar1 = PTR_DAT_0576aae0;
  lVar7 = *(long *)(param_1 + 0x60);
  if (lVar7 == 0) goto LAB_01f8fd3c;
  if (*(int *)(lVar7 + 0x18) < 1) {
    if ((((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar7 == 0)) ||
        (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar7,*(undefined8 *)PTR_DAT_057d9070), lVar7 == 0)) ||
       ((*(long *)(lVar7 + 0x20) == 0 || (*(long *)(param_1 + 0x60) == 0)))) goto LAB_01f8fd3c;
    Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__Start_1e8f54c
              (*(long *)(param_1 + 0x60),*(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x10));
    lVar7 = *(long *)(param_1 + 0x60);
    if (lVar7 == 0) goto LAB_01f8fd3c;
  }
  *(undefined1 *)(lVar7 + 0x1c) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsLevelStuck_16109c0
                      (*(long *)(param_1 + 0x10),0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(param_1 + 0x40) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar7 == 0)) goto LAB_01f8fd3c;
      Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddExtraBottle_2f6a0a0
                (0x3f000000,lVar7,0);
    }
    if ((((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) &&
        (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar7,*(undefined8 *)PTR_DAT_05805608), lVar7 != 0)) &&
       ((*(long *)(lVar7 + 0x10) != 0 &&
        (lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x60), lVar7 != 0)))) {
      uVar8 = *(undefined4 *)(lVar7 + 0x18);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
      if (lVar7 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,param_1,*(undefined8 *)PTR_DAT_05778bc0,0);
        puVar1 = PTR_DAT_057815e0;
        if ((bRam0000000005c28460 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057815e0,0,0);
          FUN_012d0dc8(PTR_DAT_057d6890);
          FUN_012d0dc8(PTR_DAT_057ca968);
          FUN_012d0dc8(PTR_DAT_057f1100);
          bRam0000000005c28460 = 1;
        }
        puVar4 = PTR_DAT_057f1100;
        puVar3 = PTR_DAT_057d6890;
        puVar2 = PTR_DAT_057ca968;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        DG_Tweening_DOTween__Sequence_1eda154();
        uVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar8);
        uVar6 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                          (uVar6,lVar7,*(undefined8 *)puVar3);
        lVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                          (uVar6,0,0,*(undefined8 *)puVar4);
        uVar6 = *(undefined8 *)puVar2;
        if (((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) &&
           (*(char *)(lVar7 + 0x100) == '\0')) {
          *(undefined1 *)(lVar7 + 0x9c) = 1;
          return;
        }
        return;
      }
    }
  }
LAB_01f8fd3c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

