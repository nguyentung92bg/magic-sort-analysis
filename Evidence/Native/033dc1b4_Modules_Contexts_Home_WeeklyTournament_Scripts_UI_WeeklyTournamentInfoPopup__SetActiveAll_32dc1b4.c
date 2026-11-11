/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInfoPopup$$SetActiveAll
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup__SetActiveAll (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup_o* __this, bool active, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInfoPopup$$SetActiveAll
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup__SetActiveAll
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup_o* __this, bool
   active, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup__SetActiveAll_32dc1b4
               (long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c31d86 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ae688);
    FUN_012d0dc8(PTR_DAT_0575a3c0);
    FUN_012d0dc8(PTR_DAT_057e60f0);
    FUN_012d0dc8(PTR_DAT_057651f0);
    bRam0000000005c31d86 = 1;
  }
  puVar2 = PTR_DAT_057ae688;
  puVar1 = PTR_DAT_0575a3c0;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057651f0);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar2);
        return;
      }
      if (lStack_28 == 0) break;
      lVar4 = UnityEngine_Component__get_gameObject_408b480(lStack_28,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lVar4,param_2 & 1,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

