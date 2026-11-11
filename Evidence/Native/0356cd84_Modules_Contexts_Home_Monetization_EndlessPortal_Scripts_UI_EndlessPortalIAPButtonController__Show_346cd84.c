/* IL2CPP: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI.EndlessPortalIAPButtonController$$Show
void Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__Show (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController_o* __this, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapModel, bool isUnlocked, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI.EndlessPortalIAPButtonController$$Show
   void 
   Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__Show
   (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController_o*
   __this, Modules_Contexts_Application_IAP_Scripts_IAPConfigModel_o* iapModel, bool isUnlocked,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__Show_346cd84
               (long param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c326ba & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4008);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c326ba = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
     (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                    (lVar2,*(undefined8 *)PTR_DAT_057b4008);
                    /* try { // try from 0356ce04 to 0366ce8f has its CatchHandler @ 0356ce04
                       catch() { ... } // from try @ 0356ce04 with catch @ 0356ce04
                       catch() { ... } // from try @ 0356ced8 with catch @ 0356ce04
                       catch() { ... } // from try @ 0356d02c with catch @ 0356ce04
                       catch() { ... } // from try @ 0356d068 with catch @ 0356ce04
                       catch() { ... } // from try @ 0356d0f8 with catch @ 0356ce04 */
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  FUN_012d0d74();
  plVar5 = (long *)(param_1 + 0x60);
  *plVar5 = param_2;
  *(byte *)(param_1 + 0x70) = param_3 & 1;
  FUN_012d0d74(plVar5,param_2);
  if (*plVar5 != 0) {
    if ((bRam0000000005c326bb & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048);
      FUN_012d0dc8(PTR_DAT_057f2fd0);
      bRam0000000005c326bb = 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),0,0);
      puVar1 = PTR_DAT_0578b048;
      if (*(long *)(param_1 + 0x18) != 0) {
        Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Show_138abc4
                  (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x60),0);
        lVar4 = *(long *)(param_1 + 0x28);
        lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar2 != 0) &&
           (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_057f2fd0,0),
           lVar4 != 0)) {
          Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                    (lVar4,lVar2,0);
          lVar2 = *(long *)(param_1 + 0x30);
          *(undefined1 *)(param_1 + 0x71) = 1;
          if ((param_3 & 1) == 0) {
            lVar4 = *(long *)(param_1 + 0x38);
          }
          else {
            lVar4 = *(long *)(param_1 + 0x40);
          }
          if ((lVar4 != 0) &&
             (UnityEngine_Transform__get_localPosition_4092c40(lVar4,0), lVar2 != 0)) {
UnityEngine_Transform__set_localPosition_4092ce0:
            if (pcRam0000000005c3a620 == (code *)0x0) {
              pcRam0000000005c3a620 = (code *)FUN_012d0d84(&UNK_043eef55,0);
            }
            (*pcRam0000000005c3a620)(lVar2,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c326bc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057f2fd0);
    bRam0000000005c326bc = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    Modules_Contexts_Application_IAP_Scripts_IAPPriceView__Hide_138ae8c(*(long *)(param_1 + 0x18),0)
    ;
    puVar1 = PTR_DAT_0578b048;
    if (*(long *)(param_1 + 0x20) != 0) {
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),1,0);
      lVar4 = *(long *)(param_1 + 0x28);
      lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar2 != 0) &&
         (System_Action___ctor_21239bc(lVar2,param_1,*(undefined8 *)PTR_DAT_057f2fd0,0), lVar4 != 0)
         ) {
        Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                  (lVar4,lVar2,0);
        *(undefined1 *)(param_1 + 0x71) = 0;
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar2 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x20),0);
          if ((param_3 & 1) == 0) {
            lVar4 = *(long *)(param_1 + 0x48);
          }
          else {
            lVar4 = *(long *)(param_1 + 0x50);
          }
          if ((lVar4 != 0) &&
             (UnityEngine_Transform__get_localPosition_4092c40(lVar4,0), lVar2 != 0))
          goto UnityEngine_Transform__set_localPosition_4092ce0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

