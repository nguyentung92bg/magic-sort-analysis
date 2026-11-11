/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$UnlockAllDays
void Modules_Contexts_Home_Daily_Scripts_DailyDataService__UnlockAllDays (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$UnlockAllDays
   void Modules_Contexts_Home_Daily_Scripts_DailyDataService__UnlockAllDays
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyDataService__UnlockAllDays_4104498(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
                    /* try { // try from 042044a0 to 043044a7 has its CatchHandler @ 042044bc */
                    /* try { // try from 042044a8 to 043044b3 has its CatchHandler @ 0420405c */
                    /* try { // try from 042044b4 to 043044bb has its CatchHandler @ 042044bc */
  if ((bRam0000000005c3ab86 & 1) == 0) {
                    /* catch() { ... } // from try @ 042043dc with catch @ 042044bc
                       catch() { ... } // from try @ 042044a0 with catch @ 042044bc
                       catch() { ... } // from try @ 042044b4 with catch @ 042044bc */
    FUN_012d0dc8(PTR_DAT_057efc70);
    FUN_012d0dc8(PTR_DAT_05775900);
    FUN_012d0dc8(PTR_DAT_0575c268);
    FUN_012d0dc8(PTR_DAT_057d8568);
    bRam0000000005c3ab86 = 1;
  }
  puVar3 = PTR_DAT_057efc70;
  puVar2 = PTR_DAT_05775900;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar4 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,lVar4,*(undefined8 *)PTR_DAT_057d8568);
    while( true ) {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar3);
        *(undefined2 *)(param_1 + 0x18) = 0x101;
        return;
      }
      if (lStack_38 == 0) break;
      uVar6 = *(uint *)(lStack_38 + 0x1c);
      uVar7 = 0;
      do {
        uVar1 = uVar7 & 0x1f;
        uVar7 = uVar7 + 1;
        uVar6 = uVar6 | 1 << (ulong)uVar1;
      } while (uVar7 != 0x1f);
      *(uint *)(lStack_38 + 0x1c) = uVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

