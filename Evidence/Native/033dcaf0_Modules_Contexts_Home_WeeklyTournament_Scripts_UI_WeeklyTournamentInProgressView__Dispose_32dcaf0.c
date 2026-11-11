/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInProgressView$$Dispose
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__Dispose (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInProgressView$$Dispose
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__Dispose
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInProgressView__Dispose_32dcaf0
               (long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar6;
  
  if ((bRam0000000005c31d8e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e2c00);
    bRam0000000005c31d8e = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
              (*(long *)(param_1 + 0x20),0);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Dispose_400d49c
              (*(long *)(param_1 + 0x50),0);
  }
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_26a6bec(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
    }
  }
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 != 0) {
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar1) {
      puVar7 = *(undefined8 **)(lVar8 + 0x10);
      if (puVar7 == (undefined8 *)0x0) {
        thunk_FUN_0136d790(PTR_DAT_057c1ad0,0,iVar1,0);
        uVar4 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar5 = thunk_FUN_0136d790(PTR_DAT_057b5798);
        System_ArgumentNullException___ctor_211d594(uVar4,uVar5,0);
      }
      else {
        if (iVar1 < 0) {
          thunk_FUN_0136d790(PTR_DAT_0577cad0,0,iVar1,0);
          uVar4 = thunk_FUN_01320e48();
          FUN_0103b554();
          puVar6 = PTR_DAT_057a0520;
        }
        else {
          iVar2 = FUN_0133d04c(puVar7,0);
          if (iVar2 < 1) {
            iVar3 = System_Array__get_Length_269b654(puVar7);
            if (-iVar2 <= iVar3 - iVar1) {
              iVar3 = il2cpp_array_element_size(*puVar7);
              (*(code *)PTR_memset_057579a8)
                        ((long)puVar7 + (long)iVar3 * (long)-iVar2 + 0x20,0,(long)(iVar3 * iVar1));
              return;
            }
            thunk_FUN_0136d790(PTR_DAT_0577cad0);
            uVar4 = thunk_FUN_01320e48();
            FUN_0103b554();
            puVar6 = PTR_DAT_057d40f8;
          }
          else {
            thunk_FUN_0136d790(PTR_DAT_0577cad0);
            uVar4 = thunk_FUN_01320e48();
            FUN_0103b554();
            puVar6 = PTR_DAT_057f4438;
          }
        }
        uVar5 = thunk_FUN_0136d790(puVar6);
        System_IndexOutOfRangeException___ctor_26c73a0(uVar4,uVar5,0);
      }
      uVar5 = thunk_FUN_0136d790(PTR_DAT_057b9a70);
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar4,uVar5);
    }
  }
  return;
}

