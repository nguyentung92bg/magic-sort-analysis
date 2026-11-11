/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$GetRotationByTarget
UnityEngine_Vector3_o Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__GetRotationByTarget (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameBoardBoosterItem$$GetRotationByTarget
   UnityEngine_Vector3_o
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__GetRotationByTarget
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem_o* __this,
   UnityEngine_Vector3_o targetPosition, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameBoardBoosterItem__GetRotationByTarget_2188d50
          (undefined8 param_1)

{
  long lVar1;
  
  lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (lVar1 != 0) {
    UnityEngine_Transform__get_position_4092b08(lVar1,0);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    return **(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

