/* IL2CPP: Modules.Contexts.Home.TowerWinStreak.Scripts.UI.InLevelTowerWinStreakView$$Show
void Modules_Contexts_Home_TowerWinStreak_Scripts_UI_InLevelTowerWinStreakView__Show (Modules_Contexts_Home_TowerWinStreak_Scripts_UI_InLevelTowerWinStreakView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TowerWinStreak.Scripts.UI.InLevelTowerWinStreakView$$Show
   void Modules_Contexts_Home_TowerWinStreak_Scripts_UI_InLevelTowerWinStreakView__Show
   (Modules_Contexts_Home_TowerWinStreak_Scripts_UI_InLevelTowerWinStreakView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_TowerWinStreak_Scripts_UI_InLevelTowerWinStreakView__Show_32e4d78
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c31de1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580d478);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c31de1 = 1;
  }
  uStack_24 = 0;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) {
    lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar2,*(undefined8 *)PTR_DAT_0580d478);
    plVar5 = (long *)(param_1 + 0x20);
    *plVar5 = lVar2;
    FUN_012d0d74(plVar5,lVar2);
    if ((*plVar5 != 0) && (*(long *)(*plVar5 + 0x20) != 0)) {
      uVar3 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakStateService__ShouldShowInLevelStreakView_32e4ba0
                        ();
      lVar2 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
      if (lVar2 != 0) {
        if ((uVar3 & 1) == 0) {
          UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
          return;
        }
        UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
        if (*plVar5 != 0) {
          uStack_24 = Modules_Contexts_Home_TowerWinStreak_Scripts_TowerWinStreakService__GetCurrentWinCount_32e2714
                                ();
          plVar5 = *(long **)(param_1 + 0x18);
          uVar4 = System_Int32__ToString_26c9768(&uStack_24,0);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

