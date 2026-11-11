/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$SetLocalPosition
void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalPosition (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$SetLocalPosition
   void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalPosition
   (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, UnityEngine_Vector3_o
   position, const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalPosition_40ea748
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 041ea76c to 042ea7f3 has its CatchHandler @ 041ea76c
                       catch() { ... } // from try @ 041ea76c with catch @ 041ea76c
                       catch() { ... } // from try @ 041ea808 with catch @ 041ea76c
                       catch() { ... } // from try @ 041ea870 with catch @ 041ea76c
                       catch() { ... } // from try @ 041ea8c8 with catch @ 041ea76c */
  if ((bRam0000000005c3aa91 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c3aa91 = 1;
  }
  if ((*(long *)(param_4 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_4 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
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
        goto LAB_041ea7f0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,5);
LAB_041ea7f0:
                    /* try { // try from 041ea7f4 to 042ea807 has its CatchHandler @ 041ea840 */
                    /* try { // try from 041ea808 to 042ea857 has its CatchHandler @ 041ea76c */
                    /* WARNING: Could not recover jumptable at 0x041ea814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_2,param_3,plVar5,puVar1[1]);
  return;
}

