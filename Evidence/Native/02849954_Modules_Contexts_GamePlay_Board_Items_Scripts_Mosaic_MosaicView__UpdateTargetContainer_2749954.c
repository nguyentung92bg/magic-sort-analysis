/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$UpdateTargetContainer
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__UpdateTargetContainer (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, int32_t waterColorId, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$UpdateTargetContainer
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__UpdateTargetContainer
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, int32_t waterColorId,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* completedBottle, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__UpdateTargetContainer_2749954
          (long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2c6b2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_058184c0);
    FUN_012d0dc8(PTR_DAT_057f7a80);
    FUN_012d0dc8(PTR_DAT_05810768);
    FUN_012d0dc8(PTR_DAT_05797cd8);
    FUN_012d0dc8(PTR_DAT_05760200);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05765650);
    FUN_012d0dc8(PTR_DAT_05813728);
    bRam0000000005c2c6b2 = 1;
  }
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar7 = DG_Tweening_DOTween__Sequence_1eda154(0);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar14 = UnityEngine_Random__Range_383a610
                       (0,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x78),0);
    puVar6 = PTR_DAT_058184c0;
    puVar5 = PTR_DAT_05813728;
    puVar4 = PTR_DAT_057f7a80;
    puVar3 = PTR_DAT_05797cd8;
    puVar2 = PTR_DAT_05765650;
    puVar1 = PTR_DAT_057606c8;
    lVar8 = *(long *)(param_1 + 0x70);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) == 0) {
        uVar7 = 0;
      }
      else {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_b8,lVar8,*(undefined8 *)PTR_DAT_05797cd8);
        uStack_98 = uStack_b0;
        uStack_a0 = uStack_b8;
        lStack_90 = lStack_a8;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_a0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(int *)(lStack_90 + 0x98) == param_2) {
            uVar10 = Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__BreakAnimation_2748664
                               (uVar14,lStack_90,param_3);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar7,uVar10,0);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_a0,*(undefined8 *)puVar6);
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_02849c40;
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_b8,*(long *)(param_1 + 0x70),*(undefined8 *)puVar3);
        uStack_98 = uStack_b0;
        uStack_a0 = uStack_b8;
        lStack_90 = lStack_a8;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_a0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_Object___ctor_23dfe5c(lVar8,0);
          plVar12 = (long *)(lVar8 + 0x10);
          *plVar12 = lStack_90;
          FUN_012d0d74(plVar12);
          if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(int *)(*plVar12 + 0x98) != param_2) {
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            fVar13 = (float)UnityEngine_Random__Range_383a610
                                      (0,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x78),0);
            lVar11 = *(long *)(param_1 + 0x28);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            fVar15 = *(float *)(lVar11 + 0x6c);
            fVar16 = *(float *)(lVar11 + 0x80);
            lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar11,lVar8,*(undefined8 *)puVar2,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                      ((float)uVar14 + fVar13 + fVar15 + fVar16,uVar7,lVar11,0);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_a0,*(undefined8 *)puVar6);
      }
      return uVar7;
    }
  }
LAB_02849c40:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

