/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$OnWaterRotate
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__OnWaterRotate (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, float rotation, UnityEngine_Vector3_o rotationRelatedWorldPosition, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$OnWaterRotate
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__OnWaterRotate
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, float rotation,
   UnityEngine_Vector3_o rotationRelatedWorldPosition, int32_t index, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__OnWaterRotate_260dd5c
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
  
                    /* try { // try from 0270dd80 to 0280dd8b has its CatchHandler @ 0270d9d8 */
                    /* try { // try from 0270dd8c to 0280dd93 has its CatchHandler @ 0270dda0 */
  fVar7 = param_3;
  fVar8 = param_2;
  if ((bRam0000000005c2b9f4 & 1) == 0) {
                    /* catch() { ... } // from try @ 0270dd18 with catch @ 0270dd94 */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270dd58 with catch @ 0270dda0
                       catch(type#2 @ 00000000) { ... } // from try @ 0270dd8c with catch @ 0270dda0
                        */
    bRam0000000005c2b9f4 = 1;
  }
  if (*(char *)(param_5 + 0x40) != '\0') {
    return;
  }
  if ((*(long *)(param_5 + 0x58) == 0) ||
     (plVar1 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (*(long *)(param_5 + 0x58),0), plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0270de2c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_0131971c(plVar1,*(long *)PTR_DAT_0575a2d8,0);
LAB_0270de2c:
  fVar6 = (float)(*(code *)*puVar2)(plVar1,puVar2[1]);
  fVar10 = (float)NEON_fminnm(ABS(param_1) / 10.0,0x3f800000);
  fVar8 = fVar8 + *(float *)(param_5 + 0x74) + (float)param_6;
  fVar9 = fVar10 * (param_3 - fVar8);
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetPosition_40e9ffc
            (fVar6 + 0.0 + fVar10 * (param_2 - (fVar6 + 0.0)),fVar8 + fVar9,
             fVar7 + 0.0 + fVar10 * (param_4 - (fVar7 + 0.0)),param_5,0);
  fVar8 = 0.0;
  param_1 = param_1 * _UNK_04339bf0;
  fVar7 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,param_1,0);
  fVar6 = *(float *)(param_5 + 0x60);
  fVar12 = *(float *)(param_5 + 100);
  fVar11 = *(float *)(param_5 + 0x68);
  fVar10 = *(float *)(param_5 + 0x6c);
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
  (*(code *)*puVar2)((fVar8 * fVar11 + fVar9 * fVar6 + fVar7 * fVar10) - param_1 * fVar12,
                     (param_1 * fVar6 + fVar9 * fVar12 + fVar8 * fVar10) - fVar7 * fVar11,
                     (fVar7 * fVar12 + fVar9 * fVar11 + param_1 * fVar10) - fVar8 * fVar6,
                     ((fVar9 * fVar10 - fVar7 * fVar6) - fVar8 * fVar12) - param_1 * fVar11,plVar1,
                     puVar2[1]);
  return;
}

