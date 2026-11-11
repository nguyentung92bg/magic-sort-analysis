/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckItem$$OnWaterRotate
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__OnWaterRotate (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* __this, float rotation, UnityEngine_Vector3_o rotationRelatedWorldPosition, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckItem$$OnWaterRotate
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__OnWaterRotate
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* __this, float rotation,
   UnityEngine_Vector3_o rotationRelatedWorldPosition, int32_t index, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem__OnWaterRotate_2f52fec
               (float param_1,float param_2,float param_3,float param_4,long param_5,int param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar8 = param_3;
  if ((bRam0000000005c3088f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c3088f = 1;
  }
  if (*(long *)(param_5 + 0x58) != 0) {
    if ((*(long *)(*(long *)(param_5 + 0x58) + 0x28) != 0) || (*(char *)(param_5 + 0x40) != '\0')) {
      return;
    }
    if ((*(long *)(param_5 + 0x60) != 0) &&
       (plVar1 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (*(long *)(param_5 + 0x60),0), plVar1 != (long *)0x0)) {
      lVar3 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      fVar6 = ABS(param_1) / 10.0;
      fVar9 = 1.0;
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_030530e8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      fVar9 = 1.0;
      puVar2 = (undefined8 *)FUN_0131971c(plVar1,*(long *)PTR_DAT_0575a2d8,0);
LAB_030530e8:
      fVar7 = (float)(*(code *)*puVar2)(plVar1,puVar2[1]);
      fVar9 = fVar9 + *(float *)(param_5 + 0x7c) + (float)param_6;
      fVar10 = fVar6 * (param_3 - fVar9);
      Modules_Infrastructure_Common_Scripts_Component_AItem__SetPosition_40e9ffc
                (fVar7 + 0.0 + fVar6 * (param_2 - (fVar7 + 0.0)),fVar9 + fVar10,
                 fVar8 + 0.0 + fVar6 * (param_4 - (fVar8 + 0.0)),param_5,0);
      fVar9 = 0.0;
      param_1 = param_1 * _UNK_04339bf0;
      fVar8 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,param_1,0);
      fVar6 = *(float *)(param_5 + 0x68);
      fVar12 = *(float *)(param_5 + 0x6c);
      fVar11 = *(float *)(param_5 + 0x70);
      fVar7 = *(float *)(param_5 + 0x74);
      if ((bRam0000000005c3aa8b & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0575a2d8,0);
        bRam0000000005c3aa8b = 1;
      }
      if ((*(long *)(param_5 + 0x20) == 0) ||
         (plVar1 = *(long **)(*(long *)(param_5 + 0x20) + 0x18), plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar3 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
            goto LAB_041ea250;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0131971c(plVar1,*(long *)PTR_DAT_0575a2d8,9);
LAB_041ea250:
                    /* WARNING: Could not recover jumptable at 0x041ea278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)((fVar9 * fVar11 + fVar10 * fVar6 + fVar8 * fVar7) - param_1 * fVar12,
                         (param_1 * fVar6 + fVar10 * fVar12 + fVar9 * fVar7) - fVar8 * fVar11,
                         (fVar8 * fVar12 + fVar10 * fVar11 + param_1 * fVar7) - fVar9 * fVar6,
                         ((fVar10 * fVar7 - fVar8 * fVar6) - fVar9 * fVar12) - param_1 * fVar11,
                         plVar1,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

