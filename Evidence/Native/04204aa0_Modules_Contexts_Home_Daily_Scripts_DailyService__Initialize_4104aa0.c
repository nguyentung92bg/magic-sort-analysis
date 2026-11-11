/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$Initialize
void Modules_Contexts_Home_Daily_Scripts_DailyService__Initialize (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyService$$Initialize
   void Modules_Contexts_Home_Daily_Scripts_DailyService__Initialize
   (Modules_Contexts_Home_Daily_Scripts_DailyService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyService__Initialize_4104aa0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar5 = PTR_DAT_0580b9d0;
  if ((bRam0000000005c3ab8b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_0575a510);
    bRam0000000005c3ab8b = 1;
  }
  puVar4 = PTR_DAT_0575a510;
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar6 = *(long *)puVar5;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar6 != 0) {
    Modules_Infrastructure_Common_Scripts_SecondTimer___ctor_40e4c9c(lVar6,uVar8,0);
    plVar7 = (long *)(param_1 + 0x30);
    *plVar7 = lVar6;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

