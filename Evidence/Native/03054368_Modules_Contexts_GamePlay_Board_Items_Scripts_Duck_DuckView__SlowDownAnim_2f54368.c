/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$SlowDownAnim
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SlowDownAnim (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckView$$SlowDownAnim
   DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SlowDownAnim
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckView__SlowDownAnim_2f54368(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000005c30897 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c30897 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                      (*(undefined4 *)(lVar5 + 0x7c),*(undefined4 *)(lVar5 + 0x80),
                       *(undefined4 *)(lVar5 + 0x84),*(undefined4 *)(lVar5 + 0x78),
                       *(undefined8 *)(param_1 + 0x18),0);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
      if ((bRam0000000005c2b025 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05805638,uVar4,*(undefined8 *)PTR_DAT_057874c0);
        FUN_012d0dc8(PTR_DAT_05776a80);
        FUN_012d0dc8(PTR_DAT_0580b108);
        bRam0000000005c2b025 = 1;
      }
      puVar1 = PTR_DAT_05776a80;
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
        *(undefined4 *)(lVar5 + 0xb4) = 0x25;
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0580b108;
        if (lVar2 != 0) {
          DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar2,uVar4,0);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar3 != 0) {
            DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar3,lVar2,*(undefined8 *)PTR_DAT_05805638,0);
            *(long *)(lVar5 + 0xb8) = lVar3;
            FUN_012d0d74((long *)(lVar5 + 0xb8),lVar3);
            return lVar5;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

