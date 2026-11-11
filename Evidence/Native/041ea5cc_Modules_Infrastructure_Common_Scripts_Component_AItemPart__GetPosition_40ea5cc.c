/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$GetPosition
UnityEngine_Vector3_o Modules_Infrastructure_Common_Scripts_Component_AItemPart__GetPosition (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$GetPosition
   UnityEngine_Vector3_o Modules_Infrastructure_Common_Scripts_Component_AItemPart__GetPosition
   (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, const MethodInfo* method);
    */

void Modules_Infrastructure_Common_Scripts_Component_AItemPart__GetPosition_40ea5cc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 041ea5cc to 042ea603 has its CatchHandler @ 041ea654 */
  if ((bRam0000000005c3aa8f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c3aa8f = 1;
  }
                    /* try { // try from 041ea604 to 042ea60b has its CatchHandler @ 041ea634 */
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 041ea60c to 042ea623 has its CatchHandler @ 041ea224 */
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
                    /* try { // try from 041ea624 to 042ea633 has its CatchHandler @ 041ea644 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    /* catch() { ... } // from try @ 041ea5cc with catch @ 041ea654 */
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_041ea65c;
      }
                    /* catch() { ... } // from try @ 041ea604 with catch @ 041ea634 */
      uVar3 = uVar3 - 1;
                    /* catch() { ... } // from try @ 041ea5c0 with catch @ 041ea638 */
      piVar4 = piVar4 + 4;
                    /* catch() { ... } // from try @ 041ea5a4 with catch @ 041ea63c */
    } while (uVar3 != 0);
  }
                    /* catch() { ... } // from try @ 041ea5a8 with catch @ 041ea640 */
                    /* catch() { ... } // from try @ 041ea584 with catch @ 041ea644
                       catch() { ... } // from try @ 041ea624 with catch @ 041ea644 */
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,0);
                    /* try { // try from 041ea64c to 042ea6a3 has its CatchHandler @ 041ea6b8 */
LAB_041ea65c:
                    /* catch() { ... } // from try @ 041ea570 with catch @ 041ea660 */
                    /* WARNING: Could not recover jumptable at 0x041ea66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

