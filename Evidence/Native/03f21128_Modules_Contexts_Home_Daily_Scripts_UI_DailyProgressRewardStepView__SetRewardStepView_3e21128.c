/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$SetRewardStepView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetRewardStepView (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this, Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView, int32_t currentDate, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressRewardStepView$$SetRewardStepView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetRewardStepView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView_o* __this,
   Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* currencyView, int32_t
   currentDate, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetRewardStepView_3e21128
               (long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    return;
  }
  if (param_2 != 0) {
    lVar1 = UnityEngine_Component__get_transform_408b444(param_2,0);
    if (lVar1 != 0) {
      UnityEngine_Transform__SetParent_409352c(lVar1,*(undefined8 *)(param_1 + 0x18),0);
      lVar1 = UnityEngine_Component__get_transform_408b444(param_2,0);
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      if (lVar1 != 0) {
        puVar3 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        UnityEngine_Transform__set_localPosition_4092ce0(*puVar3,puVar3[1],puVar3[2],lVar1,0);
        *(long *)(param_1 + 0x60) = param_2;
        FUN_012d0d74((long *)(param_1 + 0x60),param_2);
        if (*(int *)(param_1 + 0x54) <= param_3) {
          *(undefined1 *)(param_1 + 0x58) = 1;
          if (*(long *)(param_1 + 0x40) != 0) {
            Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetSeparatorSprite_3e21ea4
                      (param_1,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x48));
            if (*(long *)(param_1 + 0x60) != 0) {
              lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x40);
              if (lVar1 != 0) {
                lVar1 = UnityEngine_Component__get_gameObject_408b480(lVar1,0);
                if (lVar1 == 0) goto LAB_03f21b04;
                UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
              }
              if ((*(long *)(param_1 + 0x20) != 0) &&
                 (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0)
                 , lVar1 != 0)) {
                uVar2 = 1;
                goto code_r0x0418e318;
              }
            }
          }
LAB_03f21b04:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        *(undefined1 *)(param_1 + 0x58) = 0;
        if (*(long *)(param_1 + 0x40) != 0) {
          Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__SetSeparatorSprite_3e21ea4
                    (param_1,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x40));
          if (*(long *)(param_1 + 0x60) != 0) {
            lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x40);
            if (lVar1 != 0) {
              lVar1 = UnityEngine_Component__get_gameObject_408b480(lVar1,0);
              if (lVar1 == 0) goto LAB_03f21b70;
              UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
            }
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0),
               lVar1 != 0)) {
              uVar2 = 0;
code_r0x0418e318:
              if (pcRam0000000005c3a388 == (code *)0x0) {
                pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
              }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000005c3a388)(lVar1,uVar2);
              return;
            }
          }
        }
LAB_03f21b70:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

