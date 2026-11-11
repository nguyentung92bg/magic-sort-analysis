/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$InitializeData
void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__InitializeData (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelPersistenceService$$InitializeData
   void 
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__InitializeData
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelPersistenceService__InitializeData_1e8aad8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_057fdff8;
  if ((bRam0000000005c280ff & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f8418);
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057fdff8);
    FUN_012d0dc8(PTR_DAT_057a3be0);
    FUN_012d0dc8(PTR_DAT_058141d8);
    FUN_012d0dc8(PTR_DAT_057acbe0);
    FUN_012d0dc8(PTR_DAT_05786370);
    bRam0000000005c280ff = 1;
  }
  uStack_38 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_058141d8;
  puVar1 = PTR_DAT_05786370;
  if (lVar5 != 0) {
    Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelBatches___ctor_1e8a620();
    *(long *)(param_1 + 0x48) = lVar5;
    FUN_012d0d74((long *)(param_1 + 0x48),lVar5);
    lVar5 = UnityEngine_Resources__Load_object__267ac1c(*(undefined8 *)puVar1,*(undefined8 *)puVar2)
    ;
    puVar4 = PTR_DAT_058031d8;
    puVar3 = PTR_DAT_057f8418;
    puVar2 = PTR_DAT_057acbe0;
    if (lVar5 != 0) {
      uVar6 = UnityEngine_TextAsset__get_text_408c690(lVar5,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar5);
      }
      uVar6 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b1ff4
                        (uVar6,*(undefined8 *)puVar3);
      *(undefined8 *)(param_1 + 0x38) = uVar6;
      FUN_012d0d74();
      uVar7 = Modules_Infrastructure_Persistence_PersistentData__TryLoad_3d1e890
                        (*(undefined8 *)puVar2,*(undefined8 *)puVar1,&uStack_38,0);
      uVar6 = uStack_38;
      if ((uVar7 & 1) == 0) {
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057a3be0);
        if (lVar5 == 0) goto LAB_01f8ac80;
        Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelCatalog___ctor_1e89fc0();
        *(long *)(param_1 + 0x40) = lVar5;
      }
      else {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar5 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b1ff4
                          (uVar6,*(undefined8 *)puVar3);
        *(long *)(param_1 + 0x40) = lVar5;
      }
      FUN_012d0d74(param_1 + 0x40,lVar5);
      return;
    }
  }
LAB_01f8ac80:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

