/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendEndlessPortalStartedStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalStartedStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendEndlessPortalStartedStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalStartedStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendEndlessPortalStartedStat_1461b58
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
                    /* try { // try from 01561b58 to 01661b7b has its CatchHandler @ 01561bd0 */
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 01561b84 to 01661b93 has its CatchHandler @ 01561bcc */
  if ((bRam0000000005c237aa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 01561b98 to 01661baf has its CatchHandler @ 01561bc8 */
    FUN_012d0dc8(PTR_DAT_057b4008);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 01561bc0 to 01661bc3 has its CatchHandler @ 01561bcc */
                    /* try { // try from 01561bc4 to 01661be7 has its CatchHandler @ 01561978 */
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* catch() { ... } // from try @ 01561b98 with catch @ 01561bc8 */
                    /* catch() { ... } // from try @ 01561b84 with catch @ 01561bcc
                       catch() { ... } // from try @ 01561bc0 with catch @ 01561bcc */
                    /* catch() { ... } // from try @ 01561b58 with catch @ 01561bd0 */
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
                    /* try { // try from 01561be8 to 01661c03 has its CatchHandler @ 01561ff0 */
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_058066d8);
    FUN_012d0dc8(PTR_DAT_057e4da8);
                    /* try { // try from 01561c04 to 01661d23 has its CatchHandler @ 01561978 */
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c237aa = 1;
  }
  lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
    lVar17 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar17,*(undefined8 *)PTR_DAT_057b4008);
    puVar4 = PTR_DAT_057c8a60;
    lVar18 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar18,*(undefined8 *)PTR_DAT_057a1e60);
      lVar18 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if (((lVar18 != 0) &&
          (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                     (lVar18,*(undefined8 *)PTR_DAT_058066d8,0), puVar4 = PTR_DAT_057db748,
          puVar1 = PTR_DAT_05774660, lVar17 != 0)) && (*(long *)(lVar17 + 0x18) != 0)) {
        uStack_64 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalDataService__GetCurrentStepIndex_3467314
                              (*(long *)(lVar17 + 0x18),0);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar18,*(undefined8 *)puVar1,uVar13,0);
        puVar8 = PTR_DAT_057e4da8;
        puVar7 = PTR_DAT_057d6138;
        puVar6 = PTR_DAT_057d3f68;
        puVar5 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057b8b10;
        puVar2 = PTR_DAT_057636d0;
        puVar1 = PTR_DAT_0575a580;
        if (plVar12 != (long *)0x0) {
                    /* try { // try from 01561d24 to 01661d4b has its CatchHandler @ 01562028 */
          lVar19 = *plVar12;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_01561dac;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
                    /* try { // try from 01561d88 to 01661daf has its CatchHandler @ 01562024 */
            } while (uVar20 != 0);
          }
          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_01561dac:
          uStack_68 = (*(code *)*puVar14)(plVar12,puVar14[1]);
                    /* try { // try from 01561db8 to 01661dc3 has its CatchHandler @ 01562020 */
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
                    /* try { // try from 01561dcc to 01661dd7 has its CatchHandler @ 01562014 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar5,uVar13,0);
                    /* try { // try from 01561de4 to 01661df7 has its CatchHandler @ 0156201c */
          uVar13 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetEventID_3469afc
                             (lVar17,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar1,uVar13,0);
          uStack_70 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetStartTimeAsUnix_3469b6c
                                (lVar17,0);
                    /* try { // try from 01561e10 to 01661e17 has its CatchHandler @ 01562010 */
                    /* try { // try from 01561e1c to 01661e37 has its CatchHandler @ 01562018 */
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar3,uVar13,0);
          uStack_74 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetRemainingSeconds_3469ba0
                                (lVar17,0);
                    /* try { // try from 01561e48 to 01661e53 has its CatchHandler @ 0156200c */
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
                    /* try { // try from 01561e54 to 01661e63 has its CatchHandler @ 01562008 */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar8,uVar13,0);
                    /* try { // try from 01561e68 to 01661e87 has its CatchHandler @ 01562004 */
          uVar13 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetSegment_3469ed4
                             (lVar17,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar18,*(undefined8 *)puVar6,uVar13,0);
          puVar1 = PTR_DAT_0575f9f0;
          if (*(long *)(lVar17 + 0x18) != 0) {
                    /* try { // try from 01561e98 to 01661ea3 has its CatchHandler @ 01561ffc */
            iVar9 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalDataService__GetCurrentStepIndex_3467314
                              (*(long *)(lVar17 + 0x18),0);
            lVar19 = *plVar12;
                    /* try { // try from 01561ea4 to 01661ec3 has its CatchHandler @ 01562000 */
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                    /* try { // try from 01561ec4 to 01661fc3 has its CatchHandler @ 01561978 */
                if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                  puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                  goto LAB_01561ef4;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar2,1);
LAB_01561ef4:
            iVar10 = (*(code *)*puVar14)(plVar12,puVar14[1]);
            uVar13 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetEventID_3469afc
                               (lVar17,0);
            uVar15 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetStartTimeAsUnix_3469b6c
                               (lVar17,0);
            iVar11 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetRemainingSeconds_3469ba0
                               (lVar17,0);
            uVar16 = Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_EndlessPortalService__GetSegment_3469ed4
                               (lVar17,0);
            uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__EndlessPortalStarted_2dacbe0
                               ((long)iVar9,(long)iVar10,uVar13,uVar15,(long)iVar11,uVar16,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar18);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

