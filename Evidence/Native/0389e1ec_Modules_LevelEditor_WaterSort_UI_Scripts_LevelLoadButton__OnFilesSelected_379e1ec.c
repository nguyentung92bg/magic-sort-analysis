/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.LevelLoadButton$$OnFilesSelected
void Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadButton__OnFilesSelected (Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadButton_o* __this, System_String_array* filePaths, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.LevelLoadButton$$OnFilesSelected
   void Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadButton__OnFilesSelected
   (Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadButton_o* __this, System_String_array*
   filePaths, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadButton__OnFilesSelected_379e1ec
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  
  if ((bRam0000000005c33dc8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783010);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_057afe68);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05814b68);
    FUN_012d0dc8(PTR_DAT_057f2cd0);
    FUN_012d0dc8(PTR_DAT_05782a80);
    bRam0000000005c33dc8 = 1;
  }
  puVar1 = PTR_DAT_05807f60;
  if (param_2 == 0) goto LAB_0389e3b4;
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
  if (0 < (int)*(ulong *)(param_2 + 0x18)) {
    uVar7 = 0;
    do {
      if (uVar4 <= uVar7) goto LAB_0389e3b0;
      uVar6 = *(undefined8 *)(param_2 + 0x20 + uVar7 * 8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      UnityEngine_Debug__Log_4087f08(uVar6,0);
      uVar4 = (ulong)*(uint *)(param_2 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(param_2 + 0x18));
  }
  if ((int)uVar4 == 0) {
LAB_0389e3b0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
  lVar5 = *(long *)(param_2 + 0x20);
  uVar4 = System_IO_File__Exists_3484a00(lVar5,0);
  if ((uVar4 & 1) != 0) {
    if (lVar5 == 0) goto LAB_0389e3b4;
    uVar4 = System_String__EndsWith_1eceacc(lVar5,*(undefined8 *)PTR_DAT_057f2cd0,0);
    puVar1 = PTR_DAT_0576aae0;
    if ((uVar4 & 1) != 0) {
      lVar5 = System_IO_File__ReadAllText_3484e8c(lVar5,0);
      if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
          (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 == 0)) ||
         (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar2,*(undefined8 *)PTR_DAT_05783010), lVar2 == 0)) goto LAB_0389e3b4;
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
      uVar4 = System_String__IsNullOrEmpty_1ed04ac(lVar5,0);
      if ((uVar4 & 1) == 0) {
        if (lVar5 == 0) goto LAB_0389e678;
        if (*(int *)(lVar5 + 0x10) < 5) goto LAB_0389e4a4;
        uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__get_GetSerializerSettings_1f1b1e8
                          (0);
        if (*(int *)(*(long *)PTR_DAT_058031d8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar5 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b215c
                          (lVar5,uVar6,*(undefined8 *)PTR_DAT_05796328);
      }
      else {
LAB_0389e4a4:
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057eb888);
        puVar1 = PTR_DAT_057d4c98;
        if (lVar5 == 0) goto LAB_0389e678;
        Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModel___ctor_1f1bcd4(lVar5,0);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_057f0450;
        if (lVar3 == 0) goto LAB_0389e678;
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar3,*(undefined8 *)PTR_DAT_05813970);
        *(long *)(lVar5 + 0x28) = lVar3;
        FUN_012d0d74((long *)(lVar5 + 0x28),lVar3);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar3 == 0) goto LAB_0389e678;
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar3,*(undefined8 *)PTR_DAT_0579a748);
        *(long *)(lVar5 + 0x30) = lVar3;
        FUN_012d0d74((long *)(lVar5 + 0x30),lVar3);
      }
      puVar1 = PTR_DAT_057d0c00;
      plVar8 = (long *)(lVar2 + 0x48);
      if (*plVar8 != 0) {
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__Deinitialize_37a8cf0
                  ();
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection___ctor_37a6b70
                    ();
          *plVar8 = lVar3;
          FUN_012d0d74(plVar8,lVar3);
          if (((lVar5 != 0) && (*plVar8 != 0)) &&
             (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GenerateBottles_37a8e98
                        (*plVar8,*(undefined8 *)(lVar5 + 0x28),1), *(long *)(lVar2 + 0x18) != 0)) {
            Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Refresh_37a494c();
            if ((bRam0000000005c33e1a & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_0578dc40);
              bRam0000000005c33e1a = 1;
            }
            puVar1 = PTR_DAT_0578dc40;
            lVar3 = *(long *)(lVar2 + 0x70);
            *(undefined1 *)(lVar2 + 0x68) = 0;
            if (lVar5 == 0) {
              uVar6 = *(undefined8 *)puVar1;
            }
            else {
              uVar6 = System_Int32__ToString_26c9768(&stack0xffffffffffffffdc,0);
            }
            if (lVar3 != 0) {
              TMPro_TMP_InputField__set_text_3790d40(lVar3,uVar6,0);
              lVar2 = *(long *)(lVar2 + 0x88);
              if (lVar5 == 0) {
                uVar6 = *(undefined8 *)puVar1;
              }
              else {
                uVar6 = System_Int32__ToString_26c9768(&stack0xffffffffffffffdc,0);
              }
              if (lVar2 != 0) {
                TMPro_TMP_InputField__set_text_3790d40(lVar2,uVar6,0);
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
  }
  puVar1 = PTR_DAT_057afe68;
  if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x10) == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05814b68 + 0x20) + 0xc0) + 0x20) + 8
                ))(*(long *)(lVar5 + 0x10),*(undefined8 *)PTR_DAT_05782a80);
    return;
  }
LAB_0389e3b4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

