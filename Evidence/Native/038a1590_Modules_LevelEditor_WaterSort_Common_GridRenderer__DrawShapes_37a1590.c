/* IL2CPP: Modules.LevelEditor.WaterSort.Common.GridRenderer$$DrawShapes
void Modules_LevelEditor_WaterSort_Common_GridRenderer__DrawShapes (Modules_LevelEditor_WaterSort_Common_GridRenderer_o* __this, UnityEngine_Camera_o* cam, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x038a1d94) */
/* IL2CPP: Modules.LevelEditor.WaterSort.Common.GridRenderer$$DrawShapes
   void Modules_LevelEditor_WaterSort_Common_GridRenderer__DrawShapes
   (Modules_LevelEditor_WaterSort_Common_GridRenderer_o* __this, UnityEngine_Camera_o* cam, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_GridRenderer__DrawShapes_37a1590
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000005c33df4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05810c88);
    FUN_012d0dc8(PTR_DAT_058165e8);
    bRam0000000005c33df4 = 1;
  }
  puVar3 = PTR_DAT_05810c88;
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_05810c88 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    plVar5 = (long *)Shapes_Draw__Command_2e5c4e0(param_2,0x12,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar3);
    }
    if (cRam0000000005c259b7 == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      cRam0000000005c259b7 = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar3;
    }
    *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x1a0) = 0;
    puVar4 = PTR_DAT_05810c88;
    if (cRam0000000005c259d0 == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      lVar6 = *(long *)puVar4;
      cRam0000000005c259d0 = '\x01';
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar3;
    }
    *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 400) = 1;
    puVar4 = PTR_DAT_05810c88;
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    if (cRam0000000005c259ab == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      lVar6 = *(long *)puVar4;
      cRam0000000005c259ab = '\x01';
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar3;
    }
    *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x18c) = uVar1;
    lVar6 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    UnityEngine_Transform__get_localToWorldMatrix_4093678(&uStack_d0,lVar6,0);
    if (cRam0000000005c259b6 == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      cRam0000000005c259b6 = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c(lVar6);
      lVar6 = *(long *)puVar3;
    }
    lVar8 = *(long *)(lVar6 + 0xb8);
    *(undefined8 *)(lVar8 + 0xc0) = uStack_98;
    *(undefined8 *)(lVar8 + 0xb8) = uStack_a0;
    *(undefined8 *)(lVar8 + 0xb0) = uStack_a8;
    *(undefined8 *)(lVar8 + 0xa8) = uStack_b0;
    *(undefined8 *)(lVar8 + 0xa0) = uStack_b8;
    *(undefined8 *)(lVar8 + 0x98) = uStack_c0;
    *(undefined8 *)(lVar8 + 0x90) = uStack_c8;
    *(undefined8 *)(lVar8 + 0x88) = uStack_d0;
    iVar12 = *(int *)(param_1 + 0x1c);
    iVar11 = -iVar12;
    if (iVar12 * 2 < 0 == SBORROW4(iVar12,iVar11)) {
      while( true ) {
        fVar13 = *(float *)(param_1 + 0x20);
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c(lVar6);
        }
        if (cRam0000000005c33e89 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c33e89 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c2599a == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c2599a = '\x01';
        }
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar6 = *(long *)puVar3;
        }
        uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x19c);
        if (cRam0000000005c2599b == '\0') {
          FUN_012d0dc8(puVar3);
          lVar6 = *(long *)puVar3;
          cRam0000000005c2599b = '\x01';
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar6 = *(long *)puVar3;
        }
        uVar2 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 400);
        if (cRam0000000005c259af == '\0') {
          FUN_012d0dc8(puVar3);
          lVar6 = *(long *)puVar3;
          cRam0000000005c259af = '\x01';
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        Shapes_Draw__Line_Internal_2e5c618
                  (fVar13 * (float)iVar11,fVar13 * (float)-iVar12,0,fVar13 * (float)iVar11,
                   fVar13 * (float)iVar12,0,uVar1,uVar2,0);
        iVar12 = *(int *)(param_1 + 0x1c);
        iVar11 = iVar11 + 1;
        if (iVar12 < iVar11) break;
        lVar6 = *(long *)puVar3;
      }
      iVar11 = -iVar12;
    }
    if (iVar11 <= iVar12) {
      do {
        fVar13 = *(float *)(param_1 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c33e89 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c33e89 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c2599a == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c2599a = '\x01';
        }
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar6 = *(long *)puVar3;
        }
        uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x19c);
        if (cRam0000000005c2599b == '\0') {
          FUN_012d0dc8(puVar3);
          lVar6 = *(long *)puVar3;
          cRam0000000005c2599b = '\x01';
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar6 = *(long *)puVar3;
        }
        uVar2 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 400);
        if (cRam0000000005c259af == '\0') {
          FUN_012d0dc8(puVar3);
          lVar6 = *(long *)puVar3;
          cRam0000000005c259af = '\x01';
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        Shapes_Draw__Line_Internal_2e5c618
                  (fVar13 * (float)-iVar12,fVar13 * (float)iVar11,0,fVar13 * (float)iVar12,
                   fVar13 * (float)iVar11,0,uVar1,uVar2,0);
        iVar12 = *(int *)(param_1 + 0x1c);
        iVar11 = iVar11 + 1;
      } while (iVar11 <= iVar12);
    }
    fVar13 = *(float *)(param_1 + 0x34);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (cRam0000000005c259ab == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      cRam0000000005c259ab = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar3;
    }
    *(float *)(*(long *)(lVar6 + 0xb8) + 0x18c) = fVar13 * 3.0;
    puVar4 = PTR_DAT_05810c88;
    if (cRam0000000005c33e89 == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      lVar6 = *(long *)puVar4;
      cRam0000000005c33e89 = '\x01';
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (cRam0000000005c2599a == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      cRam0000000005c2599a = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar3;
    }
    puVar4 = PTR_DAT_05810c88;
    uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x19c);
    if (cRam0000000005c2599b == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      lVar6 = *(long *)puVar4;
      cRam0000000005c2599b = '\x01';
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar3;
    }
    puVar4 = PTR_DAT_05810c88;
    uVar2 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 400);
    if (cRam0000000005c259af == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      lVar6 = *(long *)puVar4;
      cRam0000000005c259af = '\x01';
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    Shapes_Draw__Line_Internal_2e5c618(0,0x42c80000,0,0,0xc2c80000,0,uVar1,uVar2,0);
    if (cRam0000000005c33e89 == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      cRam0000000005c33e89 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (cRam0000000005c2599a == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      cRam0000000005c2599a = '\x01';
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar3;
    }
    puVar4 = PTR_DAT_05810c88;
    uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x19c);
    if (cRam0000000005c2599b == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      lVar6 = *(long *)puVar4;
      cRam0000000005c2599b = '\x01';
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar3;
    }
    puVar3 = PTR_DAT_05810c88;
    uVar2 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 400);
    if (cRam0000000005c259af == '\0') {
      FUN_012d0dc8(PTR_DAT_05810c88);
      lVar6 = *(long *)puVar3;
      cRam0000000005c259af = '\x01';
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    Shapes_Draw__Line_Internal_2e5c618(0xc2c80000,0,0,0x42c80000,0,0,uVar1,uVar2,0);
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_058165e8) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_038a1d54;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_058165e8,0);
LAB_038a1d54:
      (*(code *)*puVar7)(plVar5,puVar7[1]);
    }
  }
  return;
}

