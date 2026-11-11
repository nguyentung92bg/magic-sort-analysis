/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySitRiseMove
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitRiseMove (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySitRiseMove
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitRiseMove
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t index,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySitRiseMove_260fe3c
          (long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270fdf8 with catch @ 0270fe40
                       catch(type#2 @ 00000000) { ... } // from try @ 0270fe2c with catch @ 0270fe40
                        */
  if ((bRam0000000005c2ba06 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057fc1d0);
    bRam0000000005c2ba06 = 1;
  }
  puVar1 = PTR_DAT_057fc1d0;
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 != 0) {
    if (param_2 == 0) {
      puVar4 = (undefined4 *)(lVar7 + 0x160);
      puVar5 = (undefined4 *)(lVar7 + 0x164);
      puVar6 = (undefined8 *)(lVar7 + 0x180);
      puVar8 = (undefined8 *)(lVar7 + 400);
    }
    else {
      puVar4 = (undefined4 *)(lVar7 + 0x16c);
      puVar5 = (undefined4 *)(lVar7 + 0x170);
      puVar6 = (undefined8 *)(lVar7 + 0x188);
      puVar8 = (undefined8 *)(lVar7 + 0x198);
    }
    uVar12 = *puVar4;
    uVar11 = *puVar5;
    uVar9 = *puVar8;
    uVar10 = *puVar6;
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = DG_Tweening_DOTween__Sequence_1eda154(0);
    uVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__SetLink_object__2450f00
                      (uVar2,uVar3,*(undefined8 *)puVar1);
    uVar3 = UnityEngine_Component__get_transform_408b444(param_1,0);
    puVar1 = PTR_DAT_057874c0;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar3 = DG_Tweening_ShortcutExtensions__DOMoveX_1ee516c
                        (uVar12,*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x178),uVar3,0,0);
      uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                         (uVar3,uVar10,*(undefined8 *)puVar1);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar10,0);
      uVar10 = UnityEngine_Component__get_transform_408b444(param_1,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar10 = DG_Tweening_ShortcutExtensions__DOMoveY_1ee533c
                           (uVar11,*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x178),uVar10,0,0);
        uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar10,uVar9,*(undefined8 *)puVar1);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar2,uVar9,0);
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

