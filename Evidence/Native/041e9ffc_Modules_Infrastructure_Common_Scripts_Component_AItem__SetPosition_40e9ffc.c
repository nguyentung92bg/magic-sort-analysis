/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetPosition
void Modules_Infrastructure_Common_Scripts_Component_AItem__SetPosition (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetPosition
   void Modules_Infrastructure_Common_Scripts_Component_AItem__SetPosition
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, UnityEngine_Vector3_o position,
   const MethodInfo* method); */

void Modules_Infrastructure_Common_Scripts_Component_AItem__SetPosition_40e9ffc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 041ea00c to 042ea063 has its CatchHandler @ 041e9c9c */
                    /* catch() { ... } // from try @ 041e9f6c with catch @ 041ea018 */
                    /* catch() { ... } // from try @ 041e9f70 with catch @ 041ea01c
                       catch() { ... } // from try @ 041e9fd8 with catch @ 041ea01c */
                    /* catch() { ... } // from try @ 041e9f50 with catch @ 041ea020
                       catch() { ... } // from try @ 041e9fa4 with catch @ 041ea020 */
                    /* catch() { ... } // from try @ 041e9ebc with catch @ 041ea024
                       catch() { ... } // from try @ 041e9f98 with catch @ 041ea024 */
  if ((bRam0000000005c3aa88 & 1) == 0) {
                    /* catch() { ... } // from try @ 041e9e0c with catch @ 041ea028 */
                    /* catch() { ... } // from try @ 041e9ea0 with catch @ 041ea02c */
                    /* catch() { ... } // from try @ 041e9e94 with catch @ 041ea030 */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
                    /* catch() { ... } // from try @ 041e9e6c with catch @ 041ea034 */
                    /* catch() { ... } // from try @ 041e9e58 with catch @ 041ea038 */
    bRam0000000005c3aa88 = 1;
  }
                    /* catch() { ... } // from try @ 041e9e14 with catch @ 041ea044 */
                    /* catch() { ... } // from try @ 041e9e80 with catch @ 041ea048 */
  if ((*(long *)(param_4 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_4 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 041ea0cc to 042ea0cf has its CatchHandler @ 041ea1c0 */
    FUN_012d0ef0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
                    /* try { // try from 041ea064 to 042ea067 has its CatchHandler @ 041ea094 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    /* catch() { ... } // from try @ 041ea064 with catch @ 041ea094
                       try { // try from 041ea094 to 042ea0cb has its CatchHandler @ 041e9c9c */
                    /* catch() { ... } // from try @ 041e9e2c with catch @ 041ea0a0
                       catch() { ... } // from try @ 041e9f94 with catch @ 041ea0a0 */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_041ea0a4;
      }
      uVar3 = uVar3 - 1;
                    /* try { // try from 041ea07c to 042ea093 has its CatchHandler @ 041ea218 */
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,1);
LAB_041ea0a4:
                    /* WARNING: Could not recover jumptable at 0x041ea0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_2,param_3,plVar5,puVar1[1]);
  return;
}

