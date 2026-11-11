/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$PlayShuffleAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayShuffleAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, UnityEngine_Vector3_o initialPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$PlayShuffleAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayShuffleAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, UnityEngine_Vector3_o
   initialPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__PlayShuffleAnimation_22fcf14
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c2a5fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f03e0);
    FUN_012d0dc8(PTR_DAT_057b8560);
    FUN_012d0dc8(PTR_DAT_057bcc80);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2a5fd = 1;
  }
                    /* try { // try from 023fcfac to 024fcfeb has its CatchHandler @ 023fcfac
                       catch() { ... } // from try @ 023fcfac with catch @ 023fcfac
                       catch() { ... } // from try @ 023fd000 with catch @ 023fcfac
                       catch() { ... } // from try @ 023fd03c with catch @ 023fcfac
                       catch() { ... } // from try @ 023fd07c with catch @ 023fcfac */
  uVar13 = UnityEngine_Random__Range_383a610(0,_UNK_04339be4,0);
  iVar7 = UnityEngine_Random__Range_383a650(0,2,0);
  fVar1 = -1.0;
  if (iVar7 != 0) {
    fVar1 = 1.0;
  }
                    /* try { // try from 023fcfec to 024fcfff has its CatchHandler @ 023fd00c */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar8 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar6 = PTR_DAT_057f03e0;
  puVar5 = PTR_DAT_057bcc80;
  puVar4 = PTR_DAT_057b8560;
  puVar3 = PTR_DAT_057874c0;
  lVar11 = *(long *)(param_4 + 0x90);
                    /* try { // try from 023fd000 to 024fd023 has its CatchHandler @ 023fcfac */
  if (lVar11 != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fcfec with catch @ 023fd00c
                        */
                    /* try { // try from 023fd024 to 024fd03b has its CatchHandler @ 023fd074 */
    iVar7 = 0;
    do {
                    /* try { // try from 023fd03c to 024fd063 has its CatchHandler @ 023fcfac */
      if (*(int *)(lVar11 + 0x40) <= iVar7) {
        uVar9 = *(undefined8 *)(param_4 + 0x18);
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
          lVar11 = *(long *)(param_4 + 0x90);
          if (lVar11 == 0) break;
        }
        puVar12 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                          (*puVar12,puVar12[1],puVar12[2],
                           *(float *)(lVar11 + 0x30) -
                           *(float *)(lVar11 + 0x6c) * (float)*(int *)(lVar11 + 0x40),uVar9,0);
        if (*(long *)(param_4 + 0x90) != 0) {
          uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                            (uVar9,*(undefined8 *)(*(long *)(param_4 + 0x90) + 0x38),
                             *(undefined8 *)puVar5);
          DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar8,uVar9,0);
          DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                    (uVar8,1,*(undefined8 *)puVar4);
          DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                    (uVar13,uVar8,*(undefined8 *)puVar6);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar9 = DG_Tweening_DOTween__Sequence_1eda154(0);
          lVar11 = *(long *)(param_4 + 0x90);
          if (lVar11 != 0) {
            iVar7 = 0;
            goto LAB_023fd1f8;
          }
        }
        break;
      }
      fVar16 = (float)iVar7;
                    /* try { // try from 023fd064 to 024fd073 has its CatchHandler @ 023fd074 */
      fVar14 = fVar1 * ((float)*(undefined8 *)(lVar11 + 0x18) -
                       (float)*(undefined8 *)(lVar11 + 0x24) * fVar16);
      fVar15 = fVar1 * ((float)((ulong)*(undefined8 *)(lVar11 + 0x18) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar11 + 0x24) >> 0x20) * fVar16);
                    /* catch() { ... } // from try @ 023fd024 with catch @ 023fd074
                       catch() { ... } // from try @ 023fd064 with catch @ 023fd074 */
      fVar17 = *(float *)(lVar11 + 0x20) - *(float *)(lVar11 + 0x2c) * fVar16;
                    /* try { // try from 023fd078 to 024fd07b has its CatchHandler @ 023fd084 */
                    /* try { // try from 023fd07c to 024fd087 has its CatchHandler @ 023fcfac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fd078 with catch @ 023fd084
                        */
      uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                        (CONCAT44(fVar15,fVar14),fVar15,fVar1 * fVar17,
                         *(float *)(lVar11 + 0x30) - *(float *)(lVar11 + 0x6c) * fVar16,
                         *(undefined8 *)(param_4 + 0x18),0);
      if (*(long *)(param_4 + 0x90) == 0) break;
      uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar9,*(undefined8 *)(*(long *)(param_4 + 0x90) + 0x38),
                         *(undefined8 *)puVar5);
      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar8,uVar9,0);
      lVar11 = *(long *)(param_4 + 0x90);
      if (lVar11 == 0) break;
      uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalRotate_22fd3a4
                        (CONCAT44(-fVar15,-fVar14),-fVar15,-(fVar1 * fVar17),
                         *(float *)(lVar11 + 0x30) - *(float *)(lVar11 + 0x6c) * fVar16,
                         *(undefined8 *)(param_4 + 0x18),0);
      if (*(long *)(param_4 + 0x90) == 0) break;
      uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar9,*(undefined8 *)(*(long *)(param_4 + 0x90) + 0x38),
                         *(undefined8 *)puVar5);
      DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar8,uVar9,0);
      lVar11 = *(long *)(param_4 + 0x90);
      iVar7 = iVar7 + 1;
    } while (lVar11 != 0);
  }
  goto LAB_023fd3a0;
  while( true ) {
    fVar14 = (float)iVar7;
    fVar17 = fVar1 * (*(float *)(lVar11 + 0x44) - *(float *)(lVar11 + 0x50) * fVar14);
    fVar16 = fVar1 * (*(float *)(lVar11 + 0x48) - *(float *)(lVar11 + 0x54) * fVar14);
    fVar15 = fVar1 * (*(float *)(lVar11 + 0x4c) - *(float *)(lVar11 + 0x58) * fVar14);
    uVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                       ((float)param_1 + fVar17,(float)param_2 + fVar16,(float)param_3 + fVar15,
                        *(float *)(lVar11 + 0x5c) - *(float *)(lVar11 + 0x6c) * fVar14,
                        *(undefined8 *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x90) == 0) break;
    uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                       (uVar10,*(undefined8 *)(*(long *)(param_4 + 0x90) + 0x60),
                        *(undefined8 *)puVar3);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar9,uVar10,0);
    lVar11 = *(long *)(param_4 + 0x90);
    if (lVar11 == 0) break;
    uVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                       ((float)param_1 - fVar17,(float)param_2 - fVar16,(float)param_3 - fVar15,
                        *(float *)(lVar11 + 0x5c) - *(float *)(lVar11 + 0x6c) * fVar14,
                        *(undefined8 *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x90) == 0) break;
    uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                       (uVar10,*(undefined8 *)(*(long *)(param_4 + 0x90) + 0x60),
                        *(undefined8 *)puVar3);
    DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar9,uVar10,0);
    lVar11 = *(long *)(param_4 + 0x90);
    iVar7 = iVar7 + 1;
    if (lVar11 == 0) break;
LAB_023fd1f8:
    if (*(int *)(lVar11 + 0x68) <= iVar7) {
      uVar10 = Modules_Contexts_GamePlay_BoardItems_Scripts_Common_TransformExtension__DOLocalMove_22fd54c
                         (param_1,param_2,param_3,
                          *(float *)(lVar11 + 0x5c) -
                          *(float *)(lVar11 + 0x6c) * (float)*(int *)(lVar11 + 0x68),
                          *(undefined8 *)(param_4 + 0x18),0);
      if (*(long *)(param_4 + 0x90) != 0) {
        uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                           (uVar10,*(undefined8 *)(*(long *)(param_4 + 0x90) + 0x60),
                            *(undefined8 *)puVar3);
        DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar9,uVar10,0);
        DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0(uVar9,1,*(undefined8 *)puVar4);
        DG_Tweening_TweenSettingsExtensions__SetDelay_object__2450a9c
                  (uVar13,uVar9,*(undefined8 *)puVar6);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar8,uVar9,0);
        return uVar8;
      }
      break;
    }
  }
LAB_023fd3a0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

