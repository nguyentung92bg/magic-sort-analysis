/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUp$$Hide
System_Threading_Tasks_Task_o* Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__Hide (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts.LevelWinPopUp$$Hide
   System_Threading_Tasks_Task_o*
   Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__Hide
   (Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUp__Hide_16efe74(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000005c24b4d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05798298);
    bRam0000000005c24b4d = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinPopUpView__Hide_16ef900();
    if (*(long *)(param_1 + 0x50) != 0) {
      Modules_Contexts_GamePlay_UI_LevelWinPopUpNS_Scripts_LevelWinContinueOrQuitButton__Hide_16edf18
                ();
      lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if (lVar2 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerView__Hide_359ef38
                    (*(long *)(param_1 + 0x28),0);
          puVar1 = PTR_DAT_05798298;
          if (*(long *)(param_1 + 0x30) != 0) {
            Modules_Contexts_Home_BroomStreak_Scripts_UI_BroomStreakBannerView__Hide_3fc3294
                      (*(long *)(param_1 + 0x30),0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            if (cRam0000000005c244b5 == '\0') {
              FUN_012d0dc8(PTR_DAT_05798298);
              cRam0000000005c244b5 = '\x01';
            }
            lVar2 = *(long *)puVar1;
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar2 = *(long *)puVar1;
            }
            return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

