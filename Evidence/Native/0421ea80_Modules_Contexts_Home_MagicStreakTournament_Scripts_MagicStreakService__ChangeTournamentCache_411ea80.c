/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ChangeTournamentCache
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ChangeTournamentCache (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentResponse_o* response, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0421e39c) */
/* WARNING: Removing unreachable block (ram,0x0421e3d8) */
/* WARNING: Removing unreachable block (ram,0x0421e3a4) */
/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$ChangeTournamentCache
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ChangeTournamentCache
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakTournamentResponse_o* response,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ChangeTournamentCache_411ea80
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_38;
  
  if ((bRam0000000005c3ac6f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d8348);
    bRam0000000005c3ac6f = 1;
  }
  if ((param_2 == 0) ||
     (uVar3 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_2 + 0x10),0),
     (uVar3 & 1) != 0)) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x10) = 0;
      FUN_012d0d74();
      *(undefined2 *)(lVar4 + 0x18) = 0x101;
      return;
    }
  }
  else if ((*(long *)(param_1 + 0x28) != 0) &&
          (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar4 != 0)) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057d8348);
      if (lVar4 == 0) goto LAB_0421ebc4;
      System_Object___ctor_23dfe5c(lVar4,0);
    }
    puVar6 = (undefined8 *)(lVar4 + 0x10);
    uVar3 = System_String__Equals_1ecf17c(*puVar6,*(undefined8 *)(param_2 + 0x10),4,0);
    if ((uVar3 & 1) == 0) {
      *puVar6 = *(undefined8 *)(param_2 + 0x10);
      FUN_012d0d74(puVar6);
      lVar5 = *(long *)(param_1 + 0x28);
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) goto LAB_0421ebc4;
      *(undefined2 *)(*(long *)(lVar5 + 0x20) + 0x18) = 0;
      *(undefined2 *)(lVar5 + 0x18) = 0x101;
      Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetProgressbarRewardScoreAndMultiplierIndex_411e69c
                (param_1);
      Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__ResetLastSeenData_411e6d0
                (param_1);
    }
    *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(param_2 + 0x3c);
    auVar7 = NEON_ext(*(undefined1 (*) [16])(param_2 + 0x28),*(undefined1 (*) [16])(param_2 + 0x28),
                      8,1);
    *(long *)(lVar4 + 0x20) = auVar7._8_8_;
    *(long *)(lVar4 + 0x18) = auVar7._0_8_;
    *(undefined1 *)(lVar4 + 0x28) = *(undefined1 *)(param_2 + 0x39);
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_2 + 0x20);
    FUN_012d0d74();
    if (*(long *)(param_1 + 0x28) != 0) {
      Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakDataService__SetTournamentCache_411c094
                (*(long *)(param_1 + 0x28),lVar4);
      if ((bRam0000000005c3ac70 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057c5510);
        FUN_012d0dc8(PTR_DAT_05781718);
        FUN_012d0dc8(PTR_DAT_057d0610);
        FUN_012d0dc8(PTR_DAT_057fd168);
        bRam0000000005c3ac70 = 1;
      }
      puVar2 = PTR_DAT_057c5510;
      puVar1 = PTR_DAT_05781718;
      uStack_38 = 0;
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar4 != 0)) {
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 0x30);
          if (lVar4 == 0) goto LAB_0421e3dc;
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_38,lVar4,*(undefined8 *)PTR_DAT_057fd168);
          uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_38,*(undefined8 *)puVar1);
          if ((uVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_38,*(undefined8 *)puVar2);
        }
        return;
      }
LAB_0421e3dc:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
LAB_0421ebc4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

