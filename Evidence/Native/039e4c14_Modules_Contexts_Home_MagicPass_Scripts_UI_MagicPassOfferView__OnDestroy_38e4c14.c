/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassOfferView$$OnDestroy
void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView__OnDestroy (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassOfferView$$OnDestroy
   void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView__OnDestroy
   (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView__OnDestroy_38e4c14(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_0578b048;
  if ((bRam0000000005c34c60 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057a8d58);
    FUN_012d0dc8(PTR_DAT_05766eb8);
                    /* try { // try from 039e4c64 to 03ae4c73 has its CatchHandler @ 039e4c74 */
    FUN_012d0dc8(PTR_DAT_057e6598);
                    /* catch() { ... } // from try @ 039e4bb4 with catch @ 039e4c74
                       catch() { ... } // from try @ 039e4be0 with catch @ 039e4c74
                       catch() { ... } // from try @ 039e4c64 with catch @ 039e4c74 */
    FUN_012d0dc8(PTR_DAT_057b8520);
                    /* try { // try from 039e4c78 to 03ae4c7b has its CatchHandler @ 039e4c84 */
                    /* try { // try from 039e4c7c to 03ae4c87 has its CatchHandler @ 039e4ae8 */
    bRam0000000005c34c60 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039e4c78 with catch @ 039e4c84
                        */
  lVar8 = *(long *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 039e4d34 with catch @ 039e4c88
                       catch() { ... } // from try @ 039e4d74 with catch @ 039e4c88
                       catch() { ... } // from try @ 039e4dac with catch @ 039e4c88
                       catch() { ... } // from try @ 039e4dd8 with catch @ 039e4c88
                       catch() { ... } // from try @ 039e4e5c with catch @ 039e4c88 */
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057a8d58,0),
     puVar3 = PTR_DAT_057e6598, puVar2 = PTR_DAT_057b8520, lVar8 != 0)) {
                    /* try { // try from 039e4cb4 to 03ae4d33 has its CatchHandler @ 039e4d44 */
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
              (lVar8,lVar5,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar3);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar8 != 0) &&
       (System_Action___ctor_21239bc(lVar8,param_1,*(undefined8 *)PTR_DAT_05766eb8,0), lVar5 != 0))
    {
      if ((bRam0000000005c3aa35 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578b048,lVar8,0);
        bRam0000000005c3aa35 = 1;
      }
      puVar1 = PTR_DAT_0578b048;
      lVar9 = *(long *)(lVar5 + 0x20);
      while ((plVar6 = (long *)System_Delegate__Remove_23e3b70(lVar9,lVar8,0), plVar6 == (long *)0x0
             || (*plVar6 == *(long *)puVar1))) {
        lVar7 = FUN_01351224((long *)(lVar5 + 0x20),plVar6,lVar9);
        bVar4 = lVar9 == lVar7;
        lVar9 = lVar7;
        if (bVar4) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(plVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

