/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$OnNewTournamentStarted
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__OnNewTournamentStarted (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentService$$OnNewTournamentStarted
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__OnNewTournamentStarted
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__OnNewTournamentStarted_32da184
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000005c31d76 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057881e0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c31d76 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
    *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x18) = 0xffffffff;
    *(undefined2 *)(lVar7 + 0x18) = 0x101;
    if (cRam0000000005c230a8 == '\0') {
      FUN_012d0dc8(PTR_DAT_057ece38);
      cRam0000000005c230a8 = '\x01';
    }
    puVar1 = PTR_DAT_0576aae0;
    if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
      Modules_Contexts_Application_Events_Scripts_EventSender__SendWeeklyTournamentJoinedEvent_1456dac
                (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),0);
      if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
         (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) {
        lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar7,*(undefined8 *)PTR_DAT_057881e0);
        iVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetRemainingSeconds_32d9518
                          (param_1);
        if (lVar7 != 0) {
          lVar6 = *(long *)(lVar7 + 0x38);
          if ((bRam0000000005c22fdc & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0580b9d0);
            FUN_012d0dc8(PTR_DAT_0575bf88);
            FUN_012d0dc8(PTR_DAT_0577d870);
            FUN_012d0dc8(PTR_DAT_05777480);
            bRam0000000005c22fdc = 1;
          }
          uStack_48 = 0;
          if ((*(char *)(lVar7 + 0x81) == '\0') || (*(char *)(lVar7 + 0x80) == '\0')) {
            return;
          }
          if (lVar6 != 0) {
            Modules_Contexts_Application_Notification_Scripts_NotificationService__Cancel_137ab00
                      (lVar7,*(undefined4 *)(lVar6 + 0x18));
            if (*(long *)(lVar7 + 0x18) != 0) {
              if (*(char *)(*(long *)(lVar7 + 0x18) + 0x10) == '\0') {
                return;
              }
              lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0575bf88);
              if (lVar4 != 0) {
                NotificationSamples_GameNotification___ctor_3af4d2c(lVar4,0);
                NotificationSamples_GameNotification__set_Title_3af4cd8
                          (lVar4,*(undefined8 *)(lVar6 + 0x20),0);
                lVar8 = *(long *)(lVar6 + 0x28);
                uVar5 = System_Environment__get_NewLine_23e4100(0);
                puVar2 = PTR_DAT_0580b9d0;
                puVar1 = PTR_DAT_0577d870;
                if (lVar8 != 0) {
                  uVar5 = System_String__Replace_1ed29c0
                                    (lVar8,*(undefined8 *)PTR_DAT_05777480,uVar5,0);
                  NotificationSamples_GameNotification__set_Body_3af4cf0(lVar4,uVar5,0);
                  uStack_50 = 0;
                  System_Nullable_int____ctor_203c398
                            (&uStack_50,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)puVar1);
                  NotificationSamples_GameNotification__set_Id_3af4cc4(lVar4,uStack_50,0);
                  lVar7 = *(long *)(lVar7 + 0x78);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  uStack_48 = System_DateTime__get_Now_2100510(0);
                  uVar5 = System_DateTime__AddSeconds_20ff238((double)iVar3,&uStack_48,0);
                  if (lVar7 != 0) {
                    NotificationSamples_GameNotificationsPlatform__ScheduleNotification_3af4fd0
                              (lVar7,lVar4,uVar5,0);
                    return;
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

