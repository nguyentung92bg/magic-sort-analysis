/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$SetAllMultiplierColors
void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetAllMultiplierColors (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Banner.MagicStreakTournamentProgressView$$SetAllMultiplierColors
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetAllMultiplierColors
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView_o*
   __this, UnityEngine_Color_o color, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Banner_MagicStreakTournamentProgressView__SetAllMultiplierColors_3e1ad10
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((bRam0000000005c380ed & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057974a0);
    FUN_012d0dc8(PTR_DAT_057af350);
    FUN_012d0dc8(PTR_DAT_0580dff8);
    FUN_012d0dc8(PTR_DAT_057faca0);
    bRam0000000005c380ed = 1;
  }
  puVar2 = PTR_DAT_057af350;
  puVar1 = PTR_DAT_057974a0;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  uStack_58 = 0;
  if (*(long *)(param_5 + 0x28) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_58,*(long *)(param_5 + 0x28),*(undefined8 *)PTR_DAT_057faca0);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_58,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_58,*(undefined8 *)puVar1);
        return;
      }
      if (plStack_48 == (long *)0x0) break;
      (**(code **)(*plStack_48 + 0x2a8))
                (param_1,param_2,param_3,param_4,plStack_48,*(undefined8 *)(*plStack_48 + 0x2b0));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

