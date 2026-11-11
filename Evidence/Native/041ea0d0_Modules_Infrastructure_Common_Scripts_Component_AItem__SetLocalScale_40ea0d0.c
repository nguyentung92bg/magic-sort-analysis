/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetLocalScale
void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalScale (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, UnityEngine_Vector3_o scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetLocalScale
   void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalScale
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, UnityEngine_Vector3_o scale,
   const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalScale_40ea0d0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 041ea0d0 to 042ea0e3 has its CatchHandler @ 041e9c9c */
                    /* try { // try from 041ea0e4 to 042ea0fb has its CatchHandler @ 041ea1a4 */
  if ((bRam0000000005c3aa8a & 1) == 0) {
                    /* try { // try from 041ea104 to 042ea107 has its CatchHandler @ 041ea19c */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
                    /* try { // try from 041ea108 to 042ea11f has its CatchHandler @ 041ea1a0 */
    bRam0000000005c3aa8a = 1;
  }
  if ((*(long *)(param_4 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_4 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 041ea108 with catch @ 041ea1a0 */
    FUN_012d0ef0();
  }
                    /* try { // try from 041ea120 to 042ea127 has its CatchHandler @ 041ea198 */
  lVar2 = *plVar5;
                    /* try { // try from 041ea12c to 042ea163 has its CatchHandler @ 041ea1b4 */
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    /* try { // try from 041ea16c to 042ea183 has its CatchHandler @ 041e9c9c */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
        goto LAB_041ea178;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,7);
                    /* try { // try from 041ea164 to 042ea16b has its CatchHandler @ 041ea194 */
LAB_041ea178:
                    /* try { // try from 041ea184 to 042ea193 has its CatchHandler @ 041ea1a4 */
                    /* catch() { ... } // from try @ 041ea164 with catch @ 041ea194 */
                    /* catch() { ... } // from try @ 041ea120 with catch @ 041ea198 */
                    /* WARNING: Could not recover jumptable at 0x041ea19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 041ea104 with catch @ 041ea19c */
  (*(code *)*puVar1)(param_1,param_2,param_3,plVar5,puVar1[1]);
  return;
}

