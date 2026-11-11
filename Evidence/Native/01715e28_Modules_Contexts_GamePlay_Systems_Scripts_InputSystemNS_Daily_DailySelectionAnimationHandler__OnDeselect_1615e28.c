/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Daily.DailySelectionAnimationHandler$$OnDeselect
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__OnDeselect (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Daily.DailySelectionAnimationHandler$$OnDeselect
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__OnDeselect
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler_o*
   __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__OnDeselect_1615e28
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  
  puVar1 = PTR_DAT_05800698;
  uVar4 = param_2._4_4_;
  fVar15 = param_2._0_4_;
  if ((bRam0000000005c2449c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057871c8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057fda38);
    FUN_012d0dc8(PTR_DAT_057b8fb0);
    FUN_012d0dc8(PTR_DAT_05768ec0);
    FUN_012d0dc8(PTR_DAT_057d3478);
    FUN_012d0dc8(PTR_DAT_05800698);
    bRam0000000005c2449c = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    System_Object___ctor_23dfe5c(lVar6,0);
    plVar14 = (long *)(lVar6 + 0x38);
    *plVar14 = param_4;
    FUN_012d0d74(plVar14,param_4);
    if (*plVar14 != 0) {
      plVar13 = (long *)(lVar6 + 0x10);
      *plVar13 = *(long *)(*plVar14 + 0x10);
      FUN_012d0d74(plVar13);
      if (*plVar13 != 0) {
        uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                          (*plVar13,0);
        *(undefined8 *)(lVar6 + 0x18) = uVar7;
        FUN_012d0d74((undefined8 *)(lVar6 + 0x18),uVar7);
        if ((*(long *)(lVar6 + 0x38) != 0) && (*plVar13 != 0)) {
          lVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater_24956b8
                            (*plVar13,0);
          plVar14 = (long *)(lVar6 + 0x30);
          *plVar14 = lVar8;
          FUN_012d0d74(plVar14,lVar8);
          if (*plVar14 == 0) {
            if ((*plVar13 == 0) ||
               (plVar14 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                            (*plVar13,0), plVar14 == (long *)0x0))
            goto LAB_01716270;
            lVar8 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0575a2d8) {
                  puVar9 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_01716008;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar14,*(long *)PTR_DAT_0575a2d8,0);
LAB_01716008:
            (*(code *)*puVar9)(plVar14,puVar9[1]);
            lVar8 = *plVar13;
            if ((lVar8 == 0) || (*(long *)(lVar8 + 0xa0) == 0)) goto LAB_01716270;
            uVar11 = (ulong)(uint)(fVar15 + *(float *)(*(long *)(lVar8 + 0xa0) + 0x100));
          }
          else {
            Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378
                      (*plVar14,0);
            lVar8 = *plVar13;
            if (lVar8 == 0) goto LAB_01716270;
            uVar11 = CONCAT44(uVar4,fVar15);
          }
          uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                            (lVar8,0);
          uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                            (lVar8,uVar7,0);
          *(undefined4 *)(lVar6 + 0x20) = uVar4;
          if (*(long *)(lVar6 + 0x18) != 0) {
            *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(*(long *)(lVar6 + 0x18) + 0x40);
            if (*(long *)(lVar6 + 0x10) != 0) {
              uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorAndColorId_249556c
                                (*(long *)(lVar6 + 0x10),0);
              *(undefined8 *)(lVar6 + 0x28) = uVar7;
              FUN_012d0d74((undefined8 *)(lVar6 + 0x28),uVar7);
              puVar1 = PTR_DAT_057606c8;
              if ((*(long *)(lVar6 + 0x10) != 0) &&
                 (lVar8 = *(long *)(*(long *)(lVar6 + 0x10) + 0xa0), lVar8 != 0)) {
                uVar4 = *(undefined4 *)(lVar8 + 0xf0);
                lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
                if (lVar8 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar8,lVar6,*(undefined8 *)PTR_DAT_057fda38,0);
                  DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar4,lVar8,0,0);
                  if ((*(long *)(lVar6 + 0x10) != 0) &&
                     (lVar8 = *(long *)(*(long *)(lVar6 + 0x10) + 0xa0), lVar8 != 0)) {
                    uVar4 = *(undefined4 *)(lVar8 + 0x104);
                    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    if (lVar8 != 0) {
                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                (lVar8,lVar6,*(undefined8 *)PTR_DAT_057b8fb0,0);
                      DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar4,lVar8,0,0);
                      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                      puVar3 = PTR_DAT_057ec790;
                      puVar2 = PTR_DAT_057b8520;
                      if (lVar8 != 0) {
                        DG_Tweening_TweenCallback___ctor_1ed6da8
                                  (lVar8,lVar6,*(undefined8 *)PTR_DAT_05768ec0,0);
                        DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_04339bf8,lVar8,0,0);
                        iVar5 = UnityEngine_Random__Range_383a650(0,2,0);
                        uVar4 = 0x3a;
                        if (iVar5 != 0) {
                          uVar4 = 0x3b;
                        }
                        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                          thunk_FUN_0130472c();
                        }
                        lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                          (*(undefined8 *)puVar3);
                        if (lVar8 != 0) {
                          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                                    (lVar8,uVar4,*(undefined8 *)PTR_DAT_057871c8);
                          if (*plVar13 != 0) {
                            lVar8 = *(long *)(param_3 + 0x18);
                            uVar7 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                              (*plVar13,0);
                            if (lVar8 != 0) {
                              Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent_40ea518
                                        (lVar8,uVar7,0);
                              if (*(long *)(param_3 + 0x18) != 0) {
                                Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayResetScale_23091f4
                                          (*(long *)(param_3 + 0x18),0);
                                if (*(long *)(param_3 + 0x18) != 0) {
                                  lVar8 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobDeselect_2309280
                                                    (uVar11,*(long *)(param_3 + 0x18),0);
                                  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                                  puVar1 = PTR_DAT_0579e470;
                                  if (lVar10 != 0) {
                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                              (lVar10,lVar6,*(undefined8 *)PTR_DAT_057d3478,0);
                                    uVar7 = *(undefined8 *)puVar1;
                                    if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) {
                                      *(long *)(lVar8 + 0x80) = lVar10;
                                      FUN_012d0d74((long *)(lVar8 + 0x80),lVar10,uVar7);
                                    }
                                    return lVar8;
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
LAB_01716270:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

