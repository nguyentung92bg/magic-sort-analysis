/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardPlayerViewModel$$SetData
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel__SetData (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel_o* __this, Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardPlayer_o* model, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardPlayerViewModel$$SetData
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel__SetData
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel_o*
   __this, Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardPlayer_o* model, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardPlayerViewModel__SetData_2aef004
               (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    FUN_012d0d74();
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    FUN_012d0d74();
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    FUN_012d0d74();
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    FUN_012d0d74();
                    /* try { // try from 02bef068 to 02cef08f has its CatchHandler @ 02bef1d8 */
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    FUN_012d0d74();
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    FUN_012d0d74();
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    FUN_012d0d74();
    puVar4 = (undefined8 *)(param_1 + 0x58);
    *puVar4 = *(undefined8 *)(param_2 + 0x58);
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

