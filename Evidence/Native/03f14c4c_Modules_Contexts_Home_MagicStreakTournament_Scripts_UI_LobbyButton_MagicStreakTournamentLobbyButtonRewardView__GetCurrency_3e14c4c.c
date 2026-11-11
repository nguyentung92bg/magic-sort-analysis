/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$GetCurrency
Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__GetCurrency (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o* __this, System_Collections_Generic_List_RewardModel__o* rewards, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentLobbyButtonRewardView$$GetCurrency
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__GetCurrency
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView_o*
   __this, System_Collections_Generic_List_RewardModel__o* rewards, int32_t index, const MethodInfo*
   method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentLobbyButtonRewardView__GetCurrency_3e14c4c
               (long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if ((bRam0000000005c380a7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579eca8);
    FUN_012d0dc8(PTR_DAT_0579c548);
    bRam0000000005c380a7 = 1;
  }
  puVar2 = PTR_DAT_0579c548;
  if (param_2 != 0) {
    plVar9 = *(long **)(param_1 + 0x18);
    lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (param_2,param_3,*(undefined8 *)PTR_DAT_0579c548);
    if ((lVar3 != 0) && (plVar9 != (long *)0x0)) {
      lVar3 = (**(code **)(*plVar9 + 0x1c8))
                        (plVar9,*(undefined4 *)(lVar3 + 0x10),*(undefined8 *)(*plVar9 + 0x1d0));
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 != 0) {
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)PTR_DAT_0579eca8;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            plVar9 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar9 = lVar3;
            FUN_012d0d74(plVar9,lVar3);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar5,lVar3);
          }
          uVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (param_2,param_3,*(undefined8 *)puVar2);
          if (lVar3 != 0) {
            Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                      (lVar3,uVar4,0);
            if (*(long *)(param_1 + 0x20) != 0) {
              Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetSortOrder_1384930
                        (lVar3,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x74),0);
              lVar5 = UnityEngine_Component__get_transform_408b444(lVar3,0);
              if (cRam0000000005c230aa == '\0') {
                FUN_012d0dc8(PTR_DAT_05805c10);
                cRam0000000005c230aa = '\x01';
              }
              if (lVar5 != 0) {
                puVar6 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
                UnityEngine_Transform__set_localScale_40932d0(*puVar6,puVar6[1],puVar6[2],lVar5,0);
                lVar5 = UnityEngine_Component__get_transform_408b444(lVar3,0);
                uVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
                if (lVar5 != 0) {
                  UnityEngine_Transform__SetParent_409352c(lVar5,uVar4,0);
                  *(long *)(param_1 + 0x50) = lVar3;
                  FUN_012d0d74((long *)(param_1 + 0x50),lVar3);
                  return lVar3;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

