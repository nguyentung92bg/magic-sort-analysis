/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t woodboxKeyType, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t woodboxKeyType, int32_t
   blockerVariant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__Prepare_230c604
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  long lVar1;
  
  Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__SetVariant_230d744
            (param_1,param_5);
  Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__SetSorting_230d900
            (param_1,param_2,param_3);
  Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__SetKeyTypeLibrary_230d944
            (param_1,param_4);
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    if (lVar1 != 0) {
      if (pcRam0000000005c3a650 == (code *)0x0) {
        pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
      }
      (*pcRam0000000005c3a650)(lVar1,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

