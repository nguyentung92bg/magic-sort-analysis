/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$Dispose
void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__Dispose (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$Dispose
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__Dispose
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__Dispose_3e1e1ac
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
                    /* try { // try from 03f1e1c0 to 0401e1c7 has its CatchHandler @ 03f1e258 */
  if ((bRam0000000005c38109 & 1) == 0) {
                    /* try { // try from 03f1e1d8 to 0401e1e3 has its CatchHandler @ 03f1e254 */
    FUN_012d0dc8(PTR_DAT_057b7d58);
    FUN_012d0dc8(PTR_DAT_057c6e90);
    FUN_012d0dc8(PTR_DAT_0578d6e8);
    FUN_012d0dc8(PTR_DAT_057def60);
                    /* try { // try from 03f1e20c to 0401e20f has its CatchHandler @ 03f1e270 */
    FUN_012d0dc8(PTR_DAT_05780dd8);
                    /* try { // try from 03f1e210 to 0401e233 has its CatchHandler @ 03f1e078 */
    FUN_012d0dc8(PTR_DAT_057d2770);
    FUN_012d0dc8(PTR_DAT_0581aa00);
    FUN_012d0dc8(PTR_DAT_057ea748);
                    /* try { // try from 03f1e234 to 0401e237 has its CatchHandler @ 03f1e250 */
                    /* try { // try from 03f1e238 to 0401e23b has its CatchHandler @ 03f1e274 */
                    /* try { // try from 03f1e23c to 0401e23f has its CatchHandler @ 03f1e25c */
    FUN_012d0dc8(PTR_DAT_057c7fe0);
                    /* try { // try from 03f1e240 to 0401e243 has its CatchHandler @ 03f1e26c */
                    /* try { // try from 03f1e244 to 0401e247 has its CatchHandler @ 03f1e24c */
    bRam0000000005c38109 = 1;
  }
  puVar7 = PTR_DAT_057ea748;
  puVar6 = PTR_DAT_057d2770;
  puVar5 = PTR_DAT_057c7fe0;
  puVar4 = PTR_DAT_057c6e90;
  puVar3 = PTR_DAT_057b7d58;
  puVar2 = PTR_DAT_0578d6e8;
                    /* try { // try from 03f1e248 to 0401e24b has its CatchHandler @ 03f1e268 */
  uStack_68 = 0;
  lStack_60 = 0;
                    /* catch() { ... } // from try @ 03f1e244 with catch @ 03f1e24c
                       try { // try from 03f1e24c to 0401e28b has its CatchHandler @ 03f1e078 */
  uStack_70 = 0;
                    /* catch() { ... } // from try @ 03f1e234 with catch @ 03f1e250 */
                    /* catch() { ... } // from try @ 03f1e1d8 with catch @ 03f1e254 */
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* catch() { ... } // from try @ 03f1e1c0 with catch @ 03f1e258 */
                    /* catch() { ... } // from try @ 03f1e158 with catch @ 03f1e25c
                       catch() { ... } // from try @ 03f1e23c with catch @ 03f1e25c */
                    /* catch() { ... } // from try @ 03f1e1a4 with catch @ 03f1e260 */
                    /* catch() { ... } // from try @ 03f1e190 with catch @ 03f1e264 */
                    /* catch() { ... } // from try @ 03f1e17c with catch @ 03f1e268
                       catch() { ... } // from try @ 03f1e248 with catch @ 03f1e268 */
                    /* catch() { ... } // from try @ 03f1e16c with catch @ 03f1e26c
                       catch() { ... } // from try @ 03f1e240 with catch @ 03f1e26c */
                    /* catch() { ... } // from try @ 03f1e20c with catch @ 03f1e270 */
                    /* catch() { ... } // from try @ 03f1e114 with catch @ 03f1e274
                       catch() { ... } // from try @ 03f1e238 with catch @ 03f1e274 */
                    /* try { // try from 03f1e28c to 0401e2a3 has its CatchHandler @ 03f1e2ec */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_88,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_0581aa00);
                    /* try { // try from 03f1e2a4 to 0401e2db has its CatchHandler @ 03f1e078 */
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    lStack_60 = lStack_78;
    while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_70,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressRewardStepView__Dispose_3e212a0();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_70,*(undefined8 *)puVar4);
    lVar10 = *(long *)puVar5;
                    /* try { // try from 03f1e2dc to 0401e2eb has its CatchHandler @ 03f1e2ec */
    lVar11 = *(long *)(param_1 + 0x48);
    if (*(int *)(lVar10 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03f1e28c with catch @ 03f1e2ec
                       catch() { ... } // from try @ 03f1e2dc with catch @ 03f1e2ec */
      thunk_FUN_0130472c(lVar10);
                    /* try { // try from 03f1e2f0 to 0401e2f3 has its CatchHandler @ 03f1e2fc */
      lVar10 = *(long *)puVar5;
    }
                    /* try { // try from 03f1e2f4 to 0401e2ff has its CatchHandler @ 03f1e078 */
    lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
                    /* catch() { ... } // from try @ 03f1e2f0 with catch @ 03f1e2fc */
    if (lVar12 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar10);
        lVar10 = *(long *)puVar5;
      }
      uVar13 = **(undefined8 **)(lVar10 + 0xb8);
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if (lVar12 == 0) goto LAB_03f1e3b0;
      System_Action_object____ctor_1647468(lVar12,uVar13,*(undefined8 *)puVar7,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
      *plVar9 = lVar12;
      FUN_012d0d74(plVar9,lVar12);
    }
    if (lVar11 != 0) {
      System_Collections_Generic_List_object___ForEach_21fd504(lVar11,lVar12,*(undefined8 *)puVar6);
      lVar10 = *(long *)(param_1 + 0x48);
      if (lVar10 != 0) {
        iVar1 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
        }
        return;
      }
    }
  }
LAB_03f1e3b0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

