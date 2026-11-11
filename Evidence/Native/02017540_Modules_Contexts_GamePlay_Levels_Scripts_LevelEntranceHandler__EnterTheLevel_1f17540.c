/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$EnterTheLevel
void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__EnterTheLevel (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$EnterTheLevel
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__EnterTheLevel
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__EnterTheLevel_1f17540
               (long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_057cdfe8;
  if ((bRam0000000005c2863d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1640);
    FUN_012d0dc8(PTR_DAT_0579a748);
    FUN_012d0dc8(PTR_DAT_057f0450);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057eb3a0);
    FUN_012d0dc8(PTR_DAT_057cdfe8);
    bRam0000000005c2863d = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(long *)(lVar5 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar5 + 0x10),param_1);
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x20) + 0x48) != '\0') {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_02017800;
        Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager__Initialize_214bd98
                  (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),0);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_02017800;
        Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager__AddMagicBottleAndHide_214bdbc
                  (*(long *)(param_1 + 0x28),0);
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar10 = (long *)(param_1 + 0x40);
        *plVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
        FUN_012d0d74(plVar10);
        Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__InitializeSuperChargerInGameManager_1f17828
                  (param_1);
        Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__BeforeAnimationsStart_1f178c8
                  (param_1);
        lVar6 = Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__MoveBottlesToInLevelPosition_1f179ec
                          (param_1,*plVar10);
        if (*(long *)(param_1 + 0x20) != 0) {
          if (*(char *)(*(long *)(param_1 + 0x20) + 0x48) != '\0') {
            if (*plVar10 == 0) goto LAB_02017800;
            uVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                              (*plVar10,0);
            if (*plVar10 == 0) goto LAB_02017800;
            uVar4 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetHighestBottleCountInOneRow_2f6b574
                              (*plVar10,0);
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_02017800;
            uVar7 = Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleInGameManager__PlayMagicBottleAnimations_214be04
                              (*(long *)(param_1 + 0x28),uVar3,uVar4,0);
            DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar6,uVar7,0);
          }
          uVar8 = Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__ShouldPlaySuperChargerMagicBottleAnimations_1f17c94
                            (param_1);
          if ((uVar8 & 1) != 0) {
            if (*plVar10 == 0) goto LAB_02017800;
            uVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__get_BottleRowCount_2f61050
                              (*plVar10,0);
            if (*plVar10 == 0) goto LAB_02017800;
            uVar4 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetHighestBottleCountInOneRow_2f6b574
                              (*plVar10,0);
            uVar7 = Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlaySuperChargerMagicBottleAnimations_1f17d74
                              (param_1,uVar3,uVar4);
            DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(lVar6,uVar7,0);
          }
          puVar2 = PTR_DAT_057606c8;
          uVar8 = Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__IsSnitchActive_1f17da4
                            (param_1);
          if ((uVar8 & 1) == 0) {
            lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            lVar5 = param_1;
            puVar1 = (undefined8 *)PTR_DAT_057a1640;
          }
          else {
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_02017800;
            Modules_Contexts_GamePlay_Snitch_Scripts_SnitchInGameManager__Initialize_214007c
                      (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x10),0);
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_02017800;
            lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0)) {
              lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f0450);
              if (lVar9 == 0) goto LAB_02017800;
              System_Collections_Generic_List_object____ctor_21fc1fc
                        (lVar9,*(undefined8 *)PTR_DAT_0579a748);
            }
            *(long *)(lVar5 + 0x18) = lVar9;
            FUN_012d0d74((long *)(lVar5 + 0x18),lVar9);
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar9 == 0)) goto LAB_02017800;
            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar9 + 0x80);
            FUN_012d0d74();
            lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            puVar1 = (undefined8 *)PTR_DAT_057eb3a0;
          }
          if (lVar9 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,lVar5,*puVar1,0);
            uVar8 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar6,0,1);
            if ((lVar9 != 0) && ((uVar8 & 1) != 0)) {
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              DG_Tweening_Sequence__DoInsertCallback_1edffe8
                        (*(undefined4 *)(lVar6 + 0xa0),lVar6,lVar9);
            }
            return lVar6;
          }
        }
      }
    }
  }
LAB_02017800:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

