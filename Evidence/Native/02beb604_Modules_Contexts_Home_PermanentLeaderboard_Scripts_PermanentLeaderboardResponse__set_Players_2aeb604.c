/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardResponse$$set_Players
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardResponse__set_Players (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardResponse_o* __this, System_Collections_Generic_List_PermanentLeaderboardPlayerResponse__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardResponse$$set_Players
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardResponse__set_Players
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardResponse_o* __this,
   System_Collections_Generic_List_PermanentLeaderboardPlayerResponse__o* value, const MethodInfo*
   method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardResponse__set_Players_2aeb604
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x10);
  *puVar4 = param_2;
                    /* try { // try from 02beb608 to 02ceb60f has its CatchHandler @ 02beb66c */
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

