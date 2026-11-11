/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagView$$PlayTagShakeAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView__PlayTagShakeAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagView$$PlayTagShakeAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView__PlayTagShakeAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagView__PlayTagShakeAnimation_260b85c
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0270b870 to 0280b8c3 has its CatchHandler @ 0270b870
                       catch() { ... } // from try @ 0270b870 with catch @ 0270b870
                       catch() { ... } // from try @ 0270b918 with catch @ 0270b870
                       catch() { ... } // from try @ 0270b954 with catch @ 0270b870
                       catch() { ... } // from try @ 0270b984 with catch @ 0270b870
                       catch() { ... } // from try @ 0270b9f8 with catch @ 0270b870 */
  if ((bRam0000000005c2b9dd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f1178);
    bRam0000000005c2b9dd = 1;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)PTR_DAT_057f1178;
    if (pcRam0000000005c28c10 == (code *)0x0) {
      pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28c10)(lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

