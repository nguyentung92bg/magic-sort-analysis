/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRewardMapper$$ToRewardModels
System_Collections_Generic_List_RewardModel__o* Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToRewardModels (MagicSort_V1_ClientCommonRewardModelWithCollection_o* reward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferRewardMapper$$ToRewardModels
   System_Collections_Generic_List_RewardModel__o*
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToRewardModels
   (MagicSort_V1_ClientCommonRewardModelWithCollection_o* reward, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToRewardModels_358b13c
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_05781050;
  if ((bRam0000000005c32dee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05766c50);
    FUN_012d0dc8(PTR_DAT_057994c8);
    FUN_012d0dc8(PTR_DAT_05781050);
    bRam0000000005c32dee = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)PTR_DAT_057994c8);
    puVar2 = PTR_DAT_05766c50;
    if (param_1 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__AddRewardModels_358b2e4
                  (lVar3,*(undefined8 *)(param_1 + 0x40));
      }
      else {
        uVar4 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferRewardMapper__ToRewardModel_358b244
                          (param_1);
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_0368b240;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          FUN_012d0d74();
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))(lVar3);
        }
      }
    }
    return lVar3;
  }
LAB_0368b240:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

