/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetLocalRotation
void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalRotation (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetLocalRotation
   void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalRotation
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, UnityEngine_Quaternion_o
   rotation, const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalRotation_40ea1a4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* catch() { ... } // from try @ 041ea0e4 with catch @ 041ea1a4
                       catch() { ... } // from try @ 041ea184 with catch @ 041ea1a4 */
                    /* try { // try from 041ea1ac to 042ea203 has its CatchHandler @ 041ea218 */
                    /* catch() { ... } // from try @ 041ea12c with catch @ 041ea1b4 */
                    /* catch() { ... } // from try @ 041ea0cc with catch @ 041ea1c0 */
  if ((bRam0000000005c3aa8b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c3aa8b = 1;
  }
  if ((*(long *)(param_5 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_5 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
                    /* try { // try from 041ea204 to 042ea20f has its CatchHandler @ 041e9c9c */
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
                    /* try { // try from 041ea210 to 042ea217 has its CatchHandler @ 041ea218 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 041ea07c with catch @ 041ea218
                       catch() { ... } // from try @ 041ea1ac with catch @ 041ea218
                       catch() { ... } // from try @ 041ea210 with catch @ 041ea218 */
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 9) * 0x10 + 0x138);
        goto LAB_041ea250;
      }
                    /* try { // try from 041ea224 to 042ea30b has its CatchHandler @ 041ea224
                       catch() { ... } // from try @ 041ea224 with catch @ 041ea224
                       catch() { ... } // from try @ 041ea384 with catch @ 041ea224
                       catch() { ... } // from try @ 041ea468 with catch @ 041ea224
                       catch() { ... } // from try @ 041ea518 with catch @ 041ea224
                       catch() { ... } // from try @ 041ea574 with catch @ 041ea224
                       catch() { ... } // from try @ 041ea60c with catch @ 041ea224
                       catch() { ... } // from try @ 041ea6a4 with catch @ 041ea224 */
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,9);
LAB_041ea250:
                    /* WARNING: Could not recover jumptable at 0x041ea278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_2,param_3,param_4,plVar5,puVar1[1]);
  return;
}

