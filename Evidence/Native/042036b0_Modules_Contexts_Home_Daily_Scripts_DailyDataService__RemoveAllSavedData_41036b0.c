/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$RemoveAllSavedData
void Modules_Contexts_Home_Daily_Scripts_DailyDataService__RemoveAllSavedData (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$RemoveAllSavedData
   void Modules_Contexts_Home_Daily_Scripts_DailyDataService__RemoveAllSavedData
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyDataService__RemoveAllSavedData_41036b0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000005c3ab7f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576ab00);
    bRam0000000005c3ab7f = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_26a6bec(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
    }
    *(undefined2 *)(param_1 + 0x18) = 0x101;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

