/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$ShowProgress
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__ShowProgress (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, int32_t streakCount, System_Collections_Generic_List_int__o* multipliers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$ShowProgress
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__ShowProgress
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, int32_t streakCount, System_Collections_Generic_List_int__o* multipliers, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__ShowProgress_3e1ab54
               (undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4,
               undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c380e1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9888);
    FUN_012d0dc8(PTR_DAT_057c2030);
    bRam0000000005c380e1 = 1;
  }
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetMultiplierTexts_3e1c034
            (param_3,param_5);
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetRedBarLength_3e1c150
            (param_3,param_4);
  Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__ToggleRedBar_3e1ae94
            (param_3,1);
  uVar1 = param_4 - 1;
  if (uVar1 < 5) {
    if (((*(long *)(param_3 + 0x78) != 0) &&
        (lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                           (*(long *)(param_3 + 0x78),uVar1,*(undefined8 *)PTR_DAT_057c2030),
        lVar2 != 0)) && (lVar2 = UnityEngine_Component__get_transform_408b444(lVar2,0), lVar2 != 0))
    {
      uVar5 = UnityEngine_Transform__get_position_4092b08(lVar2,0);
      lVar2 = *(long *)(param_3 + 0x18);
      if (lVar2 != 0) {
        UnityEngine_Transform__get_position_4092b08(lVar2,0);
        if (*(long *)(param_3 + 0x18) != 0) {
          UnityEngine_Transform__get_position_4092b08(*(long *)(param_3 + 0x18),0);
          UnityEngine_Transform__set_position_4092ba8(uVar5,param_2,lVar2,0);
          if (*(long *)(param_3 + 0x28) != 0) {
            plVar4 = *(long **)(param_3 + 0x30);
            plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (*(long *)(param_3 + 0x28),uVar1,
                                        *(undefined8 *)PTR_DAT_057c9888);
            if (plVar3 != (long *)0x0) {
              uVar5 = (**(code **)(*plVar3 + 0x548))(plVar3,*(undefined8 *)(*plVar3 + 0x550));
              if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f1ac9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar4 + 0x558))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x560));
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

