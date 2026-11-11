/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$LoadLevel
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__LoadLevel (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, System_String_o* content, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$LoadLevel
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__LoadLevel
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, System_String_o* content,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__LoadLevel_379e3b8
               (long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 uStack_24;
  
  if ((bRam0000000005c33e19 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0c00);
    FUN_012d0dc8(PTR_DAT_05796328);
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057eb888);
    FUN_012d0dc8(PTR_DAT_05813970);
    FUN_012d0dc8(PTR_DAT_0579a748);
    FUN_012d0dc8(PTR_DAT_057f0450);
    FUN_012d0dc8(PTR_DAT_057d4c98);
    bRam0000000005c33e19 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty_1ed04ac(param_2,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) goto LAB_0389e678;
    if (*(int *)(param_2 + 0x10) < 5) goto LAB_0389e4a4;
    uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings_1f1b1e8
                      (0);
    if (*(int *)(*(long *)PTR_DAT_058031d8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar4 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b215c
                      (param_2,uVar3,*(undefined8 *)PTR_DAT_05796328);
  }
  else {
LAB_0389e4a4:
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057eb888);
    puVar1 = PTR_DAT_057d4c98;
    if (lVar4 == 0) goto LAB_0389e678;
    Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel___ctor_1f1bcd4(lVar4,0);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057f0450;
    if (lVar5 == 0) goto LAB_0389e678;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_05813970);
    *(long *)(lVar4 + 0x28) = lVar5;
    FUN_012d0d74((long *)(lVar4 + 0x28),lVar5);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_0389e678;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_0579a748);
    *(long *)(lVar4 + 0x30) = lVar5;
    FUN_012d0d74((long *)(lVar4 + 0x30),lVar5);
  }
  puVar1 = PTR_DAT_057d0c00;
  plVar6 = (long *)(param_1 + 0x48);
  if (*plVar6 != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__Deinitialize_37a8cf0
              ();
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection___ctor_37a6b70
                ();
      *plVar6 = lVar5;
      FUN_012d0d74(plVar6,lVar5);
      if (((lVar4 != 0) && (*plVar6 != 0)) &&
         (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GenerateBottles_37a8e98
                    (*plVar6,*(undefined8 *)(lVar4 + 0x28),1), *(long *)(param_1 + 0x18) != 0)) {
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Refresh_37a494c();
        if ((bRam0000000005c33e1a & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0578dc40);
          bRam0000000005c33e1a = 1;
        }
        puVar1 = PTR_DAT_0578dc40;
        uStack_24 = 0;
        lVar5 = *(long *)(param_1 + 0x70);
        *(undefined1 *)(param_1 + 0x68) = 0;
        if (lVar4 == 0) {
          uVar3 = *(undefined8 *)puVar1;
        }
        else {
          uStack_24 = *(undefined4 *)(lVar4 + 0x14);
          uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
        }
        if (lVar5 != 0) {
          TMPro_TMP_InputField__set_text_3790d40(lVar5,uVar3,0);
          lVar5 = *(long *)(param_1 + 0x88);
          if (lVar4 == 0) {
            uVar3 = *(undefined8 *)puVar1;
          }
          else {
            uStack_24 = *(undefined4 *)(lVar4 + 0x18);
            uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
          }
          if (lVar5 != 0) {
            TMPro_TMP_InputField__set_text_3790d40(lVar5,uVar3,0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
LAB_0389e678:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

