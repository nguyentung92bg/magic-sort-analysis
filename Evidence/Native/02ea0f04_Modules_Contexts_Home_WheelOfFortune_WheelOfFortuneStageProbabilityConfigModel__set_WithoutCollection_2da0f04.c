/* IL2CPP: Modules.Contexts.Home.WheelOfFortune.WheelOfFortuneStageProbabilityConfigModel$$set_WithoutCollection
void Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneStageProbabilityConfigModel__set_WithoutCollection (Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneStageProbabilityConfigModel_o* __this, System_Collections_Generic_Dictionary_WheelOfFortuneRewardSegment__float__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WheelOfFortune.WheelOfFortuneStageProbabilityConfigModel$$set_WithoutCollection
   void 
   Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneStageProbabilityConfigModel__set_WithoutCollection
   (Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneStageProbabilityConfigModel_o* __this,
   System_Collections_Generic_Dictionary_WheelOfFortuneRewardSegment__float__o* value, const
   MethodInfo* method); */

void Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneStageProbabilityConfigModel__set_WithoutCollection_2da0f04
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 02ea0f04 to 02fa0f07 has its CatchHandler @ 02ea0f20 */
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_2;
                    /* try { // try from 02ea0f08 to 02fa0f0b has its CatchHandler @ 02ea0f24 */
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

