/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetCurrentProgressbarRatio
float Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentProgressbarRatio (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetCurrentProgressbarRatio
   float 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentProgressbarRatio
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

float Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentProgressbarRatio_411fcdc
                (undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentProgressbarRewardStepScore_411fc10
                    ();
  iVar2 = Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetCurrentProgressbarRewardStepMaxScore_411fc34
                    (param_1);
  if (iVar2 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)iVar1 / (float)iVar2;
  }
  return fVar3;
}

