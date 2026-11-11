/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Daily.DailySelectionAnimationHandler$$ApplySelection
void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__ApplySelection (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01716df4) */
/* WARNING: Removing unreachable block (ram,0x01716df0) */
/* WARNING: Removing unreachable block (ram,0x01716f94) */
/* WARNING: Removing unreachable block (ram,0x01716ffc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Daily.DailySelectionAnimationHandler$$ApplySelection
   void 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__ApplySelection
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler_o*
   __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Daily_DailySelectionAnimationHandler__ApplySelection_161631c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  puVar2 = PTR_DAT_0575adc0;
  if ((bRam0000000005c2449d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e2b58);
    FUN_012d0dc8(PTR_DAT_057682f8);
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05812de8);
    FUN_012d0dc8(PTR_DAT_05790438);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057e7670);
    FUN_012d0dc8(PTR_DAT_05809250);
    FUN_012d0dc8(PTR_DAT_057b8560);
    FUN_012d0dc8(PTR_DAT_05794cd0);
    FUN_012d0dc8(PTR_DAT_057f0f90);
    FUN_012d0dc8(PTR_DAT_05775598);
    FUN_012d0dc8(PTR_DAT_0579e970);
    FUN_012d0dc8(PTR_DAT_057c27f0);
    FUN_012d0dc8(PTR_DAT_05808db0);
    FUN_012d0dc8(PTR_DAT_0575adc0);
    FUN_012d0dc8(PTR_DAT_057e7838);
    FUN_012d0dc8(PTR_DAT_057afab0);
    bRam0000000005c2449d = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar8 == 0) goto LAB_01716fbc;
  System_Object___ctor_23dfe5c(lVar8,0);
  plVar18 = (long *)(lVar8 + 0x38);
  *plVar18 = param_2;
  FUN_012d0d74(plVar18,param_2);
  if (*plVar18 == 0) goto LAB_01716fbc;
  plVar19 = (long *)(lVar8 + 0x20);
  *plVar19 = *(long *)(*plVar18 + 0x10);
  FUN_012d0d74(plVar19);
  if (*(long *)(lVar8 + 0x38) == 0) goto LAB_01716fbc;
  plVar21 = (long *)(lVar8 + 0x10);
  *plVar21 = *(long *)(*(long *)(lVar8 + 0x38) + 0x18);
  FUN_012d0d74(plVar21);
  puVar1 = PTR_DAT_057b8520;
  puVar2 = PTR_DAT_05790438;
  if (*(long *)(lVar8 + 0x38) == 0) goto LAB_01716fbc;
  plVar20 = (long *)(lVar8 + 0x30);
  *plVar20 = *(long *)(*(long *)(lVar8 + 0x38) + 0x30);
  FUN_012d0d74(plVar20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar9 == 0) goto LAB_01716fbc;
  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar9,0);
  if ((*plVar19 == 0) ||
     (plVar10 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                  (*plVar19,0), plVar10 == (long *)0x0)) goto LAB_01716fbc;
  (**(code **)(*plVar10 + 0x278))(plVar10,*(undefined8 *)(*plVar10 + 0x280));
  if (*(long *)(param_1 + 0x10) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x10),0,0);
  }
  puVar2 = PTR_DAT_0576aae0;
  if (((*plVar18 == 0) || (lVar9 = *(long *)(*plVar18 + 0x28), lVar9 == 0)) ||
     (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) goto LAB_01716fbc;
                    /* try { // try from 01716580 to 01816863 has its CatchHandler @ 01716580
                       catch() { ... } // from try @ 01716580 with catch @ 01716580
                       catch() { ... } // from try @ 01716958 with catch @ 01716580
                       catch() { ... } // from try @ 01716a00 with catch @ 01716580
                       catch() { ... } // from try @ 01716a0c with catch @ 01716580
                       catch() { ... } // from try @ 01716aac with catch @ 01716580 */
  *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(lVar9 + 0x18);
  FUN_012d0d74();
  if (((**(long **)(*(long *)puVar2 + 0xb8) == 0) ||
      (lVar9 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar9 == 0)) ||
     (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar9,*(undefined8 *)PTR_DAT_057682f8), lVar9 == 0)) goto LAB_01716fbc;
  lVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory__GetObject_2304f00
                    (lVar9,*(undefined8 *)(lVar8 + 0x40),0);
  plVar10 = (long *)(lVar8 + 0x48);
  *plVar10 = lVar9;
  FUN_012d0d74(plVar10,lVar9);
  if ((*plVar10 == 0) || (*plVar19 == 0)) goto LAB_01716fbc;
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48
            (*plVar19,*(undefined8 *)(*plVar10 + 0x18),0);
  puVar1 = PTR_DAT_057815e0;
  lVar9 = *plVar20;
  if ((lVar9 == 0) || ((*(long *)(lVar9 + 0x10) == 0 || (*plVar21 == 0)))) goto LAB_01716fbc;
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddWater_249ce6c
            (*plVar21,*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(*(long *)(lVar9 + 0x10) + 0x70),
             1,0,0,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar11 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar1 = PTR_DAT_0575a2d8;
  if (*plVar21 == 0) goto LAB_01716fbc;
  lVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                    (*plVar21,0);
  if (lVar9 == 0) {
LAB_017166b4:
    if ((*plVar21 == 0) ||
       (plVar20 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                    (*plVar21,0), plVar20 == (long *)0x0)) goto LAB_01716fbc;
    lVar9 = *plVar20;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar13 != 0) {
      piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
          puVar14 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01716718;
        }
        uVar13 = uVar13 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_0131971c(plVar20,*(long *)puVar1,0);
LAB_01716718:
    (*(code *)*puVar14)(plVar20,puVar14[1]);
  }
  else {
    if (*plVar21 == 0) goto LAB_01716fbc;
    iVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterCountBelowTheTopWater_2494c4c
                      (*plVar21,0);
    if (iVar5 == 0) goto LAB_017166b4;
    if ((*plVar21 == 0) ||
       (lVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                          (*plVar21,0), lVar9 == 0)) goto LAB_01716fbc;
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378(lVar9,0);
  }
  if (*plVar21 != 0) {
    lVar9 = *(long *)(param_1 + 0x18);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBlobUpPosition_249d968
              (*plVar21,0);
    puVar1 = PTR_DAT_057606c8;
    if (lVar9 != 0) {
      uVar24 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__GetFirstPathDuration_2308b38
                         (lVar9,0);
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar9 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar9,lVar8,*(undefined8 *)PTR_DAT_05794cd0,0);
        DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar24,lVar9,0,0);
        if ((*(long *)(lVar8 + 0x38) != 0) &&
           (lVar9 = *(long *)(*(long *)(lVar8 + 0x38) + 0x28), lVar9 != 0)) {
          iVar5 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleIndex_2f6bb38
                            (lVar9,*plVar19,0);
          if ((*plVar18 != 0) && (lVar9 = *(long *)(*plVar18 + 0x28), lVar9 != 0)) {
            iVar6 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleIndex_2f6bb38
                              (lVar9,*plVar21,0);
            if (cRam0000000005c23dd6 == '\0') {
              FUN_012d0dc8(PTR_DAT_057d6f00);
              cRam0000000005c23dd6 = '\x01';
            }
            iVar5 = iVar5 - iVar6;
            if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            puVar14 = (undefined8 *)PTR_DAT_057606c8;
            iVar6 = -iVar5;
            if (-1 < iVar5) {
              iVar6 = iVar5;
            }
            if (*plVar21 != 0) {
              lVar9 = *(long *)(param_1 + 0x18);
              Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBlobUpPosition_249d968
                        (*plVar21,0);
              if (lVar9 != 0) {
                    /* try { // try from 01716864 to 0181688b has its CatchHandler @ 01716a24 */
                Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobDownAnimation_2308b7c
                          (lVar9,iVar6,0);
                if (*plVar21 != 0) {
                  lVar9 = *(long *)(param_1 + 0x18);
                  uVar12 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                     (*plVar21,0);
                  if (lVar9 != 0) {
                    Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent_40ea518
                              (lVar9,uVar12,0);
                    if (*plVar21 != 0) {
                      lVar9 = *(long *)(param_1 + 0x18);
                      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBlobUpPosition_249d968
                                (*plVar21,0);
                      if (lVar9 != 0) {
                        uVar12 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__GetTotalBlobPathDuration_2308d90
                                           (lVar9,0);
                    /* try { // try from 017168c0 to 018168eb has its CatchHandler @ 01716a20 */
                        iVar5 = UnityEngine_Random__Range_383a650(0,2,0);
                        uVar7 = 0x3a;
                        if (iVar5 != 0) {
                          uVar7 = 0x3b;
                        }
                        *(undefined4 *)(lVar8 + 0x18) = uVar7;
                        lVar9 = thunk_FUN_01320e48(*puVar14);
                        if (lVar9 != 0) {
                          DG_Tweening_TweenCallback___ctor_1ed6da8
                                    (lVar9,lVar8,*(undefined8 *)PTR_DAT_057f0f90,0);
                          DG_Tweening_DOVirtual__DelayedCall_1edcb38
                                    ((float)uVar24 + _UNK_04339bfc,lVar9,1,0);
                          if (*(long *)(lVar8 + 0x20) != 0) {
                            uVar24 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetSecondTopWater_24956b8
                                               (*(long *)(lVar8 + 0x20),0);
                    /* try { // try from 01716938 to 01816957 has its CatchHandler @ 01716a1c */
                            *(undefined8 *)(lVar8 + 0x28) = uVar24;
                            FUN_012d0d74((undefined8 *)(lVar8 + 0x28),uVar24);
                            lVar9 = *(long *)(lVar8 + 0x30);
                            if (lVar9 != 0) {
                    /* try { // try from 01716958 to 018169fb has its CatchHandler @ 01716580 */
                              if (*(int *)(lVar9 + 0x28) < 1) {
                                if (*plVar19 == 0) goto LAB_01716fbc;
                                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveWater_249d448
                                          (*plVar19,*(undefined4 *)(lVar9 + 0x18),0);
                                plVar19 = (long *)*plVar19;
                                if (plVar19 == (long *)0x0) goto LAB_01716fbc;
                                (**(code **)(*plVar19 + 0x238))
                                          (plVar19,*plVar18,*(undefined8 *)(*plVar19 + 0x240));
                              }
                              else {
                                lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057afab0);
                                if (lVar9 == 0) goto LAB_01716fbc;
                                System_Object___ctor_23dfe5c(lVar9,0);
                                plVar18 = (long *)(lVar9 + 0x18);
                                *plVar18 = lVar8;
                                FUN_012d0d74(plVar18,lVar8);
                                lVar16 = *plVar18;
                                if (((lVar16 == 0) || (*(long *)(lVar16 + 0x30) == 0)) ||
                                   (*(long *)(lVar16 + 0x20) == 0)) goto LAB_01716fbc;
                                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__DecreaseWaterHeight_24990bc
                                          (*(long *)(lVar16 + 0x20),
                                           *(undefined4 *)(*(long *)(lVar16 + 0x30) + 0x18),0);
                                if ((*plVar18 == 0) ||
                                   (lVar16 = *(long *)(*plVar18 + 0x20), lVar16 == 0))
                                goto LAB_01716fbc;
                                lVar16 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                                   (lVar16,0);
                                plVar19 = (long *)(lVar9 + 0x10);
                                *plVar19 = lVar16;
                                FUN_012d0d74(plVar19,lVar16);
                                if ((*(long *)(lVar9 + 0x18) == 0) ||
                                   (lVar16 = *(long *)(*(long *)(lVar9 + 0x18) + 0x20), lVar16 == 0)
                                   ) goto LAB_01716fbc;
                                lVar22 = *plVar19;
                    /* try { // try from 017169fc to 018169ff has its CatchHandler @ 01716a18 */
                    /* try { // try from 01716a00 to 01816a07 has its CatchHandler @ 01716580 */
                                uVar24 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                                   (lVar16,0);
                    /* try { // try from 01716a08 to 01816a0b has its CatchHandler @ 01716a14 */
                    /* try { // try from 01716a0c to 01816a3b has its CatchHandler @ 01716580 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01716a08 with catch @ 01716a14
                        */
                                uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                                                  (lVar16,uVar24,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017169fc with catch @ 01716a18
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01716938 with catch @ 01716a1c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017168c0 with catch @ 01716a20
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01716864 with catch @ 01716a24
                        */
                                if (((*plVar18 == 0) ||
                                    (lVar16 = *(long *)(*plVar18 + 0x20), lVar16 == 0)) ||
                                   (lVar22 == 0)) goto LAB_01716fbc;
                    /* try { // try from 01716a3c to 01816a3f has its CatchHandler @ 01716ac0 */
                                Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
                                          (lVar22,0,uVar7,*(undefined4 *)(lVar16 + 0x48),0);
                                plVar19 = (long *)*plVar19;
                                if (plVar19 == (long *)0x0) goto LAB_01716fbc;
                                (**(code **)(*plVar19 + 0x288))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x290));
                                if ((**(long **)(*(long *)puVar2 + 0xb8) == 0) ||
                                   (lVar16 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18),
                                   lVar16 == 0)) goto LAB_01716fbc;
                                lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                   (lVar16,*(undefined8 *)PTR_DAT_0575c3c8);
                                puVar1 = PTR_DAT_058165e8;
                    /* try { // try from 01716a84 to 01816aab has its CatchHandler @ 01716acc */
                                if ((**(long **)(*(long *)puVar2 + 0xb8) == 0) ||
                                   (lVar22 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18),
                                   lVar22 == 0)) goto LAB_01716fbc;
                    /* try { // try from 01716aac to 01816ab7 has its CatchHandler @ 01716580 */
                                plVar19 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                                            (lVar22,*(undefined8 *)PTR_DAT_057e2b58)
                                ;
                    /* try { // try from 01716ab8 to 01816abf has its CatchHandler @ 01716acc */
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                    /* catch() { ... } // from try @ 01716a3c with catch @ 01716ac0 */
                                uVar13 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetOverBoardItemsSortOrder_4002858
                                                   (lVar16,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01716a84 with catch @ 01716acc
                       catch(type#2 @ 00000000) { ... } // from try @ 01716ab8 with catch @ 01716acc
                        */
                                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0(uVar13,uVar13 & 0xffffffff);
                                }
                                lVar16 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetBlobItemPart_2301258
                                                   (plVar19,uVar13 & 0xffffffff,0);
                                plVar21 = (long *)(param_1 + 0x20);
                                *plVar21 = lVar16;
                                FUN_012d0d74(plVar21);
                                if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar16 = *(long *)(param_1 + 0x20);
                                Modules_Infrastructure_Common_Scripts_Component_AItemPart__GetPosition_40ea5cc
                                          (*(long *)(param_1 + 0x18),0);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetPosition_40ea674
                                          (lVar16,0);
                                if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar16 = *(long *)(*plVar18 + 0x20);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar22 = *plVar21;
                                lVar16 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterColorAndColorId_249556c
                                                   (lVar16,0);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__SetColor_230913c
                                          (*(undefined4 *)(lVar16 + 0x88),
                                           *(undefined4 *)(lVar16 + 0x8c),
                                           *(undefined4 *)(lVar16 + 0x90),
                                           *(undefined4 *)(lVar16 + 0x94),lVar22,0);
                                if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar16 = *(long *)(*plVar18 + 0x20);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar22 = *plVar21;
                                uVar24 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                                   (lVar16,0);
                                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0(uVar24,uVar24);
                                }
                                Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent_40ea518
                                          (lVar22,uVar24,0);
                                if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar16 = *(long *)(*plVar18 + 0x10);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar16 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                                   (lVar16,0);
                                lVar22 = *plVar18;
                                if (lVar16 == 0) {
                                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  if (*(long *)(lVar22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  plVar20 = (long *)
                                                  Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                                            (*(long *)(lVar22 + 0x20),0);
                                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  lVar16 = *plVar20;
                                  uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
                                  if (uVar13 != 0) {
                                    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0575a2d8) {
                                        puVar14 = (undefined8 *)
                                                  (lVar16 + (long)*piVar17 * 0x10 + 0x138);
                                        goto LAB_01716c34;
                                      }
                                      uVar13 = uVar13 - 1;
                                      piVar17 = piVar17 + 4;
                                    } while (uVar13 != 0);
                                  }
                                  puVar14 = (undefined8 *)
                                            FUN_0131971c(plVar20,*(long *)PTR_DAT_0575a2d8,0);
LAB_01716c34:
                                  (*(code *)*puVar14)(plVar20,puVar14[1]);
                                }
                                else {
                                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  if (*(long *)(lVar22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  lVar16 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                                                     (*(long *)(lVar22 + 0x20),0);
                                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_012d0ef0();
                                  }
                                  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetTopPosition_1e9e378
                                            (lVar16,0);
                                }
                                if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar16 = *(long *)(*plVar18 + 0x20);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar22 = *plVar21;
                                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBlobUpPosition_249d968
                                          (lVar16,0);
                                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayBlobDownAnimation_2308b7c
                                          (lVar22,0,0);
                                if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar16 = *(long *)(*plVar18 + 0x20);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar22 = *plVar21;
                                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBlobUpPosition_249d968
                                          (lVar16,0);
                                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                uVar24 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__GetFirstPathDuration_2308b38
                                                   (lVar22,0);
                                if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar16 = *(long *)(*plVar18 + 0x20);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                lVar22 = *plVar21;
                                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBlobUpPosition_249d968
                                          (lVar16,0);
                                puVar14 = (undefined8 *)PTR_DAT_057606c8;
                                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                uVar25 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__GetTotalBlobPathDuration_2308d90
                                                   (lVar22,0);
                                lVar22 = *plVar18;
                                lVar16 = thunk_FUN_01320e48(*puVar14);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar16,lVar22,*(undefined8 *)PTR_DAT_05808db0,0);
                                DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar24,lVar16,0,0);
                                lVar16 = thunk_FUN_01320e48(*puVar14);
                                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef0();
                                }
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar16,lVar9,*(undefined8 *)PTR_DAT_057e7838,0);
                                DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar25,lVar16,1,0);
                                if (plVar19 != (long *)0x0) {
                                  lVar9 = *plVar19;
                                  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12a);
                                  if (uVar13 != 0) {
                                    piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
                                        puVar15 = (undefined8 *)
                                                  (lVar9 + (long)*piVar17 * 0x10 + 0x138);
                                        goto LAB_01716dd8;
                                      }
                                      uVar13 = uVar13 - 1;
                                      piVar17 = piVar17 + 4;
                                    } while (uVar13 != 0);
                                  }
                                  puVar15 = (undefined8 *)FUN_0131971c(plVar19,*(long *)puVar1,0);
LAB_01716dd8:
                                  (*(code *)*puVar15)(plVar19,puVar15[1]);
                                }
                              }
                              lVar9 = thunk_FUN_01320e48(*puVar14);
                              if (lVar9 != 0) {
                                DG_Tweening_TweenCallback___ctor_1ed6da8
                                          (lVar9,lVar8,*(undefined8 *)PTR_DAT_05775598,0);
                                DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                          (uVar12,uVar11,lVar9,0);
                                lVar9 = thunk_FUN_01320e48(*puVar14);
                                if (lVar9 != 0) {
                                  DG_Tweening_TweenCallback___ctor_1ed6da8
                                            (lVar9,lVar8,*(undefined8 *)PTR_DAT_0579e970,0);
                                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                                            (uVar12,uVar11,lVar9,0);
                                  lVar9 = thunk_FUN_01320e48(*puVar14);
                                  puVar3 = PTR_DAT_05809250;
                                  puVar1 = PTR_DAT_057e7670;
                                  puVar2 = PTR_DAT_057b8560;
                                  if (lVar9 != 0) {
                                    DG_Tweening_TweenCallback___ctor_1ed6da8
                                              (lVar9,lVar8,*(undefined8 *)PTR_DAT_057c27f0,0);
                    /* try { // try from 01716eec to 01817193 has its CatchHandler @ 01716eec
                       catch() { ... } // from try @ 01716eec with catch @ 01716eec
                       catch() { ... } // from try @ 017172a8 with catch @ 01716eec
                       catch() { ... } // from try @ 0171733c with catch @ 01716eec
                       catch() { ... } // from try @ 0171735c with catch @ 01716eec
                       catch() { ... } // from try @ 017173f4 with catch @ 01716eec */
                                    DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0
                                              (uVar11,lVar9,*(undefined8 *)puVar3);
                                    DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                                              (uVar11,1,*(undefined8 *)puVar2);
                                    DG_Tweening_TweenExtensions__Play_object__26ef194
                                              (uVar11,*(undefined8 *)puVar1);
                                    fVar23 = (float)DG_Tweening_TweenExtensions__Duration_1edeccc
                                                              (uVar11,1,0);
                                    uVar11 = *(undefined8 *)(lVar8 + 0x38);
                                    lVar8 = thunk_FUN_01320e48(*puVar14);
                                    if (lVar8 != 0) {
                                      DG_Tweening_TweenCallback___ctor_1ed6da8
                                                (lVar8,uVar11,*(undefined8 *)PTR_DAT_05812de8,0);
                                      puVar2 = PTR_DAT_057815e0;
                                      fVar23 = fVar23 + _UNK_04321764;
                                      if ((bRam0000000005c28460 & 1) == 0) {
                                        FUN_012d0dc8(PTR_DAT_057815e0,0,0);
                                        FUN_012d0dc8(PTR_DAT_057d6890);
                                        FUN_012d0dc8(PTR_DAT_057ca968);
                                        FUN_012d0dc8(PTR_DAT_057f1100);
                                        bRam0000000005c28460 = 1;
                                      }
                                      puVar4 = PTR_DAT_057f1100;
                                      puVar3 = PTR_DAT_057d6890;
                                      puVar1 = PTR_DAT_057ca968;
                                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                        thunk_FUN_0130472c();
                                      }
                                      DG_Tweening_DOTween__Sequence_1eda154();
                                      uVar11 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c
                                                         (fVar23);
                                      uVar11 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                                                         (uVar11,lVar8,*(undefined8 *)puVar3);
                                      lVar8 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                                                        (uVar11,0,0,*(undefined8 *)puVar4);
                                      uVar11 = *(undefined8 *)puVar1;
                                      if (((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) &&
                                         (*(char *)(lVar8 + 0x100) == '\0')) {
                                        *(undefined1 *)(lVar8 + 0x9c) = 1;
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
LAB_01716fbc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

