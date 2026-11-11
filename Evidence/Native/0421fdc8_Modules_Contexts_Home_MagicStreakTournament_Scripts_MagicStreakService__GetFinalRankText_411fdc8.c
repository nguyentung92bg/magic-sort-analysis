/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetFinalRankText
System_String_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetFinalRankText (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetFinalRankText
   System_String_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetFinalRankText
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetFinalRankText_411fdc8
          (undefined8 param_1)

{
  undefined8 uVar1;
  int iStack_14;
  
  if ((bRam0000000005c3ac85 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057aec28);
    bRam0000000005c3ac85 = 1;
  }
  iStack_14 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetRank_411e528
                        (param_1);
  if (iStack_14 == -1) {
    uVar1 = *(undefined8 *)PTR_DAT_057aec28;
  }
  else {
    uVar1 = System_Int32__ToString_26c9768(&iStack_14,0);
  }
  return uVar1;
}

