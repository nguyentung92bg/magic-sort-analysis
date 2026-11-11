/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$OverwriteModelFromSync
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__OverwriteModelFromSync (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$OverwriteModelFromSync
   void 
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__OverwriteModelFromSync
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this,
   System_String_o* data, const MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__OverwriteModelFromSync_32d6408
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  puVar4 = PTR_DAT_058031d8;
  if ((bRam0000000005c31d56 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05788298);
    FUN_012d0dc8(PTR_DAT_057d9b60);
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c31d56 = 1;
  }
  puVar3 = PTR_DAT_057d9b60;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Newtonsoft_Json_JsonConvert__DeserializeObject_object__29b1ff4
                    (param_2,*(undefined8 *)puVar3);
  plVar10 = (long *)(param_1 + 0x28);
  *plVar10 = lVar5;
  FUN_012d0d74(plVar10,lVar5);
  if ((*plVar10 != 0) && (lVar5 = *(long *)(param_1 + 0x20), lVar5 != 0)) {
    uVar1 = *(undefined4 *)(*plVar10 + 0x10);
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined4 *)(lVar5 + 0x10) = uVar1;
    *(undefined4 *)(lVar5 + 0x14) = 0;
    FUN_012d0d74((undefined8 *)(lVar5 + 0x28),0);
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      if (*plVar10 != 0) {
        uVar2 = *(undefined1 *)(*plVar10 + 0x14);
        *(undefined1 *)(lVar5 + 0x21) = 0;
        *(undefined1 *)(lVar5 + 0x20) = uVar2;
        plVar10 = *(long **)(param_1 + 0x10);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_05788298) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_033d6534;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_05788298,0);
LAB_033d6534:
                    /* WARNING: Could not recover jumptable at 0x033d654c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(plVar10,lVar5,puVar6[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

