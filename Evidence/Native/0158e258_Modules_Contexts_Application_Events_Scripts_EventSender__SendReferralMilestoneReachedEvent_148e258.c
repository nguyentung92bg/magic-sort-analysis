/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendReferralMilestoneReachedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendReferralMilestoneReachedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* referrerId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendReferralMilestoneReachedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendReferralMilestoneReachedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* referrerId,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendReferralMilestoneReachedEvent_148e258
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23867 & 1) == 0) {
                    /* try { // try from 0158e288 to 0168e2af has its CatchHandler @ 0158e780 */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 0158e2b4 to 0168e2cb has its CatchHandler @ 0158e788 */
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057bfa10);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057ee618);
    bRam0000000005c23867 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0576aae0;
  if (lVar6 != 0) {
                    /* try { // try from 0158e30c to 0168e333 has its CatchHandler @ 0158e5d0 */
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar6,*(undefined8 *)PTR_DAT_057bfa10,0);
    puVar3 = PTR_DAT_057ee618;
    puVar1 = PTR_DAT_0575f9f0;
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar7 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar7 != 0)) {
      plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar7,*(undefined8 *)PTR_DAT_057a1e60);
                    /* try { // try from 0158e360 to 0168e37b has its CatchHandler @ 0158e5ec */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar6,*(undefined8 *)puVar3,param_2,0);
      puVar4 = PTR_DAT_057db748;
      puVar3 = PTR_DAT_057caaf0;
      puVar2 = PTR_DAT_057636d0;
      if (plVar8 == (long *)0x0) {
        lVar7 = 0;
                    /* try { // try from 0158e3d8 to 0168e3db has its CatchHandler @ 0158e5d8 */
      }
      else {
        lVar7 = *plVar8;
                    /* try { // try from 0158e390 to 0168e3c7 has its CatchHandler @ 0158e5dc */
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0158e3ec;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_0158e3ec:
                    /* try { // try from 0158e3ec to 0168e3f3 has its CatchHandler @ 0158e5d4 */
        uStack_44 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                    /* try { // try from 0158e408 to 0168e40b has its CatchHandler @ 0158e5e4 */
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_44);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar6,*(undefined8 *)puVar3,uVar10,0);
                    /* try { // try from 0158e420 to 0168e427 has its CatchHandler @ 0158e5e0 */
        lVar7 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* try { // try from 0158e440 to 0168e443 has its CatchHandler @ 0158e5b4 */
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    /* try { // try from 0158e468 to 0168e46f has its CatchHandler @ 0158e5c4 */
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0158e470;
            }
                    /* try { // try from 0158e444 to 0168e44b has its CatchHandler @ 0158e5c8 */
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_0158e470:
                    /* try { // try from 0158e474 to 0168e47b has its CatchHandler @ 0158e5c0 */
        iVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        lVar7 = (long)iVar5;
      }
      uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__ReferralMilestoneReached_2db4ba4
                         (lVar7,param_2,0);
                    /* try { // try from 0158e48c to 0168e49b has its CatchHandler @ 0158e5b8 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
                    /* try { // try from 0158e4b8 to 0168e4bf has its CatchHandler @ 0158e5b0 */
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar6);
                    /* try { // try from 0158e4c0 to 0168e507 has its CatchHandler @ 0158dfe8 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

