/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$InitializeLids
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__InitializeLids (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, int32_t fireworkCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$InitializeLids
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__InitializeLids
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, int32_t
   fireworkCount, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView__InitializeLids_27557d0
               (long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) goto LAB_028558a0;
        lVar2 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_028558a4;
        UnityEngine_GameObject__SetActive_408e318(lVar2,param_2 < 1,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    if (param_2 == 2) {
      lVar3 = *(long *)(param_1 + 0x48);
      if (lVar3 == 0) goto LAB_028558a4;
      if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_028558a0;
      lVar3 = *(long *)(lVar3 + 0x28);
    }
    else {
      if (param_2 != 1) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x48);
      if (lVar3 == 0) goto LAB_028558a4;
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_028558a0:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    if (lVar3 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar3,1);
      return;
    }
  }
LAB_028558a4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

