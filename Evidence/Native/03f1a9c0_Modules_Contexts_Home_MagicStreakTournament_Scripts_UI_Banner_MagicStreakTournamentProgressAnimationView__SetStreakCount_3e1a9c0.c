/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$SetStreakCount
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__SetStreakCount (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o* __this, int32_t streakCount, System_Collections_Generic_List_int__o* multipliers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressAnimationView$$SetStreakCount
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__SetStreakCount
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView_o*
   __this, int32_t streakCount, System_Collections_Generic_List_int__o* multipliers, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__SetStreakCount_3e1a9c0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(long *)(param_4 + 0x28) != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__ShowProgress_3e1ab54
              ();
    lVar2 = *(long *)(param_4 + 0x18);
    lVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressAnimationView__GetHatPositionByStreakCount_3e1acb8
                      (param_4,param_5);
    if ((lVar1 != 0) &&
       (uStack_30 = UnityEngine_Transform__get_localPosition_4092c40(lVar1,0), lVar2 != 0)) {
      uStack_2c = param_2;
      uStack_28 = param_3;
      if (pcRam0000000005c3a620 == (code *)0x0) {
        pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
      }
      (*pcRam0000000005c3a620)(lVar2,&uStack_30);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

