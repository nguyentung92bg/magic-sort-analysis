/* IL2CPP: Modules.Contexts.Home.JetpackRaceWithStage.Scripts.UI.JetpackRaceWithStageLeaderboardPlayerViewModel$$set_UserName
void Modules_Contexts_Home_JetpackRaceWithStage_Scripts_UI_JetpackRaceWithStageLeaderboardPlayerViewModel__set_UserName (Modules_Contexts_Home_JetpackRaceWithStage_Scripts_UI_JetpackRaceWithStageLeaderboardPlayerViewModel_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.JetpackRaceWithStage.Scripts.UI.JetpackRaceWithStageLeaderboardPlayerViewModel$$set_UserName
   void 
   Modules_Contexts_Home_JetpackRaceWithStage_Scripts_UI_JetpackRaceWithStageLeaderboardPlayerViewModel__set_UserName
   (Modules_Contexts_Home_JetpackRaceWithStage_Scripts_UI_JetpackRaceWithStageLeaderboardPlayerViewModel_o*
   __this, System_String_o* value, const MethodInfo* method); */

void Modules_Contexts_Home_JetpackRaceWithStage_Scripts_UI_JetpackRaceWithStageLeaderboardPlayerViewModel__set_UserName_3b0eacc
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 03c0eacc to 03d0eacf has its CatchHandler @ 03c0eb78 */
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_2;
                    /* try { // try from 03c0ead0 to 03d0eae3 has its CatchHandler @ 03c0e8c4 */
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

