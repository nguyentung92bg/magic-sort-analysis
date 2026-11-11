/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$PlayParticleMoveToTargetAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Boosters_Scripts_WandView__PlayParticleMoveToTargetAnimation (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.WandView$$PlayParticleMoveToTargetAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Boosters_Scripts_WandView__PlayParticleMoveToTargetAnimation
   (Modules_Contexts_GamePlay_Boosters_Scripts_WandView_o* __this, UnityEngine_Vector3_o
   targetPosition, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_WandView__PlayParticleMoveToTargetAnimation_1e9daf8
               (float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  fVar9 = param_2;
  fVar10 = param_3;
  if ((bRam0000000005c28190 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057de720);
    FUN_012d0dc8(PTR_DAT_057ccae0);
    FUN_012d0dc8(PTR_DAT_058030a8);
    FUN_012d0dc8(PTR_DAT_057e9a60);
    bRam0000000005c28190 = 1;
  }
  if ((*(long *)(param_4 + 0x30) != 0) &&
     (lVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_4 + 0x30),0), lVar4 != 0)
     ) {
    UnityEngine_Transform__get_position_4092b08(lVar4,0);
    puVar3 = PTR_DAT_058030a8;
    if (*(long *)(param_4 + 0x20) != 0) {
      fVar12 = (param_2 + fVar9) * 0.5;
      lVar5 = 0x30;
      if (0.0 <= fVar12) {
        lVar5 = 0x2c;
      }
      fVar13 = *(float *)(*(long *)(param_4 + 0x20) + lVar5);
      fVar7 = (float)UnityEngine_Transform__get_position_4092b08(lVar4,0);
      UnityEngine_Transform__get_position_4092b08(lVar4,0);
      fVar11 = fVar10;
      lVar5 = FUN_012d0e38(*(undefined8 *)puVar3,3);
      uVar8 = UnityEngine_Transform__get_position_4092b08(lVar4,0);
      if (lVar5 != 0) {
        uVar2 = *(uint *)(lVar5 + 0x18);
        if (uVar2 != 0) {
          *(undefined4 *)(lVar5 + 0x20) = uVar8;
          *(float *)(lVar5 + 0x24) = fVar9;
          *(float *)(lVar5 + 0x28) = fVar11;
          if (uVar2 != 1) {
            *(float *)(lVar5 + 0x2c) = (param_1 + fVar7) * 0.5;
            *(float *)(lVar5 + 0x30) = fVar12 * fVar13;
            *(float *)(lVar5 + 0x34) = (param_3 + fVar10) * 0.5;
            if (2 < uVar2) {
              *(float *)(lVar5 + 0x38) = param_1;
              *(float *)(lVar5 + 0x3c) = param_2;
              *(float *)(lVar5 + 0x40) = param_3;
              if (*(long *)(param_4 + 0x20) != 0) {
                lVar1 = 0x24;
                if (*(char *)(param_4 + 0x5c) != '\0') {
                  lVar1 = 0x28;
                }
                uStack_88 = 0;
                uStack_80 = 0;
                uStack_78 = 0;
                uVar6 = DG_Tweening_ShortcutExtensions__DOPath_1ee9134
                                  (*(undefined4 *)(*(long *)(param_4 + 0x20) + lVar1),lVar4,lVar5,0,
                                   1,10,&uStack_88,0);
                uVar6 = DG_Tweening_TweenSettingsExtensions__SetOptions_1eee58c(uVar6,0,0,0,0);
                puVar3 = PTR_DAT_057606c8;
                if (*(long *)(param_4 + 0x20) != 0) {
                  uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                                    (uVar6,*(undefined8 *)(*(long *)(param_4 + 0x20) + 0x18),
                                     *(undefined8 *)PTR_DAT_057ccae0);
                  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                  puVar3 = PTR_DAT_057de720;
                  if (lVar4 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar4,param_4,*(undefined8 *)PTR_DAT_057e9a60,0);
                    DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                              (uVar6,lVar4,*(undefined8 *)puVar3);
                    return;
                  }
                }
              }
              goto LAB_01f9dd38;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
    }
  }
LAB_01f9dd38:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

