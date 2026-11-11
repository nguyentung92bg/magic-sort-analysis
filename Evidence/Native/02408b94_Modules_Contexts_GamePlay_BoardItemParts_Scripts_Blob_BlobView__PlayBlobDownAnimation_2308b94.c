/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$PlayBlobDownAnimation
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayBlobDownAnimation (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o targetTopPosition, UnityEngine_Vector3_o targetBottleInsidePosition, int32_t bottleCountInBetween, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$PlayBlobDownAnimation
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayBlobDownAnimation
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o
   targetTopPosition, UnityEngine_Vector3_o targetBottleInsidePosition, int32_t
   bottleCountInBetween, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayBlobDownAnimation_2308b94
               (float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,long param_7,undefined4 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  
  puVar1 = PTR_DAT_058150a0;
  if ((bRam0000000005c2a667 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057dc478);
    FUN_012d0dc8(PTR_DAT_0580a228);
    FUN_012d0dc8(PTR_DAT_058150a0);
    bRam0000000005c2a667 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057815e0;
  if (lVar3 != 0) {
                    /* try { // try from 02408c34 to 02508c73 has its CatchHandler @ 02408c34
                       catch() { ... } // from try @ 02408c34 with catch @ 02408c34
                       catch() { ... } // from try @ 02408c88 with catch @ 02408c34
                       catch() { ... } // from try @ 02408cc4 with catch @ 02408c34
                       catch() { ... } // from try @ 02408d04 with catch @ 02408c34 */
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_7;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_7);
    *(undefined4 *)(lVar3 + 0x28) = param_8;
    *(undefined4 *)(lVar3 + 0x2c) = param_4;
    *(undefined4 *)(lVar3 + 0x30) = param_5;
    *(undefined4 *)(lVar3 + 0x34) = param_6;
    plVar7 = (long *)(param_7 + 0x58);
    if (*plVar7 != 0) {
                    /* try { // try from 02408c74 to 02508c87 has its CatchHandler @ 02408c94 */
      DG_Tweening_TweenExtensions__Kill_1edd6a4(*plVar7,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 02408c88 to 02508cab has its CatchHandler @ 02408c34 */
      thunk_FUN_0130472c();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02408c74 with catch @ 02408c94
                        */
    *(undefined8 *)(param_7 + 0x58) = uVar4;
    FUN_012d0d74(plVar7,uVar4);
    puVar1 = PTR_DAT_057606c8;
    if (*(long *)(param_7 + 0x40) != 0) {
                    /* try { // try from 02408cac to 02508cc3 has its CatchHandler @ 02408cfc */
      fVar9 = *(float *)(*(long *)(param_7 + 0x40) + 0x5c);
                    /* try { // try from 02408cc4 to 02508ceb has its CatchHandler @ 02408c34 */
      *(float *)(lVar3 + 0x18) = param_1 + 0.0;
      *(float *)(lVar3 + 0x1c) = param_2 + fVar9;
      *(float *)(lVar3 + 0x20) = param_3 + 0.0;
      uVar8 = Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__GetDynamicTopMoveDuration_2309b14
                        (param_7);
      *(undefined4 *)(lVar3 + 0x24) = uVar8;
                    /* try { // try from 02408cec to 02508cfb has its CatchHandler @ 02408cfc */
      Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__PlayTopMoveAnimationClip_2309bf0
                (*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                 *(undefined4 *)(lVar3 + 0x20),param_7);
      uVar4 = *(undefined8 *)(param_7 + 0x58);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 02408cac with catch @ 02408cfc
                       catch() { ... } // from try @ 02408cec with catch @ 02408cfc */
      if (lVar5 != 0) {
                    /* try { // try from 02408d00 to 02508d03 has its CatchHandler @ 02408d0c */
                    /* try { // try from 02408d04 to 02508d0f has its CatchHandler @ 02408c34 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02408d00 with catch @ 02408d0c
                        */
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_057dc478,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar4,lVar5,0);
        lVar6 = *plVar7;
        uVar8 = *(undefined4 *)(lVar3 + 0x24);
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar5 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar3,*(undefined8 *)PTR_DAT_0580a228,0);
          uVar2 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_1eedf30(lVar6,0,1);
          if ((lVar5 != 0) && ((uVar2 & 1) != 0)) {
            DG_Tweening_Sequence__DoInsertCallback_1edffe8(uVar8,lVar6,lVar5);
          }
          return lVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

