/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobSelectMoveUp
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectMoveUp (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o topPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobSelectMoveUp
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectMoveUp
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o
   topPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobSelectMoveUp_230963c
          (float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000005c2a665 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cb240);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    FUN_012d0dc8(PTR_DAT_057bda10);
    bRam0000000005c2a665 = 1;
  }
  uVar2 = UnityEngine_Component__get_transform_408b444(param_4,0);
  lVar3 = *(long *)(param_4 + 0x40);
  if (lVar3 != 0) {
    uVar2 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                      (param_1 + 0.0,param_2 + *(float *)(lVar3 + 0x5c),param_3 + 0.0,
                       *(undefined4 *)(lVar3 + 0x18),uVar2,0,0);
    puVar1 = PTR_DAT_057606c8;
    if (*(long *)(param_4 + 0x40) != 0) {
      DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                (uVar2,*(undefined8 *)(*(long *)(param_4 + 0x40) + 0x20),
                 *(undefined8 *)PTR_DAT_057bda10);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_0578afb0;
      if (lVar3 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,param_4,*(undefined8 *)PTR_DAT_057cb240,0);
        DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                  (uVar2,lVar3,*(undefined8 *)puVar1);
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

