/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnRecycle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnRecycle (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnRecycle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnRecycle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnRecycle_274f7f8
               (long *param_1)

{
  long lVar1;
  
  if ((bRam0000000005c2c6e5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a4bf8);
    bRam0000000005c2c6e5 = 1;
  }
  if (param_1[0xb] != 0) {
    System_Collections_Generic_Stack_Int32Enum___Clear_3123374
              (param_1[0xb],*(undefined8 *)PTR_DAT_057a4bf8);
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
    if (cRam0000000005c230a9 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230a9 = '\x01';
    }
    lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x0284f898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1d8))
              (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
               *(undefined4 *)(lVar1 + 0x14),param_1,*(undefined8 *)(*param_1 + 0x1e0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

