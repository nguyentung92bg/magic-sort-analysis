/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInProgressView$$UpdateView
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__UpdateView (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInProgressView$$UpdateView
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__UpdateView
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__UpdateView_32dcbe0
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__UpdateScrollbar_32dcc1c
            ();
  if ((bRam0000000005c31d90 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4ad8);
    FUN_012d0dc8(PTR_DAT_057a7f30);
    FUN_012d0dc8(PTR_DAT_05759ca8);
    FUN_012d0dc8(PTR_DAT_0575b438);
    bRam0000000005c31d90 = 1;
  }
  puVar3 = PTR_DAT_0575b438;
  puVar2 = PTR_DAT_05759ca8;
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    iVar6 = 0;
    while( true ) {
      if (*(int *)(lVar4 + 0x18) <= iVar6) {
        return;
      }
      if (*(long *)(param_1 + 0x40) == 0) break;
      iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x18);
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar6,*(undefined8 *)puVar3);
      if ((lVar4 == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar4,0), lVar4 == 0)) break;
      if (iVar6 < iVar1) {
        UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
        if (*(long *)(param_1 + 0x48) == 0) break;
        lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x48),iVar6,*(undefined8 *)puVar3);
        if ((*(long *)(param_1 + 0x40) == 0) ||
           (uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_1 + 0x40),iVar6,*(undefined8 *)puVar2), lVar4 == 0))
        break;
        Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardDegreeElementView__SetModel_32dcf3c
                  (lVar4,uVar5);
      }
      else {
        UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
      }
      lVar4 = *(long *)(param_1 + 0x48);
      iVar6 = iVar6 + 1;
      if (lVar4 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

