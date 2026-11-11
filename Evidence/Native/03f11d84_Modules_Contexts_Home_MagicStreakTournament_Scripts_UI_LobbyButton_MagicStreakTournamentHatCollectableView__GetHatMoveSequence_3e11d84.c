/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentHatCollectableView$$GetHatMoveSequence
DG_Tweening_Sequence_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__GetHatMoveSequence (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView_o* __this, UnityEngine_SpriteRenderer_o* collectable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton.MagicStreakTournamentHatCollectableView$$GetHatMoveSequence
   DG_Tweening_Sequence_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__GetHatMoveSequence
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView_o*
   __this, UnityEngine_SpriteRenderer_o* collectable, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_LobbyButton_MagicStreakTournamentHatCollectableView__GetHatMoveSequence_3e11d84
          (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_0576e428;
  if ((bRam0000000005c3808d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057de720);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_0579f670);
    FUN_012d0dc8(PTR_DAT_0576e428);
    bRam0000000005c3808d = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057815e0;
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    plVar6 = (long *)(lVar2 + 0x10);
    *plVar6 = param_2;
    FUN_012d0d74(plVar6,param_2);
    *(long *)(lVar2 + 0x18) = param_1;
    FUN_012d0d74((long *)(lVar2 + 0x18),param_1);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
    if (*plVar6 != 0) {
      UnityEngine_SpriteRenderer__get_color_4095d44(*plVar6,0);
      if (*plVar6 != 0) {
        UnityEngine_SpriteRenderer__set_color_4095de0(*plVar6,0);
        if ((*plVar6 != 0) &&
           (lVar4 = UnityEngine_Component__get_gameObject_408b480(*plVar6,0), lVar4 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
          if (*(long *)(param_1 + 0x18) != 0) {
            uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                              (0x3f800000,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0xdc),*plVar6,
                               0);
            DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar5,0);
            if (*(long *)(param_1 + 0x18) != 0) {
              DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                        (*(undefined4 *)(*(long *)(param_1 + 0x18) + 0xb8),uVar3,0);
              if (*plVar6 != 0) {
                uVar5 = UnityEngine_Component__get_transform_408b444(*plVar6,0);
                lVar4 = *(long *)(param_1 + 0x18);
                if (lVar4 != 0) {
                  uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                    (*(undefined4 *)(lVar4 + 0xbc),*(undefined4 *)(lVar4 + 0xc0),
                                     *(undefined4 *)(lVar4 + 0xc4),*(undefined4 *)(lVar4 + 200),
                                     uVar5,0);
                  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar5,0);
                  if (*plVar6 != 0) {
                    uVar5 = UnityEngine_Component__get_transform_408b444(*plVar6,0);
                    lVar4 = *(long *)(param_1 + 0x18);
                    if (lVar4 != 0) {
                      uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                                        (*(undefined4 *)(lVar4 + 0xcc),*(undefined4 *)(lVar4 + 0xd0)
                                         ,*(undefined4 *)(lVar4 + 0xd4),
                                         *(undefined4 *)(lVar4 + 0xd8),uVar5,0);
                      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar5,0);
                      if (*plVar6 != 0) {
                        uVar5 = UnityEngine_Component__get_transform_408b444(*plVar6,0);
                        if (*(long *)(param_1 + 0x18) != 0) {
                          uStack_48 = 0;
                          uStack_40 = 0;
                          uStack_38 = 0;
                          uVar5 = DG_Tweening_ShortcutExtensions__DOLocalPath_1ee937c
                                            (*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x90),uVar5
                                             ,*(undefined8 *)(param_1 + 0x48),1,1,10,&uStack_48,0);
                          uVar5 = DG_Tweening_TweenSettingsExtensions__SetOptions_1eee58c
                                            (uVar5,0,0,0,0);
                          puVar1 = PTR_DAT_057606c8;
                          if (*(long *)(param_1 + 0x18) != 0) {
                            uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                              (uVar5,*(undefined8 *)
                                                      (*(long *)(param_1 + 0x18) + 0x98),
                                               *(undefined8 *)PTR_DAT_057ccae0);
                            lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                            puVar1 = PTR_DAT_057de720;
                            if (lVar4 != 0) {
                              DG_Tweening_TweenCallback___ctor_1ed6da8
                                        (lVar4,lVar2,*(undefined8 *)PTR_DAT_0579f670,0);
                              uVar5 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                                                (uVar5,lVar4,*(undefined8 *)puVar1);
                              DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar5,0);
                              return uVar3;
                            }
                          }
                        }
                      }
                    }
                  }
                }
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

