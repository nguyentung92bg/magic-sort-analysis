/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobDeselectMoveBack
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobDeselectMoveBack (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, float targetY, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobDeselectMoveBack
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobDeselectMoveBack
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, float targetY, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobDeselectMoveBack_230a05c
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000005c2a66b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2a66b = 1;
  }
  uVar2 = UnityEngine_Component__get_transform_408b444(param_2,0);
  if (*(long *)(param_2 + 0x40) != 0) {
    lVar3 = DG_Tweening_ShortcutExtensions__DOMoveY_1ee533c
                      (param_1,*(undefined4 *)(*(long *)(param_2 + 0x40) + 0xb0),uVar2,0,0);
    if (*(long *)(param_2 + 0x40) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x40) + 0xb8);
      if ((bRam0000000005c2b025 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05805638,uVar2,*(undefined8 *)PTR_DAT_057874c0);
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
          DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar4,uVar2,0);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar5 != 0) {
            DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar5,lVar4,*(undefined8 *)PTR_DAT_05805638,0);
            *(long *)(lVar3 + 0xb8) = lVar5;
            FUN_012d0d74((long *)(lVar3 + 0xb8),lVar5);
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

