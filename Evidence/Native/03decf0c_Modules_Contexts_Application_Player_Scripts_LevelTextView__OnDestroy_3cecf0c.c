/* IL2CPP: Modules.Contexts.Application.Player.Scripts.LevelTextView$$OnDestroy
void Modules_Contexts_Application_Player_Scripts_LevelTextView__OnDestroy (Modules_Contexts_Application_Player_Scripts_LevelTextView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Player.Scripts.LevelTextView$$OnDestroy
   void Modules_Contexts_Application_Player_Scripts_LevelTextView__OnDestroy
   (Modules_Contexts_Application_Player_Scripts_LevelTextView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Application_Player_Scripts_LevelTextView__OnDestroy_3cecf0c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_057b8520;
                    /* try { // try from 03decf10 to 03eecf13 has its CatchHandler @ 03decf78 */
                    /* try { // try from 03decf18 to 03eecf47 has its CatchHandler @ 03decf8c */
  if ((bRam0000000005c370fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
                    /* try { // try from 03decf48 to 03eecf5b has its CatchHandler @ 03dec6d4 */
    FUN_012d0dc8(PTR_DAT_057882b0);
    FUN_012d0dc8(PTR_DAT_0577a140);
                    /* try { // try from 03decf5c to 03eecf6b has its CatchHandler @ 03decf7c */
    FUN_012d0dc8(PTR_DAT_0576ad30);
    FUN_012d0dc8(PTR_DAT_05811368);
                    /* try { // try from 03decf70 to 03eecf73 has its CatchHandler @ 03decf74 */
                    /* catch() { ... } // from try @ 03decf70 with catch @ 03decf74 */
                    /* catch() { ... } // from try @ 03decf10 with catch @ 03decf78 */
    FUN_012d0dc8(PTR_DAT_057b8520);
                    /* catch() { ... } // from try @ 03decef0 with catch @ 03decf7c
                       catch() { ... } // from try @ 03decf5c with catch @ 03decf7c */
    bRam0000000005c370fd = 1;
  }
  puVar1 = PTR_DAT_05811368;
  puVar3 = PTR_DAT_0578b048;
                    /* try { // try from 03decf84 to 03eecf87 has its CatchHandler @ 03ded0ec */
                    /* try { // try from 03decf88 to 03eecfaf has its CatchHandler @ 03dec6d4 */
                    /* catch() { ... } // from try @ 03decf18 with catch @ 03decf8c */
                    /* catch() { ... } // from try @ 03decb24 with catch @ 03decf90 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
                    /* try { // try from 03decfb0 to 03eecfb3 has its CatchHandler @ 03decff0 */
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_057882b0;
  if (lVar6 != 0) {
                    /* try { // try from 03decfd4 to 03eecfef has its CatchHandler @ 03ded0ec */
    System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057882b0,0);
    puVar1 = PTR_DAT_0577a140;
    if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 03decfb0 with catch @ 03decff0
                       try { // try from 03decff0 to 03eed033 has its CatchHandler @ 03dec6d4 */
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar5,lVar6,0);
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 03deca94 with catch @ 03ded000 */
                    /* catch() { ... } // from try @ 03deca64 with catch @ 03ded004 */
                    /* catch() { ... } // from try @ 03deca4c with catch @ 03ded008 */
                    /* catch() { ... } // from try @ 03deca38 with catch @ 03ded00c
                       catch() { ... } // from try @ 03decda0 with catch @ 03ded00c */
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    /* catch() { ... } // from try @ 03deca20 with catch @ 03ded010 */
                    /* catch() { ... } // from try @ 03deca9c with catch @ 03ded014 */
                    /* catch() { ... } // from try @ 03deca80 with catch @ 03ded018 */
      if ((lVar6 != 0) &&
         (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)puVar2,0),
         puVar1 = PTR_DAT_0576ad30, lVar5 != 0)) {
                    /* try { // try from 03ded034 to 03eed04b has its CatchHandler @ 03ded0dc */
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar5,lVar6,0);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
                    /* try { // try from 03ded04c to 03eed0cb has its CatchHandler @ 03dec6d4 */
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
        if ((lVar6 != 0) &&
           (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)puVar2,0), lVar5 != 0)) {
          if ((bRam0000000005c3aa35 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
            bRam0000000005c3aa35 = 1;
          }
          puVar2 = PTR_DAT_0578b048;
          lVar9 = *(long *)(lVar5 + 0x20);
          while ((plVar7 = (long *)System_Delegate__Remove_23e3b70(lVar9,lVar6,0),
                 plVar7 == (long *)0x0 || (*plVar7 == *(long *)puVar2))) {
            lVar8 = FUN_01351224((long *)(lVar5 + 0x20),plVar7,lVar9);
            bVar4 = lVar9 == lVar8;
            lVar9 = lVar8;
            if (bVar4) {
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(plVar7);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

