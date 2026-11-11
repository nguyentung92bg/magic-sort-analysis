/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$RotateWaters
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__RotateWaters (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, float rotation, int32_t height, int32_t bottomHeight, bool waterRotationAnimationExist, UnityEngine_Vector2_o notReducedTopLeftPosition, UnityEngine_Vector2_o notReducedTopRightPosition, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$RotateWaters
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__RotateWaters
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, float rotation, int32_t
   height, int32_t bottomHeight, bool waterRotationAnimationExist, UnityEngine_Vector2_o
   notReducedTopLeftPosition, UnityEngine_Vector2_o notReducedTopRightPosition, int32_t
   bottleHeight, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__RotateWaters_248bd48
               (float param_1,undefined8 param_2,float param_3,float param_4,float param_5,
               long param_6,int param_7,int param_8,ulong param_9,undefined4 param_10)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  ulong uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uStack_e0;
  ulong uStack_d0;
  float fStack_c0;
  float fStack_bc;
  float fStack_b4;
  float fStack_b0;
  undefined8 uStack_a8;
  
  uVar17 = param_2;
  if ((bRam0000000005c2b27d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a4370);
    bRam0000000005c2b27d = 1;
  }
  if (param_1 == 0.0) {
    if ((bRam0000000005c2b279 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0577d048);
      bRam0000000005c2b279 = 1;
    }
    if (((*(long *)(param_6 + 0x68) != 0) &&
        (lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                           (*(long *)(param_6 + 0x68),param_10), puVar3 = PTR_DAT_0577d048,
        lVar6 != 0)) && (*(long *)(lVar6 + 0x18) != 0)) {
      uVar14 = System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                         (*(long *)(lVar6 + 0x18),param_7,*(undefined8 *)PTR_DAT_0577d048);
      if (*(long *)(lVar6 + 0x18) != 0) {
        System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                  (*(long *)(lVar6 + 0x18),param_7,*(undefined8 *)puVar3);
        if ((*(long *)(param_6 + 0x58) != 0) &&
           (lVar6 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_6 + 0x58),0),
           lVar6 != 0)) {
          UnityEngine_Transform__set_localScale_40932d0(0x3f800000,0x3f800000,0x3f800000,lVar6,0);
          if ((*(long *)(param_6 + 0x58) != 0) &&
             (lVar6 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_6 + 0x58),0),
             lVar6 != 0)) {
            UnityEngine_Transform__set_localPosition_4092ce0(uVar14,uVar17,0,lVar6,0);
            if (*(long *)(param_6 + 0x58) != 0) {
              lVar6 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_6 + 0x58),0);
              UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
              if (lVar6 != 0) {
                if (pcRam0000000005c3a640 == (code *)0x0) {
                  pcRam0000000005c3a640 = (code *)FUN_012d0d84(&UNK_043ef074,0);
                }
                (*pcRam0000000005c3a640)(lVar6,&stack0xffffffffffffffd0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = *(long *)(param_6 + 0x68);
  if (lVar6 == 0) {
LAB_0258be78:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((*(long *)(lVar6 + 0x20) == 0) || (*(int *)(*(long *)(lVar6 + 0x20) + 0x18) == 0)) {
    return;
  }
  lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                    (lVar6,param_10);
  lVar8 = *(long *)(param_6 + 0x88);
  if (lVar8 == 0) goto LAB_0258be78;
  iVar1 = *(int *)(param_6 + 200);
  if (param_7 == 0) {
    param_7 = 1;
  }
  param_1 = ABS(param_1);
  uVar17 = param_2;
  if ((bRam0000000005c2b285 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577d048);
    bRam0000000005c2b285 = 1;
  }
  puVar3 = PTR_DAT_0577d048;
  lVar9 = 0x38;
  if (iVar1 != 0) {
    lVar9 = 0x40;
  }
  uStack_a8 = 0;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) goto LAB_0258c640;
  lVar9 = *(long *)(lVar8 + lVar9);
  uVar14 = System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                     (*(long *)(lVar6 + 0x18),param_7,*(undefined8 *)PTR_DAT_0577d048);
  if (*(long *)(lVar6 + 0x18) == 0) goto LAB_0258c640;
  System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
            (*(long *)(lVar6 + 0x18),param_7,*(undefined8 *)puVar3);
  lVar6 = UnityEngine_Component__get_transform_408b444(lVar8,0);
  fVar13 = _UNK_04339bec;
  fVar25 = -param_1;
  fVar24 = fVar25;
  if (*(char *)(lVar8 + 0x34) != '\0') {
    fVar24 = param_1;
  }
  UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar24 * _UNK_04339bec,0);
  if (lVar6 == 0) goto LAB_0258c640;
  uVar7 = UnityEngine_Transform__set_localRotation_4092f3c(lVar6,0);
  fVar24 = fVar25;
  if (*(char *)(lVar8 + 0x34) != '\0') {
    fVar24 = param_1;
  }
  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetRotatedTopLine_248d29c
            (&fStack_c0,uVar14,uVar17,-(float)uVar14,uVar17,fVar24,(float)(param_7 - param_8),uVar7,
             *(int *)(lVar8 + 0x20) - param_8);
  uVar20 = (ulong)(uint)fStack_b4;
  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetIntersectedPoints_248d3bc
            (&fStack_c0,fStack_c0,fStack_bc,0,uVar20,fStack_b0,0,lVar8,param_8);
  fVar22 = fStack_b0;
  fVar21 = fStack_b4;
  fVar24 = fStack_bc;
  fVar23 = fStack_c0;
  uStack_d0 = CONCAT44(fStack_bc,fStack_c0);
  uStack_e0 = CONCAT44(fStack_b0,fStack_b4);
  *(ulong *)(lVar8 + 0x24) = uStack_d0;
  *(ulong *)(lVar8 + 0x2c) = uStack_e0;
  puVar3 = PTR_DAT_057d6f00;
  if (0.0 < *(float *)(lVar8 + 0x50)) {
    fVar11 = (float)param_2;
    uVar17 = 0;
    fVar10 = fVar25;
    if (*(char *)(lVar8 + 0x34) != '\0') {
      fVar10 = param_1;
    }
    uVar16 = (ulong)(uint)(fVar10 * fVar13);
    uVar14 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
    if (cRam0000000005c259a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05803150);
      cRam0000000005c259a9 = '\x01';
    }
    puVar4 = PTR_DAT_05803150;
    fVar10 = (float)UnityEngine_Quaternion__op_Multiply_3831578
                              (uVar14,uVar17,uVar16,uVar20,
                               *(undefined4 *)(*(long *)(*(long *)PTR_DAT_05803150 + 0xb8) + 0x18),
                               *(undefined4 *)(*(long *)(*(long *)PTR_DAT_05803150 + 0xb8) + 0x1c),0
                               ,0);
    if (cRam0000000005c2597e == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c2597e = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar5 = PTR_DAT_05805c10;
    fVar2 = _UNK_0434cc84;
    fVar12 = (float)uVar17;
    fVar18 = fVar10 * fVar10 + fVar12 * fVar12;
    uVar20 = (ulong)(uint)fVar18;
    fVar18 = SQRT((float)uVar16 * (float)uVar16 + fVar18);
    if (fVar18 <= _UNK_0434cc84) {
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      uVar17 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    else {
      uVar17 = CONCAT44(fVar12 / fVar18,fVar10 / fVar18);
    }
    uVar14 = 0;
    fVar10 = fVar25;
    if (*(char *)(lVar8 + 0x34) != '\0') {
      fVar10 = param_1;
    }
    uVar16 = (ulong)(uint)(fVar10 * fVar13);
    uVar7 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
    if (cRam0000000005c259aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05803150);
      cRam0000000005c259aa = '\x01';
    }
    fVar10 = (float)UnityEngine_Quaternion__op_Multiply_3831578
                              (uVar7,uVar14,uVar16,uVar20,
                               *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                               *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14),0,0);
    if (cRam0000000005c2597e == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c2597e = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    fVar12 = (float)uVar14;
    fVar18 = SQRT((float)uVar16 * (float)uVar16 + fVar10 * fVar10 + fVar12 * fVar12);
    if (fVar18 <= fVar2) {
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      uVar14 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
      if ((param_9 & 1) == 0) goto LAB_0258c268;
LAB_0258c2b4:
      fVar26 = (fVar23 + fVar21) * 0.5;
      fVar27 = (fVar24 + fVar22) * 0.5;
      fVar19 = (fVar11 - param_4) * 100.0;
      fVar15 = (param_3 - param_5) * 100.0;
      fVar12 = (float)uVar14 * 100.0;
      fVar18 = (float)((ulong)uVar14 >> 0x20) * 100.0;
      fVar10 = fVar27 + fVar18;
      fVar18 = fVar27 - fVar18;
      Modules_Infrastructure_Utils_LineUtils__TryLineLineIntersection_3de33c8
                (CONCAT44(fVar10,fVar26 + fVar12),fVar10,CONCAT44(fVar18,fVar26 - fVar12),fVar18,
                 fVar11 + fVar19,param_3 + fVar15,fVar11 - fVar19,param_3 - fVar15,&uStack_a8,0);
      fVar10 = (float)uStack_a8;
      fVar11 = uStack_a8._4_4_;
      if (cRam0000000005c244b8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c244b8 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      fVar10 = SQRT((fVar26 - fVar10) * (fVar26 - fVar10) + (fVar27 - fVar11) * (fVar27 - fVar11));
    }
    else {
      uVar14 = CONCAT44(fVar12 / fVar18,fVar10 / fVar18);
      if ((param_9 & 1) != 0) goto LAB_0258c2b4;
LAB_0258c268:
      if (*(long *)(lVar8 + 0x48) == 0) goto LAB_0258c640;
      fVar10 = (float)BakedFluid_SpriteShapeCustomControllerConfig__GetDistanceToBottleIfBottomWater_3af5ab4
                                (*(long *)(lVar8 + 0x48),*(undefined4 *)(lVar8 + 0x20),param_7,0);
    }
    fVar10 = fVar10 * *(float *)(lVar8 + 0x50);
    fVar11 = (float)uVar17 * fVar10;
    fVar10 = (float)((ulong)uVar17 >> 0x20) * fVar10;
    fVar23 = fVar23 + fVar11;
    fVar24 = fVar24 + fVar10;
    fVar21 = fVar21 + fVar11;
    fVar22 = fVar22 + fVar10;
    if (cRam0000000005c259bf == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c259bf = '\x01';
    }
    fVar10 = fVar21 - fVar23;
    fVar11 = fVar22 - fVar24;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    fVar12 = SQRT(fVar10 * fVar10 + fVar11 * fVar11);
    if (fVar12 <= fVar2) {
      if (cRam0000000005c2345c == '\0') {
        FUN_012d0dc8(PTR_DAT_05803150);
        cRam0000000005c2345c = '\x01';
      }
      uVar17 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    else {
      uVar17 = CONCAT44(fVar11 / fVar12,fVar10 / fVar12);
    }
    fVar23 = fVar23 + (float)uVar17 * -100.0;
    fVar24 = fVar24 + (float)((ulong)uVar17 >> 0x20) * -100.0;
    if (cRam0000000005c259bf == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c259bf = '\x01';
    }
    fVar10 = fVar21 - fVar23;
    fVar11 = fVar22 - fVar24;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    fVar12 = SQRT(fVar10 * fVar10 + fVar11 * fVar11);
    if (fVar12 <= fVar2) {
      if (cRam0000000005c2345c == '\0') {
        FUN_012d0dc8(PTR_DAT_05803150);
        cRam0000000005c2345c = '\x01';
      }
      uVar17 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    else {
      uVar17 = CONCAT44(fVar11 / fVar12,fVar10 / fVar12);
    }
    fVar22 = fVar22 + (float)((ulong)uVar17 >> 0x20) * 100.0;
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetIntersectedPoints_248d3bc
              (&fStack_c0,CONCAT44(fVar24,fVar23),fVar24,0,
               CONCAT44(fVar22,fVar21 + (float)uVar17 * 100.0),fVar22,0,lVar8,param_8);
    uStack_d0 = (ulong)(uint)fStack_c0;
    uStack_e0 = (ulong)(uint)fStack_b4;
    fVar24 = fStack_bc;
    fVar22 = fStack_b0;
  }
  fVar23 = param_1;
  if (*(char *)(lVar8 + 0x34) != '\0') {
    fVar23 = fVar25;
  }
  UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar23 * fVar13,0);
  fVar23 = (float)UnityEngine_Quaternion__op_Multiply_3831578(0);
  if (*(char *)(lVar8 + 0x34) != '\0') {
    param_1 = fVar25;
  }
  UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,param_1 * fVar13,0);
  fVar13 = (float)UnityEngine_Quaternion__op_Multiply_3831578(0);
  lVar6 = UnityEngine_Component__get_transform_408b444(lVar8,0);
  if (lVar6 != 0) {
    fVar25 = fVar22;
    fVar21 = (float)uStack_e0;
    if (fVar23 <= fVar13) {
      fVar25 = fVar24;
      fVar21 = (float)uStack_d0;
    }
    UnityEngine_Transform__set_localPosition_4092ce0(fVar21,fVar25,0,lVar6,0);
    if (lVar9 != 0) {
      fVar13 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterRegularRotationConfig__GetScaleMultiplierForBottleHeight_248c904
                                (lVar9,*(undefined4 *)(lVar8 + 0x20));
      if (cRam0000000005c25e4a == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c25e4a = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar6 = UnityEngine_Component__get_transform_408b444(lVar8,0);
      if (lVar6 != 0) {
        fVar25 = (float)uStack_d0 - (float)uStack_e0;
        UnityEngine_Transform__set_localScale_40932d0
                  (SQRT(fVar25 * fVar25 + (fVar24 - fVar22) * (fVar24 - fVar22) + 0.0) * fVar13,
                   0x3f800000,0x3f800000,lVar6,0);
        return;
      }
    }
  }
LAB_0258c640:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

