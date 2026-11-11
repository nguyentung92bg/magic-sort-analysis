/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetEndDate
System_DateTime_o Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetEndDate (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$GetEndDate
   System_DateTime_o
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetEndDate
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__GetEndDate_411f1e8
          (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  undefined8 uStack_18;
  
  if ((bRam0000000005c3ac76 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814758);
    bRam0000000005c3ac76 = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar1 != 0)) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      uStack_18 = 0;
      System_DateTime___ctor_20fda84(&uStack_18,0x7b2,1,1,0);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_05814758 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      auStack_30 = System_DateTimeOffset__FromUnixTimeSeconds_2104524(uVar2,0);
      uStack_18 = System_DateTimeOffset__get_UtcDateTime_2103804(auStack_30,0);
    }
    return uStack_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

