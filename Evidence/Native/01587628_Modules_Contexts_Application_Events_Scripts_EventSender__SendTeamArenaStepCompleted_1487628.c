/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaStepCompleted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaStepCompleted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t stepIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaStepCompleted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaStepCompleted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t stepIndex, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaStepCompleted_1487628
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 01587634 to 0168763f has its CatchHandler @ 01587e18 */
                    /* try { // try from 01587644 to 0168764b has its CatchHandler @ 01587e14 */
                    /* try { // try from 01587650 to 0168765b has its CatchHandler @ 01587e10 */
  if ((bRam0000000005c2384f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
                    /* try { // try from 01587674 to 0168767b has its CatchHandler @ 01587ddc */
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
                    /* try { // try from 01587688 to 0168769f has its CatchHandler @ 01587dfc */
    FUN_012d0dc8(PTR_DAT_0580bba8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_0579ec40);
    FUN_012d0dc8(PTR_DAT_057e4da8);
                    /* try { // try from 015876e8 to 016876f3 has its CatchHandler @ 01587e84 */
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057a19c0);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
                    /* try { // try from 01587718 to 0168771b has its CatchHandler @ 01587e48 */
    FUN_012d0dc8(PTR_DAT_057d3f68);
                    /* try { // try from 01587720 to 0168772b has its CatchHandler @ 01587e44 */
    bRam0000000005c2384f = 1;
  }
                    /* try { // try from 01587730 to 01687737 has its CatchHandler @ 01587e40 */
                    /* try { // try from 0158773c to 01687747 has its CatchHandler @ 01587e3c */
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar8 != 0)) {
                    /* try { // try from 0158774c to 0168777b has its CatchHandler @ 01587e84 */
    lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar8,*(undefined8 *)PTR_DAT_05792f78);
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar9,*(undefined8 *)PTR_DAT_057a1e60);
      puVar2 = PTR_DAT_057c8a60;
                    /* try { // try from 0158777c to 01687783 has its CatchHandler @ 01587e50 */
                    /* try { // try from 0158778c to 01687793 has its CatchHandler @ 01587e30 */
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) {
        lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar9,*(undefined8 *)PTR_DAT_0580bba8);
                    /* try { // try from 015877bc to 016877bf has its CatchHandler @ 01587e00 */
        lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 015877d4 to 016877df has its CatchHandler @ 01587dd8 */
        if ((lVar11 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar11,*(undefined8 *)PTR_DAT_057a19c0,0), puVar1 = PTR_DAT_0575a580,
           lVar9 != 0)) {
          uVar12 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                             (lVar9,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar11,*(undefined8 *)puVar1,uVar12,0);
          puVar2 = PTR_DAT_057db748;
          puVar1 = PTR_DAT_057caaf0;
          if (plVar10 != (long *)0x0) {
            lVar16 = *plVar10;
                    /* try { // try from 01587814 to 0168781b has its CatchHandler @ 01587e84 */
                    /* try { // try from 01587820 to 0168782f has its CatchHandler @ 01587de8 */
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar17 != 0) {
                    /* try { // try from 01587834 to 0168784f has its CatchHandler @ 01587de4 */
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                  goto LAB_01587874;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
                    /* try { // try from 0158785c to 0168786b has its CatchHandler @ 01587de0 */
            puVar13 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_01587874:
            uStack_64 = (*(code *)*puVar13)(plVar10,puVar13[1]);
                    /* try { // try from 01587880 to 01687883 has its CatchHandler @ 01587dc8 */
            uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_64);
                    /* try { // try from 01587894 to 0168789b has its CatchHandler @ 01587dc4 */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar11,*(undefined8 *)puVar1,uVar12,0);
            puVar5 = PTR_DAT_057e4da8;
            puVar4 = PTR_DAT_057d6138;
            puVar3 = PTR_DAT_057d3f68;
            puVar1 = PTR_DAT_057b8b10;
            if (lVar8 != 0) {
                    /* try { // try from 015878b0 to 016878b7 has its CatchHandler @ 01587db4 */
                    /* try { // try from 015878c4 to 016878e3 has its CatchHandler @ 01587dbc */
              uVar12 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar8,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar11,*(undefined8 *)puVar3,uVar12,0);
              uStack_70 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                    (lVar9,0);
                    /* try { // try from 015878fc to 01687903 has its CatchHandler @ 01587e08 */
              uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
                    /* try { // try from 01587910 to 01687927 has its CatchHandler @ 01587e28 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar11,*(undefined8 *)puVar1,uVar12,0);
              uStack_74 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetRemainingTime_2de5ea8
                                    (lVar9,0);
              uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_74);
                    /* try { // try from 01587940 to 01687943 has its CatchHandler @ 01587df4 */
                    /* try { // try from 0158794c to 0168795b has its CatchHandler @ 01587df0 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar11,*(undefined8 *)puVar5,uVar12,0);
              iStack_78 = param_2;
                    /* try { // try from 0158795c to 01687963 has its CatchHandler @ 01587dec */
              uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_78);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar11,*(undefined8 *)PTR_DAT_0579ec40,uVar12,0);
                    /* try { // try from 01587980 to 01687983 has its CatchHandler @ 01587e5c */
              uVar12 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                                 (lVar9,0);
              lVar16 = *plVar10;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar17 != 0) {
                    /* try { // try from 015879a8 to 016879bf has its CatchHandler @ 01587e64 */
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar13 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto LAB_015879e8;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
                    /* try { // try from 015879cc to 016879db has its CatchHandler @ 01587e80 */
              puVar13 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_015879e8:
                    /* try { // try from 015879e8 to 016879f7 has its CatchHandler @ 01587e7c */
              iVar6 = (*(code *)*puVar13)(plVar10,puVar13[1]);
              uVar14 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar8,0);
              uVar15 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                 (lVar9,0);
              iVar7 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetRemainingTime_2de5ea8
                                (lVar9,0);
                    /* try { // try from 01587a34 to 01687a5f has its CatchHandler @ 01587e68 */
              uVar12 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamArenaStepCompleted_2db37e4
                                 (uVar12,(long)iVar6,uVar14,uVar15,(long)iVar7,(long)param_2,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
                    /* try { // try from 01587a64 to 01687a6b has its CatchHandler @ 01587e58 */
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar12,0);
                    /* try { // try from 01587a70 to 01687a7b has its CatchHandler @ 01587e54 */
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar11);
                    /* try { // try from 01587a80 to 01687a8b has its CatchHandler @ 01587e84 */
                    /* try { // try from 01587a98 to 01687a9b has its CatchHandler @ 01587e60 */
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

