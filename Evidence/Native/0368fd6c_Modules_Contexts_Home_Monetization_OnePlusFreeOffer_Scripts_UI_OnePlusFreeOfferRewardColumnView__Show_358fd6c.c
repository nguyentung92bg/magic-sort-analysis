/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferRewardColumnView$$Show
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Show (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView_o* __this, System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferRewardColumnView$$Show
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Show
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView_o*
   __this, System_Collections_Generic_List_RewardModel__o* rewardModels, const MethodInfo* method);
    */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Show_358fd6c
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000005c32e23 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579eca8);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_0579c548);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c32e23 = 1;
  }
  Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__Recycle_358ff18
            (param_1);
  puVar4 = PTR_DAT_0579eca8;
  puVar3 = PTR_DAT_0579c548;
  puVar2 = PTR_DAT_0576c200;
  if (((param_2 == 0) || (iVar11 = *(int *)(param_2 + 0x18), iVar11 == 0)) || (iVar11 < 1)) {
    return;
  }
  fVar12 = *(float *)(param_1 + 0x28);
  fVar13 = fVar12 * (float)(iVar11 + -1);
  iVar11 = 0;
  do {
    uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (param_2,iVar11,*(undefined8 *)puVar3);
    uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferRewardColumnView__CreateCurrencyView_3590174
                      (0,fVar13 * 0.5 - fVar12 * (float)iVar11,0,param_1,uVar5,iVar11);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
    uVar6 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x50);
      if (lVar7 == 0) {
LAB_0368ff14:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar8 = *(long *)(lVar7 + 0x10);
      lVar10 = *(long *)puVar4;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0368ff14;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar9 = uVar5;
        FUN_012d0d74(puVar9,uVar5);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))(lVar7,uVar5)
        ;
      }
    }
    iVar11 = iVar11 + 1;
    if (*(int *)(param_2 + 0x18) <= iVar11) {
      return;
    }
    fVar12 = *(float *)(param_1 + 0x28);
  } while( true );
}

