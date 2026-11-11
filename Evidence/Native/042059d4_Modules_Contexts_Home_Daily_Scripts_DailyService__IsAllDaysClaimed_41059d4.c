/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$IsAllDaysClaimed
bool Modules_Contexts_Home_Daily_Scripts_DailyService__IsAllDaysClaimed (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o currentTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$IsAllDaysClaimed
   bool Modules_Contexts_Home_Daily_Scripts_DailyService__IsAllDaysClaimed
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, System_DateTime_o currentTime, const
   MethodInfo* method); */

undefined8 Modules_Contexts_Home_Daily_Scripts_DailyService__IsAllDaysClaimed_41059d4(void)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  
  lVar2 = Modules_Contexts_Home_Daily_Scripts_DailyService__GetDailyDateModelsForMonth_410535c();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (0 < (long)((ulong)uVar1 << 0x20)) {
    uVar4 = 0;
    puVar3 = (uint *)(lVar2 + 0x20);
    do {
      if (uVar1 == uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      if ((*puVar3 < 5) && ((1 << (ulong)(*puVar3 & 0x1f) & 0x16U) != 0)) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 4;
    } while ((long)uVar4 < (long)(int)uVar1);
  }
  return 1;
}

