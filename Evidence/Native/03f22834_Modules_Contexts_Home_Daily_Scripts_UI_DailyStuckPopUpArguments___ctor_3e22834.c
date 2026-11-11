/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpArguments$$.ctor
void Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpArguments___ctor (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpArguments_o* __this, int32_t stuckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUpArguments$$.ctor
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpArguments___ctor
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpArguments_o* __this, int32_t stuckType,
   const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUpArguments___ctor_3e22834
               (long param_1,undefined4 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  
  puVar4 = PTR_DAT_0580eae0;
  if ((bRam0000000005c3811e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580eae0);
    bRam0000000005c3811e = 1;
  }
  Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(param_1,0);
  *(undefined4 *)(param_1 + 0x24) = param_2;
  puVar5 = (undefined8 *)(param_1 + 0x10);
  *puVar5 = *(undefined8 *)puVar4;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

