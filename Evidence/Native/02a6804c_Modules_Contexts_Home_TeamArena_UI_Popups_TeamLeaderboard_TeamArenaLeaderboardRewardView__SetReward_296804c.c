/* IL2CPP: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaLeaderboardRewardView$$SetReward
void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaLeaderboardRewardView__SetReward (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaLeaderboardRewardView_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard.TeamArenaLeaderboardRewardView$$SetReward
   void 
   Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaLeaderboardRewardView__SetReward
   (Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaLeaderboardRewardView_o*
   __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo*
   method); */

void Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaLeaderboardRewardView__SetReward_296804c
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lStack_38;
  
  if ((bRam0000000005c2d676 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aceb8);
    bRam0000000005c2d676 = 1;
  }
  lStack_38 = 0;
  Modules_Contexts_Home_TeamArena_UI_Popups_TeamLeaderboard_TeamArenaLeaderboardRewardView__RecycleCurrentCurrencyView_2969e6c
            (param_1);
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0), lVar2 != 0
     )) {
    if (param_2 == 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
      return;
    }
    UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar3 + 0x1c8))
                        (plVar3,*(undefined4 *)(param_2 + 0x10),*(undefined8 *)(*plVar3 + 0x1d0));
      plVar3 = (long *)(param_1 + 0x30);
      *plVar3 = lVar2;
      FUN_012d0d74(plVar3,lVar2);
      if ((*plVar3 != 0) &&
         (lVar2 = UnityEngine_Component__get_transform_408b444(*plVar3,0), lVar2 != 0)) {
        UnityEngine_Transform__SetParent_409352c(lVar2,*(undefined8 *)(param_1 + 0x18),0);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        puVar1 = PTR_DAT_05805c10;
        puVar5 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localPosition_4092ce0(*puVar5,puVar5[1],puVar5[2],lVar2,0);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230a9 = '\x01';
        }
        lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
        UnityEngine_Transform__set_localScale_40932d0
                  (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                   *(undefined4 *)(lVar6 + 0x14),lVar2,0);
        if (*plVar3 != 0) {
          Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                    (*plVar3,param_2,0);
          if ((*plVar3 != 0) &&
             (lVar2 = UnityEngine_Component__get_gameObject_408b480(*plVar3,0), lVar2 != 0)) {
            UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
            if (*(char *)(param_1 + 0x28) != '\0') {
              if (*plVar3 == 0) goto LAB_02a68298;
              Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetSortOrder_1384930
                        (*plVar3,*(undefined4 *)(param_1 + 0x2c),0);
            }
            if (*(int *)(param_2 + 0x10) == 0xe) {
              if (*plVar3 != 0) {
                Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetPackType_1384bf4
                          (*plVar3,*(undefined4 *)(param_2 + 0x2c),0);
                return;
              }
            }
            else {
              if (*(int *)(param_2 + 0x10) != 0xd) {
                return;
              }
              if (*plVar3 != 0) {
                uVar4 = UnityEngine_Component__TryGetComponent_object__27209d4
                                  (*plVar3,&lStack_38,*(undefined8 *)PTR_DAT_057aceb8);
                if ((uVar4 & 1) == 0) {
                  return;
                }
                if ((lStack_38 != 0) &&
                   (Modules_Contexts_Home_UI_Chest_Scripts_ChestView__SetChestSprite_2984fec
                              (lStack_38,*(undefined4 *)(param_2 + 0x28),0), lStack_38 != 0)) {
                  *(long *)(lStack_38 + 0x60) = param_2;
                  FUN_012d0d74((long *)(lStack_38 + 0x60),param_2);
                  if ((lStack_38 != 0) &&
                     (Modules_Contexts_Home_UI_Chest_Scripts_ChestView__SetChestToolbarModel_298538c
                                (lStack_38,param_2,0,0), lStack_38 != 0)) {
                    Modules_Contexts_Home_UI_Chest_Scripts_ChestView__SetFlipped_2985a04
                              (lStack_38,1,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02a68298:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

