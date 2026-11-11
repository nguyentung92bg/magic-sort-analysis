/* IL2CPP: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI.EndlessPortalIAPButtonController$$ShowFree
void Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__ShowFree (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController_o* __this, bool isUnlocked, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI.EndlessPortalIAPButtonController$$ShowFree
   void 
   Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__ShowFree
   (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController_o*
   __this, bool isUnlocked, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__ShowFree_346ce60
               (long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c326bc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
                    /* try { // try from 0356ce90 to 0366cea3 has its CatchHandler @ 0356d038 */
    FUN_012d0dc8(PTR_DAT_057f2fd0);
    bRam0000000005c326bc = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Hide_138ae8c(*(long *)(param_1 + 0x18),0)
    ;
    puVar1 = PTR_DAT_0578b048;
    if (*(long *)(param_1 + 0x20) != 0) {
                    /* try { // try from 0356cec8 to 0366ced7 has its CatchHandler @ 0356d034 */
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),1,0);
      lVar3 = *(long *)(param_1 + 0x28);
      lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 0356ced8 to 0366d023 has its CatchHandler @ 0356ce04 */
      if ((lVar2 != 0) &&
         (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_057f2fd0,0), lVar3 != 0)
         ) {
        Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                  (lVar3,lVar2,0);
        *(undefined1 *)(param_1 + 0x71) = 0;
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar2 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x20),0);
          if ((param_2 & 1) == 0) {
            lVar3 = *(long *)(param_1 + 0x48);
          }
          else {
            lVar3 = *(long *)(param_1 + 0x50);
          }
          if ((lVar3 != 0) &&
             (UnityEngine_Transform__get_localPosition_4092c40(lVar3,0), lVar2 != 0)) {
            if (pcRam0000000005c3a620 == (code *)0x0) {
              pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
            }
            (*pcRam0000000005c3a620)(lVar2,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

