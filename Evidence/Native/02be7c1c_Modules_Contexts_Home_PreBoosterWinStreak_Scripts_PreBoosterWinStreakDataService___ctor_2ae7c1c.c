/* IL2CPP: Modules.Contexts.Home.PreBoosterWinStreak.Scripts.PreBoosterWinStreakDataService$$.ctor
void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService___ctor (Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService_o* __this, Modules_Infrastructure_Persistence_ISaveLoad_PreBoosterWinStreakModel__o* saveLoad, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PreBoosterWinStreak.Scripts.PreBoosterWinStreakDataService$$.ctor
   void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService___ctor
   (Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService_o* __this,
   Modules_Infrastructure_Persistence_ISaveLoad_PreBoosterWinStreakModel__o* saveLoad, const
   MethodInfo* method); */

void Modules_Contexts_Home_PreBoosterWinStreak_Scripts_PreBoosterWinStreakDataService___ctor_2ae7c1c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 0x21) = 1;
                    /* catch() { ... } // from try @ 02be7c54 with catch @ 02be7c38
                       catch() { ... } // from try @ 02be7c84 with catch @ 02be7c38
                       catch() { ... } // from try @ 02be7cc0 with catch @ 02be7c38 */
  System_Object___ctor_23dfe5c(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_2;
                    /* try { // try from 02be7c4c to 02ce7c53 has its CatchHandler @ 02be7c68 */
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

