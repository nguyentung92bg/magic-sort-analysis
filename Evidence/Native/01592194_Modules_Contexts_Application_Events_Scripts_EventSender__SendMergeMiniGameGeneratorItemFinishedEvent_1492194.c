/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameGeneratorItemFinishedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameGeneratorItemFinishedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* generatorItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendMergeMiniGameGeneratorItemFinishedEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameGeneratorItemFinishedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   generatorItemId, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMergeMiniGameGeneratorItemFinishedEvent_1492194
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  int *piVar18;
  int iStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23876 & 1) == 0) {
                    /* catch() { ... } // from try @ 015921e4 with catch @ 015921d4
                       catch() { ... } // from try @ 01592214 with catch @ 015921d4
                       catch() { ... } // from try @ 01592250 with catch @ 015921d4 */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 015921e0 to 016921e3 has its CatchHandler @ 015921f8 */
    FUN_012d0dc8(PTR_DAT_057a1e60);
                    /* try { // try from 015921e4 to 0169220f has its CatchHandler @ 015921d4 */
    FUN_012d0dc8(PTR_DAT_057c39a8);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015921e0 with catch @ 015921f8
                        */
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 01592210 to 01692213 has its CatchHandler @ 01592240 */
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 01592214 to 01692243 has its CatchHandler @ 015921d4 */
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_058172b8);
                    /* catch() { ... } // from try @ 01592210 with catch @ 01592240 */
    FUN_012d0dc8(PTR_DAT_057942f8);
                    /* try { // try from 01592244 to 0169224f has its CatchHandler @ 01592264 */
    FUN_012d0dc8(PTR_DAT_057b0120);
                    /* try { // try from 01592250 to 0169225b has its CatchHandler @ 015921d4 */
    FUN_012d0dc8(PTR_DAT_0575a580);
                    /* try { // try from 0159225c to 01692263 has its CatchHandler @ 01592264 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01592244 with catch @ 01592264
                       catch(type#2 @ 00000000) { ... } // from try @ 0159225c with catch @ 01592264
                        */
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23876 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
    lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar9,*(undefined8 *)PTR_DAT_057c39a8);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
      plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar10,*(undefined8 *)PTR_DAT_057a1e60);
      if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
          (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) &&
         (lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar10,*(undefined8 *)PTR_DAT_05792f78), lVar9 != 0)) {
        uVar12 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetReadableEventId_219b8b8
                           (lVar9,0);
        uVar13 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetEventId_2196fc8
                           (lVar9,0);
        puVar1 = PTR_DAT_057c8a60;
        if (lVar10 != 0) {
          uVar14 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar10,0);
          iVar7 = Modules_Contexts_Home_MergeMiniGame_Scripts_MergeMiniGameService__GetCurrentStage_219a9ac
                            (lVar9,0,0);
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          puVar2 = PTR_DAT_057d3f68;
          puVar1 = PTR_DAT_0575a580;
          if (lVar9 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar9,*(undefined8 *)PTR_DAT_057942f8,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar9,*(undefined8 *)puVar1,uVar13,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar9,*(undefined8 *)puVar2,uVar14,0);
            puVar6 = PTR_DAT_058172b8;
            puVar5 = PTR_DAT_057e66c0;
            puVar4 = PTR_DAT_057db748;
            puVar3 = PTR_DAT_057caaf0;
            puVar2 = PTR_DAT_057b0120;
            puVar1 = PTR_DAT_057636d0;
            if (plVar11 != (long *)0x0) {
              lVar10 = *plVar11;
              uVar17 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar15 = (undefined8 *)(lVar10 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto LAB_01592450;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar15 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01592450:
              uStack_64 = (*(code *)*puVar15)(plVar11,puVar15[1]);
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar9,*(undefined8 *)puVar3,uVar16,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar9,*(undefined8 *)puVar6,param_2,0);
              iStack_68 = iVar7;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_68);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar9,*(undefined8 *)puVar2,uVar16,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar9,*(undefined8 *)puVar5,uVar12,0);
              lVar10 = *plVar11;
              uVar17 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
                    puVar15 = (undefined8 *)(lVar10 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto LAB_01592530;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar15 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_01592530:
              iVar8 = (*(code *)*puVar15)(plVar11,puVar15[1]);
              uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__MergeEventGeneratorItemFinished_2dbd624
                                 (uVar13,uVar14,(long)iVar8,param_2,(long)iVar7,uVar12,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar9);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

