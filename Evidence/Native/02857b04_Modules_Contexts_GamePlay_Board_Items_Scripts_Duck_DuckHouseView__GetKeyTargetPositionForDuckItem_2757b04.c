/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$GetKeyTargetPositionForDuckItem
UnityEngine_Vector3_o Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__GetKeyTargetPositionForDuckItem (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$GetKeyTargetPositionForDuckItem
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__GetKeyTargetPositionForDuckItem
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__GetKeyTargetPositionForDuckItem_2757b04
          (long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    uStack_28 = 0;
    uStack_30 = 0;
    if (pcRam0000000005c3a608 == (code *)0x0) {
      pcRam0000000005c3a608 = (code *)FUN_012d0d84(&UNK_043eee87,0);
    }
    (*pcRam0000000005c3a608)(lVar1,&uStack_30);
    return (undefined4)uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

