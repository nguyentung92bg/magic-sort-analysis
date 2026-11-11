/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$LateUpdate
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__LateUpdate (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$LateUpdate
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__LateUpdate
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__LateUpdate_2aeb3a8
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
                    /* try { // try from 02beb3b8 to 02ceb4cf has its CatchHandler @ 02beb3b8
                       catch() { ... } // from try @ 02beb3b8 with catch @ 02beb3b8
                       catch() { ... } // from try @ 02beb57c with catch @ 02beb3b8
                       catch() { ... } // from try @ 02beb610 with catch @ 02beb3b8
                       catch() { ... } // from try @ 02beb660 with catch @ 02beb3b8
                       catch() { ... } // from try @ 02beb704 with catch @ 02beb3b8 */
  if ((bRam0000000005c2eb76 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05794398);
    bRam0000000005c2eb76 = 1;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar2 = *plVar5;
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_05794398) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02beb43c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_05794398,0);
LAB_02beb43c:
    (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

