/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardController$$UpdateViewModels
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__UpdateViewModels (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022fe45c) */
/* WARNING: Removing unreachable block (ram,0x022fe468) */
/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentLeaderboardController$$UpdateViewModels
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__UpdateViewModels
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentLeaderboardController__UpdateViewModels_32de520
               (long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  
  puVar8 = PTR_DAT_05805118;
  if ((bRam0000000005c31d9f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05763258);
    FUN_012d0dc8(PTR_DAT_057a4f68);
    FUN_012d0dc8(PTR_DAT_057626e8);
    FUN_012d0dc8(PTR_DAT_057b4ad8);
    FUN_012d0dc8(PTR_DAT_05759ca8);
    FUN_012d0dc8(PTR_DAT_05805118);
    bRam0000000005c31d9f = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar8);
  if (lVar9 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_057626e8);
    plVar13 = (long *)(param_1 + 0x30);
    *plVar13 = lVar9;
    FUN_012d0d74(plVar13,lVar9);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar9 = Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__GetLeaderboardViewModels_32d9a28
                        ();
      plVar12 = (long *)(param_1 + 0x38);
      *plVar12 = lVar9;
      FUN_012d0d74(plVar12,lVar9);
      puVar3 = PTR_DAT_05763258;
      puVar8 = PTR_DAT_05759ca8;
      lVar9 = *plVar12;
      if ((lVar9 == 0) || (iVar14 = *(int *)(lVar9 + 0x18), iVar14 == 0)) {
        return;
      }
      iVar1 = iVar14;
      if (2 < iVar14) {
        iVar1 = 3;
      }
      if (0 < iVar14) {
        iVar14 = 0;
        do {
          if (lVar9 == 0) goto LAB_033de6e4;
          lVar15 = *plVar13;
          uVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar9,iVar14,*(undefined8 *)puVar8);
          if (lVar15 == 0) goto LAB_033de6e4;
          lVar9 = *(long *)(lVar15 + 0x10);
          lVar11 = *(long *)puVar3;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_033de6e4;
          uVar2 = *(uint *)(lVar15 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
            FUN_012d0d74();
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))(lVar15);
          }
          lVar9 = *plVar12;
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar1);
        if (lVar9 == 0) goto LAB_033de6e4;
      }
      if (iVar1 < 0) {
        System_ThrowHelper__ThrowArgumentOutOfRangeException_26a4f04(0x10,4,0);
      }
      if (*(int *)(lVar9 + 0x18) < iVar1) {
        System_ThrowHelper__ThrowArgumentException_26a4a30(0x17,0);
      }
      if (iVar1 < 1) {
        return;
      }
      iVar14 = *(int *)(lVar9 + 0x18) - iVar1;
      *(int *)(lVar9 + 0x18) = iVar14;
      if (0 < iVar14) {
        System_Array__Copy_26a6ec0
                  (*(undefined8 *)(lVar9 + 0x10),iVar1,*(undefined8 *)(lVar9 + 0x10),0,iVar14,0);
        iVar14 = *(int *)(lVar9 + 0x18);
      }
      puVar6 = *(undefined8 **)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (puVar6 == (undefined8 *)0x0) {
        thunk_FUN_0136d790(PTR_DAT_057c1ad0,iVar14,iVar1,0);
        uVar7 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar10 = thunk_FUN_0136d790(PTR_DAT_057b5798);
        System_ArgumentNullException___ctor_211d594(uVar7,uVar10,0);
      }
      else {
        if (iVar1 < 0) {
          thunk_FUN_0136d790(PTR_DAT_0577cad0,iVar14,iVar1,0);
          uVar7 = thunk_FUN_01320e48();
          FUN_0103b554();
          puVar8 = PTR_DAT_057a0520;
        }
        else {
          iVar4 = FUN_0133d04c(puVar6,0);
          if (iVar14 < iVar4) {
            thunk_FUN_0136d790(PTR_DAT_0577cad0);
            uVar7 = thunk_FUN_01320e48();
            FUN_0103b554();
            puVar8 = PTR_DAT_057f4438;
          }
          else {
            iVar5 = System_Array__get_Length_269b654(puVar6);
            if (iVar14 - iVar4 <= iVar5 - iVar1) {
              iVar5 = il2cpp_array_element_size(*puVar6);
              (*(code *)PTR_memset_057579a8)
                        ((long)puVar6 + (long)iVar5 * (long)(iVar14 - iVar4) + 0x20,0,
                         (long)(iVar5 * iVar1));
              return;
            }
            thunk_FUN_0136d790(PTR_DAT_0577cad0);
            uVar7 = thunk_FUN_01320e48();
            FUN_0103b554();
            puVar8 = PTR_DAT_057d40f8;
          }
        }
        uVar10 = thunk_FUN_0136d790(puVar8);
        System_IndexOutOfRangeException___ctor_26c73a0(uVar7,uVar10,0);
      }
      uVar10 = thunk_FUN_0136d790(PTR_DAT_057b9a70);
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar7,uVar10);
    }
  }
LAB_033de6e4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

