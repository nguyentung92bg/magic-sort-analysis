/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$SetPosition
void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetPosition (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$SetPosition
   void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetPosition
   (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, UnityEngine_Vector3_o
   position, const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetPosition_40ea674
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000005c3aa90 & 1) == 0) {
                    /* try { // try from 041ea6a4 to 042ea6af has its CatchHandler @ 041ea224 */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
                    /* try { // try from 041ea6b0 to 042ea6b7 has its CatchHandler @ 041ea6b8 */
    bRam0000000005c3aa90 = 1;
  }
                    /* catch() { ... } // from try @ 041ea64c with catch @ 041ea6b8
                       catch() { ... } // from try @ 041ea6b0 with catch @ 041ea6b8 */
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
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_041ea71c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,1);
LAB_041ea71c:
                    /* WARNING: Could not recover jumptable at 0x041ea740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_2,param_3,plVar5,puVar1[1]);
  return;
}

