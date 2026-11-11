/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ShouldWaitForBottleAnimation
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitForBottleAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$ShouldWaitForBottleAnimation
   bool 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitForBottleAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__ShouldWaitForBottleAnimation_2609474
               (long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar3 + 0xb8) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (*(long *)(lVar3 + 0xb0) != 0) {
      uVar2 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                        (*(long *)(lVar3 + 0xb0),0);
      if ((uVar2 & 1) == 0) {
        lVar3 = *(long *)(lVar3 + 0xb8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if ((bRam0000000005c3aa95 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0576b2b0,0);
          bRam0000000005c3aa95 = 1;
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          return 0 < *(int *)(lVar3 + 0x18);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      bVar1 = true;
    }
  }
  return bVar1;
}

