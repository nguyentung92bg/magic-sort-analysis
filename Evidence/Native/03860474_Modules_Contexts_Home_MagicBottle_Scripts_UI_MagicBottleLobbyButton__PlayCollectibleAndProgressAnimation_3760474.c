/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleLobbyButton$$PlayCollectibleAndProgressAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton__PlayCollectibleAndProgressAnimation (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleLobbyButton$$PlayCollectibleAndProgressAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton__PlayCollectibleAndProgressAnimation
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleLobbyButton__PlayCollectibleAndProgressAnimation_3760474
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uStack_38;
  int iStack_34;
  
  if ((bRam0000000005c33bc0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057615b8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057c0628);
    bRam0000000005c33bc0 = 1;
  }
  puVar1 = PTR_DAT_057db748;
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar6 = *(long **)(param_1 + 0x38);
    iStack_34 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__GetProgress_375d714();
    iStack_34 = iStack_34 + -1;
    uVar3 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_34);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar4 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__get_ConfigModel_375d28c
                          (*(long *)(param_1 + 0x48)), puVar2 = PTR_DAT_057c0628, lVar4 != 0)) {
      uStack_38 = *(undefined4 *)(lVar4 + 0x18);
      uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_38);
      uVar3 = System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar3,uVar5,0);
      puVar1 = PTR_DAT_057815e0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x558))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x560));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar5 = Modules_Contexts_Home_TowerWinStreak_Scripts_UI_LobbyIconCollectibleAnimation__PlayAnimation_32e5000
                            (*(long *)(param_1 + 0x28),0,0);
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar5,0);
          if (*(long *)(param_1 + 0x40) != 0) {
            uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x28);
            lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
            if (lVar4 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar4,param_1,*(undefined8 *)PTR_DAT_057615b8,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar7,uVar3,lVar4,0);
              return uVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

