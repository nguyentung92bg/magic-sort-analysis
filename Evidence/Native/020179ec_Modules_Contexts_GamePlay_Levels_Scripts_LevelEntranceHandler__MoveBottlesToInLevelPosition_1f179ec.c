/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$MoveBottlesToInLevelPosition
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__MoveBottlesToInLevelPosition (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$MoveBottlesToInLevelPosition
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__MoveBottlesToInLevelPosition
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__MoveBottlesToInLevelPosition_1f179ec
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((bRam0000000005c28643 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c28643 = 1;
  }
  if (((param_5 != 0) && (**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0)) &&
     (lVar3 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar3 != 0)) {
    lVar6 = *(long *)(param_5 + 0x18);
    lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar3,*(undefined8 *)PTR_DAT_05793328);
    if (lVar3 != 0) {
      Modules_Infrastructure_Common_Scripts_CameraService__GetWidth_40e2fe0(lVar3,0);
      uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBoardOutPosition_22fb050
                        (param_5,0);
      uVar4 = param_2;
      uVar11 = param_3;
      uVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBoardPosition_22fb0d0
                         (0);
      puVar1 = PTR_DAT_057815e0;
      if (*(long *)(param_5 + 0x10) != 0) {
        Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetLocalPosition_2d97560
                  (uVar9,param_2,param_3,*(long *)(param_5 + 0x10),0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar9 = DG_Tweening_DOTween__Sequence_1eda154(0);
        if (*(long *)(param_4 + 0x18) != 0) {
          DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                    (*(undefined4 *)(*(long *)(param_4 + 0x18) + 0x1c),uVar9,0);
          if ((*(long *)(param_5 + 0x10) != 0) && (*(long *)(param_4 + 0x18) != 0)) {
            uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                              (uVar10,uVar4,uVar11,*(undefined4 *)(*(long *)(param_4 + 0x18) + 0x18)
                               ,*(undefined8 *)(*(long *)(param_5 + 0x10) + 0x18),0,0);
            if (*(long *)(param_4 + 0x18) != 0) {
              uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar4,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x28),
                                 *(undefined8 *)PTR_DAT_057874c0);
              DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar9,uVar4,0);
              puVar2 = PTR_DAT_057b43e8;
              puVar1 = PTR_DAT_057b0e08;
              if (lVar6 != 0) {
                if (0 < *(int *)(lVar6 + 0x18)) {
                  iVar7 = 0;
                  do {
                    lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                                      (lVar6,iVar7,*(undefined8 *)puVar1);
                    if (lVar3 == 0) goto LAB_02017c74;
                    if (0 < *(int *)(lVar3 + 0x18)) {
                      iVar8 = 0;
                      do {
                        lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                                          (lVar3,iVar8,*(undefined8 *)puVar2);
                        if ((*(long *)(param_4 + 0x18) == 0) || (lVar5 == 0)) goto LAB_02017c74;
                        uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayLevelEntranceAnimation_24943a0
                                          (*(undefined4 *)(*(long *)(param_4 + 0x18) + 0x18),lVar5,0
                                          );
                        DG_Tweening_TweenSettingsExtensions__Join_1ee8bcc(uVar9,uVar4,0);
                        iVar8 = iVar8 + 1;
                      } while (iVar8 < *(int *)(lVar3 + 0x18));
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < *(int *)(lVar6 + 0x18));
                }
                return uVar9;
              }
            }
          }
        }
      }
    }
  }
LAB_02017c74:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

