/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$AddWaterColorId
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__AddWaterColorId (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, int32_t height, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$AddWaterColorId
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__AddWaterColorId
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, int32_t height,
   int32_t colorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__AddWaterColorId_2750fb4
               (long param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  if ((bRam0000000005c2c6f0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b2fc0);
    bRam0000000005c2c6f0 = 1;
  }
  puVar1 = PTR_DAT_057b2fc0;
  if (0 < param_2) {
    do {
      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Collections_Generic_Stack_Int32Enum___Push_3123844
                (*(long *)(param_1 + 0x58),param_3,*(undefined8 *)puVar1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

