/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetLocalPosition
void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalPosition (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetLocalPosition
   void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalPosition
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, UnityEngine_Vector3_o position,
   const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalPosition_40e9e74
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 041e9e80 to 042e9e93 has its CatchHandler @ 041ea048 */
                    /* try { // try from 041e9e94 to 042e9e9f has its CatchHandler @ 041ea030 */
  if ((bRam0000000005c3aa89 & 1) == 0) {
                    /* try { // try from 041e9ea0 to 042e9eab has its CatchHandler @ 041ea02c */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c3aa89 = 1;
  }
                    /* try { // try from 041e9ebc to 042e9ec7 has its CatchHandler @ 041ea024 */
  if ((*(long *)(param_4 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_4 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 041e9ec8 to 042e9f4f has its CatchHandler @ 041e9c9c */
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
  (*(code *)*puVar1)(param_1,param_2,param_3,plVar5,puVar1[1]);
  return;
}

