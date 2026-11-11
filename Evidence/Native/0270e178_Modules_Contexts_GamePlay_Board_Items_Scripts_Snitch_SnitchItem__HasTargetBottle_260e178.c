/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$HasTargetBottle
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__HasTargetBottle (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItem$$HasTargetBottle
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__HasTargetBottle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItem__HasTargetBottle_260e178
               (long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x38);
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(lVar2 + 0x18) != 0;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

