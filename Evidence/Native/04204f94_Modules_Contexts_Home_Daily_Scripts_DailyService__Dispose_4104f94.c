/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$Dispose
void Modules_Contexts_Home_Daily_Scripts_DailyService__Dispose (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$Dispose
   void Modules_Contexts_Home_Daily_Scripts_DailyService__Dispose
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

ulong Modules_Contexts_Home_Daily_Scripts_DailyService__Dispose_4104f94(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(char *)(uVar3 + 0x28) == '\0') {
    return uVar3;
  }
  lVar2 = *(long *)(uVar3 + 0x10);
  *(undefined1 *)(uVar3 + 0x28) = 0;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c373d7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05767248,uVar3,0);
    bRam0000000005c373d7 = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar4 = *(long *)PTR_DAT_05767248;
  iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0xa0) + 8))
                    (lVar2,uVar3);
  if (-1 < iVar1) {
    (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x158) + 8))(lVar2,iVar1);
  }
  return (ulong)(-1 < iVar1);
}

