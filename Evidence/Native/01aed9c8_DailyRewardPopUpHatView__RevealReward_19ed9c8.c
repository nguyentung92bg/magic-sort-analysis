/* IL2CPP: DailyRewardPopUpHatView$$RevealReward
void DailyRewardPopUpHatView__RevealReward (DailyRewardPopUpHatView_o* __this, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* reward, bool isParticleActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardPopUpHatView$$RevealReward
   void DailyRewardPopUpHatView__RevealReward (DailyRewardPopUpHatView_o* __this,
   Modules_Contexts_Application_Reward_Scripts_RewardModel_o* reward, bool isParticleActive, const
   MethodInfo* method); */

void DailyRewardPopUpHatView__RevealReward_19ed9c8(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  
  *(long *)(param_1 + 0x58) = param_2;
  FUN_012d0d74((long *)(param_1 + 0x58));
  if ((param_2 != 0) && (plVar1 = *(long **)(param_1 + 0x28), plVar1 != (long *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 0x1c8))
                      (plVar1,*(undefined4 *)(param_2 + 0x10),*(undefined8 *)(*plVar1 + 0x1d0));
    plVar1 = (long *)(param_1 + 0x60);
    *plVar1 = lVar2;
    FUN_012d0d74(plVar1,lVar2);
    if (*plVar1 != 0) {
      Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetAmountOrDurationWithSign_1381c58
                (*plVar1,param_2,0);
      if ((*plVar1 != 0) &&
         (lVar2 = UnityEngine_Component__get_transform_408b444(*plVar1,0), lVar2 != 0)) {
        UnityEngine_Transform__SetParent_409352c(lVar2,*(undefined8 *)(param_1 + 0x20),0);
        if (*(long *)(param_1 + 0x60) != 0) {
          lVar2 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x60),0);
          if (cRam0000000005c230aa == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230aa = '\x01';
          }
          if (lVar2 != 0) {
            puVar3 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
            UnityEngine_Transform__set_localPosition_4092ce0(*puVar3,puVar3[1],puVar3[2],lVar2,0);
            if (*(int *)(param_2 + 0x10) == 0xe) {
              if (*plVar1 == 0) goto LAB_01aedb18;
              Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetPackType_1384bf4
                        (*plVar1,*(undefined4 *)(param_2 + 0x2c),0);
            }
            if ((*plVar1 != 0) &&
               (lVar2 = UnityEngine_Component__get_gameObject_408b480(*plVar1,0), lVar2 != 0)) {
              UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
              lVar2 = *(long *)(param_1 + 0x50);
              if (lVar2 != 0) {
                if (pcRam0000000005c3a388 == (code *)0x0) {
                  pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
                }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000005c3a388)(lVar2,param_3 & 1);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01aedb18:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

