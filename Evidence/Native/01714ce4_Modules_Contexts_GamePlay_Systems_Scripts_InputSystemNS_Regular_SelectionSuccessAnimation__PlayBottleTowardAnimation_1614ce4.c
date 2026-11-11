/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$PlayBottleTowardAnimation
bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayBottleTowardAnimation (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$PlayBottleTowardAnimation
   bool 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayBottleTowardAnimation
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayBottleTowardAnimation_1614ce4
               (long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) goto LAB_01714f04;
  if (*(int *)(lVar3 + 0x10) < 1) {
    bVar1 = false;
  }
  else {
    fVar7 = *(float *)(lVar3 + 0x18);
    fVar4 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
    fVar7 = fVar7 + fVar4;
    *(float *)(lVar3 + 0x18) = fVar7;
    if (*(int *)(lVar3 + 0x14) == 0) {
      fVar7 = fVar7 / *(float *)(param_1 + 200);
      fVar4 = fVar7;
      if (1.0 < fVar7) {
        fVar4 = 1.0;
      }
      if (fVar7 < 0.0) {
        fVar4 = 0.0;
      }
      if (*(long *)(param_1 + 0xd0) == 0) {
LAB_01714f04:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      fVar7 = (float)UnityEngine_AnimationCurve__Evaluate_4084894(fVar4,*(long *)(param_1 + 0xd0),0)
      ;
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_01714f04;
      fVar6 = (float)*(undefined8 *)(param_1 + 0xa8);
      fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
      fVar5 = fVar5 + ((float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20) - fVar5) * fVar7;
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetPosition_2d9762c
                (CONCAT44(fVar5,fVar6 + ((float)*(undefined8 *)(param_1 + 0xb4) - fVar6) * fVar7),
                 fVar5,*(float *)(param_1 + 0xb0) +
                       fVar7 * (*(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb0)),
                 *(long *)(param_1 + 0x50),0);
      fVar7 = _UNK_04339bec;
      lVar2 = *(long *)(param_1 + 0x50);
      fVar5 = *(float *)(param_1 + 0xc0) +
              fVar4 * (*(float *)(param_1 + 0xc4) - *(float *)(param_1 + 0xc0));
      UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar5 * _UNK_04339bec,0);
      if (lVar2 == 0) goto LAB_01714f04;
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetLocalRotation_2d976f8
                (lVar2,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_01714f04;
      lVar2 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x70),0);
      fVar6 = _UNK_04339bf0;
      UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar5 * _UNK_04339bf0,0);
      if (lVar2 == 0) goto LAB_01714f04;
      UnityEngine_Transform__set_localRotation_4092f3c(lVar2,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_01714f04;
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RotateWaters_2494da4
                (fVar5,*(long *)(param_1 + 0x58),0);
      if (1.0 <= fVar4) {
        *(ulong *)(lVar3 + 0x10) =
             CONCAT44((int)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) +
                      (int)((ulong)_UNK_04339c20 >> 0x20),
                      (int)*(undefined8 *)(lVar3 + 0x10) + (int)_UNK_04339c20);
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_01714f04;
        Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetPosition_2d9762c
                  (*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8),
                   *(undefined4 *)(param_1 + 0xbc),*(long *)(param_1 + 0x50),0);
        fVar4 = *(float *)(param_1 + 0xc4);
        lVar2 = *(long *)(param_1 + 0x50);
        UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar4 * fVar7,0);
        if (lVar2 == 0) goto LAB_01714f04;
        Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetLocalRotation_2d976f8
                  (lVar2,0);
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_01714f04;
        lVar2 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x70),0);
        UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar4 * fVar6,0);
        if (lVar2 == 0) goto LAB_01714f04;
        UnityEngine_Transform__set_localRotation_4092f3c(lVar2,0);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_01714f04;
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RotateWaters_2494da4
                  (fVar4,*(long *)(param_1 + 0x58),0);
      }
    }
    bVar1 = 0 < *(int *)(lVar3 + 0x10);
  }
  return bVar1;
}

