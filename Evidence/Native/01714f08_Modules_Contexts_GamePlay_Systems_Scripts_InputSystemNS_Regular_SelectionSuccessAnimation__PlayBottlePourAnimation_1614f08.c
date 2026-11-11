/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$PlayBottlePourAnimation
bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayBottlePourAnimation (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$PlayBottlePourAnimation
   bool 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayBottlePourAnimation
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayBottlePourAnimation_1614f08
               (long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) goto LAB_017152e8;
  if (*(int *)(lVar4 + 0x10) < 1) {
    bVar1 = false;
  }
  else {
    fVar8 = *(float *)(lVar4 + 0x18);
    fVar5 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
    iVar2 = *(int *)(lVar4 + 0x14);
    fVar8 = fVar8 + fVar5;
    *(float *)(lVar4 + 0x18) = fVar8;
    if (iVar2 == 0) {
      fVar8 = fVar8 / *(float *)(param_1 + 0xf8);
      fVar5 = fVar8;
      if (1.0 < fVar8) {
        fVar5 = 1.0;
      }
      if (fVar8 < 0.0) {
        fVar5 = 0.0;
      }
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_017152e8;
      fVar8 = (float)UnityEngine_AnimationCurve__Evaluate_4084894
                               (fVar5,*(long *)(param_1 + 0x100),0);
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_017152e8;
      fVar7 = (float)*(undefined8 *)(param_1 + 0xd8);
      fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20);
      fVar6 = fVar6 + ((float)((ulong)*(undefined8 *)(param_1 + 0xe4) >> 0x20) - fVar6) * fVar8;
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetPosition_2d9762c
                (CONCAT44(fVar6,fVar7 + ((float)*(undefined8 *)(param_1 + 0xe4) - fVar7) * fVar8),
                 fVar6,*(float *)(param_1 + 0xe0) +
                       fVar8 * (*(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe0)),
                 *(long *)(param_1 + 0x50),0);
      if (*(long *)(param_1 + 0x108) == 0) goto LAB_017152e8;
      fVar6 = (float)UnityEngine_AnimationCurve__Evaluate_4084894
                               (fVar5,*(long *)(param_1 + 0x108),0);
      fVar8 = _UNK_04339bec;
      lVar3 = *(long *)(param_1 + 0x50);
      fVar6 = *(float *)(param_1 + 0xf0) +
              fVar6 * (*(float *)(param_1 + 0xf4) - *(float *)(param_1 + 0xf0));
      UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar6 * _UNK_04339bec,0);
      if (lVar3 == 0) goto LAB_017152e8;
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetLocalRotation_2d976f8
                (lVar3,0);
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_017152e8;
      lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x70),0);
      fVar7 = _UNK_04339bf0;
      UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar6 * _UNK_04339bf0,0);
      if (lVar3 == 0) goto LAB_017152e8;
      UnityEngine_Transform__set_localRotation_4092f3c(lVar3,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_017152e8;
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RotateWaters_2494da4
                (fVar6,*(long *)(param_1 + 0x58),0);
      if (1.0 <= fVar5) {
        *(ulong *)(lVar4 + 0x10) =
             CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) +
                      (int)((ulong)_UNK_04339c20 >> 0x20),
                      (int)*(undefined8 *)(lVar4 + 0x10) + (int)_UNK_04339c20);
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_017152e8;
        Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetPosition_2d9762c
                  (*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8),
                   *(undefined4 *)(param_1 + 0xec),*(long *)(param_1 + 0x50),0);
        lVar3 = *(long *)(param_1 + 0x50);
        fVar5 = *(float *)(param_1 + 0xf0) +
                (*(float *)(param_1 + 0xf4) - *(float *)(param_1 + 0xf0));
        UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar5 * fVar8,0);
                    /* try { // try from 017150c0 to 01815183 has its CatchHandler @ 017150c0
                       catch() { ... } // from try @ 017150c0 with catch @ 017150c0
                       catch() { ... } // from try @ 017151d4 with catch @ 017150c0
                       catch() { ... } // from try @ 01715214 with catch @ 017150c0
                       catch() { ... } // from try @ 01715564 with catch @ 017150c0
                       catch() { ... } // from try @ 01715594 with catch @ 017150c0
                       catch() { ... } // from try @ 017155c8 with catch @ 017150c0
                       catch() { ... } // from try @ 01715620 with catch @ 017150c0
                       catch() { ... } // from try @ 01715654 with catch @ 017150c0
                       catch() { ... } // from try @ 017156ac with catch @ 017150c0
                       catch() { ... } // from try @ 017156e0 with catch @ 017150c0
                       catch() { ... } // from try @ 0171575c with catch @ 017150c0 */
        if (lVar3 == 0) goto LAB_017152e8;
        Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetLocalRotation_2d976f8
                  (lVar3,0);
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_017152e8;
        lVar3 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x70),0);
        UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar5 * fVar7,0);
        if (lVar3 == 0) goto LAB_017152e8;
        UnityEngine_Transform__set_localRotation_4092f3c(lVar3,0);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_017152e8;
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RotateWaters_2494da4
                  (fVar5,*(long *)(param_1 + 0x58),0);
        *(undefined1 *)(param_1 + 0x161) = 0;
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_017152e8;
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveWater_249d448
                  (*(long *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0xa4),0);
        if (*(long *)(param_1 + 0x78) == 0) goto LAB_017152e8;
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnPouringCompletedToTargetBottle_249755c
                  (*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x168),0);
      }
      iVar2 = *(int *)(lVar4 + 0x14);
    }
    if (iVar2 == 1) {
      fVar8 = (*(float *)(lVar4 + 0x18) - *(float *)(param_1 + 0xf8)) / *(float *)(param_1 + 0x130);
      fVar5 = fVar8;
      if (1.0 < fVar8) {
        fVar5 = 1.0;
      }
      if (fVar8 < 0.0) {
        fVar5 = 0.0;
      }
      if (*(long *)(param_1 + 0x138) == 0) {
LAB_017152e8:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
                    /* try { // try from 01715184 to 01815187 has its CatchHandler @ 01715530 */
                    /* try { // try from 01715188 to 01815193 has its CatchHandler @ 017156b0 */
      fVar8 = (float)UnityEngine_AnimationCurve__Evaluate_4084894
                               (fVar5,*(long *)(param_1 + 0x138),0);
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_017152e8;
                    /* try { // try from 017151a4 to 018151a7 has its CatchHandler @ 0171552c */
                    /* try { // try from 017151a8 to 018151b3 has its CatchHandler @ 01715624 */
      fVar7 = (float)*(undefined8 *)(param_1 + 0x110);
      fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x110) >> 0x20);
      fVar6 = fVar6 + ((float)((ulong)*(undefined8 *)(param_1 + 0x11c) >> 0x20) - fVar6) * fVar8;
                    /* try { // try from 017151c4 to 018151c7 has its CatchHandler @ 01715528 */
                    /* try { // try from 017151c8 to 018151d3 has its CatchHandler @ 01715598 */
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetPosition_2d9762c
                (CONCAT44(fVar6,fVar7 + ((float)*(undefined8 *)(param_1 + 0x11c) - fVar7) * fVar8),
                 fVar6,*(float *)(param_1 + 0x118) +
                       fVar8 * (*(float *)(param_1 + 0x124) - *(float *)(param_1 + 0x118)),
                 *(long *)(param_1 + 0x50),0);
      if (*(long *)(param_1 + 0x140) == 0) goto LAB_017152e8;
                    /* try { // try from 017151d4 to 01815203 has its CatchHandler @ 017150c0 */
      fVar6 = (float)UnityEngine_AnimationCurve__Evaluate_4084894
                               (fVar5,*(long *)(param_1 + 0x140),0);
      fVar8 = _UNK_04339bec;
      lVar3 = *(long *)(param_1 + 0x50);
      fVar6 = *(float *)(param_1 + 0x128) +
              fVar6 * (*(float *)(param_1 + 300) - *(float *)(param_1 + 0x128));
                    /* try { // try from 01715204 to 01815207 has its CatchHandler @ 01715524 */
                    /* try { // try from 01715208 to 01815213 has its CatchHandler @ 01715534 */
      UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar6 * _UNK_04339bec,0);
      if (lVar3 == 0) goto LAB_017152e8;
                    /* try { // try from 01715214 to 0181554b has its CatchHandler @ 017150c0 */
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetLocalRotation_2d976f8
                (lVar3,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_017152e8;
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RotateWaters_2494da4
                (fVar6,*(long *)(param_1 + 0x58),0);
      if (1.0 <= fVar5) {
        *(ulong *)(lVar4 + 0x10) =
             CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) +
                      (int)((ulong)_UNK_04339c20 >> 0x20),
                      (int)*(undefined8 *)(lVar4 + 0x10) + (int)_UNK_04339c20);
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_017152e8;
        Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetPosition_2d9762c
                  (*(undefined4 *)(param_1 + 0x11c),*(undefined4 *)(param_1 + 0x120),
                   *(undefined4 *)(param_1 + 0x124),*(long *)(param_1 + 0x50),0);
        fVar5 = *(float *)(param_1 + 300);
        lVar3 = *(long *)(param_1 + 0x50);
        UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,fVar5 * fVar8,0);
        if (lVar3 == 0) goto LAB_017152e8;
        Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__SetLocalRotation_2d976f8
                  (lVar3,0);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_017152e8;
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RotateWaters_2494da4
                  (fVar5,*(long *)(param_1 + 0x58),0);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_017152e8;
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnBeforeReturnToInitialPosition_24972d4
                  (*(long *)(param_1 + 0x58),0);
      }
    }
    bVar1 = 0 < *(int *)(lVar4 + 0x10);
  }
  return bVar1;
}

