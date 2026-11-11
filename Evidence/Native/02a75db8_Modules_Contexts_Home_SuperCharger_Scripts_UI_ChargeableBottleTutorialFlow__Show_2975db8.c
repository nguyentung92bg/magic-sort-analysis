/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.ChargeableBottleTutorialFlow$$Show
void Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__Show (Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow_o* __this, Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView_o* view, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, System_Action_o* requestHide, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.ChargeableBottleTutorialFlow$$Show
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__Show
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow_o* __this,
   Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView_o* view,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections,
   System_Action_o* requestHide, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__Show_2975db8
          (undefined1 param_1 [16],ulong param_2,undefined8 param_3,long param_4,long param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
                    /* try { // try from 02a75dc4 to 02b75e23 has its CatchHandler @ 02a75ed4 */
  if ((bRam0000000005c2d6fc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_058057a8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057d5b48);
    bRam0000000005c2d6fc = 1;
  }
  plVar4 = (long *)(param_4 + 0x10);
  *plVar4 = param_5;
  FUN_012d0d74(plVar4,param_5);
                    /* try { // try from 02a75e34 to 02b75e3f has its CatchHandler @ 02a75ecc */
  puVar5 = (undefined8 *)(param_4 + 0x18);
  *puVar5 = param_6;
                    /* try { // try from 02a75e40 to 02b75ebb has its CatchHandler @ 02a75c80 */
  FUN_012d0d74(puVar5,param_6);
  *(undefined8 *)(param_4 + 0x20) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x20),param_7);
  *(undefined1 *)(param_4 + 0x28) = 0;
  if (((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x28), lVar3 != 0)) &&
     (lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar3,0), lVar3 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x28), lVar3 != 0)) {
      uVar7 = UnityEngine_Transform__get_position_4092b08(lVar3,0);
      lVar3 = Modules_Contexts_Home_SuperCharger_Scripts_UI_ChargeableBottleTutorialFlow__FindChargeableBottleItem_2975fb4
                        (*puVar5);
      if (lVar3 != 0) {
                    /* try { // try from 02a75ebc to 02b75ebf has its CatchHandler @ 02a75ec8 */
                    /* try { // try from 02a75ec0 to 02b75eeb has its CatchHandler @ 02a75c80 */
        param_2 = (ulong)(uint)(*(float *)(lVar3 + 0x2c) + 6.0);
        Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__SetTutorialSorting_2f59370
                  (lVar3,0);
      }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a75ebc with catch @ 02a75ec8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a75e34 with catch @ 02a75ecc
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a75d84 with catch @ 02a75ed0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a75dc4 with catch @ 02a75ed4
                        */
      if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x28), lVar3 != 0)) {
        UnityEngine_Transform__set_position_4092ba8(uVar7,param_2,param_3,lVar3,0);
        puVar1 = PTR_DAT_057d5b48;
                    /* try { // try from 02a75eec to 02b75eef has its CatchHandler @ 02a75f68 */
        if (*plVar4 != 0) {
          lVar3 = *(long *)(*plVar4 + 0x40);
          if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                            (*(undefined8 *)puVar1,0);
          if (lVar3 != 0) {
                    /* try { // try from 02a75f2c to 02b75f53 has its CatchHandler @ 02a75f74 */
            TMPro_TMP_Text__SetText_3dc1ab4(lVar3,uVar7,1,0);
            puVar1 = PTR_DAT_057606c8;
            lVar3 = *plVar4;
            if (lVar3 != 0) {
              uVar7 = Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView__PlayIntroSequence_2975c6c
                                (lVar3,*(undefined8 *)(lVar3 + 0x28));
                    /* try { // try from 02a75f54 to 02b75f5f has its CatchHandler @ 02a75c80 */
              lVar6 = *plVar4;
                    /* try { // try from 02a75f60 to 02b75f67 has its CatchHandler @ 02a75f74 */
              lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 02a75eec with catch @ 02a75f68 */
              if (lVar3 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02a75f2c with catch @ 02a75f74
                       catch(type#2 @ 00000000) { ... } // from try @ 02a75f60 with catch @ 02a75f74
                        */
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar3,lVar6,*(undefined8 *)PTR_DAT_058057a8,0);
                uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                  (uVar7,0,1);
                if ((lVar3 != 0) && ((uVar2 & 1) != 0)) {
                  DG_Tweening_Sequence__DoInsertCallback_1edffe8(0x3f000000,uVar7,lVar3);
                }
                return uVar7;
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

