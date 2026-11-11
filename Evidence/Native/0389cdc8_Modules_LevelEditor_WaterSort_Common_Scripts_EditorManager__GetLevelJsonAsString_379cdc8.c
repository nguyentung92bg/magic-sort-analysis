/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$GetLevelJsonAsString
System_String_o* Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetLevelJsonAsString (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, System_String_o* levelName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$GetLevelJsonAsString
   System_String_o* Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetLevelJsonAsString
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, System_String_o*
   levelName, const MethodInfo* method); */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetLevelJsonAsString_379cdc8
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000005c33e11 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057952c8);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c33e11 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x48) == 0) {
    return *(undefined8 *)PTR_DAT_05774390;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    System_Int32__TryParse_26c9e7c
              (*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x218),(long)&uStack_28 + 4,0);
    puVar1 = PTR_DAT_057952c8;
    if (*(long *)(param_1 + 0x88) != 0) {
      System_Int32__TryParse_26c9e7c
                (*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x218),&uStack_28,0);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_058031d8;
      if (lVar3 != 0) {
        Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelObject___ctor_1f1bd2c(lVar3,0);
        uVar2 = Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetUniqueColorCount_37a6dfc
                          (param_1);
        *(undefined4 *)(lVar3 + 0x18) = uVar2;
        *(undefined4 *)(lVar3 + 0x1c) = uStack_28._4_4_;
        *(undefined4 *)(lVar3 + 0x20) = (undefined4)uStack_28;
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x48);
        FUN_012d0d74();
        *(undefined8 *)(lVar3 + 0x28) = param_2;
        FUN_012d0d74((undefined8 *)(lVar3 + 0x28),param_2);
        uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings_1f1b1e8
                          (0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        uVar4 = Newtonsoft_Json_JsonConvert__SerializeObject_3536d14(lVar3,uVar4,0);
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

