/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$LateUpdate
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__LateUpdate (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$LateUpdate
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__LateUpdate
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__LateUpdate_38d006c
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c34ba0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b94a0);
    bRam0000000005c34ba0 = 1;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
                    /* try { // try from 039d00a0 to 03ad00c7 has its CatchHandler @ 039cfff4 */
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar2 = *plVar5;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d0020 with catch @ 039d00b0
                        */
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
                    /* try { // try from 039d00c8 to 03ad00df has its CatchHandler @ 039d01c0 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_057b94a0) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_039d0100;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
                    /* try { // try from 039d00e0 to 03ad00ff has its CatchHandler @ 039cfff4 */
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057b94a0,0);
LAB_039d0100:
                    /* try { // try from 039d0100 to 03ad0117 has its CatchHandler @ 039d01c0 */
    (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
                    /* try { // try from 039d0118 to 03ad012b has its CatchHandler @ 039cfff4 */
  return;
}

