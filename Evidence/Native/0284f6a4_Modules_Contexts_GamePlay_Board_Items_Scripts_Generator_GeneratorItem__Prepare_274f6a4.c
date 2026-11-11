/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontSorting, Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, System_Collections_Generic_Stack_ColorId__o* colorIds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this,
   UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o
   frontSorting, Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   System_Collections_Generic_Stack_ColorId__o* colorIds, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__Prepare_274f6a4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_64;
  
  if ((bRam0000000005c2c6e4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aebd0);
    bRam0000000005c2c6e4 = 1;
  }
  uStack_64 = 0;
  *(undefined8 *)(param_4 + 0x50) = param_9;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_9);
  *(long *)(param_4 + 0x58) = param_10;
  FUN_012d0d74((long *)(param_4 + 0x58),param_10);
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  if (param_10 != 0) {
    uStack_64 = *(undefined4 *)(param_10 + 0x18);
    lVar2 = *(long *)(param_4 + 0x48);
    uVar1 = System_Int32__ToString_26c9768(&uStack_64,0);
    if (lVar2 != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__Prepare_274f79c
                (lVar2,param_5,param_6,param_7,param_8,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

