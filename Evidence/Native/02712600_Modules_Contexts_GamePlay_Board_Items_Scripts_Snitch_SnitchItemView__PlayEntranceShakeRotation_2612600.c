/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayEntranceShakeRotation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayEntranceShakeRotation (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlayEntranceShakeRotation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayEntranceShakeRotation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlayEntranceShakeRotation_2612600
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000005c2ba0f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b6800);
    bRam0000000005c2ba0f = 1;
  }
  uVar4 = UnityEngine_Component__get_transform_408b444(param_1,0);
  puVar1 = PTR_DAT_057b6800;
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar5 = DG_Tweening_ShortcutExtensions__DOShakeRotation_1ee7e20
                      (*(undefined4 *)(lVar5 + 0x290),0,0,*(undefined4 *)(lVar5 + 0x294),0x42340000,
                       uVar4,*(undefined4 *)(lVar5 + 0x298),1,0,0);
    uVar4 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    if ((bRam0000000005c2b026 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,uVar4,*(undefined8 *)puVar1);
      FUN_012d0dc8(PTR_DAT_05794618);
      FUN_012d0dc8(PTR_DAT_058163b8);
      bRam0000000005c2b026 = 1;
    }
    if (((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) && (*(char *)(lVar5 + 0xe9) == '\0')) {
      if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Equality_407f288(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05794618);
        puVar1 = PTR_DAT_058163b8;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        DG_Tweening_Core_TweenLink___ctor_332f2e4(lVar3,uVar4,6,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        DG_Tweening_Core_TweenManager__AddTweenLink_3330cfc(lVar5,lVar3,0);
      }
    }
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

