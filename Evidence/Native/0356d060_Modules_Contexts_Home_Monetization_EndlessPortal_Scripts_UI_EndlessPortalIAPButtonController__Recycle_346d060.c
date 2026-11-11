/* IL2CPP: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI.EndlessPortalIAPButtonController$$Recycle
void Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__Recycle (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI.EndlessPortalIAPButtonController$$Recycle
   void 
   Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__Recycle
   (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__Recycle_346d060
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0578b048;
                    /* try { // try from 0356d068 to 0366d0df has its CatchHandler @ 0356ce04 */
  if ((bRam0000000005c326bd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057f2fd0);
    bRam0000000005c326bd = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar2 != 0) &&
     (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_057f2fd0,0), lVar3 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
              (lVar3,lVar2,0);
                    /* try { // try from 0356d0e0 to 0366d0ef has its CatchHandler @ 0356d0f0 */
    *(undefined1 *)(param_1 + 0x71) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0356d050 with catch @ 0356d0f0
                       catch() { ... } // from try @ 0356d0e0 with catch @ 0356d0f0 */
  FUN_012d0ef0();
}

