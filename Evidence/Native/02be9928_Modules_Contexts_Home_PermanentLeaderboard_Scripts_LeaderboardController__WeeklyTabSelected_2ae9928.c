/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$WeeklyTabSelected
bool Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__WeeklyTabSelected (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.LeaderboardController$$WeeklyTabSelected
   bool Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__WeeklyTabSelected
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController_o* __this, const
   MethodInfo* method); */

byte Modules_Contexts_Home_PermanentLeaderboard_Scripts_LeaderboardController__WeeklyTabSelected_2ae9928
               (long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000005c2eb6b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d69c8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2eb6b = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *(long *)(param_1 + 0x40);
  lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                    (*(long *)(param_1 + 0x18),0,*(undefined8 *)PTR_DAT_057d69c8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a4e3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,lVar3,0);
    bRam0000000005c3a4e3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if ((bRam0000000005c3a493 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c3a493 = 1;
  }
  if (lVar4 == 0 && lVar3 == 0) {
    bVar2 = 1;
  }
  else {
    if (lVar3 == 0) {
      lVar3 = lVar4;
      if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
    }
    else {
      if (lVar4 != 0) {
        bVar2 = lVar4 == lVar3;
        goto LAB_0419143c;
      }
      if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
    }
    bVar2 = UnityEngine_Object__IsNativeObjectAlive_409144c(lVar3);
    bVar2 = bVar2 ^ 1;
  }
LAB_0419143c:
  return bVar2 & 1;
}

