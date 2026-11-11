/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$PlayDisappearAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayDisappearAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyItem$$PlayDisappearAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayDisappearAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyItem__PlayDisappearAnimation_260d2f8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_0576c200;
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b9ed & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_057b0580);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057984e0);
    FUN_012d0dc8(PTR_DAT_057874c0);
    bRam0000000005c2b9ed = 1;
  }
  lVar8 = plVar3[5];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = UnityEngine_Object__op_Equality_407f288(lVar8,0,0);
  puVar2 = PTR_DAT_057874c0;
  puVar1 = PTR_DAT_057606c8;
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0270d3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar8 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    return lVar8;
  }
  if (plVar3[5] != 0) {
    uVar5 = UnityEngine_GameObject__get_transform_408e25c(plVar3[5],0);
    uVar5 = DG_Tweening_ShortcutExtensions__DOScale_1ee663c(0,0x3e800000,uVar5,0);
    uVar6 = UnityEngine_AnimationCurve__EaseInOut_4084e4c(0,0,0x3f800000,0x3f800000,0);
    lVar8 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                      (uVar5,uVar6,*(undefined8 *)puVar2);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_057984e0;
    if (lVar7 != 0) {
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,plVar3,*(undefined8 *)PTR_DAT_057b0580,0);
      uVar5 = *(undefined8 *)puVar1;
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) {
        *(long *)(lVar8 + 0x80) = lVar7;
        FUN_012d0d74((long *)(lVar8 + 0x80),lVar7,uVar5);
      }
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

