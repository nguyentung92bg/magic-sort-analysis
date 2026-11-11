/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$GetDefaultLevelFromResources
Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetDefaultLevelFromResources (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o* __this, System_String_o* seed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$GetDefaultLevelFromResources
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetDefaultLevelFromResources
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o*
   __this, System_String_o* seed, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__GetDefaultLevelFromResources_1e8b830
               (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar3 = PTR_DAT_057bd988;
  if ((bRam0000000005c28107 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05796328);
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057c3478);
    FUN_012d0dc8(PTR_DAT_057bd988);
    bRam0000000005c28107 = 1;
  }
  uVar4 = System_String__Concat_1ec3580(*(undefined8 *)puVar3,param_2,0);
  plVar5 = (long *)UnityEngine_Resources__Load_4092924(uVar4,0);
  puVar2 = PTR_DAT_058031d8;
  puVar3 = PTR_DAT_05796328;
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_057c3478 + 300);
    if ((bVar1 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_057c3478)) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar4 = UnityEngine_TextAsset__get_text_408c690(plVar5,0);
      uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings_1f1b1e8
                        (0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar2);
      }
      puVar2 = PTR_DAT_0578a3a8;
      lVar9 = *(long *)puVar3;
      if ((bRam0000000005c2d8cd & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_058031d8);
        FUN_012d0dc8(PTR_DAT_0578a3a8);
        bRam0000000005c2d8cd = 1;
      }
      puVar3 = PTR_DAT_058031d8;
      uVar10 = **(undefined8 **)(lVar9 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar10 = System_Type__GetTypeFromHandle_2690398(uVar10,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar3);
      }
      lVar7 = Newtonsoft_Json_JsonConvert__DeserializeObject_35370a4(uVar4,uVar10,uVar6,0);
      lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 8);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        lVar9 = FUN_0131942c(lVar9);
      }
      if (lVar7 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = thunk_FUN_01320d5c(lVar7,lVar9);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar7,lVar9);
        }
      }
      return lVar8;
    }
  }
  return 0;
}

