/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$PlayDisappearAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayDisappearAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$PlayDisappearAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayDisappearAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__PlayDisappearAnimation_260d310
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2b9ed & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057b0580);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2b9ed = 1;
  }
  lVar7 = param_1[5];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Equality_407f288(lVar7,0,0);
  puVar2 = PTR_DAT_057874c0;
  puVar1 = PTR_DAT_057606c8;
  if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0270d3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar7 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    return lVar7;
  }
  if (param_1[5] != 0) {
    uVar4 = UnityEngine_GameObject__get_transform_408e25c(param_1[5],0);
    uVar4 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c(0,0x3e800000,uVar4,0);
    uVar5 = UnityEngine_AnimationCurve__EaseInOut_4084e4c(0,0,0x3f800000,0x3f800000,0);
    lVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar4,uVar5,*(undefined8 *)puVar2);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057984e0;
    if (lVar6 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,param_1,*(undefined8 *)PTR_DAT_057b0580,0);
      uVar4 = *(undefined8 *)puVar1;
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
        *(long *)(lVar7 + 0x80) = lVar6;
        FUN_012d0d74((long *)(lVar7 + 0x80),lVar6,uVar4);
      }
      return lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

