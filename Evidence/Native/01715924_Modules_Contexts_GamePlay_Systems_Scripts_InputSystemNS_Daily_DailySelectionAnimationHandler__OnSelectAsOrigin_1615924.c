/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Daily.DailySelectionAnimationHandler$$OnSelectAsOrigin
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__OnSelectAsOrigin (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Daily.DailySelectionAnimationHandler$$OnSelectAsOrigin
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__OnSelectAsOrigin
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler_o*
   __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__OnSelectAsOrigin_1615924
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar19;
  ulong uVar23;
  
  puVar1 = PTR_DAT_057ab170;
  if ((bRam0000000005c2449a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e2b58);
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057ddea8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    FUN_012d0dc8(PTR_DAT_057a9798);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057b9a20);
    FUN_012d0dc8(PTR_DAT_057ab170);
    bRam0000000005c2449a = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar6 != 0) && (System_Object___ctor_23dfe5c(lVar6,0), param_2 != 0)) {
    plVar11 = (long *)(lVar6 + 0x10);
    *plVar11 = *(long *)(param_2 + 0x10);
    FUN_012d0d74(plVar11);
    if (*plVar11 != 0) {
      plVar7 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                 (*plVar11,0);
      if (*plVar11 != 0) {
        uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetFillAmount_2499c48
                          (*plVar11,0);
        if (*plVar11 != 0) {
          lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorAndColorId_249556c
                            (*plVar11,0);
          if (*plVar11 != 0) {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__StopAndClearParticles_249d824
                      (*plVar11,0);
            puVar1 = PTR_DAT_0576aae0;
            if (*plVar11 != 0) {
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnSelectAsOrigin_2496d10
                        (*plVar11,param_2,0);
              lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
              if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
                lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar9,*(undefined8 *)PTR_DAT_0575c3c8);
                lVar10 = **(long **)(*(long *)puVar1 + 0xb8);
                if ((lVar10 != 0) &&
                   (((lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0 &&
                     (lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                         (lVar10,*(undefined8 *)PTR_DAT_057e2b58), lVar9 != 0)) &&
                    (uVar4 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetOverBoardItemsSortOrder_4002858
                                       (lVar9,0), lVar10 != 0)))) {
                  lVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetBlobItemPart_2301258
                                    (lVar10,uVar4,0);
                  plVar12 = (long *)(param_1 + 0x18);
                  *plVar12 = lVar9;
                  FUN_012d0d74(plVar12,lVar9);
                  if ((lVar8 != 0) && (*plVar12 != 0)) {
                    uVar22 = (ulong)*(uint *)(lVar8 + 0x90);
                    uVar18 = (ulong)*(uint *)(lVar8 + 0x8c);
                    Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__SetColor_230913c
                              (*(undefined4 *)(lVar8 + 0x88),uVar18,uVar22,
                               *(undefined4 *)(lVar8 + 0x94),*plVar12,0);
                    if ((*plVar11 != 0) &&
                       (lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                          (*plVar11,0), lVar8 != 0)) {
                      uVar15 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetMidPosition_1e9e3f0
                                         (lVar8,0);
                      if (*plVar11 != 0) {
                        uVar19 = uVar18;
                        uVar23 = uVar22;
                        lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterLineTransformRight_249d848
                                          (*plVar11,0);
                        fVar20 = (float)uVar23;
                        fVar16 = (float)uVar19;
                        if (lVar8 != 0) {
                          fVar13 = (float)UnityEngine_Transform__get_position_4092b08(lVar8,0);
                          if (*plVar11 != 0) {
                            fVar17 = fVar16;
                            fVar21 = fVar20;
                            lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterLineTransformLeft_249d864
                                              (*plVar11,0);
                            if (lVar8 != 0) {
                              fVar14 = (float)UnityEngine_Transform__get_position_4092b08(lVar8,0);
                              if (*plVar12 != 0) {
                                Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetPosition_40ea674
                                          (uVar15,uVar18,uVar22,*plVar12,0);
                                if (*plVar11 != 0) {
                                  lVar8 = *plVar12;
                                  uVar15 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                                     (*plVar11,0);
                                  if (lVar8 != 0) {
                                    Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent_40ea518
                                              (lVar8,uVar15,0);
                                    puVar1 = PTR_DAT_057606c8;
                                    if ((*plVar11 != 0) &&
                                       (lVar8 = *(long *)(*plVar11 + 0xa0), lVar8 != 0)) {
                                      uVar15 = BakedFluid_BottleAnimationConfig__GetBottleStretchOutOnSelectTime_3af59e0
                                                         (lVar8,uVar3,0);
                                      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                      if (lVar8 != 0) {
                                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                                  (lVar8,lVar6,*(undefined8 *)PTR_DAT_057b9a20,0);
                                        DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar15,lVar8,0,0)
                                        ;
                                        if ((plVar7 != (long *)0x0) && (*plVar12 != 0)) {
                                          Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobUpAnimation_2308ed0
                                                    ((fVar13 + fVar14) * 0.5,(fVar16 + fVar17) * 0.5
                                                     ,(fVar20 + fVar21) * 0.5,*plVar12,
                                                     (int)plVar7[8],uVar3,0);
                                          (**(code **)(*plVar7 + 0x288))
                                                    (plVar7,*(undefined8 *)(*plVar7 + 0x290));
                                          puVar1 = PTR_DAT_057b8520;
                                          if (*plVar11 != 0) {
                                            lVar6 = 
                                                  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater_24956b8
                                                            (*plVar11,0);
                                            if (lVar6 != 0) {
                                              Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse_1e9e33c
                                                        (lVar6,1,0);
                                              iVar5 = 
                                                  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetEllipseSortOrder_1e9e818
                                                            (lVar6,0);
                                              Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetEclipseSortOrder_1e9e448
                                                        (lVar6,iVar5 + 200,0);
                                              Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayDailyBlobBelowWaterShake_1e9e464
                                                        (lVar6,0);
                                            }
                                            puVar2 = PTR_DAT_057ddea8;
                                            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                              thunk_FUN_0130472c();
                                            }
                                            lVar6 = 
                                                  Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                                            (*(undefined8 *)puVar2);
                                            puVar1 = PTR_DAT_057ec790;
                                            if (lVar6 != 0) {
                                              Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Invoke_333d418
                                                        (lVar6,*plVar11,
                                                         *(undefined8 *)PTR_DAT_057a9798);
                                              lVar6 = 
                                                  Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                                            (*(undefined8 *)puVar1);
                                              if (lVar6 != 0) {
                                                if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (**(code **)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)PTR_DAT_057871c8 + 0x20) + 0xc0) + 0x20) + 8))
                                                            (*(long *)(lVar6 + 0x10),0x39);
                                                  return;
                                                }
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

