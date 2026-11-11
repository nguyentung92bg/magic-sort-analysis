/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$RemoveWaterColorIds
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__RemoveWaterColorIds (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$RemoveWaterColorIds
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__RemoveWaterColorIds
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__RemoveWaterColorIds_27510a8
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c2c6f1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a4bf8);
    bRam0000000005c2c6f1 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)PTR_DAT_057a4bf8;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

