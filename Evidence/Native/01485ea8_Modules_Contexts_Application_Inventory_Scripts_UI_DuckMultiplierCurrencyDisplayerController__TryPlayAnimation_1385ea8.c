/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$TryPlayAnimation
void Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__TryPlayAnimation (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Inventory.Scripts.UI.DuckMultiplierCurrencyDisplayerController$$TryPlayAnimation
   void 
   Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__TryPlayAnimation
   (Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Application_Inventory_Scripts_UI_DuckMultiplierCurrencyDisplayerController__TryPlayAnimation_1385ea8
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_DAT_057815e0;
  lVar4 = *(long *)(param_3 + 0x68);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(char *)(lVar4 + 0x38) == *(char *)(param_3 + 0x70)) {
    return param_3;
  }
  if (*(char *)(lVar4 + 0x38) == '\0') {
    if (*(long *)(param_3 + 0x60) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_3 + 0x60),1,0);
      puVar1 = PTR_DAT_057815e0;
      lVar4 = *(long *)(param_3 + 0x68);
      if (lVar4 != 0) {
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
        lVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
        *(undefined1 *)(lVar4 + 0x38) = 1;
        Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimation__PlayLoops_38c8c00
                  (lVar4);
        if ((*(long *)(lVar4 + 0x18) != 0) && (lVar5 = *(long *)(lVar4 + 0x30), lVar5 != 0)) {
          uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x1c);
          UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
          if (*(long *)(lVar4 + 0x30) != 0) {
            UnityEngine_Transform__get_localPosition_4092c40(*(long *)(lVar4 + 0x30),0);
            UnityEngine_Transform__set_localPosition_4092ce0(uVar6,param_2,lVar5,0);
            lVar5 = *(long *)(lVar4 + 0x18);
            if (lVar5 != 0) {
              uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMoveX_1ee5860
                                (*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                                 *(undefined8 *)(lVar4 + 0x30),0,0);
              if (*(long *)(lVar4 + 0x18) != 0) {
                uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                  (uVar3,*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x30),
                                   *(undefined8 *)PTR_DAT_057874c0);
                DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar2,uVar3,0);
                puVar1 = PTR_DAT_057606c8;
                if (*(long *)(lVar4 + 0x18) != 0) {
                  uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                                    (0x3f800000,*(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x2c),
                                     *(undefined8 *)(lVar4 + 0x28),0);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar2,uVar3,0);
                  uVar3 = Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimation__PlayFadeAnimation_38c8c34
                                    (lVar4,1);
                  DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar2,uVar3,0);
                  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                  puVar1 = PTR_DAT_05809250;
                  if (lVar5 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar5,lVar4,*(undefined8 *)PTR_DAT_057f6dc0,0);
                    DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0
                              (lVar2,lVar5,*(undefined8 *)puVar1);
                    return lVar2;
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
  lVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
  *(undefined1 *)(lVar4 + 0x38) = 0;
  Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimation__CancelLoops_38c90e0
            (lVar4);
  if ((*(long *)(lVar4 + 0x18) != 0) && (lVar5 = *(long *)(lVar4 + 0x30), lVar5 != 0)) {
    uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x20);
    UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
    if (*(long *)(lVar4 + 0x30) != 0) {
      UnityEngine_Transform__get_localPosition_4092c40(*(long *)(lVar4 + 0x30),0);
      UnityEngine_Transform__set_localPosition_4092ce0(uVar6,param_2,lVar5,0);
      lVar5 = *(long *)(lVar4 + 0x18);
      if (lVar5 != 0) {
        uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMoveX_1ee5860
                          (*(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x24),
                           *(undefined8 *)(lVar4 + 0x30),0,0);
        if (*(long *)(lVar4 + 0x18) != 0) {
          uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar3,*(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x30),
                             *(undefined8 *)PTR_DAT_057874c0);
          DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar2,uVar3,0);
          puVar1 = PTR_DAT_057606c8;
          if (*(long *)(lVar4 + 0x18) != 0) {
            uVar3 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c
                              (0,*(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x28),
                               *(undefined8 *)(lVar4 + 0x28),0);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar2,uVar3,0);
            uVar3 = Modules_Contexts_Home_DuckFestival_Scripts_UI_Lobby_DuckFestivalLobbyMultiplierAnimation__PlayFadeAnimation_38c8c34
                              (lVar4,0);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,lVar2,uVar3,0);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            puVar1 = PTR_DAT_05809250;
            if (lVar5 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar5,lVar4,*(undefined8 *)PTR_DAT_057f6dc0,0);
              DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0
                        (lVar2,lVar5,*(undefined8 *)puVar1);
              return lVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

