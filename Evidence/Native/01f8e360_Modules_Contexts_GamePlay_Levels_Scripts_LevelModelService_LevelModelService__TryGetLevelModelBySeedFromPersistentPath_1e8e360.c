/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$TryGetLevelModelBySeedFromPersistentPath
bool Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetLevelModelBySeedFromPersistentPath (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, System_String_o* seed, Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel_o** levelModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$TryGetLevelModelBySeedFromPersistentPath
   bool 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetLevelModelBySeedFromPersistentPath
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this,
   System_String_o* seed, Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel_o**
   levelModel, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__TryGetLevelModelBySeedFromPersistentPath_1e8e360
          (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__GetFileName_1f1bad4
                    (param_2,0);
  puVar1 = PTR_DAT_057acbe0;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c28108 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05796328);
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057acbe0);
    bRam0000000005c28108 = 1;
  }
  uStack_28 = 0;
  *param_3 = 0;
  FUN_012d0d74(param_3,0);
  uVar3 = Modules_Infrastructure_Persistence_PersistentData__TryLoad_3d1e890
                    (*(undefined8 *)puVar1,uVar4,&uStack_28,0);
  uVar2 = uStack_28;
  if ((uVar3 & 1) == 0) {
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_Application_Events_Scripts_EventSender__SendPersistentSeedLoadFailedEvent_1473a38
              (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),uVar4,0);
    uVar4 = 0;
  }
  else {
    uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings_1f1b1e8
                      (0);
    if (*(int *)(*(long *)PTR_DAT_058031d8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b215c
                      (uVar2,uVar4,*(undefined8 *)PTR_DAT_05796328);
    *param_3 = uVar4;
    FUN_012d0d74(param_3);
    uVar4 = 1;
  }
  return uVar4;
}

