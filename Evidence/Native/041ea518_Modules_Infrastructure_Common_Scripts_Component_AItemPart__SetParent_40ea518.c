/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$SetParent
void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$SetParent
   void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent
   (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, const MethodInfo* method);
    */

void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetParent_40ea518
               (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* catch() { ... } // from try @ 041ea470 with catch @ 041ea518
                       try { // try from 041ea518 to 042ea56f has its CatchHandler @ 041ea224 */
                    /* catch() { ... } // from try @ 041ea41c with catch @ 041ea51c */
                    /* catch() { ... } // from try @ 041ea44c with catch @ 041ea520
                       catch() { ... } // from try @ 041ea4f0 with catch @ 041ea520 */
                    /* catch() { ... } // from try @ 041ea400 with catch @ 041ea524
                       catch() { ... } // from try @ 041ea4bc with catch @ 041ea524 */
                    /* catch() { ... } // from try @ 041ea3e4 with catch @ 041ea528
                       catch() { ... } // from try @ 041ea474 with catch @ 041ea528 */
                    /* catch() { ... } // from try @ 041ea37c with catch @ 041ea52c */
                    /* catch() { ... } // from try @ 041ea364 with catch @ 041ea530 */
  if ((bRam0000000005c3aa8e & 1) == 0) {
                    /* catch() { ... } // from try @ 041ea328 with catch @ 041ea534 */
                    /* catch() { ... } // from try @ 041ea348 with catch @ 041ea538 */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
                    /* catch() { ... } // from try @ 041ea30c with catch @ 041ea544 */
    bRam0000000005c3aa8e = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
                    /* try { // try from 041ea570 to 042ea573 has its CatchHandler @ 041ea660 */
                    /* try { // try from 041ea574 to 042ea583 has its CatchHandler @ 041ea224 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    /* try { // try from 041ea5a4 to 042ea5a7 has its CatchHandler @ 041ea63c */
                    /* try { // try from 041ea5a8 to 042ea5bf has its CatchHandler @ 041ea640 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 10) * 0x10 + 0x138);
        goto LAB_041ea5b0;
      }
                    /* try { // try from 041ea584 to 042ea59b has its CatchHandler @ 041ea644 */
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,10);
LAB_041ea5b0:
                    /* try { // try from 041ea5c0 to 042ea5c7 has its CatchHandler @ 041ea638 */
                    /* WARNING: Could not recover jumptable at 0x041ea5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}

