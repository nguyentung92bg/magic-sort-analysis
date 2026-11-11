/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$SetLocalRotation
void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalRotation (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$SetLocalRotation
   void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalRotation
   (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, UnityEngine_Quaternion_o
   rotation, const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalRotation_40ea81c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 041ea7f4 with catch @ 041ea840
                        */
  if ((bRam0000000005c3aa92 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
                    /* try { // try from 041ea858 to 042ea86f has its CatchHandler @ 041ea8c0 */
    bRam0000000005c3aa92 = 1;
  }
  if ((*(long *)(param_5 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_5 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 041ea870 to 042ea8af has its CatchHandler @ 041ea76c */
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    /* catch() { ... } // from try @ 041ea858 with catch @ 041ea8c0
                       catch() { ... } // from try @ 041ea8b0 with catch @ 041ea8c0 */
                    /* try { // try from 041ea8c4 to 042ea8c7 has its CatchHandler @ 041ea8d0 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 9) * 0x10 + 0x138);
        goto LAB_041ea8c8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 041ea8b0 to 042ea8bf has its CatchHandler @ 041ea8c0 */
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,9);
LAB_041ea8c8:
                    /* try { // try from 041ea8c8 to 042ea8d3 has its CatchHandler @ 041ea76c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041ea8c4 with catch @ 041ea8d0
                        */
                    /* WARNING: Could not recover jumptable at 0x041ea8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_2,param_3,param_4,plVar5,puVar1[1]);
  return;
}

