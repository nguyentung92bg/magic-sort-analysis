/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$ResetExplosion
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__ResetExplosion (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$ResetExplosion
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__ResetExplosion
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__ResetExplosion_2750af4
               (long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined4 uStack_14;
  
  if ((bRam0000000005c2c6eb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aebd0);
    bRam0000000005c2c6eb = 1;
  }
  uStack_14 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    uStack_14 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
    lVar3 = *(long *)(param_1 + 0x48);
    uVar1 = System_Int32__ToString_26c9768(&uStack_14,0);
    if ((lVar3 != 0) && (plVar2 = *(long **)(lVar3 + 0x30), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
      plVar2 = *(long **)(param_1 + 0x48);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

