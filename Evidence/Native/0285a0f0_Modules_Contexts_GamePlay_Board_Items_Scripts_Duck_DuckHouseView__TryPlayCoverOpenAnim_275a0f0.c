/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$TryPlayCoverOpenAnim
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__TryPlayCoverOpenAnim (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$TryPlayCoverOpenAnim
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__TryPlayCoverOpenAnim
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__TryPlayCoverOpenAnim_275a0f0
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar2 != 0)) {
    lVar3 = *(long *)(param_1 + 0x90);
    uVar1 = UnityEngine_Object__get_name_4078cb0(lVar2,0);
    if (lVar3 != 0) {
      if (pcRam0000000005c28c10 == (code *)0x0) {
        pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar1,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c28c10)(lVar3,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

