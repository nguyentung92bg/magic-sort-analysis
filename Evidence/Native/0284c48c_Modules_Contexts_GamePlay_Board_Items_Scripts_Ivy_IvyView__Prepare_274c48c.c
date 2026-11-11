/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ivy.IvyView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView__Prepare_274c48c
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  Modules_Contexts_GamePlay_Board_Items_Scripts_Ivy_IvyView__SetSorting_274cbb0();
  if ((((*(long *)(param_1 + 0x68) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x68),0),
       lVar1 != 0)) && (UnityEngine_GameObject__SetActive_408e318(lVar1,1,0), param_4 != 0)) &&
     (lVar1 = *(long *)(param_1 + 0x68), lVar1 != 0)) {
    uStack_28 = *(undefined4 *)(param_4 + 0x58);
    uStack_24 = *(undefined4 *)(param_4 + 0x5c);
    uStack_30 = *(undefined4 *)(param_4 + 0x50);
    uStack_2c = *(undefined4 *)(param_4 + 0x54);
    if (pcRam0000000005c3a788 == (code *)0x0) {
      pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
    }
    (*pcRam0000000005c3a788)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

