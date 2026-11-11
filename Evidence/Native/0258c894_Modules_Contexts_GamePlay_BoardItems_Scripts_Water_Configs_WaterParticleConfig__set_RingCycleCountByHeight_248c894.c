/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Configs.WaterParticleConfig$$set_RingCycleCountByHeight
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterParticleConfig__set_RingCycleCountByHeight (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterParticleConfig_o* __this, System_Collections_Generic_List_int__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Water.Configs.WaterParticleConfig$$set_RingCycleCountByHeight
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterParticleConfig__set_RingCycleCountByHeight
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterParticleConfig_o* __this,
   System_Collections_Generic_List_int__o* value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterParticleConfig__set_RingCycleCountByHeight_248c894
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_2;
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

