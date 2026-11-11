/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$Flattened
UnityEngine_AnimationCurve_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Flattened (UnityEngine_AnimationCurve_o* src, float amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$Flattened
   UnityEngine_AnimationCurve_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Flattened
   (UnityEngine_AnimationCurve_o* src, float amount, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Flattened_2749d44
               (float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000005c2c6b5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579dc08);
    bRam0000000005c2c6b5 = 1;
  }
  if ((param_2 != 0) &&
     (lVar1 = UnityEngine_AnimationCurve__get_keys_40848e0(param_2,0), lVar1 != 0)) {
    fVar5 = param_1;
    if (1.0 < param_1) {
      fVar5 = 1.0;
    }
    if (param_1 < 0.0) {
      fVar5 = 0.0;
    }
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar4 = 0;
      uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      lVar2 = lVar1 + 0x20;
      do {
        if ((((uVar3 <= uVar4) ||
             (fVar6 = (float)UnityEngine_Keyframe__get_time_40846c4(lVar2,0),
             *(uint *)(lVar1 + 0x18) <= uVar4)) ||
            (fVar7 = (float)UnityEngine_Keyframe__get_value_40846d4(lVar2,0),
            *(uint *)(lVar1 + 0x18) <= uVar4)) ||
           (((UnityEngine_Keyframe__set_value_40846dc(fVar6 + fVar5 * (fVar7 - fVar6),lVar2,0),
             *(uint *)(lVar1 + 0x18) <= uVar4 ||
             (fVar6 = (float)UnityEngine_Keyframe__get_inTangent_40846e4(lVar2,0),
             *(uint *)(lVar1 + 0x18) <= uVar4)) ||
            ((UnityEngine_Keyframe__set_inTangent_40846ec(fVar5 * (fVar6 + -1.0) + 1.0,lVar2,0),
             *(uint *)(lVar1 + 0x18) <= uVar4 ||
             (fVar6 = (float)UnityEngine_Keyframe__get_outTangent_40846f4(lVar2,0),
             *(uint *)(lVar1 + 0x18) <= uVar4)))))) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        UnityEngine_Keyframe__set_outTangent_40846fc(fVar5 * (fVar6 + -1.0) + 1.0,lVar2,0);
        uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar4 = uVar4 + 1;
        lVar2 = lVar2 + 0x1c;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0579dc08);
    if (lVar2 != 0) {
      UnityEngine_AnimationCurve___ctor_4084dfc(lVar2,lVar1,0);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

