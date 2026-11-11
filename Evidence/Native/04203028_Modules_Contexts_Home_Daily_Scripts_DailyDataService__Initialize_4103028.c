/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$Initialize
void Modules_Contexts_Home_Daily_Scripts_DailyDataService__Initialize (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$Initialize
   void Modules_Contexts_Home_Daily_Scripts_DailyDataService__Initialize
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyDataService__Initialize_4103028(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000005c3ab78 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578f508);
    FUN_012d0dc8(PTR_DAT_057f08d0);
    FUN_012d0dc8(PTR_DAT_0577b978);
    bRam0000000005c3ab78 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0578f508) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_042030cc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0578f508,1);
LAB_042030cc:
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    plVar5 = (long *)(param_1 + 0x20);
    *plVar5 = lVar2;
    FUN_012d0d74(plVar5,lVar2);
    *(undefined2 *)(param_1 + 0x18) = 0x100;
    if (*plVar5 != 0) {
      plVar5 = (long *)(*plVar5 + 0x10);
      if (*plVar5 == 0) {
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577b978);
        if (lVar2 == 0) goto LAB_04203150;
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar2,*(undefined8 *)PTR_DAT_057f08d0);
        *plVar5 = lVar2;
        FUN_012d0d74(plVar5,lVar2);
        *(undefined2 *)(param_1 + 0x18) = 0x101;
      }
      return;
    }
  }
LAB_04203150:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

