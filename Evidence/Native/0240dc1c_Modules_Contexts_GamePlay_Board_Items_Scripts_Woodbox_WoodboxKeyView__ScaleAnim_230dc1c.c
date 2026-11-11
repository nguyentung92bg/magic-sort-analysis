/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$ScaleAnim
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__ScaleAnim (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$ScaleAnim
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__ScaleAnim
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__ScaleAnim_230dc1c
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c2a682 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2a682 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x18), lVar3 != 0)) {
    puVar5 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    lVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOScale_2306854
                      (*puVar5,puVar5[1],puVar5[2],*(undefined4 *)(lVar3 + 0x54),uVar6);
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x18), lVar4 != 0)) {
      uVar6 = *(undefined8 *)(lVar4 + 0x58);
      if ((bRam0000000005c2b025 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05805638,uVar6,*(undefined8 *)PTR_DAT_057874c0);
        FUN_012d0dc8(PTR_DAT_05776a80);
        FUN_012d0dc8(PTR_DAT_0580b108);
        bRam0000000005c2b025 = 1;
      }
      puVar1 = PTR_DAT_05776a80;
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
        *(undefined4 *)(lVar3 + 0xb4) = 0x25;
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0580b108;
        if (lVar4 != 0) {
          DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar4,uVar6,0);
          lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar2,lVar4,*(undefined8 *)PTR_DAT_05805638,0);
            *(long *)(lVar3 + 0xb8) = lVar2;
            FUN_012d0d74((long *)(lVar3 + 0xb8),lVar2);
            return lVar3;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

