/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$PlayBoardMoveAnimation
void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlayBoardMoveAnimation (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelEntranceHandler$$PlayBoardMoveAnimation
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlayBoardMoveAnimation
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelEntranceHandler__PlayBoardMoveAnimation_1f17f60
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  long lStack_78;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c28644 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    FUN_012d0dc8(PTR_DAT_057655b0);
    FUN_012d0dc8(PTR_DAT_05814830);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05811e40);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057a5968);
    FUN_012d0dc8(PTR_DAT_0581b5f8);
    FUN_012d0dc8(PTR_DAT_057ab370);
    FUN_012d0dc8(PTR_DAT_057ac830);
    bRam0000000005c28644 = 1;
  }
  puVar2 = PTR_DAT_05814830;
  lStack_78 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
    if (*(long *)(param_4 + 0x10) != 0) {
      lVar11 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)PTR_DAT_057655b0);
      puVar1 = PTR_DAT_0576aae0;
      if ((*(long *)(param_4 + 0x10) != 0) && (lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int___Invoke_333cfd8
                  (lVar5,*(undefined4 *)(*(long *)(param_4 + 0x10) + 0x20),
                   *(undefined8 *)PTR_DAT_05811e40);
        if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
           (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
          lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar5,*(undefined8 *)PTR_DAT_05793328);
          puVar1 = PTR_DAT_057815e0;
          if (lVar11 != 0) {
            lVar12 = *(long *)(lVar11 + 0x18);
            uVar16 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBoardPosition_22fb0d0
                               (0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
            if (*(long *)(param_4 + 0x18) != 0) {
              DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                        (*(undefined4 *)(*(long *)(param_4 + 0x18) + 0x20),uVar6,0);
              if ((*(long *)(lVar11 + 0x10) != 0) && (*(long *)(param_4 + 0x18) != 0)) {
                uVar16 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                                   (uVar16,param_2,param_3,
                                    *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x18),
                                    *(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x18),0,0);
                if (*(long *)(param_4 + 0x18) != 0) {
                  uVar16 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                     (uVar16,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x28),
                                      *(undefined8 *)PTR_DAT_057874c0);
                  DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar16,0);
                  puVar4 = PTR_DAT_0581b5f8;
                  puVar3 = PTR_DAT_057b43e8;
                  puVar2 = PTR_DAT_057ab370;
                  puVar1 = PTR_DAT_057606c8;
                  fVar18 = (float)param_3;
                  fVar17 = (float)param_2;
                  if (lVar12 != 0) {
                    if (0 < *(int *)(lVar12 + 0x18)) {
                      iVar13 = 0;
                      do {
                        lVar11 = System_Collections_Generic_List_object___get_Item_21fc76c
                                           (lVar12,iVar13,*(undefined8 *)PTR_DAT_057b0e08);
                        if (lVar11 == 0) goto LAB_0201846c;
                        if (0 < *(int *)(lVar11 + 0x18)) {
                          iVar14 = 0;
                          do {
                            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                            if (lVar7 == 0) goto LAB_0201846c;
                            System_Object___ctor_23dfe5c(lVar7,0);
                            uVar16 = System_Collections_Generic_List_object___get_Item_21fc76c
                                               (lVar11,iVar14,*(undefined8 *)puVar3);
                            *(undefined8 *)(lVar7 + 0x10) = uVar16;
                            FUN_012d0d74();
                            lVar10 = *(long *)(param_4 + 0x18);
                            if (lVar10 == 0) goto LAB_0201846c;
                            fVar18 = *(float *)(lVar10 + 0x18);
                            fVar17 = *(float *)(lVar10 + 0x1c);
                            lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                            if (lVar10 == 0) goto LAB_0201846c;
                            DG_Tweening_TweenCallback___ctor_1ed6da8
                                      (lVar10,lVar7,*(undefined8 *)puVar4,0);
                            DG_Tweening_DOVirtual__DelayedCall_1edcb38
                                      (fVar17 + fVar18 * 0.5,lVar10,0,0);
                            iVar14 = iVar14 + 1;
                          } while (iVar14 < *(int *)(lVar11 + 0x18));
                        }
                        fVar18 = (float)param_3;
                        fVar17 = (float)param_2;
                        iVar13 = iVar13 + 1;
                      } while (iVar13 < *(int *)(lVar12 + 0x18));
                    }
                    if (*(long *)(param_4 + 0x10) != 0) {
                      uVar8 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__TryGetPreviousBottleCollection_2d94a3c
                                        (*(long *)(param_4 + 0x10),&lStack_78,0);
                      lVar11 = lStack_78;
                      if ((uVar8 & 1) != 0) {
                        if (lVar5 == 0) goto LAB_0201846c;
                        Modules_Infrastructure_Common_Scripts_CameraService__GetWidth_40e2fe0
                                  (lVar5,0);
                        fVar15 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBoardOutPosition_22fb050
                                                  (lVar11,0);
                        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
                          thunk_FUN_0130472c();
                        }
                        uVar16 = DG_Tweening_DOTween__Sequence_1eda154(0);
                        if (*(long *)(param_4 + 0x18) == 0) goto LAB_0201846c;
                        DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                                  (*(undefined4 *)(*(long *)(param_4 + 0x18) + 0x20),uVar16,0);
                        if (((lStack_78 == 0) || (*(long *)(lStack_78 + 0x10) == 0)) ||
                           (*(long *)(param_4 + 0x18) == 0)) goto LAB_0201846c;
                        uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                                          (-fVar15,-fVar17,-fVar18,
                                           *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x18),
                                           *(undefined8 *)(*(long *)(lStack_78 + 0x10) + 0x18),0,0);
                        if (*(long *)(param_4 + 0x18) == 0) goto LAB_0201846c;
                        uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                          (uVar6,*(undefined8 *)(*(long *)(param_4 + 0x18) + 0x28),
                                           *(undefined8 *)PTR_DAT_057874c0);
                        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar16,uVar6,0);
                      }
                      puVar2 = PTR_DAT_057ac830;
                      lVar5 = *(long *)(param_4 + 0x18);
                      if (lVar5 != 0) {
                        fVar17 = *(float *)(lVar5 + 0x18);
                        fVar18 = *(float *)(lVar5 + 0x20);
                        lVar5 = *(long *)PTR_DAT_057ac830;
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          thunk_FUN_0130472c();
                          lVar5 = *(long *)puVar2;
                        }
                        lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                        if (lVar11 == 0) {
                          if (*(int *)(lVar5 + 0xe0) == 0) {
                            thunk_FUN_0130472c();
                            lVar5 = *(long *)puVar2;
                          }
                          uVar16 = **(undefined8 **)(lVar5 + 0xb8);
                          lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                          if (lVar11 == 0) goto LAB_0201846c;
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar11,uVar16,*(undefined8 *)PTR_DAT_057a5968,0);
                          plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                          *plVar9 = lVar11;
                          FUN_012d0d74(plVar9,lVar11);
                        }
                        DG_Tweening_DOVirtual__DelayedCall_1edcb38(fVar17 + fVar18,lVar11,0,0);
                        return;
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
LAB_0201846c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

