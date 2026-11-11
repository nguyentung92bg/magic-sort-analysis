/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$PlayGeneratorExplosionAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorExplosionAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, UnityEngine_Vector3_o toPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$PlayGeneratorExplosionAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorExplosionAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, UnityEngine_Vector3_o
   toPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorExplosionAnimation_22fdccc
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2a600 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2a600 = 1;
  }
  lVar9 = *(long *)(param_4 + 0xa0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar3 = PTR_DAT_05805c10;
  puVar1 = PTR_DAT_057bcc80;
  if (lVar9 != 0) {
    if (0 < *(int *)(lVar9 + 0x58)) {
      iVar8 = 0;
      do {
        fVar12 = *(float *)(lVar9 + 0x40);
        fVar13 = *(float *)(lVar9 + 0x44);
        if (cRam0000000005c24e32 == '\0') {
          FUN_012d0dc8(puVar3);
          cRam0000000005c24e32 = '\x01';
        }
        lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
        fVar12 = fVar12 - fVar13 * (float)iVar8;
        fVar13 = *(float *)(lVar6 + 0x48);
        fVar10 = *(float *)(lVar6 + 0x4c);
        fVar11 = *(float *)(lVar6 + 0x50);
        uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                          (fVar12 * fVar13,fVar12 * fVar10,fVar12 * fVar11,
                           *(undefined4 *)(lVar9 + 0x48),*(undefined8 *)(param_4 + 0x18),0);
        uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar5,*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)puVar1);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
                    /* try { // try from 023fde00 to 024fde27 has its CatchHandler @ 023fdf94 */
        uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                          (-(fVar12 * fVar13),-(fVar12 * fVar10),-(fVar12 * fVar11),
                           *(undefined4 *)(lVar9 + 0x48),*(undefined8 *)(param_4 + 0x18),0);
        uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar5,*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)puVar1);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
        iVar8 = iVar8 + 1;
                    /* try { // try from 023fde40 to 024fdec3 has its CatchHandler @ 023fdf98 */
      } while (iVar8 < *(int *)(lVar9 + 0x58));
    }
    puVar2 = PTR_DAT_057874c0;
    uVar5 = *(undefined8 *)(param_4 + 0x18);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    puVar7 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
    uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                      (*puVar7,puVar7[1],puVar7[2],*(undefined4 *)(lVar9 + 0x48),uVar5,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar5,*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)puVar1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
                    /* try { // try from 023fdec4 to 024fdf83 has its CatchHandler @ 023fdaf0 */
    uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                      (param_1,param_2,param_3,*(undefined4 *)(lVar9 + 0x5c),
                       *(undefined8 *)(param_4 + 0x18),0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar5,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)puVar2);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
    uVar5 = *(undefined8 *)(param_4 + 0x18);
    fVar12 = *(float *)(lVar9 + 0x40);
    if (cRam0000000005c24e32 == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c24e32 = '\x01';
    }
    lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
    uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                      (fVar12 * *(float *)(lVar6 + 0x48),fVar12 * *(float *)(lVar6 + 0x4c),
                       fVar12 * *(float *)(lVar6 + 0x50),*(undefined4 *)(lVar9 + 0x48),uVar5,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar5,*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)puVar1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
    uVar5 = *(undefined8 *)(param_4 + 0x18);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
                    /* try { // try from 023fdf84 to 024fdf87 has its CatchHandler @ 023fdf90 */
    puVar7 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                    /* try { // try from 023fdf88 to 024fdfaf has its CatchHandler @ 023fdaf0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fdf84 with catch @ 023fdf90
                        */
    uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                      (*puVar7,puVar7[1],puVar7[2],*(undefined4 *)(lVar9 + 0x48),uVar5,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fde00 with catch @ 023fdf94
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fde40 with catch @ 023fdf98
                        */
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar5,*(undefined8 *)(lVar9 + 0x50),*(undefined8 *)puVar1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar4,uVar5,0);
                    /* try { // try from 023fdfb0 to 024fdfb3 has its CatchHandler @ 023fe034 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

