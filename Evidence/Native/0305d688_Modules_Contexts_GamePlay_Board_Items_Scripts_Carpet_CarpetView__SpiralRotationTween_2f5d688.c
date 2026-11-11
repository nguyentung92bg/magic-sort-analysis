/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetView$$SpiralRotationTween
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__SpiralRotationTween (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView_o* __this, float rotationDuration, int32_t revolution, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetView$$SpiralRotationTween
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__SpiralRotationTween
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView_o* __this, float
   rotationDuration, int32_t revolution, UnityEngine_AnimationCurve_o* curve, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetView__SpiralRotationTween_2f5d688
               (undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_057caa20;
  if ((bRam0000000005c308dc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8b30);
    FUN_012d0dc8(PTR_DAT_05791030);
    FUN_012d0dc8(PTR_DAT_057a1538);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057e5928);
    FUN_012d0dc8(PTR_DAT_057b1060);
    FUN_012d0dc8(PTR_DAT_057e0f50);
    FUN_012d0dc8(PTR_DAT_057caa20);
    bRam0000000005c308dc = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    puVar1 = PTR_DAT_057d8b30;
    if ((*(long *)(param_2 + 0x28) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_2 + 0x28) + 0x58), lVar4 != 0)) {
      lVar4 = UnityEngine_Renderer__get_material_40828f4(lVar4,0);
      plVar6 = (long *)(lVar3 + 0x18);
      *plVar6 = lVar4;
      FUN_012d0d74(plVar6,lVar4);
      *(undefined4 *)(lVar3 + 0x10) = 0;
      lVar4 = *plVar6;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      puVar2 = PTR_DAT_05791030;
      if (lVar4 != 0) {
        UnityEngine_Material__SetFloat_383f1c0(0,lVar4,**(undefined4 **)(*(long *)puVar1 + 0xb8),0);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        puVar1 = PTR_DAT_057a1538;
        if (lVar4 != 0) {
          DG_Tweening_Core_DOGetter_float____ctor_156d324
                    (lVar4,lVar3,*(undefined8 *)PTR_DAT_057b1060,0);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_057e5928;
          puVar1 = PTR_DAT_057815e0;
          if (lVar5 != 0) {
            fVar7 = (float)param_3 * _UNK_04397c8c;
            DG_Tweening_Core_DOSetter_float____ctor_156e614
                      (lVar5,lVar3,*(undefined8 *)PTR_DAT_057e0f50,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            lVar3 = DG_Tweening_DOTween__To_1ed84a4(fVar7,param_1,lVar4,lVar5,0);
            if ((bRam0000000005c2b025 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_05805638,param_4,*(undefined8 *)puVar2);
              FUN_012d0dc8(PTR_DAT_05776a80);
              FUN_012d0dc8(PTR_DAT_0580b108);
              bRam0000000005c2b025 = 1;
            }
            puVar1 = PTR_DAT_05776a80;
            if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
              *(undefined4 *)(lVar3 + 0xb4) = 0x25;
              lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              puVar1 = PTR_DAT_0580b108;
              if (lVar4 != 0) {
                DG_Tweening_Core_Easing_EaseCurve___ctor_3336d6c(lVar4,param_4,0);
                lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if (lVar5 != 0) {
                  DG_Tweening_EaseFunction___ctor_1ed6eb4
                            (lVar5,lVar4,*(undefined8 *)PTR_DAT_05805638,0);
                  *(long *)(lVar3 + 0xb8) = lVar5;
                  FUN_012d0d74((long *)(lVar3 + 0xb8),lVar5);
                  return lVar3;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            return lVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

