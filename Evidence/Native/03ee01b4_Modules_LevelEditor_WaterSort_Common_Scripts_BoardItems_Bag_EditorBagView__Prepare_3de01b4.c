/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t requiredAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag.EditorBagView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t requiredAmount, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__Prepare_3de01b4
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  puVar1 = PTR_DAT_05805c10;
  if (lVar5 != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    UnityEngine_Transform__set_localScale_40932d0
              (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
               *(undefined4 *)(lVar3 + 0x14),lVar5,0);
    lVar5 = *(long *)(param_1 + 0x28);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    UnityEngine_Quaternion__Internal_FromEulerRad_3831834
              (*pfVar4 * _UNK_04339bec,pfVar4[1] * _UNK_04339bec,pfVar4[2] * _UNK_04339bec,0);
    if (lVar5 != 0) {
      UnityEngine_Transform__set_localRotation_4092f3c(lVar5,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_Transform__set_localPosition_4092ce0(0,0xc0300000,0,*(long *)(param_1 + 0x28),0)
        ;
        Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bag_EditorBagView__SetSorting_3de074c
                  (param_1,param_2,param_3);
        if (*(long *)(param_1 + 0x18) != 0) {
          lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230a9 = '\x01';
          }
          if (lVar5 != 0) {
            lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
            UnityEngine_Transform__set_localScale_40932d0
                      (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                       *(undefined4 *)(lVar3 + 0x14),lVar5,0);
            lVar5 = *(long *)(param_1 + 0x30);
            uVar2 = System_Int32__ToString_26c9768(&stack0xffffffffffffffec,0);
            if (lVar5 != 0) {
              TMPro_TMP_InputField__set_text_3790d40(lVar5,uVar2,0);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

