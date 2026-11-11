/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySwayIntensity
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySwayIntensity (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, float duration, float intensity, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySwayIntensity
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySwayIntensity
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, float duration,
   float intensity, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySwayIntensity_260f504
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_05791030;
  if ((bRam0000000005c2b9fb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05791030);
    FUN_012d0dc8(PTR_DAT_057a1538);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057fdd18);
    FUN_012d0dc8(PTR_DAT_057fc7d0);
    FUN_012d0dc8(PTR_DAT_057e5928);
    FUN_012d0dc8(PTR_DAT_057f9928);
    bRam0000000005c2b9fb = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057a1538;
  if (lVar5 != 0) {
    DG_Tweening_Core_DOGetter_float____ctor_156d324(lVar5,param_3,*(undefined8 *)PTR_DAT_057fdd18,0)
    ;
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar3 = PTR_DAT_057f9928;
    puVar2 = PTR_DAT_057e5928;
    puVar1 = PTR_DAT_057815e0;
    if (lVar6 != 0) {
      DG_Tweening_Core_DOSetter_float____ctor_156e614
                (lVar6,param_3,*(undefined8 *)PTR_DAT_057fc7d0,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar7 = DG_Tweening_DOTween__To_1ed84a4(param_2,param_1,lVar5,lVar6,0);
      lVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                        (uVar7,param_4,*(undefined8 *)puVar2);
      uVar7 = UnityEngine_Component__get_gameObject_408b480(param_3,0);
      if ((bRam0000000005c2b026 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0576c200,uVar7,*(undefined8 *)puVar3);
        FUN_012d0dc8(PTR_DAT_05794618);
        FUN_012d0dc8(PTR_DAT_058163b8);
        bRam0000000005c2b026 = 1;
      }
      if (((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) && (*(char *)(lVar5 + 0xe9) == '\0'))
      {
        if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar4 = UnityEngine_Object__op_Equality_407f288(uVar7,0,0);
        if ((uVar4 & 1) == 0) {
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05794618);
          puVar1 = PTR_DAT_058163b8;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          DG_Tweening_Core_TweenLink___ctor_332f2e4(lVar6,uVar7,6,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          DG_Tweening_Core_TweenManager__AddTweenLink_3330cfc(lVar5,lVar6,0);
        }
      }
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

