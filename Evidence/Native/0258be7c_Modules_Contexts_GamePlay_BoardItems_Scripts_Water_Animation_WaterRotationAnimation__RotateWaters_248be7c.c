/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRotationAnimation$$RotateWaters
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__RotateWaters (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation_o* __this, float degree, int32_t height, int32_t bottomHeight, bool waterRotationAnimationExist, UnityEngine_Vector2_o notReducedTopLeftPosition, UnityEngine_Vector2_o notReducedTopRightPosition, Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterPivotPositionsByBottleHeight_o* valuesByDegrees, int32_t variant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Animation.WaterRotationAnimation$$RotateWaters
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__RotateWaters
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation_o* __this,
   float degree, int32_t height, int32_t bottomHeight, bool waterRotationAnimationExist,
   UnityEngine_Vector2_o notReducedTopLeftPosition, UnityEngine_Vector2_o
   notReducedTopRightPosition,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterPivotPositionsByBottleHeight_o*
   valuesByDegrees, int32_t variant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__RotateWaters_248be7c
               (float param_1,undefined8 param_2,float param_3,float param_4,float param_5,
               long param_6,int param_7,int param_8,ulong param_9,long param_10,int param_11)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uStack_e0;
  ulong uStack_d0;
  float fStack_c0;
  float fStack_bc;
  float fStack_b4;
  float fStack_b0;
  undefined8 uStack_a8;
  
  uVar15 = param_2;
  if ((bRam0000000005c2b285 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577d048);
    bRam0000000005c2b285 = 1;
  }
  puVar2 = PTR_DAT_0577d048;
  lVar7 = 0x38;
  if (param_11 != 0) {
    lVar7 = 0x40;
  }
  uStack_a8 = 0;
  if ((param_10 == 0) || (*(long *)(param_10 + 0x18) == 0)) goto LAB_0258c640;
  lVar7 = *(long *)(param_6 + lVar7);
  uVar12 = System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                     (*(long *)(param_10 + 0x18),param_7,*(undefined8 *)PTR_DAT_0577d048);
  if (*(long *)(param_10 + 0x18) == 0) goto LAB_0258c640;
  System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
            (*(long *)(param_10 + 0x18),param_7,*(undefined8 *)puVar2);
  lVar5 = UnityEngine_Component__get_transform_408b444(param_6,0);
  fVar11 = _UNK_04339bec;
  fVar23 = -param_1;
  fVar22 = fVar23;
  if (*(char *)(param_6 + 0x34) != '\0') {
    fVar22 = param_1;
  }
  UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar22 * _UNK_04339bec,0);
  if (lVar5 == 0) goto LAB_0258c640;
  uVar6 = UnityEngine_Transform__set_localRotation_4092f3c(lVar5,0);
  fVar22 = fVar23;
  if (*(char *)(param_6 + 0x34) != '\0') {
    fVar22 = param_1;
  }
  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetRotatedTopLine_248d29c
            (&fStack_c0,uVar12,uVar15,-(float)uVar12,uVar15,fVar22,(float)(param_7 - param_8),uVar6,
             *(int *)(param_6 + 0x20) - param_8);
  uVar18 = (ulong)(uint)fStack_b4;
  Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetIntersectedPoints_248d3bc
            (&fStack_c0,fStack_c0,fStack_bc,0,uVar18,fStack_b0,0,param_6,param_8);
  fVar20 = fStack_b0;
  fVar19 = fStack_b4;
  fVar22 = fStack_bc;
  fVar21 = fStack_c0;
  uStack_d0 = CONCAT44(fStack_bc,fStack_c0);
  uStack_e0 = CONCAT44(fStack_b0,fStack_b4);
  *(ulong *)(param_6 + 0x24) = uStack_d0;
  *(ulong *)(param_6 + 0x2c) = uStack_e0;
  puVar2 = PTR_DAT_057d6f00;
  if (0.0 < *(float *)(param_6 + 0x50)) {
    fVar9 = (float)param_2;
    uVar15 = 0;
    fVar8 = fVar23;
    if (*(char *)(param_6 + 0x34) != '\0') {
      fVar8 = param_1;
    }
    uVar14 = (ulong)(uint)(fVar8 * fVar11);
    uVar12 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
    if (cRam0000000005c259a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05803150);
      cRam0000000005c259a9 = '\x01';
    }
    puVar3 = PTR_DAT_05803150;
    fVar8 = (float)UnityEngine_Quaternion__op_Multiply_3831578
                             (uVar12,uVar15,uVar14,uVar18,
                              *(undefined4 *)(*(long *)(*(long *)PTR_DAT_05803150 + 0xb8) + 0x18),
                              *(undefined4 *)(*(long *)(*(long *)PTR_DAT_05803150 + 0xb8) + 0x1c),0,
                              0);
    if (cRam0000000005c2597e == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c2597e = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar4 = PTR_DAT_05805c10;
    fVar1 = _UNK_0434cc84;
    fVar10 = (float)uVar15;
    fVar16 = fVar8 * fVar8 + fVar10 * fVar10;
    uVar18 = (ulong)(uint)fVar16;
    fVar16 = SQRT((float)uVar14 * (float)uVar14 + fVar16);
    if (fVar16 <= _UNK_0434cc84) {
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      uVar15 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
    else {
      uVar15 = CONCAT44(fVar10 / fVar16,fVar8 / fVar16);
    }
    uVar12 = 0;
    fVar8 = fVar23;
    if (*(char *)(param_6 + 0x34) != '\0') {
      fVar8 = param_1;
    }
    uVar14 = (ulong)(uint)(fVar8 * fVar11);
    uVar6 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
    if (cRam0000000005c259aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05803150);
      cRam0000000005c259aa = '\x01';
    }
    fVar8 = (float)UnityEngine_Quaternion__op_Multiply_3831578
                             (uVar6,uVar12,uVar14,uVar18,
                              *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),
                              *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14),0,0);
    if (cRam0000000005c2597e == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c2597e = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    fVar10 = (float)uVar12;
    fVar16 = SQRT((float)uVar14 * (float)uVar14 + fVar8 * fVar8 + fVar10 * fVar10);
    if (fVar16 <= fVar1) {
      if (cRam0000000005c230aa == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230aa = '\x01';
      }
      uVar12 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
      if ((param_9 & 1) == 0) goto LAB_0258c268;
LAB_0258c2b4:
      fVar24 = (fVar21 + fVar19) * 0.5;
      fVar25 = (fVar22 + fVar20) * 0.5;
      fVar17 = (fVar9 - param_4) * 100.0;
      fVar13 = (param_3 - param_5) * 100.0;
      fVar10 = (float)uVar12 * 100.0;
      fVar16 = (float)((ulong)uVar12 >> 0x20) * 100.0;
      fVar8 = fVar25 + fVar16;
      fVar16 = fVar25 - fVar16;
      Modules_Infrastructure_Utils_LineUtils__TryLineLineIntersection_3de33c8
                (CONCAT44(fVar8,fVar24 + fVar10),fVar8,CONCAT44(fVar16,fVar24 - fVar10),fVar16,
                 fVar9 + fVar17,param_3 + fVar13,fVar9 - fVar17,param_3 - fVar13,&uStack_a8,0);
      fVar8 = (float)uStack_a8;
      fVar9 = uStack_a8._4_4_;
      if (cRam0000000005c244b8 == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c244b8 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      fVar8 = SQRT((fVar24 - fVar8) * (fVar24 - fVar8) + (fVar25 - fVar9) * (fVar25 - fVar9));
    }
    else {
      uVar12 = CONCAT44(fVar10 / fVar16,fVar8 / fVar16);
      if ((param_9 & 1) != 0) goto LAB_0258c2b4;
LAB_0258c268:
      if (*(long *)(param_6 + 0x48) == 0) goto LAB_0258c640;
      fVar8 = (float)BakedFluid_SpriteShapeCustomControllerConfig__GetDistanceToBottleIfBottomWater_3af5ab4
                               (*(long *)(param_6 + 0x48),*(undefined4 *)(param_6 + 0x20),param_7,0)
      ;
    }
    fVar8 = fVar8 * *(float *)(param_6 + 0x50);
    fVar9 = (float)uVar15 * fVar8;
    fVar8 = (float)((ulong)uVar15 >> 0x20) * fVar8;
    fVar21 = fVar21 + fVar9;
    fVar22 = fVar22 + fVar8;
    fVar19 = fVar19 + fVar9;
    fVar20 = fVar20 + fVar8;
    if (cRam0000000005c259bf == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c259bf = '\x01';
    }
    fVar8 = fVar19 - fVar21;
    fVar9 = fVar20 - fVar22;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    fVar10 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
    if (fVar10 <= fVar1) {
      if (cRam0000000005c2345c == '\0') {
        FUN_012d0dc8(PTR_DAT_05803150);
        cRam0000000005c2345c = '\x01';
      }
      uVar15 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    else {
      uVar15 = CONCAT44(fVar9 / fVar10,fVar8 / fVar10);
    }
    fVar21 = fVar21 + (float)uVar15 * -100.0;
    fVar22 = fVar22 + (float)((ulong)uVar15 >> 0x20) * -100.0;
    if (cRam0000000005c259bf == '\0') {
      FUN_012d0dc8(PTR_DAT_057d6f00);
      cRam0000000005c259bf = '\x01';
    }
    fVar8 = fVar19 - fVar21;
    fVar9 = fVar20 - fVar22;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    fVar10 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
    if (fVar10 <= fVar1) {
      if (cRam0000000005c2345c == '\0') {
        FUN_012d0dc8(PTR_DAT_05803150);
        cRam0000000005c2345c = '\x01';
      }
      uVar15 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    else {
      uVar15 = CONCAT44(fVar9 / fVar10,fVar8 / fVar10);
    }
    fVar20 = fVar20 + (float)((ulong)uVar15 >> 0x20) * 100.0;
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__GetIntersectedPoints_248d3bc
              (&fStack_c0,CONCAT44(fVar22,fVar21),fVar22,0,
               CONCAT44(fVar20,fVar19 + (float)uVar15 * 100.0),fVar20,0,param_6,param_8);
    uStack_d0 = (ulong)(uint)fStack_c0;
    uStack_e0 = (ulong)(uint)fStack_b4;
    fVar22 = fStack_bc;
    fVar20 = fStack_b0;
  }
  fVar21 = param_1;
  if (*(char *)(param_6 + 0x34) != '\0') {
    fVar21 = fVar23;
  }
  UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar21 * fVar11,0);
  fVar21 = (float)UnityEngine_Quaternion__op_Multiply_3831578(0);
  if (*(char *)(param_6 + 0x34) != '\0') {
    param_1 = fVar23;
  }
  UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,param_1 * fVar11,0);
  fVar11 = (float)UnityEngine_Quaternion__op_Multiply_3831578(0);
  lVar5 = UnityEngine_Component__get_transform_408b444(param_6,0);
  if (lVar5 != 0) {
    fVar23 = fVar20;
    fVar19 = (float)uStack_e0;
    if (fVar21 <= fVar11) {
      fVar23 = fVar22;
      fVar19 = (float)uStack_d0;
    }
    UnityEngine_Transform__set_localPosition_4092ce0(fVar19,fVar23,0,lVar5,0);
    if (lVar7 != 0) {
      fVar11 = (float)Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterRegularRotationConfig__GetScaleMultiplierForBottleHeight_248c904
                                (lVar7,*(undefined4 *)(param_6 + 0x20));
      if (cRam0000000005c25e4a == '\0') {
        FUN_012d0dc8(PTR_DAT_057d6f00);
        cRam0000000005c25e4a = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar7 = UnityEngine_Component__get_transform_408b444(param_6,0);
      if (lVar7 != 0) {
        fVar23 = (float)uStack_d0 - (float)uStack_e0;
        UnityEngine_Transform__set_localScale_40932d0
                  (SQRT(fVar23 * fVar23 + (fVar22 - fVar20) * (fVar22 - fVar20) + 0.0) * fVar11,
                   0x3f800000,0x3f800000,lVar7,0);
        return;
      }
    }
  }
LAB_0258c640:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

