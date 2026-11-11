/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$PlayShuffleAnimationForGenerator
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayShuffleAnimationForGenerator (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, UnityEngine_Vector3_o initialPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$PlayShuffleAnimationForGenerator
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayShuffleAnimationForGenerator
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, UnityEngine_Vector3_o
   initialPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayShuffleAnimationForGenerator_22fd6f8
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2a5fe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f03e0);
    FUN_012d0dc8(PTR_DAT_057b8560);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2a5fe = 1;
  }
  lVar11 = *(long *)(param_4 + 0x98);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar3 = PTR_DAT_057bcc80;
  if (lVar11 != 0) {
    iVar8 = *(int *)(lVar11 + 0x40);
    if (0 < iVar8) {
      iVar10 = 0;
      do {
        fVar15 = (float)iVar10;
        fVar12 = (float)*(undefined8 *)(lVar11 + 0x18) -
                 (float)*(undefined8 *)(lVar11 + 0x24) * fVar15;
        fVar13 = (float)((ulong)*(undefined8 *)(lVar11 + 0x18) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(lVar11 + 0x24) >> 0x20) * fVar15;
        fVar14 = *(float *)(lVar11 + 0x20) - *(float *)(lVar11 + 0x2c) * fVar15;
        uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                          (CONCAT44(fVar13,fVar12),fVar13,fVar14,
                           *(float *)(lVar11 + 0x30) - *(float *)(lVar11 + 0x6c) * fVar15,
                           *(undefined8 *)(param_4 + 0x18),0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar6,*(undefined8 *)(lVar11 + 0x38),*(undefined8 *)puVar3);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar6,0);
        uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                          (CONCAT44(-fVar13,-fVar12),-fVar13,-fVar14,
                           *(float *)(lVar11 + 0x30) - *(float *)(lVar11 + 0x6c) * fVar15,
                           *(undefined8 *)(param_4 + 0x18),0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar6,*(undefined8 *)(lVar11 + 0x38),*(undefined8 *)puVar3);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar6,0);
        iVar8 = *(int *)(lVar11 + 0x40);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar8);
    }
    puVar4 = PTR_DAT_057f03e0;
    puVar2 = PTR_DAT_057b8560;
    uVar6 = *(undefined8 *)(param_4 + 0x18);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
      iVar8 = *(int *)(lVar11 + 0x40);
    }
    puVar9 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                      (*puVar9,puVar9[1],puVar9[2],
                       *(float *)(lVar11 + 0x30) - *(float *)(lVar11 + 0x6c) * (float)iVar8,uVar6,0)
    ;
    uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar6,*(undefined8 *)(lVar11 + 0x38),*(undefined8 *)puVar3);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar6,0);
    DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0(uVar5,1,*(undefined8 *)puVar2);
    DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c(0,uVar5,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar1 = PTR_DAT_057874c0;
    uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
    iVar8 = *(int *)(lVar11 + 0x68);
    if (0 < iVar8) {
      iVar10 = 0;
      do {
                    /* try { // try from 023fd97c to 024fd9d3 has its CatchHandler @ 023fd97c
                       catch() { ... } // from try @ 023fd97c with catch @ 023fd97c
                       catch() { ... } // from try @ 023fda20 with catch @ 023fd97c
                       catch() { ... } // from try @ 023fda64 with catch @ 023fd97c
                       catch() { ... } // from try @ 023fdae4 with catch @ 023fd97c */
        fVar15 = (float)iVar10;
        fVar12 = *(float *)(lVar11 + 0x44) - *(float *)(lVar11 + 0x50) * fVar15;
        fVar13 = *(float *)(lVar11 + 0x48) - *(float *)(lVar11 + 0x54) * fVar15;
        fVar14 = *(float *)(lVar11 + 0x4c) - *(float *)(lVar11 + 0x58) * fVar15;
        uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                          ((float)param_1 + fVar12,(float)param_2 + fVar13,(float)param_3 + fVar14,
                           *(float *)(lVar11 + 0x5c) - *(float *)(lVar11 + 0x6c) * fVar15,
                           *(undefined8 *)(param_4 + 0x18),0);
        uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar7,*(undefined8 *)(lVar11 + 0x60),*(undefined8 *)puVar1);
                    /* try { // try from 023fd9d4 to 024fda1f has its CatchHandler @ 023fda34 */
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar7,0);
        uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                          ((float)param_1 - fVar12,(float)param_2 - fVar13,(float)param_3 - fVar14,
                           *(float *)(lVar11 + 0x5c) - *(float *)(lVar11 + 0x6c) * fVar15,
                           *(undefined8 *)(param_4 + 0x18),0);
        uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar7,*(undefined8 *)(lVar11 + 0x60),*(undefined8 *)puVar1);
                    /* try { // try from 023fda20 to 024fda4b has its CatchHandler @ 023fd97c */
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar7,0);
        iVar8 = *(int *)(lVar11 + 0x68);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar8);
    }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fd9d4 with catch @ 023fda34
                        */
                    /* try { // try from 023fda4c to 024fda63 has its CatchHandler @ 023fdadc */
    uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                      (param_1,param_2,param_3,
                       *(float *)(lVar11 + 0x5c) - *(float *)(lVar11 + 0x6c) * (float)iVar8,
                       *(undefined8 *)(param_4 + 0x18),0);
                    /* try { // try from 023fda64 to 024fdacb has its CatchHandler @ 023fd97c */
    uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar7,*(undefined8 *)(lVar11 + 0x60),*(undefined8 *)puVar1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar7,0);
    DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0(uVar6,1,*(undefined8 *)puVar2);
    DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c(0,uVar6,*(undefined8 *)puVar4);
    DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar6,0);
                    /* try { // try from 023fdacc to 024fdadb has its CatchHandler @ 023fdadc */
                    /* catch() { ... } // from try @ 023fda4c with catch @ 023fdadc
                       catch() { ... } // from try @ 023fdacc with catch @ 023fdadc */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 023fdae0 to 024fdae3 has its CatchHandler @ 023fdaec */
  FUN_012d0ef0();
}

