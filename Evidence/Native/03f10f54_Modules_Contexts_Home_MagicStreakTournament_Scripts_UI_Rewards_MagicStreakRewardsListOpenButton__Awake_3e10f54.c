/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards.MagicStreakRewardsListOpenButton$$Awake
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakRewardsListOpenButton__Awake (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakRewardsListOpenButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Rewards.MagicStreakRewardsListOpenButton$$Awake
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakRewardsListOpenButton__Awake
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakRewardsListOpenButton_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakRewardsListOpenButton__Awake_3e10f54
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c38080 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0579ad60);
    FUN_012d0dc8(PTR_DAT_057a05b8);
    bRam0000000005c38080 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_057a05b8,0), lVar3 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar3,lVar2,0);
    lVar3 = *(long *)(param_1 + 0x20);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar2 != 0) &&
       (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_0579ad60,0), lVar3 != 0))
    {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                (lVar3,lVar2,0);
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 != 0) {
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

