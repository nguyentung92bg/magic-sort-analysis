/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$GetKeyTargetPosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__GetKeyTargetPosition (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$GetKeyTargetPosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__GetKeyTargetPosition
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__GetKeyTargetPosition_230ad18
          (long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((*(long *)(lVar1 + 0x30) != 0) &&
     (lVar2 = *(long *)(*(long *)(lVar1 + 0x30) + 0x20), lVar1 = 0, lVar2 != 0)) {
    uStack_28 = 0;
    uStack_30 = 0;
    if (pcRam0000000005c3a608 == (code *)0x0) {
      pcRam0000000005c3a608 = (code *)FUN_012d0d84(&UNK_043eee87,0);
    }
    (*pcRam0000000005c3a608)(lVar2,&uStack_30);
    return (undefined4)uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(lVar1,0);
}

