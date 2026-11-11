/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.LevelLoadFromJsonButton$$OnClick
void Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadFromJsonButton__OnClick (Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadFromJsonButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.LevelLoadFromJsonButton$$OnClick
   void Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadFromJsonButton__OnClick
   (Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadFromJsonButton_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadFromJsonButton__OnClick_379e950(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33dca & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783010);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c33dca = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
     (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 == 0)) {
LAB_0389e9d4:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                    (lVar5,*(undefined8 *)PTR_DAT_05783010);
  if ((*(long *)(param_1 + 0x18) == 0) || (lVar5 == 0)) goto LAB_0389e9d4;
  lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x218);
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
  uVar2 = System_String__IsNullOrEmpty_1ed04ac(lVar6,0);
  if ((uVar2 & 1) == 0) {
    if (lVar6 == 0) goto LAB_0389e678;
    if (*(int *)(lVar6 + 0x10) < 5) goto LAB_0389e4a4;
    uVar3 = Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings_1f1b1e8
                      (0);
    if (*(int *)(*(long *)PTR_DAT_058031d8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar6 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b215c
                      (lVar6,uVar3,*(undefined8 *)PTR_DAT_05796328);
  }
  else {
LAB_0389e4a4:
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057eb888);
    puVar1 = PTR_DAT_057d4c98;
    if (lVar6 == 0) goto LAB_0389e678;
    Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel___ctor_1f1bcd4(lVar6,0);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057f0450;
    if (lVar4 == 0) goto LAB_0389e678;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar4,*(undefined8 *)PTR_DAT_05813970);
    *(long *)(lVar6 + 0x28) = lVar4;
    FUN_012d0d74((long *)(lVar6 + 0x28),lVar4);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 == 0) goto LAB_0389e678;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar4,*(undefined8 *)PTR_DAT_0579a748);
    *(long *)(lVar6 + 0x30) = lVar4;
    FUN_012d0d74((long *)(lVar6 + 0x30),lVar4);
  }
  puVar1 = PTR_DAT_057d0c00;
  plVar7 = (long *)(lVar5 + 0x48);
  if (*plVar7 != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__Deinitialize_37a8cf0
              ();
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection___ctor_37a6b70
                ();
      *plVar7 = lVar4;
      FUN_012d0d74(plVar7,lVar4);
      if (((lVar6 != 0) && (*plVar7 != 0)) &&
         (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GenerateBottles_37a8e98
                    (*plVar7,*(undefined8 *)(lVar6 + 0x28),1), *(long *)(lVar5 + 0x18) != 0)) {
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Refresh_37a494c();
        if ((bRam0000000005c33e1a & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0578dc40);
          bRam0000000005c33e1a = 1;
        }
        puVar1 = PTR_DAT_0578dc40;
        uStack_24 = 0;
        lVar4 = *(long *)(lVar5 + 0x70);
        *(undefined1 *)(lVar5 + 0x68) = 0;
        if (lVar6 == 0) {
          uVar3 = *(undefined8 *)puVar1;
        }
        else {
          uStack_24 = *(undefined4 *)(lVar6 + 0x14);
          uVar3 = System_Int32__ToString_26c9768(&uStack_24,0);
        }
        if (lVar4 != 0) {
          TMPro_TMP_InputField__set_text_3790d40(lVar4,uVar3,0);
          lVar5 = *(long *)(lVar5 + 0x88);
          if (lVar6 == 0) {
            uVar3 = *(undefined8 *)puVar1;
          }
          else {
            uStack_24 = *(undefined4 *)(lVar6 + 0x18);
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

