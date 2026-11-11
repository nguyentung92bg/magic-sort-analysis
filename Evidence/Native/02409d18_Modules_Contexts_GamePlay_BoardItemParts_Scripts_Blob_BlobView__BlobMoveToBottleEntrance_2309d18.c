/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobMoveToBottleEntrance
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobMoveToBottleEntrance (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o targetTopPosition, float duration, int32_t bottleCountInBetween, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$BlobMoveToBottleEntrance
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobMoveToBottleEntrance
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, UnityEngine_Vector3_o
   targetTopPosition, float duration, int32_t bottleCountInBetween, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__BlobMoveToBottleEntrance_2309d18
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x7;
  undefined4 in_s3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if ((bRam0000000005c2a668 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc5e0);
                    /* try { // try from 02409d6c to 02509d7b has its CatchHandler @ 02409e4c */
    FUN_012d0dc8(PTR_DAT_057ccae0);
    bRam0000000005c2a668 = 1;
  }
                    /* try { // try from 02409d7c to 02509e3b has its CatchHandler @ 02409988 */
  if (*(long *)(param_1 + 0x40) != 0) {
    Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobAnimationConfig__GetBlobBezierControlPointsByBottleDistance_2308998
              (&uStack_88,*(long *)(param_1 + 0x40),param_2);
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar5 = (undefined4)uStack_88;
      uVar6 = (undefined4)uStack_80;
      uVar7 = uStack_80._4_4_;
      lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (lVar2 != 0) {
        UnityEngine_Transform__get_position_4092b08(lVar2,0);
        uVar3 = Modules_Infrastructure_Utils_BezierUtils__Get2NodeBezierControlPointsXYConfigurable_3de0b30
                          (0);
        uVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
        if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 02409e3c to 02509e3f has its CatchHandler @ 02409e48 */
          uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x28);
                    /* try { // try from 02409e40 to 02509e6b has its CatchHandler @ 02409988 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02409e3c with catch @ 02409e48
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02409d6c with catch @ 02409e4c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02409c98 with catch @ 02409e50
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02409cd8 with catch @ 02409e54
                        */
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          System_Nullable_Color____ctor_2037044
                    (0x3f800000,0,0,0x3f800000,&uStack_88,*(undefined8 *)PTR_DAT_057dc5e0);
                    /* try { // try from 02409e6c to 02509e6f has its CatchHandler @ 02409ef0 */
          uStack_98 = uStack_80;
          uStack_a0 = uStack_88;
          uStack_90 = uStack_78;
          uVar3 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                            (in_s3,uVar4,uVar3,2,3,uVar1,&uStack_a0,0,in_x7,uVar5,uVar6,uVar7,
                             uStack_74);
          if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 02409eb4 to 02509edb has its CatchHandler @ 02409efc */
            DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar3,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x30),
                       *(undefined8 *)PTR_DAT_057ccae0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02409edc to 02509ee7 has its CatchHandler @ 02409988 */
  FUN_012d0ef0();
}

