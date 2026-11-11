/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$PlaySnitchSitAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__PlaySnitchSitAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$PlaySnitchSitAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__PlaySnitchSitAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__PlaySnitchSitAnimation_260e4a0
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2ba0d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b9168);
    bRam0000000005c2ba0d = 1;
  }
  if (*(long *)(lVar2 + 0x60) != 0) {
    UnityEngine_Behaviour__set_enabled_408d778(*(long *)(lVar2 + 0x60),1,0);
    lVar2 = *(long *)(lVar2 + 0x60);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)PTR_DAT_057b9168;
      if (pcRam0000000005c28b88 == (code *)0x0) {
        pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar3,0xffffffff);
      }
      uVar1 = (*pcRam0000000005c28b88)(uVar3);
      if (pcRam0000000005c28b70 == (code *)0x0) {
        pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
      }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28b70)(0xff800000,lVar2,uVar1,0xffffffff);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

