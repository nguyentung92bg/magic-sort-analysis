/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.SingleUseBottleTutorialFlow$$Show
void Modules_Contexts_Home_SuperCharger_Scripts_UI_SingleUseBottleTutorialFlow__Show (Modules_Contexts_Home_SuperCharger_Scripts_UI_SingleUseBottleTutorialFlow_o* __this, Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView_o* view, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, System_Action_o* requestHide, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.SingleUseBottleTutorialFlow$$Show
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_SingleUseBottleTutorialFlow__Show
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_SingleUseBottleTutorialFlow_o* __this,
   Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView_o* view,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections,
   System_Action_o* requestHide, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_SuperCharger_Scripts_UI_SingleUseBottleTutorialFlow__Show_2977e54
          (undefined1 param_1 [16],ulong param_2,undefined8 param_3,long param_4,long param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c2d70c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_058057a8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057a6130);
    bRam0000000005c2d70c = 1;
  }
  puVar5 = (undefined8 *)(param_4 + 0x10);
  *puVar5 = param_6;
  FUN_012d0d74(puVar5,param_6);
  *(undefined8 *)(param_4 + 0x18) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x18),param_7);
  if ((param_5 != 0) && (*(long *)(param_5 + 0x30) != 0)) {
    UnityEngine_Behaviour__set_enabled_408d778(*(long *)(param_5 + 0x30),0,0);
    if ((*(long *)(param_5 + 0x28) != 0) &&
       (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_5 + 0x28),0),
       lVar4 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
      if (*(long *)(param_5 + 0x28) != 0) {
        uVar6 = UnityEngine_Transform__get_position_4092b08(*(long *)(param_5 + 0x28),0);
        lVar4 = Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__FindChargeableBottleItem_2975fb4
                          (*puVar5);
        if (lVar4 != 0) {
          param_2 = (ulong)(uint)(*(float *)(lVar4 + 0x2c) + 6.0);
          Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__SetTutorialSorting_2f59370
                    (lVar4,0);
          Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView__ShowFingerAtBottle_297653c
                    (*(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x2c),
                     *(undefined4 *)(lVar4 + 0x30),param_5);
        }
        puVar2 = PTR_DAT_057bc5e8;
        puVar1 = PTR_DAT_057a6130;
        if (*(long *)(param_5 + 0x28) != 0) {
          UnityEngine_Transform__set_position_4092ba8
                    (uVar6,param_2,param_3,*(long *)(param_5 + 0x28),0);
          lVar4 = *(long *)(param_5 + 0x40);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar6 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                            (*(undefined8 *)puVar1,0);
          puVar1 = PTR_DAT_057606c8;
          if (lVar4 != 0) {
            TMPro_TMP_Text__SetText_3dc1ab4(lVar4,uVar6,1,0);
            uVar6 = Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView__PlayIntroSequence_2975c6c
                              (param_5,*(undefined8 *)(param_5 + 0x28));
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar4 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar4,param_5,*(undefined8 *)PTR_DAT_058057a8,0);
              uVar3 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(uVar6,0,1);
              if ((lVar4 != 0) && ((uVar3 & 1) != 0)) {
                DG_Tweening_Sequence__DoInsertCallback_1edffe8(0x3f000000,uVar6,lVar4);
              }
              return uVar6;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

