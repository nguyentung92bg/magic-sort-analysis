/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakHeroImageAnimationView$$PlayAnimatorClip
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView__PlayAnimatorClip (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView_o* __this, UnityEngine_Animator_o* animator, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.MagicStreakHeroImageAnimationView$$PlayAnimatorClip
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView__PlayAnimatorClip
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView_o*
   __this, UnityEngine_Animator_o* animator, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_MagicStreakHeroImageAnimationView__PlayAnimatorClip_3e0e20c
               (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c38067 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579b570);
    bRam0000000005c38067 = 1;
  }
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)PTR_DAT_0579b570;
    if (pcRam0000000005c28b88 == (code *)0x0) {
      pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar2,0,0);
    }
    uVar1 = (*pcRam0000000005c28b88)(uVar2);
    if (pcRam0000000005c28b70 == (code *)0x0) {
      pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
    }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28b70)(0,param_2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

