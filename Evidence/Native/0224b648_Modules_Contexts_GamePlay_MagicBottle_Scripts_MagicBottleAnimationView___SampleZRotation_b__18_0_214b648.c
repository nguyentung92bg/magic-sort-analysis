/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$<SampleZRotation>b__18_0
void Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView___SampleZRotation_b__18_0 (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$<SampleZRotation>b__18_0
   void 
   Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView___SampleZRotation_b__18_0
   (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, float value,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView___SampleZRotation_b__18_0_214b648
               (long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 in_s3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x110), lVar1 != 0)) {
    fVar2 = (float)UnityEngine_AnimationCurve__Evaluate_4084894(lVar1,0);
    lVar1 = UnityEngine_Component__get_transform_408b444(param_1,0);
    uVar3 = 0;
    fVar2 = fVar2 * _UNK_04339bec;
    uStack_30 = UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
    if (lVar1 != 0) {
      uStack_2c = uVar3;
      fStack_28 = fVar2;
      uStack_24 = in_s3;
      if (pcRam0000000005c3a640 == (code *)0x0) {
        pcRam0000000005c3a640 = (code *)FUN_012d0d84(&UNK_043ef074,0);
      }
      (*pcRam0000000005c3a640)(lVar1,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

