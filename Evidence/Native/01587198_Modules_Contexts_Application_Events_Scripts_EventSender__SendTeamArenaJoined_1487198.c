/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaJoined
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaJoined (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaJoined
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaJoined
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaJoined_1487198
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 015871c0 to 01687203 has its CatchHandler @ 01587264 */
  if ((bRam0000000005c2384e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0580bba8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 01587214 to 01687217 has its CatchHandler @ 01587240 */
                    /* try { // try from 01587218 to 0168721b has its CatchHandler @ 01587264 */
                    /* try { // try from 0158721c to 0168722b has its CatchHandler @ 01586f7c */
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
                    /* try { // try from 0158722c to 0168723b has its CatchHandler @ 01587250 */
    FUN_012d0dc8(PTR_DAT_057d6138);
                    /* catch() { ... } // from try @ 01587214 with catch @ 01587240 */
    FUN_012d0dc8(PTR_DAT_057e4da8);
                    /* catch() { ... } // from try @ 0158717c with catch @ 01587244 */
                    /* catch() { ... } // from try @ 01587168 with catch @ 01587248 */
                    /* catch() { ... } // from try @ 01587158 with catch @ 0158724c */
    FUN_012d0dc8(PTR_DAT_0580aa68);
                    /* catch() { ... } // from try @ 01587138 with catch @ 01587250
                       catch() { ... } // from try @ 0158722c with catch @ 01587250 */
                    /* try { // try from 01587258 to 0168725b has its CatchHandler @ 01587318 */
    FUN_012d0dc8(PTR_DAT_057b8b10);
                    /* try { // try from 0158725c to 01687283 has its CatchHandler @ 01586f7c */
                    /* catch() { ... } // from try @ 01587188 with catch @ 01587260 */
                    /* catch() { ... } // from try @ 015871c0 with catch @ 01587264
                       catch() { ... } // from try @ 01587218 with catch @ 01587264 */
    FUN_012d0dc8(PTR_DAT_057d6d80);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
                    /* try { // try from 01587284 to 0168729b has its CatchHandler @ 01587308 */
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2384e = 1;
  }
                    /* try { // try from 0158729c to 016872f7 has its CatchHandler @ 01586f7c */
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
      puVar2 = PTR_DAT_057c8a60;
                    /* try { // try from 015872f8 to 01687307 has its CatchHandler @ 01587308 */
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar11 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar11 != 0)) {
                    /* catch() { ... } // from try @ 01587284 with catch @ 01587308
                       catch() { ... } // from try @ 015872f8 with catch @ 01587308 */
                    /* try { // try from 0158730c to 0168730f has its CatchHandler @ 01587318 */
                    /* try { // try from 01587310 to 0168731b has its CatchHandler @ 01586f7c */
                    /* catch() { ... } // from try @ 01587258 with catch @ 01587318
                       catch() { ... } // from try @ 0158730c with catch @ 01587318 */
        lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar11,*(undefined8 *)PTR_DAT_0580bba8);
        lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar13 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar13,*(undefined8 *)PTR_DAT_0580aa68,0), puVar1 = PTR_DAT_0575a580,
           lVar11 != 0)) {
          uVar14 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                             (lVar11,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar1,uVar14,0);
          puVar5 = PTR_DAT_057db748;
          puVar2 = PTR_DAT_057caaf0;
          puVar1 = PTR_DAT_057636d0;
          if (plVar12 != (long *)0x0) {
            lVar18 = *plVar12;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
                    /* try { // try from 0158739c to 01687597 has its CatchHandler @ 0158739c
                       catch() { ... } // from try @ 0158739c with catch @ 0158739c
                       catch() { ... } // from try @ 01587c80 with catch @ 0158739c
                       catch() { ... } // from try @ 01587d78 with catch @ 0158739c
                       catch() { ... } // from try @ 01587eb4 with catch @ 0158739c
                       catch() { ... } // from try @ 01587f3c with catch @ 0158739c */
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_015873e0;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_015873e0:
            uStack_64 = (*(code *)*puVar15)(plVar12,puVar15[1]);
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar2,uVar14,0);
            puVar6 = PTR_DAT_057e4da8;
            puVar4 = PTR_DAT_057d6138;
            puVar3 = PTR_DAT_057d3f68;
            puVar2 = PTR_DAT_057b8b10;
            if (lVar10 != 0) {
              uVar14 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar10,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar3,uVar14,0);
              uStack_70 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                    (lVar11,0);
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar2,uVar14,0);
              uStack_74 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetRemainingTime_2de5ea8
                                    (lVar11,0);
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar6,uVar14,0);
              uStack_78 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetEligibility_2de8454
                                    (lVar11,0);
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_78);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)PTR_DAT_057d6d80,uVar14,0);
              uVar14 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                                 (lVar11,0);
              lVar18 = *plVar12;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                    puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_01587560;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,1);
LAB_01587560:
              iVar7 = (*(code *)*puVar15)(plVar12,puVar15[1]);
              uVar16 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar10,0);
              uVar17 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                 (lVar11,0);
                    /* try { // try from 01587598 to 0168759b has its CatchHandler @ 01587e38 */
              iVar8 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetRemainingTime_2de5ea8
                                (lVar11,0);
                    /* try { // try from 015875a8 to 016875ab has its CatchHandler @ 01587e34 */
              iVar9 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetEligibility_2de8454
                                (lVar11,0);
              uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamArenaJoined_2db36e0
                                 (uVar14,(long)iVar7,uVar16,uVar17,(long)iVar8,(long)iVar9,0);
                    /* try { // try from 015875cc to 016875cf has its CatchHandler @ 01587e84 */
                    /* try { // try from 015875dc to 016875df has its CatchHandler @ 01587e24 */
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
                    /* try { // try from 015875f4 to 016875f7 has its CatchHandler @ 01587e20 */
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar13);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01587624 to 01687627 has its CatchHandler @ 01587e1c */
  FUN_012d0ef0();
}

