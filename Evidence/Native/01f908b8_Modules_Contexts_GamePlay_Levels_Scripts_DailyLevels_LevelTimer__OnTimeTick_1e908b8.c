/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.LevelTimer$$OnTimeTick
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__OnTimeTick (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.LevelTimer$$OnTimeTick
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__OnTimeTick
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_LevelTimer__OnTimeTick_1e908b8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c2812b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b4e8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05811e40);
    bRam0000000005c2812b = 1;
  }
  puVar2 = PTR_DAT_0580b4e8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05811e40 + 0x20) + 0xc0) + 0x20) +
                  8))(*(long *)(lVar3 + 0x10),*(undefined4 *)(param_1 + 0x18));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

