/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$PlayGeneratorFillAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorFillAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$PlayGeneratorFillAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorFillAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayGeneratorFillAnimation_22fdae4
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
                    /* try { // try from 023fdae4 to 024fdaef has its CatchHandler @ 023fd97c */
  puVar1 = PTR_DAT_057815e0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fdae0 with catch @ 023fdaec
                        */
                    /* try { // try from 023fdaf0 to 024fddff has its CatchHandler @ 023fdaf0
                       catch() { ... } // from try @ 023fdaf0 with catch @ 023fdaf0
                       catch() { ... } // from try @ 023fdec4 with catch @ 023fdaf0
                       catch() { ... } // from try @ 023fdf88 with catch @ 023fdaf0
                       catch() { ... } // from try @ 023fe020 with catch @ 023fdaf0 */
  if ((bRam0000000005c2a5ff & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    bRam0000000005c2a5ff = 1;
  }
  lVar7 = *(long *)(param_1 + 0xa0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar2 = PTR_DAT_05805c10;
  puVar1 = PTR_DAT_057bcc80;
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x30)) {
      iVar8 = 0;
      do {
        fVar11 = *(float *)(lVar7 + 0x18);
        fVar12 = *(float *)(lVar7 + 0x1c);
        if (cRam0000000005c24e32 == '\0') {
          FUN_012d0dc8(puVar2);
          cRam0000000005c24e32 = '\x01';
        }
        lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
        fVar11 = fVar11 - fVar12 * (float)iVar8;
        fVar12 = *(float *)(lVar5 + 0x48);
        fVar9 = *(float *)(lVar5 + 0x4c);
        fVar10 = *(float *)(lVar5 + 0x50);
        uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                          (fVar11 * fVar12,fVar11 * fVar9,fVar11 * fVar10,
                           *(undefined4 *)(lVar7 + 0x20),*(undefined8 *)(param_1 + 0x18),0);
        uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar4,*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)puVar1);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
        uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                          (-(fVar11 * fVar12),-(fVar11 * fVar9),-(fVar11 * fVar10),
                           *(undefined4 *)(lVar7 + 0x20),*(undefined8 *)(param_1 + 0x18),0);
        uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar4,*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)puVar1);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar7 + 0x30));
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    puVar6 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
    uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                      (*puVar6,puVar6[1],puVar6[2],*(undefined4 *)(lVar7 + 0x20),uVar4,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar4,*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)puVar1);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar3,uVar4,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

