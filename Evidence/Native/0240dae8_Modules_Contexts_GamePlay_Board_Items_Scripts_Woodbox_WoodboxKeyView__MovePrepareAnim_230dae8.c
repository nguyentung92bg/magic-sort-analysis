/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$MovePrepareAnim
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__MovePrepareAnim (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, UnityEngine_Vector3_o bottleRootPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$MovePrepareAnim
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__MovePrepareAnim
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this,
   UnityEngine_Vector3_o bottleRootPosition, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__MovePrepareAnim_230dae8
               (float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000005c2a683 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2a683 = 1;
  }
  if ((*(long *)(param_4 + 0x50) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_4 + 0x50) + 0x18), lVar4 != 0)) {
    lVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOMove_23064f0
                      (param_1 + *(float *)(lVar4 + 0x30),param_2 + *(float *)(lVar4 + 0x34),
                       param_3 + *(float *)(lVar4 + 0x38),*(undefined4 *)(lVar4 + 0x3c),
                       *(undefined8 *)(param_4 + 0x18),0);
    if ((*(long *)(param_4 + 0x50) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_4 + 0x50) + 0x18), lVar5 != 0)) {
      uVar3 = *(undefined8 *)(lVar5 + 0x40);
      if ((bRam0000000005c2b025 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05805638,uVar3,*(undefined8 *)PTR_DAT_057874c0);
        FUN_012d0dc8(PTR_DAT_05776a80);
        FUN_012d0dc8(PTR_DAT_0580b108);
        bRam0000000005c2b025 = 1;
      }
      puVar1 = PTR_DAT_05776a80;
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
        *(undefined4 *)(lVar4 + 0xb4) = 0x25;
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0580b108;
        if (lVar5 != 0) {
          DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar5,uVar3,0);
          lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar2,lVar5,*(undefined8 *)PTR_DAT_05805638,0);
            *(long *)(lVar4 + 0xb8) = lVar2;
            FUN_012d0d74((long *)(lVar4 + 0xb8),lVar2);
            return lVar4;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

