/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$PlayWaterPourAnimation
bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayWaterPourAnimation (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$PlayWaterPourAnimation
   bool 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayWaterPourAnimation
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayWaterPourAnimation_16152ec
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000005c24495 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05801cb0);
    FUN_012d0dc8(PTR_DAT_057ff918);
    FUN_012d0dc8(PTR_DAT_057fbc00);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05811e40);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0578afb0);
    FUN_012d0dc8(PTR_DAT_0578e2c8);
    bRam0000000005c24495 = 1;
  }
  lVar11 = *(long *)(param_1 + 0x28);
  if (lVar11 == 0) goto LAB_017156b8;
  if (*(int *)(lVar11 + 0x10) < 1) {
    bVar3 = false;
  }
  else {
    fVar14 = *(float *)(lVar11 + 0x18);
    fVar12 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
    *(float *)(lVar11 + 0x18) = fVar14 + fVar12;
    if ((fVar14 <= 0.0) && (0.0 < fVar14 + fVar12)) {
      *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
      if ((*(long *)(param_1 + 0x70) == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x70),0),
         lVar4 == 0)) goto LAB_017156b8;
      UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_017156b8;
      Modules_Contexts_GamePlay_BoardItemParts_Scripts_WaterLine_WaterLineItemPart__PlayAnimation_2308290
                (*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x148),
                 *(long *)(param_1 + 0x80),*(undefined1 *)(param_1 + 0x90),0);
      puVar1 = PTR_DAT_057606c8;
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_017156b8;
      uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayDropRatio_1e9e610
                        (*(undefined4 *)(param_1 + 0x150),*(long *)(param_1 + 0x60),
                         *(int *)(param_1 + 0xa0),
                         *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0xa4),0);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_0578afb0;
      if (lVar4 == 0) goto LAB_017156b8;
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_05801cb0,0);
      DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                (uVar5,lVar4,*(undefined8 *)puVar2);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_0578e2c8;
      if (lVar4 == 0) goto LAB_017156b8;
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,param_1,*(undefined8 *)PTR_DAT_057ff918,0);
      DG_Tweening_TweenSettingsExtensions__OnKill_object__24504f0(uVar5,lVar4,*(undefined8 *)puVar1)
      ;
    }
    if (*(int *)(lVar11 + 0x14) == 0) {
      fVar13 = *(float *)(lVar11 + 0x18) / *(float *)(param_1 + 0x148);
      fVar12 = fVar13;
      if (1.0 < fVar13) {
        fVar12 = 1.0;
      }
      if (fVar13 < 0.0) {
        fVar12 = 0.0;
      }
      if (*(char *)(param_1 + 0x161) != '\0') {
        lVar4 = *(long *)(param_1 + 0x80);
        fVar13 = 0.0;
        UnityEngine_Quaternion__Internal_FromEulerRad_3831834(0,0,0,0);
        if (lVar4 == 0) goto LAB_017156b8;
        Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetLocalRotation_40ea81c(lVar4,0)
        ;
        if ((*(long *)(param_1 + 0x50) == 0) ||
           (plVar10 = *(long **)(*(long *)(param_1 + 0x50) + 0x18), plVar10 == (long *)0x0))
        goto LAB_017156b8;
        lVar4 = *plVar10;
                    /* catch() { ... } // from try @ 01715204 with catch @ 01715524 */
                    /* catch() { ... } // from try @ 017151c4 with catch @ 01715528 */
        lVar9 = *(long *)(param_1 + 0x80);
                    /* catch() { ... } // from try @ 017151a4 with catch @ 0171552c */
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
                    /* catch() { ... } // from try @ 01715184 with catch @ 01715530 */
                    /* catch() { ... } // from try @ 01715208 with catch @ 01715534 */
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    /* try { // try from 01715578 to 01815587 has its CatchHandler @ 0171558c */
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0171557c;
            }
                    /* try { // try from 0171554c to 01815563 has its CatchHandler @ 0171558c */
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,0);
                    /* try { // try from 01715564 to 01815577 has its CatchHandler @ 017150c0 */
