/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyItem__Prepare_274c3fc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_8 != 0) {
    uVar1 = *(undefined4 *)(param_8 + 0x70);
    *(undefined8 *)(param_4 + 0x50) = param_7;
    *(undefined4 *)(param_4 + 0x68) = 4;
    *(undefined4 *)(param_4 + 0x6c) = uVar1;
    FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
    lVar2 = *(long *)(param_4 + 0x48);
    *(undefined4 *)(param_4 + 0x34) = param_1;
    *(undefined4 *)(param_4 + 0x38) = param_2;
    *(undefined4 *)(param_4 + 0x3c) = param_3;
    *(undefined4 *)(param_4 + 0x58) = param_1;
    *(undefined4 *)(param_4 + 0x5c) = param_2;
    *(undefined4 *)(param_4 + 0x60) = param_3;
    if (lVar2 != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView__SetSorting_274cbb0
                (lVar2,param_5,param_6);
      if ((((*(long *)(lVar2 + 0x68) != 0) &&
           (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar2 + 0x68),0),
           lVar3 != 0)) && (UnityEngine_GameObject__SetActive_408e318(lVar3,1,0), param_8 != 0)) &&
         (lVar2 = *(long *)(lVar2 + 0x68), lVar2 != 0)) {
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

