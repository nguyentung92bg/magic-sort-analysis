/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle.EditorToggleItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, bool isOn, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleItem__Prepare_37b264c
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x38) = param_4;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_4);
  if (*(long *)(param_1 + 0x30) != 0) {
    param_5 = param_5 & 1;
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Toggle_EditorToggleView__SetSorting_37b2868
              (*(long *)(param_1 + 0x30),param_2,param_3);
    lVar1 = *(long *)(param_1 + 0x30);
    *(byte *)(param_1 + 0x40) = param_5;
    if (lVar1 != 0) {
      if ((*(long *)(lVar1 + 0x20) != 0) &&
         (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar1 + 0x20),0),
         lVar2 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar2,~param_5 & 1,0);
        if ((*(long *)(lVar1 + 0x28) != 0) &&
           (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar1 + 0x28),0),
           lVar1 != 0)) {
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar1,param_5);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

