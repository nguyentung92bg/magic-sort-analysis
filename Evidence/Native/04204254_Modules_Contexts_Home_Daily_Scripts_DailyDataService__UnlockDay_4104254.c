/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$UnlockDay
void Modules_Contexts_Home_Daily_Scripts_DailyDataService__UnlockDay (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, System_DateTime_o dateTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.DailyDataService$$UnlockDay
   void Modules_Contexts_Home_Daily_Scripts_DailyDataService__UnlockDay
   (Modules_Contexts_Home_Daily_Scripts_DailyDataService_o* __this, System_DateTime_o dateTime,
   const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_DailyDataService__UnlockDay_4104254
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  if ((bRam0000000005c3ab85 & 1) == 0) {
                    /* try { // try from 04204280 to 04304287 has its CatchHandler @ 04204438 */
    FUN_012d0dc8(PTR_DAT_0580b9d0);
    FUN_012d0dc8(PTR_DAT_057efc70);
    FUN_012d0dc8(PTR_DAT_05775900);
    FUN_012d0dc8(PTR_DAT_0575c268);
                    /* try { // try from 042042ac to 043042b7 has its CatchHandler @ 04204440 */
    FUN_012d0dc8(PTR_DAT_057d8568);
    bRam0000000005c3ab85 = 1;
  }
  puVar3 = PTR_DAT_0580b9d0;
  puVar2 = PTR_DAT_057efc70;
  puVar1 = PTR_DAT_05775900;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0420440c to 0430440f has its CatchHandler @ 04204410 */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_80,lVar6,*(undefined8 *)PTR_DAT_057d8568);
                    /* try { // try from 04204300 to 04304327 has its CatchHandler @ 04204434 */
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_50 = lStack_70;
  do {
    do {
      uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_60,*(undefined8 *)puVar1);
      lVar6 = lStack_50;
      if ((uVar7 & 1) == 0) goto LAB_042043e4;
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04204408 to 0430440b has its CatchHandler @ 0420405c */
        FUN_012d0ef0();
      }
      uStack_68 = *(undefined8 *)(lStack_50 + 0x10);
                    /* try { // try from 0420432c to 0430432f has its CatchHandler @ 04204334 */
                    /* try { // try from 04204330 to 04304353 has its CatchHandler @ 0420405c */
                    /* catch() { ... } // from try @ 0420432c with catch @ 04204334 */
                    /* catch() { ... } // from try @ 04204248 with catch @ 04204338 */
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 04204218 with catch @ 0420433c */
        thunk_FUN_0130472c();
      }
                    /* catch() { ... } // from try @ 04204208 with catch @ 04204340 */
                    /* catch() { ... } // from try @ 04204228 with catch @ 04204344 */
      iVar4 = System_DateTime__get_Month_21004b8(&uStack_68,0);
                    /* try { // try from 04204354 to 04304357 has its CatchHandler @ 04204428 */
                    /* try { // try from 04204358 to 043043db has its CatchHandler @ 0420405c */
      iVar5 = System_DateTime__get_Month_21004b8(&uStack_38,0);
    } while (iVar4 != iVar5);
    uStack_68 = *(undefined8 *)(lVar6 + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    iVar4 = System_DateTime__get_Year_21007a4(&uStack_68,0);
    iVar5 = System_DateTime__get_Year_21007a4(&uStack_38,0);
  } while (iVar4 != iVar5);
  uVar8 = *(uint *)(lVar6 + 0x1c);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  iVar4 = System_DateTime__get_Day_2100110(&uStack_38,0);
  if (iVar4 - 1U < 0x1f) {
    uVar8 = 1 << (ulong)(iVar4 - 1U & 0x1f) | uVar8;
  }
                    /* try { // try from 042043dc to 043043ef has its CatchHandler @ 042044bc */
  *(uint *)(lVar6 + 0x1c) = uVar8;
  *(undefined2 *)(param_1 + 0x18) = 0x101;
LAB_042043e4:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_60,*(undefined8 *)puVar2);
                    /* try { // try from 042043f0 to 043043f3 has its CatchHandler @ 04204424 */
                    /* try { // try from 042043f4 to 043043f7 has its CatchHandler @ 04204420 */
                    /* try { // try from 042043f8 to 043043fb has its CatchHandler @ 0420441c */
                    /* try { // try from 042043fc to 043043ff has its CatchHandler @ 04204418 */
                    /* try { // try from 04204400 to 04304407 has its CatchHandler @ 04204414 */
  return;
}

