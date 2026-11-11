/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardProbabilityModel$$set_UnlimitedLifeProbabilities
void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel__set_UnlimitedLifeProbabilities (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel_o* __this, Modules_Contexts_Home_DailyReward_Scripts_DailyRewardUnlimitedLifeProbabilityModel_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.DailyRewardProbabilityModel$$set_UnlimitedLifeProbabilities
   void 
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel__set_UnlimitedLifeProbabilities
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel_o* __this,
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardUnlimitedLifeProbabilityModel_o* value,
   const MethodInfo* method); */

void Modules_Contexts_Home_DailyReward_Scripts_DailyRewardProbabilityModel__set_UnlimitedLifeProbabilities_38cfe1c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* catch() { ... } // from try @ 039cfd20 with catch @ 039cfe1c
                       catch() { ... } // from try @ 039cfd5c with catch @ 039cfe1c
                       catch() { ... } // from try @ 039cfd88 with catch @ 039cfe1c
                       catch() { ... } // from try @ 039cfe0c with catch @ 039cfe1c */
  puVar4 = (undefined8 *)(param_1 + 0x30);
  *puVar4 = param_2;
                    /* try { // try from 039cfe20 to 03acfe23 has its CatchHandler @ 039cfe2c */
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

