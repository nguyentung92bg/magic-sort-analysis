/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$OnStateChange
void Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__OnStateChange (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$OnStateChange
   void 
   Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__OnStateChange
   (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__OnStateChange_1385d60
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_057815e0;
  if (*(long *)(param_3 + 0x78) != 0) {
    if (*(char *)(*(long *)(param_3 + 0x78) + 0x71) != '\0') {
      return param_3;
    }
    if (*(char *)(param_3 + 0x70) != '\0') {
      if (*(long *)(param_3 + 0x60) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_3 + 0x60),1,0);
        puVar1 = PTR_DAT_057815e0;
        lVar2 = *(long *)(param_3 + 0x68);
        if (lVar2 != 0) {
          if ((bRam0000000005c34b59 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057815e0,0);
            FUN_012d0dc8(PTR_DAT_057f6dc0);
            FUN_012d0dc8(PTR_DAT_057606c8);
            FUN_012d0dc8(PTR_DAT_05809250);
            FUN_012d0dc8(PTR_DAT_057874c0);
            bRam0000000005c34b59 = 1;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
          *(undefined1 *)(lVar2 + 0x38) = 1;
          Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimation__PlayLoops_38c8c00
                    (lVar2);
          if ((*(long *)(lVar2 + 0x18) != 0) && (lVar5 = *(long *)(lVar2 + 0x30), lVar5 != 0)) {
            uVar6 = *(undefined4 *)(*(long *)(lVar2 + 0x18) + 0x1c);
            UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
            if (*(long *)(lVar2 + 0x30) != 0) {
              UnityEngine_Transform__get_localPosition_4092c40(*(long *)(lVar2 + 0x30),0);
              UnityEngine_Transform__set_localPosition_4092ce0(uVar6,param_2,lVar5,0);
              lVar5 = *(long *)(lVar2 + 0x18);
              if (lVar5 != 0) {
                uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMoveX_1ee5860
                                  (*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                                   *(undefined8 *)(lVar2 + 0x30),0,0);
                if (*(long *)(lVar2 + 0x18) != 0) {
                  uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar4,*(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x30),
                                     *(undefined8 *)PTR_DAT_057874c0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar3,uVar4,0);
                  puVar1 = PTR_DAT_057606c8;
                  if (*(long *)(lVar2 + 0x18) != 0) {
                    uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                                      (0x3f800000,*(undefined4 *)(*(long *)(lVar2 + 0x18) + 0x2c),
                                       *(undefined8 *)(lVar2 + 0x28),0);
                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar3,uVar4,0);
                    uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimation__PlayFadeAnimation_38c8c34
                                      (lVar2,1);
                    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar3,uVar4,0);
                    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    puVar1 = PTR_DAT_05809250;
                    if (lVar5 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar5,lVar2,*(undefined8 *)PTR_DAT_057f6dc0,0);
                      DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0
                                (lVar3,lVar5,*(undefined8 *)puVar1);
                      return lVar3;
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar2 = *(long *)(param_3 + 0x68);
    if (lVar2 != 0) {
      if ((bRam0000000005c34b5a & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057815e0,0);
        FUN_012d0dc8(PTR_DAT_057f6dc0);
        FUN_012d0dc8(PTR_DAT_057606c8);
        FUN_012d0dc8(PTR_DAT_05809250);
        FUN_012d0dc8(PTR_DAT_057874c0);
        bRam0000000005c34b5a = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
      *(undefined1 *)(lVar2 + 0x38) = 0;
      Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimation__CancelLoops_38c90e0
                (lVar2);
      if ((*(long *)(lVar2 + 0x18) != 0) && (lVar5 = *(long *)(lVar2 + 0x30), lVar5 != 0)) {
        uVar6 = *(undefined4 *)(*(long *)(lVar2 + 0x18) + 0x20);
        UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
        if (*(long *)(lVar2 + 0x30) != 0) {
          UnityEngine_Transform__get_localPosition_4092c40(*(long *)(lVar2 + 0x30),0);
          UnityEngine_Transform__set_localPosition_4092ce0(uVar6,param_2,lVar5,0);
          lVar5 = *(long *)(lVar2 + 0x18);
          if (lVar5 != 0) {
            uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMoveX_1ee5860
                              (*(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x24),
                               *(undefined8 *)(lVar2 + 0x30),0,0);
            if (*(long *)(lVar2 + 0x18) != 0) {
              uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar4,*(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x30),
                                 *(undefined8 *)PTR_DAT_057874c0);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar3,uVar4,0);
              puVar1 = PTR_DAT_057606c8;
              if (*(long *)(lVar2 + 0x18) != 0) {
                uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                                  (0,*(undefined4 *)(*(long *)(lVar2 + 0x18) + 0x28),
                                   *(undefined8 *)(lVar2 + 0x28),0);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar3,uVar4,0);
                uVar4 = Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimation__PlayFadeAnimation_38c8c34
                                  (lVar2,0);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar3,uVar4,0);
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                puVar1 = PTR_DAT_05809250;
                if (lVar5 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar5,lVar2,*(undefined8 *)PTR_DAT_057f6dc0,0);
                  DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0
                            (lVar3,lVar5,*(undefined8 *)puVar1);
                  return lVar3;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

