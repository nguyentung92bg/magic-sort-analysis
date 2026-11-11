/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$LateUpdate
void Modules_Contexts_Home_Daily_Scripts_DailyDataService__LateUpdate (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$LateUpdate
   void Modules_Contexts_Home_Daily_Scripts_DailyDataService__LateUpdate
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyDataService__LateUpdate_4103164(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam0000000005c3ab79 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578f508);
    bRam0000000005c3ab79 = 1;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar2 = *plVar5;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0578f508) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_042031f8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0578f508,0);
LAB_042031f8:
    (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}

