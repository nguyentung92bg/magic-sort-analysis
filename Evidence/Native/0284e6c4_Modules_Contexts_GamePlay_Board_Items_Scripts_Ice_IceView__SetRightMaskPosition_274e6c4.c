/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$SetRightMaskPosition
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetRightMaskPosition (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, UnityEngine_Vector3_o targetLocalPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceView$$SetRightMaskPosition
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetRightMaskPosition
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView_o* __this, UnityEngine_Vector3_o
   targetLocalPosition, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetRightMaskPosition_274e6c4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*(long *)(param_4 + 0x48) != 0) &&
     (lVar1 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x48),0), lVar1 != 0)
     ) {
    uStack_30 = param_1;
    uStack_2c = param_2;
    uStack_28 = param_3;
    if (pcRam0000000005c3a610 == (code *)0x0) {
      pcRam0000000005c3a610 = (code *)FUN_012d0d84(&UNK_043eeeca,0);
    }
    (*pcRam0000000005c3a610)(lVar1,&uStack_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

