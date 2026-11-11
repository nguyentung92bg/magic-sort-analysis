/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$RotateTowardsDirection
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__RotateTowardsDirection (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$RotateTowardsDirection
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__RotateTowardsDirection
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__RotateTowardsDirection_260ef90
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam0000000005c2b9f9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05764ae0);
    bRam0000000005c2b9f9 = 1;
  }
  fVar10 = *(float *)(param_4 + 0xd0);
  fVar11 = *(float *)(param_4 + 0xd4);
  fVar12 = *(float *)(param_4 + 0xd8);
  lVar2 = UnityEngine_Component__get_transform_408b444(param_4,0);
  puVar1 = PTR_DAT_05764ae0;
  if (lVar2 != 0) {
    fVar4 = (float)UnityEngine_Transform__get_position_4092b08(lVar2,0);
    fVar10 = fVar10 - fVar4;
    fVar11 = fVar11 - param_2;
    fVar12 = fVar12 - param_3;
    fVar11 = fVar10 * fVar10 + fVar11 * fVar11;
    if (fVar12 * fVar12 + fVar11 < **(float **)(*(long *)puVar1 + 0xb8)) {
      return;
    }
    fVar12 = (float)func_0x01039390();
    fVar10 = _UNK_0434ccec;
    fVar7 = (fVar12 * _UNK_0434ccec + -90.0) * _UNK_04339bec;
    fVar4 = 0.0;
    fVar12 = (float)UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_0270f1dc;
    fVar6 = fVar4;
    fVar8 = fVar7;
    fVar9 = fVar11;
    UnityEngine_Time__get_deltaTime_408616c(0);
    lVar2 = UnityEngine_Component__get_transform_408b444(param_4,0);
    lVar3 = UnityEngine_Component__get_transform_408b444(param_4,0);
    if (lVar3 == 0) goto LAB_0270f1dc;
    uVar5 = UnityEngine_Transform__get_rotation_4092da8(lVar3,0);
    fVar11 = (float)NEON_fminnm(ABS(fVar11 * fVar9 +
                                    fVar7 * fVar8 + fVar12 * (float)uVar5 + fVar4 * fVar6),
                                0x3f800000);
    if (fVar11 <= _UNK_0438e0fc) {
      fVar11 = (float)acosf();
      if ((fVar11 + fVar11) * fVar10 == 0.0) {
        if (lVar2 == 0) goto LAB_0270f1dc;
        goto LAB_0270f17c;
      }
      UnityEngine_Quaternion__SlerpUnclamped_38319a0(uVar5,0);
    }
    if (lVar2 != 0) {
LAB_0270f17c:
      if (pcRam0000000005c3a630 == (code *)0x0) {
        pcRam0000000005c3a630 = (code *)FUN_012d0d84(&UNK_043eefe3,0);
      }
      (*pcRam0000000005c3a630)(lVar2,&stack0xffffffffffffffd0);
      return;
    }
  }
LAB_0270f1dc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

