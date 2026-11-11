/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$<PlayRevealAnimationOrdered>b__26_1
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem___PlayRevealAnimationOrdered_b__26_1 (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$<PlayRevealAnimationOrdered>b__26_1
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem___PlayRevealAnimationOrdered_b__26_1
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem___PlayRevealAnimationOrdered_b__26_1_274ea3c
               (long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000005c2c6da & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a3578);
    bRam0000000005c2c6da = 1;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_26a6bec(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar3 = *(long *)(param_1 + 0x48);
      auVar4 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                         (*(long *)(param_1 + 0x80),0);
      if (lVar3 != 0) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__SetSorting_274e49c
                  (lVar3,auVar4._0_8_,auVar4._8_8_);
        plVar2 = *(long **)(param_1 + 0x48);
        if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0284eadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

