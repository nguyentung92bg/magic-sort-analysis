/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$SerializeModelForSync
System_String_o* Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__SerializeModelForSync (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03636f8c) */
/* IL2CPP:
   Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentDataService$$SerializeModelForSync
   System_String_o*
   Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__SerializeModelForSync
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentDataService__SerializeModelForSync_32d6348
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  
  if ((bRam0000000005c31d54 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c31d54 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  if ((lVar9 == 0) || (lVar12 = *(long *)(param_1 + 0x28), lVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  *(undefined4 *)(lVar12 + 0x10) = *(undefined4 *)(lVar9 + 0x10);
  puVar1 = PTR_DAT_058031d8;
  *(undefined1 *)(lVar12 + 0x14) = *(undefined1 *)(lVar9 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_058031d8;
  if ((bRam0000000005c32b8c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8,0,0);
    bRam0000000005c32b8c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_058031d8;
  if ((bRam0000000005c32b91 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c32b91 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if ((bRam0000000005c32b92 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058031d8);
    bRam0000000005c32b92 = 1;
  }
  plVar4 = (long *)Newtonsoft_Json_JsonSerializer__CreateDefault_3536d7c(0);
  puVar1 = PTR_DAT_058031d8;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  (**(code **)(*plVar4 + 0x3f8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x400));
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_05779a08;
  if ((bRam0000000005c32b93 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579d5c0);
    FUN_012d0dc8(PTR_DAT_058165e8);
    FUN_012d0dc8(PTR_DAT_057eed48);
    FUN_012d0dc8(PTR_DAT_05779a08);
    FUN_012d0dc8(PTR_DAT_057e1128);
    bRam0000000005c32b93 = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057e1128;
  puVar1 = PTR_DAT_0579d5c0;
  if (lVar9 != 0) {
    System_Text_StringBuilder___ctor_1e4b230(lVar9,0x100,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture_2b20e6c(0);
    plVar6 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_057eed48;
    if (plVar6 != (long *)0x0) {
      System_IO_StringWriter___ctor_35726fc(plVar6,lVar9,uVar5,0);
      plVar7 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_058165e8;
      if (plVar7 != (long *)0x0) {
        Newtonsoft_Json_JsonTextWriter___ctor_1ce885c(plVar7,plVar6,0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar3 = (**(code **)(*plVar4 + 1000))(plVar4,*(undefined8 *)(*plVar4 + 0x3f0));
        Newtonsoft_Json_JsonWriter__set_Formatting_1a1678c(plVar7,uVar3,0);
        (**(code **)(*plVar4 + 0x568))(plVar4,plVar7,lVar12,0,*(undefined8 *)(*plVar4 + 0x570));
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03636f54;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar1,0);
LAB_03636f54:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
                    /* WARNING: Could not recover jumptable at 0x03636f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

