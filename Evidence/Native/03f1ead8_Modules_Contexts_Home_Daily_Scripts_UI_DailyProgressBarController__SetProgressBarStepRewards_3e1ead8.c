/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$SetProgressBarStepRewards
void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarStepRewards (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t currentProgress, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$SetProgressBarStepRewards
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarStepRewards
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, int32_t
   currentProgress, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* rewardModel, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__SetProgressBarStepRewards_3e1ead8
               (long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  
                    /* try { // try from 03f1eaf8 to 0401eaff has its CatchHandler @ 03f1eb80 */
  if ((bRam0000000005c38108 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781f20);
    FUN_012d0dc8(PTR_DAT_0579b110);
    FUN_012d0dc8(PTR_DAT_0579eca8);
                    /* try { // try from 03f1eb34 to 0401eb5b has its CatchHandler @ 03f1ec18 */
    FUN_012d0dc8(PTR_DAT_05793300);
    FUN_012d0dc8(PTR_DAT_0579c548);
    FUN_012d0dc8(PTR_DAT_057c5200);
    FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c38108 = 1;
  }
  puVar5 = PTR_DAT_057c5200;
  puVar4 = PTR_DAT_0579eca8;
  puVar3 = PTR_DAT_0579c548;
  puVar2 = PTR_DAT_0576d090;
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 != 0) {
                    /* try { // try from 03f1eb74 to 0401eb77 has its CatchHandler @ 03f1ec1c */
                    /* try { // try from 03f1eb78 to 0401eb7f has its CatchHandler @ 03f1ec18 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1eaf8 with catch @ 03f1eb80
                       try { // try from 03f1eb80 to 0401eb9b has its CatchHandler @ 03f1ea20 */
    iVar13 = 0;
    do {
      if (*(int *)(lVar9 + 0x18) <= iVar13) {
        return;
      }
                    /* try { // try from 03f1eb9c to 0401eb9f has its CatchHandler @ 03f1ec0c */
      if ((param_3 == 0) || (*(long *)(param_3 + 0x20) == 0)) break;
      lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_3 + 0x20),iVar13,*(undefined8 *)puVar3);
      if (lVar9 != 0) {
                    /* try { // try from 03f1ebd8 to 0401ec0b has its CatchHandler @ 03f1ec90 */
        if (((*(long *)(param_3 + 0x20) == 0) ||
            (lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (*(long *)(param_3 + 0x20),iVar13,*(undefined8 *)puVar3), lVar9 == 0)
            ) || (plVar6 = *(long **)(param_1 + 0x18), plVar6 == (long *)0x0)) break;
        lVar7 = (**(code **)(*plVar6 + 0x1c8))
                          (plVar6,*(undefined4 *)(lVar9 + 0x10),*(undefined8 *)(*plVar6 + 0x1d0));
        lVar10 = *(long *)(param_1 + 0x48);
        if (lVar10 == 0) break;
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar12 = *(long *)puVar4;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) break;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1eb9c with catch @ 03f1ec0c
                       try { // try from 03f1ec0c to 0401ec37 has its CatchHandler @ 03f1ea20 */
        uVar1 = *(uint *)(lVar10 + 0x18);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1eb34 with catch @ 03f1ec18
                       catch(type#1 @ 054cbd58) { ... } // from try @ 03f1eb78 with catch @ 03f1ec18
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03f1eab8 with catch @ 03f1ec1c
                       catch(type#1 @ 054cbd58) { ... } // from try @ 03f1eb74 with catch @ 03f1ec1c
                        */
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar7;
          FUN_012d0d74(plVar6,lVar7);
                    /* try { // try from 03f1ec38 to 0401ec4f has its CatchHandler @ 03f1ec80 */
        }
        else {
                    /* try { // try from 03f1ec50 to 0401ec6f has its CatchHandler @ 03f1ea20 */
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar10,lVar7);
        }
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (*(long *)(param_1 + 0x20),iVar13,*(undefined8 *)puVar5), lVar10 == 0
           )) break;
                    /* try { // try from 03f1ec70 to 0401ec7f has its CatchHandler @ 03f1ec80 */
        Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetRewardStepView_3e21128
                  (lVar10,lVar7,param_2);
                    /* catch() { ... } // from try @ 03f1ec38 with catch @ 03f1ec80
                       catch() { ... } // from try @ 03f1ec70 with catch @ 03f1ec80 */
                    /* try { // try from 03f1ec84 to 0401ec87 has its CatchHandler @ 03f1ec90 */
        if (*(int *)(lVar9 + 0x10) == 0xd) {
                    /* try { // try from 03f1ec88 to 0401ec93 has its CatchHandler @ 03f1ea20 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03f1ebd8 with catch @ 03f1ec90
                       catch(type#2 @ 00000000) { ... } // from try @ 03f1ec84 with catch @ 03f1ec90
                        */
          if ((lVar7 == 0) ||
             (lVar7 = UnityEngine_Component__GetComponent_object__27205b8
                                (lVar7,*(undefined8 *)PTR_DAT_05781f20), lVar7 == 0)) break;
          Modules_Contexts_Home_UI_Chest_Scripts_ChestView__SetChestSprite_2984fec
                    (lVar7,*(undefined4 *)(lVar9 + 0x28),0);
          Modules_Contexts_Home_UI_Chest_Scripts_ChestView__SetChestToolbarModel_298538c
                    (lVar7,lVar9,0,0);
        }
        else {
          if (*(long *)(param_1 + 0x20) == 0) break;
          lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (*(long *)(param_1 + 0x20),iVar13,*(undefined8 *)puVar5);
          if (((*(long *)(param_1 + 0x40) == 0) ||
              (lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 0x98), lVar11 == 0)) ||
             (System_Collections_Generic_List_float___get_Item_1d70b20
                        (lVar11,iVar13,*(undefined8 *)puVar2), lVar10 == 0)) break;
          Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__ScaleCurrency_3e21218
                    (lVar10);
          if ((*(long *)(param_3 + 0x20) == 0) ||
             (uVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                (*(long *)(param_3 + 0x20),iVar13,*(undefined8 *)puVar3), lVar7 == 0
             )) break;
          Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                    (lVar7,uVar8,0);
          if (*(int *)(lVar9 + 0x10) == 1) {
            lVar9 = UnityEngine_Component__GetComponent_object__27205b8
                              (lVar7,*(undefined8 *)PTR_DAT_0579b110);
            if (((*(long *)(param_3 + 0x20) == 0) ||
                (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (*(long *)(param_3 + 0x20),iVar13,*(undefined8 *)puVar3),
                lVar7 == 0)) || (lVar9 == 0)) break;
            Modules_Contexts_Home_Daily_Scripts_UI_DailyCoinCurrencySpriteSetter__SetCoinSprite_3e1db7c
                      (lVar9,0x5db < *(int *)(lVar7 + 0x14));
          }
        }
      }
      lVar9 = *(long *)(param_1 + 0x20);
      iVar13 = iVar13 + 1;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

