/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$DeleteData
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__DeleteData (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$DeleteData
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__DeleteData
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__DeleteData_2aeb460
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_05795380;
  if ((bRam0000000005c2eb77 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05794398);
    FUN_012d0dc8(PTR_DAT_05795380);
    bRam0000000005c2eb77 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardModel___ctor_2aea3ec();
    plVar7 = (long *)(param_1 + 0x10);
    *plVar7 = lVar2;
    FUN_012d0d74(plVar7,lVar2);
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 02beb4d0 to 02ceb4f7 has its CatchHandler @ 02beb678 */
      lVar2 = *plVar6;
      lVar8 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_05794398) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02beb524;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_05794398,0);
LAB_02beb524:
                    /* try { // try from 02beb52c to 02ceb557 has its CatchHandler @ 02beb674 */
                    /* WARNING: Could not recover jumptable at 0x02beb538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar6,lVar8,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

