/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$<PlayFillAnimation>b__21_1
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem___PlayFillAnimation_b__21_1 (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$<PlayFillAnimation>b__21_1
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem___PlayFillAnimation_b__21_1
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem___PlayFillAnimation_b__21_1_2751598
               (long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined4 uStack_14;
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  if ((bRam0000000005c2c6f5 & 1) == 0) {
    auVar6 = FUN_012d0dc8(PTR_DAT_057aebd0);
    bRam0000000005c2c6f5 = 1;
  }
  uStack_14 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x40), auVar1._8_8_ = 0,
     auVar1._0_8_ = auVar6._8_8_, auVar6 = auVar1 << 0x40, lVar3 != 0)) {
    auVar6 = Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00(lVar3,param_1,0)
    ;
    if (*(long *)(param_1 + 0x58) != 0) {
      uStack_14 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
      lVar3 = *(long *)(param_1 + 0x48);
      auVar6 = System_Int32__ToString_26c9768(&uStack_14,0);
      uVar4 = auVar6._0_8_;
      if ((lVar3 != 0) &&
         (plVar5 = *(long **)(lVar3 + 0x30), auVar2._8_8_ = 0, auVar2._0_8_ = uVar4,
         auVar6 = auVar2 << 0x40, plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(auVar6._0_8_,auVar6._8_8_);
}

