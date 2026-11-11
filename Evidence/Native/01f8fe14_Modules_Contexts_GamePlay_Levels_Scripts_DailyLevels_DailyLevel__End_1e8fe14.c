/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevel$$End
void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__End (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels.DailyLevel$$End
   void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__End
   (Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_DailyLevels_DailyLevel__End_1e8fe14(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
  *puVar1 = 0;
  FUN_012d0d74(puVar1,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__Deinitialize_16134d0
              (*(long *)(param_1 + 0x30),0);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__Deinitialize_2d94bb0
              (*(long *)(param_1 + 0x40),0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__Deinitialize_16109dc
              (*(long *)(param_1 + 0x10),0);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__Deinitialize_1e8fea8();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_GameplayInputSystem__Deinitialize_1612108
              (*(long *)(param_1 + 0x50),0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__Deinitialize_1f1a9a4
              (*(long *)(param_1 + 0x20),0);
  }
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x1d) != '\0') {
      if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Infrastructure_DI_CustomUpdater__RemoveSecondUpdate_3d2dc2c
                (*(long *)(lVar2 + 0x10),lVar2,0);
    }
    *(undefined1 *)(lVar2 + 0x1d) = 0;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    return;
  }
  return;
}

