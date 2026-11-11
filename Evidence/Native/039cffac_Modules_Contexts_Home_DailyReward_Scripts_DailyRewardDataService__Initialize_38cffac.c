/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$Initialize
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__Initialize (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$Initialize
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__Initialize
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__Initialize_38cffac
               (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000005c34b9f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b94a0);
                    /* try { // try from 039cffd0 to 03acffdf has its CatchHandler @ 039cffe0 */
    bRam0000000005c34b9f = 1;
  }
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* catch() { ... } // from try @ 039cff20 with catch @ 039cffe0
                       catch() { ... } // from try @ 039cff4c with catch @ 039cffe0
                       catch() { ... } // from try @ 039cffd0 with catch @ 039cffe0 */
                    /* try { // try from 039cffe4 to 03acffe7 has its CatchHandler @ 039cfff0 */
  lVar3 = *plVar6;
                    /* try { // try from 039cffe8 to 03acfff3 has its CatchHandler @ 039cfe30 */
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039cffe4 with catch @ 039cfff0
                        */
                    /* catch() { ... } // from try @ 039d00a0 with catch @ 039cfff4
                       catch() { ... } // from try @ 039d00e0 with catch @ 039cfff4
                       catch() { ... } // from try @ 039d0118 with catch @ 039cfff4
                       catch() { ... } // from try @ 039d0144 with catch @ 039cfff4
                       catch() { ... } // from try @ 039d01c8 with catch @ 039cfff4 */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_057b94a0) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_039d0038;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 039d0020 to 03ad009f has its CatchHandler @ 039d00b0 */
  puVar1 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057b94a0,1);
LAB_039d0038:
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10),uVar2);
  *(undefined2 *)(param_1 + 0x20) = 0x100;
  return;
}

