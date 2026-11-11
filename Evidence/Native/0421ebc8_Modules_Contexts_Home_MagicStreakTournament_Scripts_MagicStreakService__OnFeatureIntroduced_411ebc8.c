/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$OnFeatureIntroduced
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__OnFeatureIntroduced (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$OnFeatureIntroduced
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__OnFeatureIntroduced
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__OnFeatureIntroduced_411ebc8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000005c3ac71 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579de10);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c3ac71 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
    *(undefined1 *)(*(long *)(lVar5 + 0x20) + 0x19) = 1;
    *(undefined2 *)(lVar5 + 0x18) = 0x101;
    lVar5 = *(long *)(param_1 + 0x40);
    uVar3 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRemainingSeconds_411ec80
                      (param_1);
    puVar2 = PTR_DAT_057b8520;
    puVar1 = PTR_DAT_0579de10;
    if (lVar5 != 0) {
      Modules_Contexts_Application_Notification_Scripts_NotificationService__SendStreakTournamentEndNotification_137acf0
                (lVar5,uVar3,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        lVar4 = *(long *)(lVar5 + 0x20);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        }
        lVar4 = *(long *)(lVar5 + 0x10);
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041e28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x18))
                    (*(undefined8 *)(lVar4 + 0x40),lVar5,0,*(undefined8 *)(lVar4 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

