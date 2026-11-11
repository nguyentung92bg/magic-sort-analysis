/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInResultView$$UpdateView
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__UpdateView (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInResultView$$UpdateView
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__UpdateView
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__UpdateView_32dd4a8
               (long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uStack_38;
  long lStack_28;
  
  Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__UpdateScrollbar_32dd4ec
            ();
  Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInResultView__UpdateDegrees_32dd680
            (param_1);
  if ((bRam0000000005c31d98 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_0579c548);
    FUN_012d0dc8(PTR_DAT_057720a0);
    FUN_012d0dc8(PTR_DAT_057e5c30);
    FUN_012d0dc8(PTR_DAT_05795f68);
    bRam0000000005c31d98 = 1;
  }
  puVar1 = PTR_DAT_057bc5e8;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_033dda0c;
  uVar3 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__TryGetTournamentReward_32da3ec
                    (*(long *)(param_1 + 0x18),&lStack_28);
  if (((lStack_28 == 0) || ((uVar3 & 1) == 0)) || (*(int *)(lStack_28 + 0x18) < 1)) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    FUN_012d0d74((undefined8 *)(param_1 + 0x68),0);
    if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(*(long *)(param_1 + 0x18) + 0x20) == 0))
    goto LAB_033dda0c;
    uVar2 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
                      ();
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_033dda0c;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x80),0,0);
    lVar5 = *(long *)(param_1 + 0x90);
    if (lVar5 == 0) goto LAB_033dda0c;
    uVar4 = 1;
    puVar7 = (undefined8 *)PTR_DAT_05795f68;
  }
  else {
    uVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lStack_28,0,*(undefined8 *)PTR_DAT_0579c548);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    FUN_012d0d74((undefined8 *)(param_1 + 0x68),uVar4);
    if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(*(long *)(param_1 + 0x18) + 0x20) == 0))
    goto LAB_033dda0c;
    uVar2 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
                      ();
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_033dda0c;
    plVar6 = *(long **)(param_1 + 0x88);
    uStack_38 = CONCAT44(uStack_38._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x14));
    uVar4 = System_Int32__ToString_26c9768(&uStack_38,0);
    if (plVar6 == (long *)0x0) goto LAB_033dda0c;
    (**(code **)(*plVar6 + 0x558))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x560));
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_033dda0c;
    UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x80),1,0);
    lVar5 = *(long *)(param_1 + 0x90);
    if (lVar5 == 0) goto LAB_033dda0c;
    uVar4 = 0;
    puVar7 = (undefined8 *)PTR_DAT_057e5c30;
  }
  UnityEngine_GameObject__SetActive_408e318(lVar5,uVar4,0);
  plVar6 = *(long **)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar4 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900(*puVar7,0);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x558))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x560));
    puVar1 = PTR_DAT_057720a0;
    if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(*(long *)(param_1 + 0x18) + 0x20) != 0)) {
      uVar2 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__GetRank_32d5f60
                        ();
      uStack_38 = CONCAT44(uVar2,(undefined4)uStack_38);
      plVar6 = *(long **)(param_1 + 0x78);
      uVar4 = System_Int32__ToString_26c9768((long)&uStack_38 + 4,0);
      uVar4 = System_String__Concat_1ec3580(*(undefined8 *)puVar1,uVar4,0);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x558))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x560));
        return;
      }
    }
  }
LAB_033dda0c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

