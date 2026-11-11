/* IL2CPP: Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$GetDefaultRegularLevelsConfigs
Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o* Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultRegularLevelsConfigs (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.GrandConfig.Scripts.GrandConfigPersistenceService$$GetDefaultRegularLevelsConfigs
   Modules_Contexts_Application_GrandConfig_Scripts_GrandRemoteRegularLevelsConfigs_o*
   Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultRegularLevelsConfigs
   (Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__GetDefaultRegularLevelsConfigs_1cb4b88
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
                    /* try { // try from 01db4b9c to 01eb4bb3 has its CatchHandler @ 01db50b8 */
  if (lVar1 == 0) {
    uVar2 = Modules_Contexts_Application_GrandConfig_Scripts_GrandConfigPersistenceService__LoadDefaultRegularConfigs_1cb4d60
                      (param_1);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    FUN_012d0d74((long *)(param_1 + 0x10),uVar2);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  return lVar1;
}

