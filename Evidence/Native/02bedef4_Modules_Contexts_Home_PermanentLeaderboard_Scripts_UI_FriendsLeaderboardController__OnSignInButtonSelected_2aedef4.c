/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$OnSignInButtonSelected
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__OnSignInButtonSelected (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsLeaderboardController$$OnSignInButtonSelected
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__OnSignInButtonSelected
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsLeaderboardController__OnSignInButtonSelected_2aedef4
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [2];
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2eb8d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05769708);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2eb8d = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_05769708), puVar1 = PTR_DAT_0576e800,
     lVar3 != 0)) {
    if ((bRam0000000005c37f10 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057b35b0,0);
      FUN_012d0dc8(PTR_DAT_0576e800);
      bRam0000000005c37f10 = 1;
    }
    puVar2 = PTR_DAT_057b35b0;
    uStack_48 = 0;
    uStack_50 = 0;
    alStack_40[1] = 0;
    alStack_40[0] = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_98,0);
    uVar4 = (ulong)&uStack_60 | 8;
    uStack_70 = uStack_88;
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_50 = uStack_90;
    uStack_58 = uStack_98;
    uStack_48 = uStack_88;
    FUN_012d0d74(uVar4,0);
    alStack_40[0] = lVar3;
    FUN_012d0d74(alStack_40,lVar3);
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_FacebookLoginHandler__SignIn_d__7__1e612dc
              (uVar4,&uStack_60,*(undefined8 *)puVar2);
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

