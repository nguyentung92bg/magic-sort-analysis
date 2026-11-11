/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.GameplayConfigs$$set_FailFlowAnimationTallBottlesConfig
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_GameplayConfigs__set_FailFlowAnimationTallBottlesConfig (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_GameplayConfigs_o* __this, Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.GameplayConfigs$$set_FailFlowAnimationTallBottlesConfig
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_GameplayConfigs__set_FailFlowAnimationTallBottlesConfig
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_GameplayConfigs_o* __this,
   Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_FailFlowAnimationConfig_o* value, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_GameplayConfigs__set_FailFlowAnimationTallBottlesConfig_2300914
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 02400914 to 0250092b has its CatchHandler @ 02400998 */
  puVar4 = (undefined8 *)(param_1 + 0x38);
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

