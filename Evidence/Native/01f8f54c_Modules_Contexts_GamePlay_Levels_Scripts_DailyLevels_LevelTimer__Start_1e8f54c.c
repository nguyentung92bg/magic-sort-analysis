/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.LevelTimer$$Start
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__Start (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer_o* __this, int32_t duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.LevelTimer$$Start
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__Start
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer_o* __this, int32_t duration,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__Start_1e8f54c
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c2812a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b4e8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05811e40);
    bRam0000000005c2812a = 1;
  }
  puVar2 = PTR_DAT_0580b4e8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int___Invoke_333cfd8
              (lVar3,param_2,*(undefined8 *)PTR_DAT_05811e40);
    *(undefined4 *)(param_1 + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    if (*(char *)(param_1 + 0x1d) == '\0') {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_01f8f614;
      Modules_Infrastructure_DI_CustomUpdater__AddSecondUpdate_3d2db24
                (*(long *)(param_1 + 0x10),param_1,0);
    }
    *(undefined1 *)(param_1 + 0x1d) = 1;
    return;
  }
LAB_01f8f614:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

