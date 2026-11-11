/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$Show
void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__Show (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView_o* view, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections, System_Action_o* requestHide, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$Show
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__Show
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this,
   Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView_o* view,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* bottleCollections,
   System_Action_o* requestHide, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__Show_2977280
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,long param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c2d705 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057d0988);
    FUN_012d0dc8(PTR_DAT_058057a8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05777c38);
    bRam0000000005c2d705 = 1;
  }
  plVar4 = (long *)(param_4 + 0x10);
  *plVar4 = param_5;
  FUN_012d0d74(plVar4,param_5);
  *(undefined8 *)(param_4 + 0x18) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x18),param_7);
  *(undefined4 *)(param_4 + 0x30) = 0;
  if (((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x28), lVar3 != 0)) &&
     (lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar3,0), lVar3 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x28), lVar3 != 0)) {
      uVar6 = UnityEngine_Transform__get_position_4092b08(lVar3,0);
      Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__FindRainbowTarget_2977498
                (param_4,param_6);
      lVar3 = *(long *)(param_4 + 0x20);
      if (lVar3 != 0) {
        if (*(int *)(*(long *)PTR_DAT_057d0988 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        param_2 = Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__GetDynamicPanelYPosition_29778e4
                            (lVar3);
                    /* try { // try from 02a773a4 to 02b774af has its CatchHandler @ 02a773a4
                       catch() { ... } // from try @ 02a773a4 with catch @ 02a773a4
                       catch() { ... } // from try @ 02a77574 with catch @ 02a773a4
                       catch() { ... } // from try @ 02a775fc with catch @ 02a773a4
                       catch() { ... } // from try @ 02a77690 with catch @ 02a773a4 */
        Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetTutorialSorting_2977938
                  (param_4);
      }
      if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x28), lVar3 != 0)) {
        UnityEngine_Transform__set_position_4092ba8(uVar6,param_2,param_3,lVar3,0);
        puVar1 = PTR_DAT_05777c38;
        if (*plVar4 != 0) {
          lVar3 = *(long *)(*plVar4 + 0x40);
          if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar6 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                            (*(undefined8 *)puVar1,0);
          if (lVar3 != 0) {
            TMPro_TMP_Text__SetText_3dc1ab4(lVar3,uVar6,1,0);
            puVar1 = PTR_DAT_057606c8;
            lVar3 = *plVar4;
            if (lVar3 != 0) {
              uVar6 = Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView__PlayIntroSequence_2975c6c
                                (lVar3,*(undefined8 *)(lVar3 + 0x28));
              lVar5 = *plVar4;
              lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if (lVar3 != 0) {
                DG_Tweening_TweenCallback___ctor_1ed6da8
                          (lVar3,lVar5,*(undefined8 *)PTR_DAT_058057a8,0);
                uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30
                                  (uVar6,0,1);
                if ((lVar3 != 0) && ((uVar2 & 1) != 0)) {
                  DG_Tweening_Sequence__DoInsertCallback_1edffe8(0x3f000000,uVar6,lVar3);
                }
                return uVar6;
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

