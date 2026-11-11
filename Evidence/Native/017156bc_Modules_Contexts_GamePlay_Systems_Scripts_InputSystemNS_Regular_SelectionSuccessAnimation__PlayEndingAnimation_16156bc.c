/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$PlayEndingAnimation
bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayEndingAnimation (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.Regular.SelectionSuccessAnimation$$PlayEndingAnimation
   bool 
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayEndingAnimation
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation_o*
   __this, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Regular_SelectionSuccessAnimation__PlayEndingAnimation_16156bc
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 017156c8 to 018156df has its CatchHandler @ 01715754 */
  if ((bRam0000000005c24496 & 1) == 0) {
                    /* try { // try from 017156e0 to 01815743 has its CatchHandler @ 017150c0 */
    FUN_012d0dc8(PTR_DAT_057ee0b0);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c24496 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) goto LAB_01715834;
  if (*(int *)(lVar6 + 0x10) < 1) {
    bVar3 = false;
  }
  else {
    fVar8 = *(float *)(lVar6 + 0x18);
    fVar7 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
    *(float *)(lVar6 + 0x18) = fVar8 + fVar7;
    if ((fVar8 <= 0.0) && (0.0 < fVar8 + fVar7)) {
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
                    /* try { // try from 01715744 to 01815753 has its CatchHandler @ 01715754 */
      if (*(long *)(param_1 + 0x80) == 0) {
LAB_01715834:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Infrastructure_Common_Scripts_Component_AItemPart__Recycle_40ea4c0
                (*(long *)(param_1 + 0x80),0);
                    /* catch() { ... } // from try @ 017156c8 with catch @ 01715754
                       catch() { ... } // from try @ 01715744 with catch @ 01715754 */
                    /* try { // try from 01715758 to 0181575b has its CatchHandler @ 01715764 */
                    /* try { // try from 0171575c to 01815767 has its CatchHandler @ 017150c0 */
      if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_01715834;
                    /* catch() { ... } // from try @ 01715590 with catch @ 01715764
                       catch() { ... } // from try @ 0171561c with catch @ 01715764
                       catch() { ... } // from try @ 017156a8 with catch @ 01715764
                       catch() { ... } // from try @ 01715758 with catch @ 01715764 */
      Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48
                (*(long *)(param_1 + 0x58),*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18),0);
      plVar4 = *(long **)(param_1 + 0x58);
      if (plVar4 == (long *)0x0) goto LAB_01715834;
      (**(code **)(*plVar4 + 0x238))
                (plVar4,*(undefined8 *)(param_1 + 0x168),*(undefined8 *)(*plVar4 + 0x240));
      puVar2 = PTR_DAT_057ee0b0;
      puVar1 = PTR_DAT_057b8520;
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_01715834;
      Modules_Contexts_GamePlay_Board_Common_Scripts_OptimizedGameObject__Recycle_2d97440
                (*(long *)(param_1 + 0x50),0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar2);
      if (lVar5 == 0) goto LAB_01715834;
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
    }
    if ((fVar8 < _UNK_04321764) && (_UNK_04321764 <= *(float *)(lVar6 + 0x18))) {
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
    }
    bVar3 = 0 < *(int *)(lVar6 + 0x10);
  }
  return bVar3;
}

