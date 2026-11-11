/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$SetLocalScale
void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalScale (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, UnityEngine_Vector3_o scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItemPart$$SetLocalScale
   void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalScale
   (Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* __this, UnityEngine_Vector3_o
   scale, const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalScale_40ea8f8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000005c3aa93 & 1) == 0) {
                    /* try { // try from 041ea924 to 042ea9f7 has its CatchHandler @ 041ea924
                       catch() { ... } // from try @ 041ea924 with catch @ 041ea924
                       catch() { ... } // from try @ 041eaa10 with catch @ 041ea924
                       catch() { ... } // from try @ 041eaaf4 with catch @ 041ea924
                       catch() { ... } // from try @ 041eabb0 with catch @ 041ea924
                       catch() { ... } // from try @ 041eabf4 with catch @ 041ea924
                       catch() { ... } // from try @ 041eac40 with catch @ 041ea924
                       catch() { ... } // from try @ 041ead08 with catch @ 041ea924
                       catch() { ... } // from try @ 041ead50 with catch @ 041ea924 */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c3aa93 = 1;
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
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
        goto LAB_041ea9a0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,7);
LAB_041ea9a0:
                    /* WARNING: Could not recover jumptable at 0x041ea9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_2,param_3,plVar5,puVar1[1]);
  return;
}

