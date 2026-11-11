/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$GetLiveOpsStats
System_String_o* Modules_Contexts_Application_Events_Scripts_EventSender__GetLiveOpsStats (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$GetLiveOpsStats
   System_String_o* Modules_Contexts_Application_Events_Scripts_EventSender__GetLiveOpsStats
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__GetLiveOpsStats_144ec38(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2376a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_057a5778);
    FUN_012d0dc8(PTR_DAT_057e1e18);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057b41b0);
    FUN_012d0dc8(PTR_DAT_057c0428);
    FUN_012d0dc8(PTR_DAT_0580bde0);
    FUN_012d0dc8(PTR_DAT_057f61e8);
    bRam0000000005c2376a = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
      (lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar11 != 0)) &&
     (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar11,*(undefined8 *)PTR_DAT_057c2940), lVar11 != 0)) {
    uVar12 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetMyPlayerLastSeenRank_3b25990
                       (lVar11,0);
    uVar16 = (undefined4)(uVar12 >> 0x20);
    if ((uVar12 & 0xff) == 0) {
      uVar16 = 0xffffffff;
    }
    uVar4 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetJoinStateForAnalyticsEvents_3b2ea7c
                      (lVar11,0);
    iVar5 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetRemainingSecondsOfEvent_3b2e94c
                      (lVar11,0);
    iVar1 = iVar5 / 0xe10;
    if (iVar5 < -0xe0f) {
      iVar1 = -1;
    }
    if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
        (lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar11 != 0)) &&
       (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar11,*(undefined8 *)PTR_DAT_057e1e18), lVar11 != 0)) {
      uVar6 = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetScore_2f16d0c(lVar11,0);
      uVar7 = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetLiveOpsStateForLevelEvent_2f17f28
                        (lVar11,0);
      if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
        lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18);
        if ((lVar11 != 0) &&
           (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar11,*(undefined8 *)PTR_DAT_057a5778), puVar3 = PTR_DAT_0580bde0,
           puVar2 = PTR_DAT_057db748, lVar11 != 0)) {
          uVar8 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetScore_3b1c3b4
                            (lVar11,0);
          uVar9 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetRank_3b1ccc0
                            (lVar11,0);
          uVar10 = Modules_Contexts_Home_JetpackRace_Scripts_JetpackRaceService__GetLiveOpsStateForLevelEvent_3b1cf10
                             (lVar11,0);
          plVar13 = (long *)FUN_012d0e38(*(undefined8 *)puVar3,8);
          uStack_54 = uVar4;
          lVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_54);
          if (plVar13 != (long *)0x0) {
            if ((lVar11 != 0) &&
               (lVar14 = thunk_FUN_01320d5c(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
            {
LAB_0154f0ac:
              uVar15 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
              FUN_012d0eb8(uVar15,0);
            }
            if ((int)plVar13[3] != 0) {
              plVar13[4] = lVar11;
              FUN_012d0d74(plVar13 + 4,lVar11);
              uStack_58 = uVar16;
              lVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_58);
              if ((lVar11 != 0) &&
                 (lVar14 = thunk_FUN_01320d5c(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)
                 ) goto LAB_0154f0ac;
              if (1 < *(uint *)(plVar13 + 3)) {
                plVar13[5] = lVar11;
                FUN_012d0d74(plVar13 + 5,lVar11);
                iStack_64 = iVar1;
                lVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_64);
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_01320d5c(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar14 == 0)) goto LAB_0154f0ac;
                if (2 < *(uint *)(plVar13 + 3)) {
                  plVar13[6] = lVar11;
                  FUN_012d0d74(plVar13 + 6,lVar11);
                  uStack_68 = uVar6;
                  lVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_68);
                  if ((lVar11 != 0) &&
                     (lVar14 = thunk_FUN_01320d5c(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar14 == 0)) goto LAB_0154f0ac;
                  if (3 < *(uint *)(plVar13 + 3)) {
                    plVar13[7] = lVar11;
                    FUN_012d0d74(plVar13 + 7,lVar11);
                    uStack_6c = uVar7;
                    lVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_6c);
                    if ((lVar11 != 0) &&
                       (lVar14 = thunk_FUN_01320d5c(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar14 == 0)) goto LAB_0154f0ac;
                    if (4 < *(uint *)(plVar13 + 3)) {
                      plVar13[8] = lVar11;
                      FUN_012d0d74(plVar13 + 8,lVar11);
                      uStack_70 = uVar8;
                      lVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_70);
                      if ((lVar11 != 0) &&
                         (lVar14 = thunk_FUN_01320d5c(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                         lVar14 == 0)) goto LAB_0154f0ac;
                      if (5 < *(uint *)(plVar13 + 3)) {
                        plVar13[9] = lVar11;
                        FUN_012d0d74(plVar13 + 9,lVar11);
                        uStack_74 = uVar10;
                        lVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_74);
                        if ((lVar11 != 0) &&
                           (lVar14 = thunk_FUN_01320d5c(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar14 == 0)) goto LAB_0154f0ac;
                        if (6 < *(uint *)(plVar13 + 3)) {
                          plVar13[10] = lVar11;
                          FUN_012d0d74(plVar13 + 10,lVar11);
                          uStack_78 = uVar9;
                          lVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_78);
                          if ((lVar11 != 0) &&
                             (lVar14 = thunk_FUN_01320d5c(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                             lVar14 == 0)) goto LAB_0154f0ac;
                          puVar2 = PTR_DAT_057f61e8;
                          if (7 < *(uint *)(plVar13 + 3)) {
                            plVar13[0xb] = lVar11;
                            FUN_012d0d74(plVar13 + 0xb,lVar11);
                            System_String__Format_1ed1640(*(undefined8 *)puVar2,plVar13,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

