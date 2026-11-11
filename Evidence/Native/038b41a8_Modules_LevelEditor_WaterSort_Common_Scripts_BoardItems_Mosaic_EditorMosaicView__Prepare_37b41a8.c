/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t mosaicType, System_Collections_Generic_List_ColorId__o* colorIds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t mosaicType,
   System_Collections_Generic_List_ColorId__o* colorIds, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__Prepare_37b41a8
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  
  if ((bRam0000000005c33e82 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a650);
    FUN_012d0dc8(PTR_DAT_057a2b58);
    FUN_012d0dc8(PTR_DAT_05795338);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b5e38);
    bRam0000000005c33e82 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  puVar4 = PTR_DAT_05805c10;
  if (lVar7 != 0) {
    lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
               *(undefined4 *)(lVar5 + 0x14),lVar7,0);
    lVar7 = *(long *)(param_1 + 0x28);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    pfVar6 = *(float **)(*(long *)puVar4 + 0xb8);
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834
              (*pfVar6 * _UNK_04339bec,pfVar6[1] * _UNK_04339bec,pfVar6[2] * _UNK_04339bec,0);
    if (lVar7 != 0) {
      UnityEngine_Transform__set_localRotation_4092f3c(lVar7,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,*(long *)(param_1 + 0x28),0)
        ;
        *(undefined4 *)(param_1 + 0x58) = param_4;
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__SetSorting_37b4c9c
                  (param_1,param_2,param_3);
        if (*(long *)(param_1 + 0x18) != 0) {
          lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230a9 = '\x01';
          }
          puVar3 = PTR_DAT_057b8520;
          puVar2 = PTR_DAT_05795338;
          puVar1 = PTR_DAT_0575a650;
          if (lVar7 != 0) {
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
            UnityEngine_Transform__set_localScale_40932d0
                      (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                       *(undefined4 *)(lVar5 + 0x14),lVar7,0);
            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__SetType_37b4ce0
                      (param_1,param_4);
            Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__SetColorIds_37b44c0
                      (param_1,param_5);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar2);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
            if ((lVar5 != 0) &&
               (System_Action_Int32Enum__object____ctor_1c4bbfc
                          (lVar5,param_1,*(undefined8 *)PTR_DAT_057a2b58,0), lVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343e298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057b5e38 + 0x20) + 0xc0) +
                                    8) + 8))(lVar7,lVar5);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

