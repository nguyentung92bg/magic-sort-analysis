/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$DeleteData
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__DeleteData (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$DeleteData
   void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__DeleteData
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__DeleteData_38d0128
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_05784c30;
                    /* try { // try from 039d012c to 03ad0143 has its CatchHandler @ 039d01c0 */
                    /* try { // try from 039d0144 to 03ad01af has its CatchHandler @ 039cfff4 */
  if ((bRam0000000005c34ba1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05784c30);
    FUN_012d0dc8(PTR_DAT_057b94a0);
    bRam0000000005c34ba1 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x18);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 == 0) || (System_Object___ctor_23dfe5c(lVar2,0), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 039d01b0 to 03ad01bf has its CatchHandler @ 039d01c0 */
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057b94a0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039d01c4 with catch @ 039d01d0
                        */
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_039d01dc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* catch() { ... } // from try @ 039d00c8 with catch @ 039d01c0
                       catch() { ... } // from try @ 039d0100 with catch @ 039d01c0
                       catch() { ... } // from try @ 039d012c with catch @ 039d01c0
                       catch() { ... } // from try @ 039d01b0 with catch @ 039d01c0 */
                    /* try { // try from 039d01c4 to 03ad01c7 has its CatchHandler @ 039d01d0 */
                    /* try { // try from 039d01c8 to 03ad01d3 has its CatchHandler @ 039cfff4 */
  puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057b94a0,0);
LAB_039d01dc:
                    /* WARNING: Could not recover jumptable at 0x039d01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,lVar2,puVar3[1]);
  return;
}

