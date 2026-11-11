/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$<TryComplete>b__16_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem___TryComplete_b__16_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$<TryComplete>b__16_0
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem___TryComplete_b__16_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem___TryComplete_b__16_0_275974c
               (long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 uStack_14;
  
  if ((bRam0000000005c2c731 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cdfb8);
    bRam0000000005c2c731 = 1;
  }
  if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    uStack_14 = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x18);
    plVar2 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
    uVar1 = System_Int32__ToString_26c9768(&uStack_14,0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

