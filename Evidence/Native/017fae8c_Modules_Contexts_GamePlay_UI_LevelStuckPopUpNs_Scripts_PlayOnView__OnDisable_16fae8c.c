/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnView$$OnDisable
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__OnDisable (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnView$$OnDisable
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__OnDisable
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__OnDisable_16fae8c
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
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c24ba8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057c35c8);
                    /* try { // try from 017faed4 to 018faed7 has its CatchHandler @ 017faefc */
    FUN_012d0dc8(PTR_DAT_057bd0f8);
                    /* try { // try from 017faed8 to 018faeef has its CatchHandler @ 017faf00 */
    FUN_012d0dc8(PTR_DAT_0575e7d8);
    FUN_012d0dc8(PTR_DAT_057bb5b0);
                    /* try { // try from 017faef0 to 018faf17 has its CatchHandler @ 017fae18 */
    FUN_012d0dc8(PTR_DAT_057b8520);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017faed4 with catch @ 017faefc
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017faed8 with catch @ 017faf00
                        */
    bRam0000000005c24ba8 = 1;
  }
  puVar1 = PTR_DAT_057bd0f8;
  puVar2 = PTR_DAT_0578b048;
                    /* try { // try from 017faf18 to 018faf2f has its CatchHandler @ 017faf60 */
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar1);
                    /* try { // try from 017faf30 to 018faf4f has its CatchHandler @ 017fae18 */
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_057c35c8;
  if (lVar6 != 0) {
                    /* try { // try from 017faf50 to 018faf5f has its CatchHandler @ 017faf60 */
    System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057c35c8,0);
    puVar1 = PTR_DAT_057bb5b0;
    if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 017faf18 with catch @ 017faf60
                       catch() { ... } // from try @ 017faf50 with catch @ 017faf60 */
                    /* try { // try from 017faf64 to 018faf67 has its CatchHandler @ 017faf70 */
                    /* try { // try from 017faf68 to 018faf73 has its CatchHandler @ 017fae18 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 017faf64 with catch @ 017faf70
                        */
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar5,lVar6,0);
      lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar6 != 0) &&
         (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)puVar3,0),
         puVar1 = PTR_DAT_0575e7d8, lVar5 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar5,lVar6,0);
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
                    /* try { // try from 017fafd4 to 018fb15f has its CatchHandler @ 017fafd4
                       catch() { ... } // from try @ 017fafd4 with catch @ 017fafd4
                       catch() { ... } // from try @ 017fb17c with catch @ 017fafd4
                       catch() { ... } // from try @ 017fb210 with catch @ 017fafd4
                       catch() { ... } // from try @ 017fb7cc with catch @ 017fafd4
                       catch() { ... } // from try @ 017fb96c with catch @ 017fafd4
                       catch() { ... } // from try @ 017fb9a4 with catch @ 017fafd4
                       catch() { ... } // from try @ 017fbb94 with catch @ 017fafd4 */
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if ((lVar6 != 0) &&
           (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)puVar3,0), lVar5 != 0)) {
          if ((bRam0000000005c3aa35 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_0578b048,lVar6,0);
            bRam0000000005c3aa35 = 1;
          }
          puVar3 = PTR_DAT_0578b048;
          lVar9 = *(long *)(lVar5 + 0x20);
          while ((plVar7 = (long *)System_Delegate__Remove_23e3b70(lVar9,lVar6,0),
                 plVar7 == (long *)0x0 || (*plVar7 == *(long *)puVar3))) {
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

