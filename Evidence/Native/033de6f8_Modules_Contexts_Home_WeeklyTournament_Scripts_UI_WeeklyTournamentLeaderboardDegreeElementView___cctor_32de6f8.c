/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardDegreeElementView$$.cctor
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardDegreeElementView___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardDegreeElementView$$.cctor
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardDegreeElementView___cctor
   (const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardDegreeElementView___cctor_32de6f8
               (void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar5 = PTR_DAT_05812b78;
  puVar4 = PTR_DAT_057a2af0;
  if ((bRam0000000005c31da1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05812b78);
    FUN_012d0dc8(PTR_DAT_057a2af0);
    bRam0000000005c31da1 = 1;
  }
  **(undefined8 **)(*(long *)puVar5 + 0xb8) = *(undefined8 *)puVar4;
  uVar7 = *(undefined8 *)puVar4;
  uVar6 = *(ulong *)(*(long *)puVar5 + 0xb8);
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((uVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (uVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