LAB_0171557c:
        uVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        if (lVar9 == 0) goto LAB_017156b8;
                    /* catch() { ... } // from try @ 0171554c with catch @ 0171558c
                       catch() { ... } // from try @ 01715578 with catch @ 0171558c */
                    /* try { // try from 01715590 to 01815593 has its CatchHandler @ 01715764 */
                    /* try { // try from 01715594 to 018155af has its CatchHandler @ 017150c0 */
                    /* catch() { ... } // from try @ 017151c8 with catch @ 01715598 */
        Modules_Infrastructure_Common_Scripts_Component_AItemPart__SetPosition_40ea674
                  (uVar5,fVar13 + _UNK_04339bf4,lVar9,0);
      }
      if (1.0 <= fVar12) {
                    /* try { // try from 017155b0 to 018155c7 has its CatchHandler @ 01715618 */
        *(ulong *)(lVar11 + 0x10) =
             CONCAT44((int)((ulong)*(undefined8 *)(lVar11 + 0x10) >> 0x20) +
                      (int)((ulong)_UNK_04339c20 >> 0x20),
                      (int)*(undefined8 *)(lVar11 + 0x10) + (int)_UNK_04339c20);
      }
    }
                    /* try { // try from 017155c8 to 01815603 has its CatchHandler @ 017150c0 */
    if ((fVar14 < *(float *)(param_1 + 0x154)) &&
       (*(float *)(param_1 + 0x154) <= *(float *)(lVar11 + 0x18))) {
      *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
      if (*(long *)(param_1 + 0x178) != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayColorWithEllipseFade_1e9e35c
                  (*(undefined4 *)(param_1 + 0x174),*(long *)(param_1 + 0x178),
                   *(undefined8 *)(param_1 + 0x88),0);
      }
      puVar2 = PTR_DAT_057fbc00;
      puVar1 = PTR_DAT_057b8520;
                    /* try { // try from 01715604 to 01815613 has its CatchHandler @ 01715618 */
      if ((*(long *)(param_1 + 0x88) == 0) || (*(long *)(param_1 + 0x78) == 0)) {
LAB_017156b8:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
                    /* catch() { ... } // from try @ 017155b0 with catch @ 01715618
                       catch() { ... } // from try @ 01715604 with catch @ 01715618 */
                    /* try { // try from 0171561c to 0181561f has its CatchHandler @ 01715764 */
                    /* try { // try from 01715620 to 0181563b has its CatchHandler @ 017150c0 */
                    /* catch() { ... } // from try @ 017151a8 with catch @ 01715624 */
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayRegularWaterFillingAnimation_249a3b4
                (*(long *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x158),
                 *(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(*(long *)(param_1 + 0x88) + 0x70),
                 1,0,0);
                    /* try { // try from 0171563c to 01815653 has its CatchHandler @ 017156a4 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar4 == 0) goto LAB_017156b8;
                    /* try { // try from 01715654 to 0181568f has its CatchHandler @ 017150c0 */
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int___Invoke_333cfd8
                (lVar4,*(undefined4 *)(param_1 + 0xa0),*(undefined8 *)PTR_DAT_05811e40);
    }
    if ((fVar14 < _UNK_04321764) && (_UNK_04321764 <= *(float *)(lVar11 + 0x18))) {
      *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
    }
                    /* try { // try from 01715690 to 0181569f has its CatchHandler @ 017156a4 */
    bVar3 = 0 < *(int *)(lVar11 + 0x10);
  }
                    /* catch() { ... } // from try @ 0171563c with catch @ 017156a4
                       catch() { ... } // from try @ 01715690 with catch @ 017156a4 */
                    /* try { // try from 017156a8 to 018156ab has its CatchHandler @ 01715764 */
                    /* try { // try from 017156ac to 018156c7 has its CatchHandler @ 017150c0 */
                    /* catch() { ... } // from try @ 01715188 with catch @ 017156b0 */
  return bVar3;
}

