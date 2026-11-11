/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ivy.EditorIvyItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyItem_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ivy.EditorIvyItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyItem_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyItem__Prepare_3dd913c
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_5 != 0) {
    uVar1 = *(undefined4 *)(param_5 + 0x70);
    *(undefined8 *)(param_1 + 0x38) = param_4;
                    /* try { // try from 03ed9164 to 03fd91ab has its CatchHandler @ 03ed9164
                       catch() { ... } // from try @ 03ed9164 with catch @ 03ed9164
                       catch() { ... } // from try @ 03ed91b4 with catch @ 03ed9164
                       catch() { ... } // from try @ 03ed91f4 with catch @ 03ed9164
                       catch() { ... } // from try @ 03ed922c with catch @ 03ed9164 */
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_4);
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Ivy_EditorIvyView__SetSorting_3dd93a4
                (lVar2,param_2,param_3);
      if ((((*(long *)(lVar2 + 0x28) != 0) &&
           (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar2 + 0x28),0),
           lVar3 != 0)) && (UnityEngine_GameObject__SetActive_408e318(lVar3,1,0), param_5 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
        if (pcRam0000000005c3a788 == (code *)0x0) {
          pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
        }
        (*pcRam0000000005c3a788)(lVar2,&stack0xffffffffffffffd0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

