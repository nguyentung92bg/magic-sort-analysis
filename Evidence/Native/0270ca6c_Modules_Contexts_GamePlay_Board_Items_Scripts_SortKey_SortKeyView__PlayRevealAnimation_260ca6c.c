/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$PlayRevealAnimation
DG_Tweening_Sequence_o* Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayRevealAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, UnityEngine_Vector3_o bottleTopPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$PlayRevealAnimation
   DG_Tweening_Sequence_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayRevealAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this,
   UnityEngine_Vector3_o bottleTopPosition, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayRevealAnimation_260ca6c
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0270ca24 with catch @ 0270ca9c
                       try { // try from 0270ca9c to 0280cab3 has its CatchHandler @ 0270c9cc */
  if ((bRam0000000005c2b9eb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
                    /* try { // try from 0270cab4 to 0280cacb has its CatchHandler @ 0270cb38 */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_0576c200);
                    /* try { // try from 0270cacc to 0280cb27 has its CatchHandler @ 0270c9cc */
    FUN_012d0dc8(PTR_DAT_057d8f00);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_05818d48);
    FUN_012d0dc8(PTR_DAT_05770998);
    bRam0000000005c2b9eb = 1;
  }
  puVar2 = PTR_DAT_057815e0;
  plVar10 = *(long **)(param_4 + 0x18);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
                    /* try { // try from 0270cb28 to 0280cb37 has its CatchHandler @ 0270cb38 */
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
          goto LAB_0270cb64;
        }
                    /* catch() { ... } // from try @ 0270cab4 with catch @ 0270cb38
                       catch() { ... } // from try @ 0270cb28 with catch @ 0270cb38 */
        uVar8 = uVar8 - 1;
                    /* try { // try from 0270cb3c to 0280cb3f has its CatchHandler @ 0270cb48 */
        piVar9 = piVar9 + 4;
                    /* try { // try from 0270cb40 to 0280cb4b has its CatchHandler @ 0270c9cc */
      } while (uVar8 != 0);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270cb3c with catch @ 0270cb48
                        */
                    /* try { // try from 0270cb4c to 0280ce5b has its CatchHandler @ 0270cb4c
                       catch() { ... } // from try @ 0270cb4c with catch @ 0270cb4c
                       catch() { ... } // from try @ 0270cf3c with catch @ 0270cb4c
                       catch() { ... } // from try @ 0270d000 with catch @ 0270cb4c
                       catch() { ... } // from try @ 0270d09c with catch @ 0270cb4c */
    puVar4 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,0xb);
LAB_0270cb64:
    puVar1 = PTR_DAT_057606c8;
    uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
    uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar3 = PTR_DAT_05818d48;
    puVar1 = PTR_DAT_05770998;
    puVar2 = PTR_DAT_0576c200;
    if (lVar7 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,param_4,*(undefined8 *)PTR_DAT_057d8f00,0);
      DG_Tweening_TweenSettingsExtensions__OnStart_object__24505a0
                (uVar6,lVar7,*(undefined8 *)puVar3);
      uVar5 = DG_Tweening_ShortcutExtensions__DOMove_1ee4f98
                        (param_1,param_2,param_3,0x3e800000,uVar5,0,0);
      uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450cc0
                        (uVar5,6,*(undefined8 *)puVar1);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar5,0);
      uVar5 = *(undefined8 *)(param_4 + 0x38);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar8 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        uVar5 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3e800000,
                           *(undefined8 *)(param_4 + 0x38),0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar5,0);
      }
      uVar5 = *(undefined8 *)(param_4 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar8 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        uVar5 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3e800000,
                           *(undefined8 *)(param_4 + 0x40),0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar5,0);
      }
      uVar5 = *(undefined8 *)(param_4 + 0x48);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar8 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar8 & 1) != 0) {
        uVar5 = DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                          (0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3e800000,
                           *(undefined8 *)(param_4 + 0x48),0);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar6,uVar5,0);
      }
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

