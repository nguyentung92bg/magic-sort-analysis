/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaFinished
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaFinished (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int64_t previousElo, int64_t currentElo, int32_t teamRank, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* teamReward, int32_t rank, Modules_Contexts_Application_Reward_Scripts_RewardModel_o* contributionReward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamArenaFinished
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaFinished
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int64_t previousElo, int64_t
   currentElo, int32_t teamRank, Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   teamReward, int32_t rank, Modules_Contexts_Application_Reward_Scripts_RewardModel_o*
   contributionReward, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamArenaFinished_1487aa0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
               int param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  undefined8 uVar18;
  undefined4 uVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  int iStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_74;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
                    /* try { // try from 01587acc to 01687acf has its CatchHandler @ 01587e84 */
                    /* try { // try from 01587ad4 to 01687ae3 has its CatchHandler @ 01587df8 */
  if ((bRam0000000005c23850 & 1) == 0) {
                    /* try { // try from 01587af0 to 01687b23 has its CatchHandler @ 01587e04 */
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0580bba8);
                    /* try { // try from 01587b24 to 01687b2f has its CatchHandler @ 01587dd4 */
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 01587b34 to 01687b3b has its CatchHandler @ 01587dd0 */
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 01587b40 to 01687b4b has its CatchHandler @ 01587dcc */
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_0576c1b8);
                    /* try { // try from 01587b64 to 01687b6b has its CatchHandler @ 01587db8 */
    FUN_012d0dc8(PTR_DAT_057c2ab8);
                    /* try { // try from 01587b78 to 01687b8f has its CatchHandler @ 01587dc0 */
    FUN_012d0dc8(PTR_DAT_0575dff0);
    FUN_012d0dc8(PTR_DAT_057e6468);
    FUN_012d0dc8(PTR_DAT_0575b698);
    FUN_012d0dc8(PTR_DAT_057b8b10);
                    /* try { // try from 01587ba0 to 01687ba3 has its CatchHandler @ 01587e84 */
    FUN_012d0dc8(PTR_DAT_057c1310);
                    /* try { // try from 01587bb0 to 01687bb3 has its CatchHandler @ 01587e78 */
    FUN_012d0dc8(PTR_DAT_057b2e80);
    FUN_012d0dc8(PTR_DAT_05803550);
                    /* try { // try from 01587bc4 to 01687bc7 has its CatchHandler @ 01587e74 */
    FUN_012d0dc8(PTR_DAT_05801318);
    FUN_012d0dc8(PTR_DAT_05774660);
                    /* try { // try from 01587be0 to 01687be7 has its CatchHandler @ 01587e70 */
    FUN_012d0dc8(PTR_DAT_05771950);
    FUN_012d0dc8(PTR_DAT_0578dd70);
                    /* try { // try from 01587bf4 to 01687bf7 has its CatchHandler @ 01587e6c */
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05803ca0);
    FUN_012d0dc8(PTR_DAT_057a2748);
                    /* try { // try from 01587c20 to 01687c27 has its CatchHandler @ 01587e2c */
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
                    /* try { // try from 01587c34 to 01687c4b has its CatchHandler @ 01587e4c */
    bRam0000000005c23850 = 1;
  }
  uStack_68 = 0;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar10 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar10 != 0)) {
                    /* try { // try from 01587c5c to 01687c63 has its CatchHandler @ 01587e84 */
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_05792f78);
                    /* try { // try from 01587c70 to 01687c7f has its CatchHandler @ 01587e0c */
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar11 != 0)) {
                    /* try { // try from 01587c80 to 01687ce7 has its CatchHandler @ 0158739c */
      plVar12 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar11,*(undefined8 *)PTR_DAT_057a1e60);
      puVar6 = PTR_DAT_057c8a60;
      if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
         (lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar11 != 0)) {
        lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar11,*(undefined8 *)PTR_DAT_0580bba8);
        lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
                    /* try { // try from 01587ce8 to 01687ceb has its CatchHandler @ 01587db0 */
                    /* try { // try from 01587cec to 01687cef has its CatchHandler @ 01587e74 */
                    /* try { // try from 01587cf0 to 01687cf3 has its CatchHandler @ 01587e70 */
        if ((lVar13 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar13,*(undefined8 *)PTR_DAT_057a2748,0), puVar2 = PTR_DAT_0575a580,
           lVar11 != 0)) {
                    /* try { // try from 01587cf4 to 01687cf7 has its CatchHandler @ 01587dac */
                    /* try { // try from 01587cf8 to 01687cfb has its CatchHandler @ 01587e6c */
                    /* try { // try from 01587cfc to 01687cff has its CatchHandler @ 01587da8 */
                    /* try { // try from 01587d00 to 01687d03 has its CatchHandler @ 01587e60 */
                    /* try { // try from 01587d04 to 01687d07 has its CatchHandler @ 01587e5c */
          uVar14 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                             (lVar11,0);
                    /* try { // try from 01587d08 to 01687d0b has its CatchHandler @ 01587da4 */
                    /* try { // try from 01587d0c to 01687d0f has its CatchHandler @ 01587da0 */
                    /* try { // try from 01587d10 to 01687d13 has its CatchHandler @ 01587e80 */
                    /* try { // try from 01587d14 to 01687d17 has its CatchHandler @ 01587e7c */
                    /* try { // try from 01587d18 to 01687d1b has its CatchHandler @ 01587d9c */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar13,*(undefined8 *)puVar2,uVar14,0);
          puVar6 = PTR_DAT_057db748;
          puVar2 = PTR_DAT_057caaf0;
                    /* try { // try from 01587d1c to 01687d1f has its CatchHandler @ 01587e68 */
          if (plVar12 != (long *)0x0) {
                    /* try { // try from 01587d20 to 01687d23 has its CatchHandler @ 01587d98 */
                    /* try { // try from 01587d24 to 01687d27 has its CatchHandler @ 01587d94 */
            lVar20 = *plVar12;
                    /* try { // try from 01587d28 to 01687d2b has its CatchHandler @ 01587e48 */
                    /* try { // try from 01587d2c to 01687d2f has its CatchHandler @ 01587e44 */
                    /* try { // try from 01587d30 to 01687d33 has its CatchHandler @ 01587d90 */
                    /* try { // try from 01587d34 to 01687d37 has its CatchHandler @ 01587e34 */
            uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
                    /* try { // try from 01587d38 to 01687d3b has its CatchHandler @ 01587e20 */
                    /* try { // try from 01587d3c to 01687d3f has its CatchHandler @ 01587d8c */
                    /* try { // try from 01587d40 to 01687d43 has its CatchHandler @ 01587e1c */
                    /* try { // try from 01587d44 to 01687d47 has its CatchHandler @ 01587e18 */
            if (uVar21 != 0) {
                    /* try { // try from 01587d48 to 01687d4b has its CatchHandler @ 01587d88 */
                    /* try { // try from 01587d4c to 01687d4f has its CatchHandler @ 01587d84 */
              piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                    /* try { // try from 01587d50 to 01687d53 has its CatchHandler @ 01587d80 */
                    /* try { // try from 01587d54 to 01687d57 has its CatchHandler @ 01587d7c */
                    /* try { // try from 01587d58 to 01687d5b has its CatchHandler @ 01587df0 */
                if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* catch() { ... } // from try @ 01587d74 with catch @ 01587d78
                       try { // try from 01587d78 to 01687e9b has its CatchHandler @ 0158739c */
                    /* catch() { ... } // from try @ 01587d54 with catch @ 01587d7c */
                    /* catch() { ... } // from try @ 01587d50 with catch @ 01587d80 */
                    /* catch() { ... } // from try @ 01587d4c with catch @ 01587d84 */
                  puVar15 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                  goto LAB_01587d88;
                }
                    /* try { // try from 01587d5c to 01687d5f has its CatchHandler @ 01587e0c */
                uVar21 = uVar21 - 1;
                    /* try { // try from 01587d60 to 01687d63 has its CatchHandler @ 01587df8 */
                piVar22 = piVar22 + 4;
                    /* try { // try from 01587d64 to 01687d67 has its CatchHandler @ 01587e04 */
              } while (uVar21 != 0);
            }
                    /* try { // try from 01587d68 to 01687d6b has its CatchHandler @ 01587dd4 */
                    /* try { // try from 01587d6c to 01687d6f has its CatchHandler @ 01587de8 */
                    /* try { // try from 01587d70 to 01687d73 has its CatchHandler @ 01587de0 */
            puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
                    /* try { // try from 01587d74 to 01687d77 has its CatchHandler @ 01587d78 */
