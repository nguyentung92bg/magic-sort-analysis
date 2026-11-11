/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$SetInitialState
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetInitialState (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItemSorting_o toggleItemSorting, bool isOpened, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$SetInitialState
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetInitialState
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItemSorting_o toggleItemSorting, bool
   isOpened, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetInitialState_2609c24
               (long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [96];
  
  func_0x01037ce0(auStack_80,param_2,0x60);
  Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetInitialSorting_260a724
            (param_1,auStack_80,param_3 & 1);
  if ((param_3 & 1) == 0) {
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x58),0);
      if (lVar2 != 0) goto UnityEngine_Animation__Play_1f7a100;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar1 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x50),0);
    if (lVar2 != 0) {
UnityEngine_Animation__Play_1f7a100:
      if (pcRam0000000005c28c10 == (code *)0x0) {
        pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar1,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28c10)(lVar2,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

