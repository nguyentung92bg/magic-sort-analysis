/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySitRise
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitRise (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t snitchIndex, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySitRise
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitRise
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t
   snitchIndex, UnityEngine_Vector3_o targetPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitRise_260fb44
          (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_057f16d8;
  if ((bRam0000000005c2b9fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    FUN_012d0dc8(PTR_DAT_05768358);
    FUN_012d0dc8(PTR_DAT_057a5830);
    FUN_012d0dc8(PTR_DAT_0578af40);
    FUN_012d0dc8(PTR_DAT_057f16d8);
    bRam0000000005c2b9fd = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_057fc1d0;
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_057606c8;
  if (lVar4 != 0) {
                    /* try { // try from 0270fc00 to 0280fc27 has its CatchHandler @ 0270fd94 */
    System_Object___ctor_23dfe5c(lVar4,0);
    *(long *)(lVar4 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar4 + 0x10),param_1);
    *(undefined4 *)(lVar4 + 0x18) = param_2;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
                    /* try { // try from 0270fc40 to 0280fc9f has its CatchHandler @ 0270fd98 */
    uVar6 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                      (uVar5,uVar6,*(undefined8 *)puVar3);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar7 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,lVar4,*(undefined8 *)PTR_DAT_05768358,0);
      DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar7,0);
      lVar7 = *(long *)(param_1 + 0x38);
      if (lVar7 != 0) {
                    /* try { // try from 0270fcb4 to 0280fcbf has its CatchHandler @ 0270fd90 */
        uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySwayIntensity_260f504
                          (*(undefined4 *)(lVar7 + 0x2cc),0x3f800000,param_1,
                           *(undefined8 *)(lVar7 + 0x2d0));
                    /* try { // try from 0270fcc0 to 0280fd7f has its CatchHandler @ 0270f8f0 */
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar6,0);
        uVar6 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitRiseMove_260fe3c
                          (param_1,*(undefined4 *)(lVar4 + 0x18));
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar6,0);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar7 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,lVar4,*(undefined8 *)PTR_DAT_057a5830,0);
          DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar5,lVar7,0);
          uVar6 = UnityEngine_Component__get_transform_408b444(param_1,0);
          if (cRam0000000005c230a9 == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230a9 = '\x01';
          }
          lVar7 = *(long *)(param_1 + 0x38);
          if (lVar7 != 0) {
            fVar9 = *(float *)(lVar7 + 0x1a4);
                    /* try { // try from 0270fd80 to 0280fd83 has its CatchHandler @ 0270fd8c */
            lVar8 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* try { // try from 0270fd84 to 0280fdaf has its CatchHandler @ 0270f8f0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270fd80 with catch @ 0270fd8c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270fcb4 with catch @ 0270fd90
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270fc00 with catch @ 0270fd94
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270fc40 with catch @ 0270fd98
                        */
            uVar6 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                              (*(float *)(lVar8 + 0xc) * fVar9,*(float *)(lVar8 + 0x10) * fVar9,
                               *(float *)(lVar8 + 0x14) * fVar9,*(undefined4 *)(lVar7 + 0x1a8),uVar6
                               ,0);
            if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 0270fdb0 to 0280fdb3 has its CatchHandler @ 0270fe34 */
              uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                (uVar6,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x1b0),
                                 *(undefined8 *)PTR_DAT_057874c0);
              DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar5,uVar6,0);
              if (*(long *)(param_1 + 0x38) != 0) {
                uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x1a0);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar7 != 0) {
                    /* try { // try from 0270fdf8 to 0280fe1f has its CatchHandler @ 0270fe40 */
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar7,lVar4,*(undefined8 *)PTR_DAT_0578af40,0);
                  DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(uVar10,uVar5,lVar7,0);
                    /* try { // try from 0270fe20 to 0280fe2b has its CatchHandler @ 0270f8f0 */
                    /* try { // try from 0270fe2c to 0280fe33 has its CatchHandler @ 0270fe40 */
                  return uVar5;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