LAB_01587d88:
                    /* catch() { ... } // from try @ 01587d48 with catch @ 01587d88 */
                    /* catch() { ... } // from try @ 01587d3c with catch @ 01587d8c */
                    /* catch() { ... } // from try @ 01587d30 with catch @ 01587d90 */
                    /* catch() { ... } // from try @ 01587d24 with catch @ 01587d94 */
            uStack_74 = (*(code *)*puVar15)(plVar12,puVar15[1]);
                    /* catch() { ... } // from try @ 01587d20 with catch @ 01587d98 */
                    /* catch() { ... } // from try @ 01587d18 with catch @ 01587d9c */
                    /* catch() { ... } // from try @ 01587d0c with catch @ 01587da0 */
                    /* catch() { ... } // from try @ 01587d08 with catch @ 01587da4 */
                    /* catch() { ... } // from try @ 01587cfc with catch @ 01587da8 */
            uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_74);
                    /* catch() { ... } // from try @ 01587cf4 with catch @ 01587dac */
                    /* catch() { ... } // from try @ 01587ce8 with catch @ 01587db0 */
                    /* catch() { ... } // from try @ 015878b0 with catch @ 01587db4 */
                    /* catch() { ... } // from try @ 01587b64 with catch @ 01587db8 */
                    /* catch() { ... } // from try @ 015878c4 with catch @ 01587dbc */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar13,*(undefined8 *)puVar2,uVar14,0);
            puVar7 = PTR_DAT_057d6138;
            puVar3 = PTR_DAT_057d3f68;
            puVar5 = PTR_DAT_057b8b10;
            puVar4 = PTR_DAT_0578dd70;
            puVar2 = PTR_DAT_05774660;
                    /* catch() { ... } // from try @ 01587b78 with catch @ 01587dc0 */
            if (lVar10 != 0) {
                    /* catch() { ... } // from try @ 01587894 with catch @ 01587dc4 */
                    /* catch() { ... } // from try @ 01587880 with catch @ 01587dc8 */
                    /* catch() { ... } // from try @ 01587b40 with catch @ 01587dcc */
                    /* catch() { ... } // from try @ 01587b34 with catch @ 01587dd0 */
                    /* catch() { ... } // from try @ 01587b24 with catch @ 01587dd4
                       catch() { ... } // from try @ 01587d68 with catch @ 01587dd4 */
                    /* catch() { ... } // from try @ 015877d4 with catch @ 01587dd8 */
                    /* catch() { ... } // from try @ 01587674 with catch @ 01587ddc */
                    /* catch() { ... } // from try @ 0158785c with catch @ 01587de0
                       catch() { ... } // from try @ 01587d70 with catch @ 01587de0 */
                    /* catch() { ... } // from try @ 01587834 with catch @ 01587de4 */
                    /* catch() { ... } // from try @ 01587820 with catch @ 01587de8
                       catch() { ... } // from try @ 01587d6c with catch @ 01587de8 */
                    /* catch() { ... } // from try @ 0158795c with catch @ 01587dec */
                    /* catch() { ... } // from try @ 0158794c with catch @ 01587df0
                       catch() { ... } // from try @ 01587d58 with catch @ 01587df0 */
                    /* catch() { ... } // from try @ 01587940 with catch @ 01587df4 */
                    /* catch() { ... } // from try @ 01587ad4 with catch @ 01587df8
                       catch() { ... } // from try @ 01587d60 with catch @ 01587df8 */
              uVar14 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar10,0);
                    /* catch() { ... } // from try @ 01587688 with catch @ 01587dfc */
                    /* catch() { ... } // from try @ 015877bc with catch @ 01587e00 */
                    /* catch() { ... } // from try @ 01587af0 with catch @ 01587e04
                       catch() { ... } // from try @ 01587d64 with catch @ 01587e04 */
                    /* catch() { ... } // from try @ 015878fc with catch @ 01587e08 */
                    /* catch() { ... } // from try @ 01587c70 with catch @ 01587e0c
                       catch() { ... } // from try @ 01587d5c with catch @ 01587e0c */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar3,uVar14,0);
                    /* catch() { ... } // from try @ 01587650 with catch @ 01587e10 */
                    /* catch() { ... } // from try @ 01587644 with catch @ 01587e14 */
                    /* catch() { ... } // from try @ 01587634 with catch @ 01587e18
                       catch() { ... } // from try @ 01587d44 with catch @ 01587e18 */
              uStack_80 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                    (lVar11,0);
                    /* catch() { ... } // from try @ 01587624 with catch @ 01587e1c
                       catch() { ... } // from try @ 01587d40 with catch @ 01587e1c */
                    /* catch() { ... } // from try @ 015875f4 with catch @ 01587e20
                       catch() { ... } // from try @ 01587d38 with catch @ 01587e20 */
                    /* catch() { ... } // from try @ 015875dc with catch @ 01587e24 */
                    /* catch() { ... } // from try @ 01587910 with catch @ 01587e28 */
                    /* catch() { ... } // from try @ 01587c20 with catch @ 01587e2c */
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_80);
                    /* catch() { ... } // from try @ 0158778c with catch @ 01587e30 */
                    /* catch() { ... } // from try @ 015875a8 with catch @ 01587e34
                       catch() { ... } // from try @ 01587d34 with catch @ 01587e34 */
                    /* catch() { ... } // from try @ 01587598 with catch @ 01587e38 */
                    /* catch() { ... } // from try @ 0158773c with catch @ 01587e3c */
                    /* catch() { ... } // from try @ 01587730 with catch @ 01587e40 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar5,uVar14,0);
                    /* catch() { ... } // from try @ 01587720 with catch @ 01587e44
                       catch() { ... } // from try @ 01587d2c with catch @ 01587e44 */
                    /* catch() { ... } // from try @ 01587718 with catch @ 01587e48
                       catch() { ... } // from try @ 01587d28 with catch @ 01587e48 */
                    /* catch() { ... } // from try @ 01587c34 with catch @ 01587e4c */
              uStack_84 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetCurrentStep_2de8428
                                    (lVar11,0);
                    /* catch() { ... } // from try @ 0158777c with catch @ 01587e50 */
                    /* catch() { ... } // from try @ 01587a70 with catch @ 01587e54 */
                    /* catch() { ... } // from try @ 01587a64 with catch @ 01587e58 */
                    /* catch() { ... } // from try @ 01587980 with catch @ 01587e5c
                       catch() { ... } // from try @ 01587d04 with catch @ 01587e5c */
                    /* catch() { ... } // from try @ 01587a98 with catch @ 01587e60
                       catch() { ... } // from try @ 01587d00 with catch @ 01587e60 */
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_84);
                    /* catch() { ... } // from try @ 015879a8 with catch @ 01587e64 */
                    /* catch() { ... } // from try @ 01587a34 with catch @ 01587e68
                       catch() { ... } // from try @ 01587d1c with catch @ 01587e68 */
                    /* catch() { ... } // from try @ 01587bf4 with catch @ 01587e6c
                       catch() { ... } // from try @ 01587cf8 with catch @ 01587e6c */
                    /* catch() { ... } // from try @ 01587be0 with catch @ 01587e70
                       catch() { ... } // from try @ 01587cf0 with catch @ 01587e70 */
                    /* catch() { ... } // from try @ 01587bc4 with catch @ 01587e74
                       catch() { ... } // from try @ 01587cec with catch @ 01587e74 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar2,uVar14,0);
                    /* catch() { ... } // from try @ 01587bb0 with catch @ 01587e78 */
                    /* catch() { ... } // from try @ 015879e8 with catch @ 01587e7c
                       catch() { ... } // from try @ 01587d14 with catch @ 01587e7c */
                    /* catch() { ... } // from try @ 015879cc with catch @ 01587e80
                       catch() { ... } // from try @ 01587d10 with catch @ 01587e80 */
              iStack_88 = param_4;
                    /* catch() { ... } // from try @ 015875cc with catch @ 01587e84
                       catch() { ... } // from try @ 015876e8 with catch @ 01587e84
                       catch() { ... } // from try @ 0158774c with catch @ 01587e84
                       catch() { ... } // from try @ 01587814 with catch @ 01587e84
                       catch() { ... } // from try @ 01587a80 with catch @ 01587e84
                       catch() { ... } // from try @ 01587acc with catch @ 01587e84
                       catch() { ... } // from try @ 01587ba0 with catch @ 01587e84
                       catch() { ... } // from try @ 01587c5c with catch @ 01587e84 */
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_88);
                    /* try { // try from 01587e9c to 01687eb3 has its CatchHandler @ 01587f34 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)puVar4,uVar14,0);
              uStack_90 = param_2;
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_90);
                    /* try { // try from 01587eb4 to 01687f23 has its CatchHandler @ 0158739c */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)PTR_DAT_057c1310,uVar14,0);
              uStack_98 = param_3;
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar7,&uStack_98);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)PTR_DAT_057c2ab8,uVar14,0);
              iStack_9c = param_6;
              uVar14 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&iStack_9c);
                    /* try { // try from 01587f24 to 01687f33 has its CatchHandler @ 01587f34 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)PTR_DAT_05771950,uVar14,0);
                    /* catch() { ... } // from try @ 01587e9c with catch @ 01587f34
                       catch() { ... } // from try @ 01587f24 with catch @ 01587f34 */
              uVar14 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                                 (lVar11,0);
                    /* try { // try from 01587f38 to 01687f3b has its CatchHandler @ 01587f44 */
                    /* try { // try from 01587f3c to 01687f47 has its CatchHandler @ 0158739c */
                    /* catch() { ... } // from try @ 01587f38 with catch @ 01587f44 */
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,*(undefined8 *)PTR_DAT_05803ca0,uVar14,0);
              puVar2 = PTR_DAT_05803550;
              uVar14 = *(undefined8 *)PTR_DAT_05801318;
              if (param_5 == 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = *(undefined4 *)(param_5 + 0x10);
              }
              uStack_80._0_4_ = uVar19;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,uVar14,uVar16,0);
              puVar5 = PTR_DAT_057b2e80;
              puVar4 = PTR_DAT_0576c1b8;
              uVar14 = *(undefined8 *)PTR_DAT_0575dff0;
              if (param_5 == 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = *(undefined4 *)(param_5 + 0x14);
              }
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar19);
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,uVar14,uVar16,0);
              uVar14 = *(undefined8 *)puVar2;
              if (param_5 == 0) {
                dVar25 = 0.0;
              }
              else {
                uStack_68 = *(undefined8 *)(param_5 + 0x18);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                dVar25 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
              }
              puVar2 = PTR_DAT_057e6468;
              iVar8 = -0x80000000;
              if (dVar25 != INFINITY) {
                iVar8 = (int)dVar25;
              }
              uStack_80._0_4_ = iVar8;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,uVar14,uVar16,0);
              puVar3 = PTR_DAT_0575b698;
              uVar14 = *(undefined8 *)puVar5;
              if (param_7 == 0) {
                uStack_80._0_4_ = 0;
              }
              else {
                uStack_80._0_4_ = *(undefined4 *)(param_7 + 0x10);
              }
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,uVar14,uVar16,0);
              uVar14 = *(undefined8 *)puVar2;
              if (param_7 == 0) {
                uVar19 = 0;
              }
              else {
                uVar19 = *(undefined4 *)(param_7 + 0x14);
              }
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar19);
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,uVar14,uVar16,0);
              uVar14 = *(undefined8 *)puVar3;
              if (param_7 == 0) {
                dVar25 = 0.0;
              }
              else {
                uStack_68 = *(undefined8 *)(param_7 + 0x18);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                dVar25 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
              }
              iVar8 = -0x80000000;
              if (dVar25 != INFINITY) {
                iVar8 = (int)dVar25;
              }
              uStack_80 = CONCAT44(uStack_80._4_4_,iVar8);
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&uStack_80);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (lVar13,uVar14,uVar16,0);
              uVar14 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                                 (lVar11,0);
              lVar20 = *plVar12;
              uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
              if (uVar21 != 0) {
                piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_057636d0) {
                    puVar15 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
                    goto LAB_015881d0;
                  }
                  uVar21 = uVar21 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar21 != 0);
              }
              puVar15 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_015881d0:
              iVar8 = (*(code *)*puVar15)(plVar12,puVar15[1]);
              uVar16 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                                 (lVar10,0);
              uVar17 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetStartTimeAsUnixTime_2de6068
                                 (lVar11,0);
              iVar9 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetCurrentStep_2de8428
                                (lVar11,0);
              uVar18 = Modules_Contexts_Home_TeamArena_TeamArenaService__GetTournamentId_2de84cc
                                 (lVar11,0);
              dVar25 = 0.0;
              if (param_5 == 0) {
                lVar11 = 0;
                dVar26 = 0.0;
                lVar10 = 0;
              }
              else {
                uStack_68 = *(undefined8 *)(param_5 + 0x18);
                lVar10 = (long)*(int *)(param_5 + 0x10);
                lVar11 = (long)*(int *)(param_5 + 0x14);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                dVar26 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
              }
              lVar20 = -0x80000000;
              if (dVar26 != INFINITY) {
                lVar20 = (long)(int)dVar26;
              }
              if (param_7 == 0) {
                lVar24 = 0;
                lVar23 = 0;
              }
              else {
                uStack_68 = *(undefined8 *)(param_7 + 0x18);
                lVar23 = (long)*(int *)(param_7 + 0x10);
                lVar24 = (long)*(int *)(param_7 + 0x14);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                dVar25 = (double)System_TimeSpan__get_TotalSeconds_26999ac(&uStack_68,0);
              }
              lVar1 = -0x80000000;
              if (dVar25 != INFINITY) {
                lVar1 = (long)(int)dVar25;
              }
              uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamArenaFinished_2db38e8
                                 (uVar14,(long)iVar8,uVar16,uVar17,(long)iVar9,(long)param_4,param_2
                                  ,param_3,(long)param_6,uVar18,lVar10,lVar11,lVar20,lVar23,lVar24,
                                  lVar1,0);
              if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
              }
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
  FUN_012d0ef0();
}

