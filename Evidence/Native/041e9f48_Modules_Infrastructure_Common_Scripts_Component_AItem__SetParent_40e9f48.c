/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetParent
void Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Infrastructure.Common.Scripts.Component.AItem$$SetParent
   void Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent
   (Modules_Infrastructure_Common_Scripts_Component_AItem_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, const MethodInfo* method);
    */

void Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48
               (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* try { // try from 041e9f50 to 042e9f6b has its CatchHandler @ 041ea020 */
  if ((bRam0000000005c3aa87 & 1) == 0) {
                    /* try { // try from 041e9f6c to 042e9f6f has its CatchHandler @ 041ea018 */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
                    /* try { // try from 041e9f70 to 042e9f8b has its CatchHandler @ 041ea01c */
    bRam0000000005c3aa87 = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x18), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 041e9f8c to 042e9f93 has its CatchHandler @ 041e9c9c */
  lVar2 = *plVar5;
                    /* try { // try from 041e9f94 to 042e9f97 has its CatchHandler @ 041ea0a0 */
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
                    /* try { // try from 041e9f98 to 042e9f9f has its CatchHandler @ 041ea024 */
  if (uVar3 != 0) {
                    /* try { // try from 041e9fa0 to 042e9fa3 has its CatchHandler @ 041e9c9c */
                    /* try { // try from 041e9fa4 to 042e9fd7 has its CatchHandler @ 041ea020 */
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    /* try { // try from 041e9fd8 to 042ea00b has its CatchHandler @ 041ea01c */
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 10) * 0x10 + 0x138);
        goto LAB_041e9fe0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0575a2d8,10);
LAB_041e9fe0:
                    /* WARNING: Could not recover jumptable at 0x041e9ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}

