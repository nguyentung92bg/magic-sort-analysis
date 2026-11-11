/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakHeroImageAnimationView$$Update
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView__Update (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakHeroImageAnimationView$$Update
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView__Update
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView__Update_3e0dd90
               (long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x28);
  fVar1 = (float)UnityEngine_Time__get_deltaTime_408616c(0);
  fVar2 = fVar2 + fVar1;
  *(float *)(param_1 + 0x28) = fVar2;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(float *)(*(long *)(param_1 + 0x18) + 0x1c) <= fVar2) {
      Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView__PlayHatJumpAnimator_3e0dde8
                (param_1);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}

