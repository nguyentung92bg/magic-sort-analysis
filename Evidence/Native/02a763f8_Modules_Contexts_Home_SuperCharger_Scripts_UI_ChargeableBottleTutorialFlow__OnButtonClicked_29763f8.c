/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.ChargeableBottleTutorialFlow$$OnButtonClicked
void Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__OnButtonClicked (Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.Home.SuperCharger.Scripts.UI.ChargeableBottleTutorialFlow$$OnButtonClicked
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__OnButtonClicked
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__OnButtonClicked_29763f8
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    lVar3 = Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__FindChargeableBottleItem_2975fb4
                      (*(undefined8 *)(param_1 + 0x18));
    if (lVar3 != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__SetDefaultSorting_2f59428
                (lVar3,0);
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02a76434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return lVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  if ((bRam0000000005c2d6fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057d3328);
    bRam0000000005c2d6fd = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar3 != 0)) {
    UnityEngine_Behaviour__set_enabled_408d778(lVar3,0,0);
    puVar2 = PTR_DAT_057d3328;
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
      if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                        (*(undefined8 *)puVar2,0);
      if (lVar3 != 0) {
        TMPro_TMP_Text__SetText_3dc1ab4(lVar3,uVar4,1,0);
        lVar3 = Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__FindChargeableBottleItem_2975fb4
                          (*(undefined8 *)(param_1 + 0x18));
        if (lVar3 != 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_02a76534;
          Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView__ShowFingerAtBottle_297653c
                    (*(undefined4 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x2c),
                     *(undefined4 *)(lVar3 + 0x30),*(long *)(param_1 + 0x10));
        }
        puVar2 = PTR_DAT_057606c8;
        uVar1 = _UNK_04359fc0;
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != 0) {
          if ((bRam0000000005c2d70e & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_058057a8);
            FUN_012d0dc8(PTR_DAT_057606c8);
            FUN_012d0dc8(PTR_DAT_0577bc68);
            bRam0000000005c2d70e = 1;
          }
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          puVar2 = PTR_DAT_0577bc68;
          if (lVar5 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_058057a8,0);
            lVar5 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar1,lVar5,1,0);
            uVar4 = *(undefined8 *)(lVar3 + 0x10);
            uVar6 = *(undefined8 *)puVar2;
            if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
              *(undefined8 *)(lVar5 + 0x30) = uVar4;
              FUN_012d0d74((undefined8 *)(lVar5 + 0x30),uVar4,uVar6);
            }
            return lVar5;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
LAB_02a76534:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

