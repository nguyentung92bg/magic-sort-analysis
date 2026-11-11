/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentHatCollectableView$$CachePathPoints
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__CachePathPoints (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentHatCollectableView$$CachePathPoints
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__CachePathPoints
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__CachePathPoints_3e11ae0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((bRam0000000005c3808b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058030a8);
    bRam0000000005c3808b = 1;
  }
  if (*(long *)(param_4 + 0x30) != 0) {
    lVar1 = FUN_012d0e38(*(undefined8 *)PTR_DAT_058030a8,
                         *(undefined4 *)(*(long *)(param_4 + 0x30) + 0x18));
    plVar2 = (long *)(param_4 + 0x48);
    *plVar2 = lVar1;
    FUN_012d0d74(plVar2,lVar1);
    lVar1 = *(long *)(param_4 + 0x30);
    if (lVar1 != 0) {
      lVar4 = 0;
      lVar3 = 0;
      do {
        if ((int)*(uint *)(lVar1 + 0x18) <= (int)(uint)lVar3) {
          return;
        }
        if (*(uint *)(lVar1 + 0x18) <= (uint)lVar3) {
LAB_03f11bc0:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar1 = *(long *)(lVar1 + lVar3 * 8 + 0x20);
        if (lVar1 == 0) break;
        lVar5 = *plVar2;
        uVar6 = UnityEngine_Transform__get_localPosition_4092c40(lVar1,0);
        if (lVar5 == 0) break;
        lVar3 = lVar3 + 1;
        if (*(uint *)(lVar5 + 0x18) <= (int)lVar3 - 1U) goto LAB_03f11bc0;
        lVar5 = lVar5 + lVar4;
        *(undefined4 *)(lVar5 + 0x20) = uVar6;
        *(undefined4 *)(lVar5 + 0x24) = param_2;
        *(undefined4 *)(lVar5 + 0x28) = param_3;
        lVar1 = *(long *)(param_4 + 0x30);
        lVar4 = lVar4 + 0xc;
      } while (lVar1 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

