/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetLocalPositionToOrigin
void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalPositionToOrigin (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetLocalPositionToOrigin
   void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalPositionToOrigin
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalPositionToOrigin_40e9e54
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 041e9e58 to 042e9e63 has its CatchHandler @ 041ea038 */
  uVar9 = *(undefined8 *)(param_1 + 0x34);
  fVar8 = *(float *)(param_1 + 0x30);
  fVar10 = *(float *)(param_1 + 0x3c);
  fVar7 = (float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar9 >> 0x20);
                    /* try { // try from 041e9e6c to 042e9e77 has its CatchHandler @ 041ea034 */
  if ((bRam0000000005c3aa89 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c3aa89 = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
        goto LAB_041e9f1c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,5);
LAB_041e9f1c:
                    /* WARNING: Could not recover jumptable at 0x041e9f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(CONCAT44(fVar7,(float)uVar6 + (float)uVar9),fVar7,fVar8 + fVar10,plVar5,
                     puVar1[1]);
  return;
}

