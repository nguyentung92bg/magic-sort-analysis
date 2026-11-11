/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardNotificationController$$Awake
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController__Awake (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardNotificationController$$Awake
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController__Awake
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardNotificationController__Awake_2aee144
               (long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2eb91 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ee3f0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2eb91 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) {
    lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar3,*(undefined8 *)PTR_DAT_057ee3f0);
    plVar4 = (long *)(param_1 + 0x20);
    *plVar4 = lVar3;
    FUN_012d0d74(plVar4,lVar3);
    if (*plVar4 != 0) {
      bVar2 = Modules_Contexts_Home_Friends_Scripts_FriendsService__HasAnyRequests_1c7aaf8
                        (*plVar4,0);
      *(byte *)(param_1 + 0x28) = bVar2 & 1;
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 != 0) {
        bVar2 = *(byte *)(param_1 + 0x28);
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar3,bVar2 & 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

