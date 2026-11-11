/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardService$$UpdateLeaderboard
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardService__UpdateLeaderboard (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardService$$UpdateLeaderboard
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardService__UpdateLeaderboard
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardService__UpdateLeaderboard_2aec298
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long alStack_48 [3];
  
  puVar2 = PTR_DAT_057aa528;
  puVar1 = PTR_DAT_0575b460;
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
    if (*(char *)(lVar3 + 0x34) != '\0') {
      if ((bRam0000000005c2eb81 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0575b460);
        bRam0000000005c2eb81 = 1;
      }
      alStack_48[1] = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      alStack_48[0] = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_b0,0);
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      uStack_60 = uStack_a8;
      uStack_68 = uStack_b0;
      uStack_50 = uStack_98;
      uStack_58 = uStack_a0;
      FUN_012d0d74((ulong)&uStack_70 | 8,0);
      alStack_48[0] = param_1;
      FUN_012d0d74(alStack_48,param_1);
      uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_PermanentLeaderboardService__UpdateLeaderboardAsFlatBuffer_d__11__2171e40
                ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
      return;
    }
    if ((bRam0000000005c2eb82 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057aa528);
      bRam0000000005c2eb82 = 1;
    }
    alStack_48[1] = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    alStack_48[0] = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_b0,0);
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    uStack_60 = uStack_a8;
    uStack_68 = uStack_b0;
    uStack_50 = uStack_98;
    uStack_58 = uStack_a0;
    FUN_012d0d74((ulong)&uStack_70 | 8,0);
    alStack_48[0] = param_1;
    FUN_012d0d74(alStack_48,param_1);
    uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_PermanentLeaderboardService__UpdateLeaderboardAsJson_d__12__2171f44
              ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

