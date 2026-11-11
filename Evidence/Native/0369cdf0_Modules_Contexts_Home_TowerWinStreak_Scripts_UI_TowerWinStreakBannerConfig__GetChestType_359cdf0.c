/* IL2CPP: Modules.Contexts.Home.TowerWinStreak.Scripts.UI.TowerWinStreakBannerConfig$$GetChestType
UnityEngine_Sprite_o* Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerConfig__GetChestType (Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerConfig_o* __this, int32_t chestType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.TowerWinStreak.Scripts.UI.TowerWinStreakBannerConfig$$GetChestType
   UnityEngine_Sprite_o*
   Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerConfig__GetChestType
   (Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerConfig_o* __this, int32_t
   chestType, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_TowerWinStreak_Scripts_UI_TowerWinStreakBannerConfig__GetChestType_359cdf0
          (long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  
  if ((bRam0000000005c32e9b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d3a18);
    bRam0000000005c32e9b = 1;
  }
  switch(param_2) {
  case 1:
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 != 0) {
      uVar2 = 0;
LAB_0369ceb0:
      if (*(uint *)(lVar1 + 0x18) <= uVar2) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                  (0,uVar2,*(undefined8 *)PTR_DAT_057d3a18);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        if (uVar2 < *(uint *)(lVar1 + 0x18)) {
          return *(undefined8 *)(lVar1 + (long)(int)uVar2 * 8 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    break;
  case 2:
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 != 0) {
      uVar2 = 1;
      goto LAB_0369ceb0;
    }
    break;
  case 3:
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 != 0) {
      uVar2 = 2;
      goto LAB_0369ceb0;
    }
    break;
  case 4:
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 != 0) {
      uVar2 = 3;
      goto LAB_0369ceb0;
    }
    break;
  case 5:
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 != 0) {
      uVar2 = 4;
      goto LAB_0369ceb0;
    }
    break;
  case 6:
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 != 0) {
      uVar2 = 5;
      goto LAB_0369ceb0;
    }
    break;
  default:
    lVar1 = *(long *)(param_1 + 0x120);
    if (lVar1 != 0) {
      uVar2 = 6;
      goto LAB_0369ceb0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

