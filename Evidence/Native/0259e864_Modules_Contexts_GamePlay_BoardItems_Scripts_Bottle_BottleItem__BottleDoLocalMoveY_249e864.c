/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$BottleDoLocalMoveY
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleDoLocalMoveY (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float target, float duration, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$BottleDoLocalMoveY
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleDoLocalMoveY
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float target, float
   duration, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__BottleDoLocalMoveY_249e864
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((bRam0000000005c2b325 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2b325 = 1;
  }
  plVar4 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                             (param_3,0);
  puVar1 = PTR_DAT_057874c0;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar7 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575a2d8) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
        goto DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_0575a2d8,0xb);
DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4:
  uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  lVar7 = DG_Tweening_ShortcutExtensions__DOLocalMoveY_1ee5a14(param_1,param_2,uVar6,0,0);
  if ((bRam0000000005c2b025 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805638,param_4,*(undefined8 *)puVar1);
    FUN_012d0dc8(PTR_DAT_05776a80);
    FUN_012d0dc8(PTR_DAT_0580b108);
    bRam0000000005c2b025 = 1;
  }
  puVar1 = PTR_DAT_05776a80;
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
    *(undefined4 *)(lVar7 + 0xb4) = 0x25;
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0580b108;
    if (lVar2 != 0) {
      DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar2,param_4,0);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        DG_Tweening_EaseFunction___ctor_1ed6eb4(lVar3,lVar2,*(undefined8 *)PTR_DAT_05805638,0);
        *(long *)(lVar7 + 0xb8) = lVar3;
        FUN_012d0d74((long *)(lVar7 + 0xb8),lVar3);
        return lVar7;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return lVar7;
}

