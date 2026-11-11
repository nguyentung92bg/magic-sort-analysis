/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$GetCurrentLevelModel
Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel_o* Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetCurrentLevelModel (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$GetCurrentLevelModel
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetCurrentLevelModel
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, const MethodInfo* method);
    */

long Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetCurrentLevelModel_37a745c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_058031d8;
  puVar1 = PTR_DAT_05774390;
  if ((bRam0000000005c33e13 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05796328);
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c33e13 = 1;
  }
  puVar2 = PTR_DAT_05796328;
  uVar6 = Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetLevelJsonAsString_379cdc8
                    (param_1,*(undefined8 *)puVar1);
  uVar7 = Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings_1f1b1e8
                    (0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  puVar1 = PTR_DAT_0578a3a8;
  lVar8 = *(long *)puVar2;
  if ((bRam0000000005c2d8cd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c2d8cd = 1;
  }
  puVar3 = PTR_DAT_058031d8;
  uVar9 = **(undefined8 **)(lVar8 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar9 = System_Type__GetTypeFromHandle_2690398(uVar9,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar3);
  }
  lVar4 = Newtonsoft_Json_JsonConvert__DeserializeObject_35370a4(uVar6,uVar9,uVar7,0);
  lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 8);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_0131942c(lVar8);
  }
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_01320d5c(lVar4,lVar8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(lVar4,lVar8);
    }
  }
  return lVar5;
}

