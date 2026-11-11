/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.EmptyLevelButton$$OnClick
void Modules_LevelEditor_WaterSort_UI_Scripts_EmptyLevelButton__OnClick (Modules_LevelEditor_WaterSort_UI_Scripts_EmptyLevelButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.EmptyLevelButton$$OnClick
   void Modules_LevelEditor_WaterSort_UI_Scripts_EmptyLevelButton__OnClick
   (Modules_LevelEditor_WaterSort_UI_Scripts_EmptyLevelButton_o* __this, const MethodInfo* method);
    */

void Modules_LevelEditor_WaterSort_UI_Scripts_EmptyLevelButton__OnClick_379d9a4(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c33dc0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783010);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c33dc0 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 == 0)) ||
     (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar2,*(undefined8 *)PTR_DAT_05783010), puVar1 = PTR_DAT_05774390,
     lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c33e18 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c33e18 = 1;
  }
  lVar6 = *(long *)puVar1;
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
  uVar3 = System_String__IsNullOrEmpty_1ed04ac(lVar6,0);
  if ((uVar3 & 1) == 0) {
    if (lVar6 == 0) goto LAB_0389e678;
    if (*(int *)(lVar6 + 0x10) < 5) goto LAB_0389e4a4;
    uVar4 = Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings_1f1b1e8
                      (0);
    if (*(int *)(*(long *)PTR_DAT_058031d8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar6 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b215c
                      (lVar6,uVar4,*(undefined8 *)PTR_DAT_05796328);
  }
  else {
LAB_0389e4a4:
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057eb888);
    puVar1 = PTR_DAT_057d4c98;
    if (lVar6 == 0) goto LAB_0389e678;
    Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel___ctor_1f1bcd4(lVar6,0);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057f0450;
    if (lVar5 == 0) goto LAB_0389e678;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_05813970);
    *(long *)(lVar6 + 0x28) = lVar5;
    FUN_012d0d74((long *)(lVar6 + 0x28),lVar5);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_0389e678;
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_0579a748);
    *(long *)(lVar6 + 0x30) = lVar5;
    FUN_012d0d74((long *)(lVar6 + 0x30),lVar5);
  }
  puVar1 = PTR_DAT_057d0c00;
  plVar7 = (long *)(lVar2 + 0x48);
  if (*plVar7 != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__Deinitialize_37a8cf0
              ();
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection___ctor_37a6b70
                ();
      *plVar7 = lVar5;
      FUN_012d0d74(plVar7,lVar5);
      if (((lVar6 != 0) && (*plVar7 != 0)) &&
         (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GenerateBottles_37a8e98
                    (*plVar7,*(undefined8 *)(lVar6 + 0x28),1), *(long *)(lVar2 + 0x18) != 0)) {
        Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Refresh_37a494c();
        if ((bRam0000000005c33e1a & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0578dc40);
          bRam0000000005c33e1a = 1;
        }
        puVar1 = PTR_DAT_0578dc40;
        uStack_24 = 0;
        lVar5 = *(long *)(lVar2 + 0x70);
        *(undefined1 *)(lVar2 + 0x68) = 0;
        if (lVar6 == 0) {
          uVar4 = *(undefined8 *)puVar1;
        }
        else {
          uStack_24 = *(undefined4 *)(lVar6 + 0x14);
          uVar4 = System_Int32__ToString_26c9768(&uStack_24,0);
        }
        if (lVar5 != 0) {
          TMPro_TMP_InputField__set_text_3790d40(lVar5,uVar4,0);
          lVar2 = *(long *)(lVar2 + 0x88);
          if (lVar6 == 0) {
            uVar4 = *(undefined8 *)puVar1;
          }
          else {
            uStack_24 = *(undefined4 *)(lVar6 + 0x18);
            uVar4 = System_Int32__ToString_26c9768(&uStack_24,0);
          }
          if (lVar2 != 0) {
            TMPro_TMP_InputField__set_text_3790d40(lVar2,uVar4,0);
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

