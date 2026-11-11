/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferPopup$$Show
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup__Show (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI.OnePlusFreeOfferPopup$$Show
   void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup__Show
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferPopup__Show_358f0bc
               (long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c32e1b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_05815878);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0576c868);
                    /* try { // try from 0368f11c to 0378f127 has its CatchHandler @ 0368f890 */
    FUN_012d0dc8(PTR_DAT_057d5600);
    FUN_012d0dc8(PTR_DAT_05769458);
                    /* try { // try from 0368f12c to 0378f137 has its CatchHandler @ 0368f88c */
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0577eba8);
    bRam0000000005c32e1b = 1;
  }
                    /* try { // try from 0368f14c to 0378f153 has its CatchHandler @ 0368f858 */
                    /* try { // try from 0368f15c to 0378f167 has its CatchHandler @ 0368f854 */
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) {
    lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar6,*(undefined8 *)PTR_DAT_05815878);
    plVar9 = (long *)(param_1 + 0x28);
    *plVar9 = lVar6;
                    /* try { // try from 0368f180 to 0378f18b has its CatchHandler @ 0368f918 */
    FUN_012d0d74(plVar9,lVar6);
    if (param_2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0576c868 + 300);
      if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0576c868)
         ) {
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((long)param_2 + 0x24);
      }
    }
    if ((*plVar9 != 0) && (*(long *)(*plVar9 + 0x10) != 0)) {
      uVar5 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__HasEverSeenOffer_358a88c
                        ();
      if (*plVar9 != 0) {
        Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__OnPopupOpened_358bb38
                  (*plVar9,*(undefined4 *)(param_1 + 0x30));
                    /* try { // try from 0368f200 to 0378f20b has its CatchHandler @ 0368f87c */
        if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(*(long *)(param_1 + 0x28) + 0x10) != 0))
        {
          Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferDataService__SetHasEverSeenOffer_358a8b0
                    ();
          if (cRam0000000005c230a8 == '\0') {
                    /* try { // try from 0368f214 to 0378f217 has its CatchHandler @ 0368f888 */
            FUN_012d0dc8(PTR_DAT_057ece38);
            cRam0000000005c230a8 = '\x01';
          }
                    /* try { // try from 0368f23c to 0378f243 has its CatchHandler @ 0368f850 */
          if (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8) != 0) {
            Modules_Contexts_Application_Events_Scripts_EventSender__SendOnePlusFreeImpressionEvent_14706e4
                      (**(long **)(*(long *)PTR_DAT_057ece38 + 0xb8),(uVar5 ^ 1) & 1,0);
            lVar6 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
            if (lVar6 != 0) {
              UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
                    /* try { // try from 0368f26c to 0378f283 has its CatchHandler @ 0368f878 */
              if (*(long *)(param_1 + 0x28) != 0) {
                lVar6 = *(long *)(param_1 + 0x18);
                uVar7 = Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__GetViewModel_358cb40
                                  ();
                puVar4 = PTR_DAT_05818458;
                puVar3 = PTR_DAT_057b8520;
                puVar2 = PTR_DAT_05769458;
                if (lVar6 != 0) {
                    /* try { // try from 0368f2a0 to 0378f2a7 has its CatchHandler @ 0368f848 */
                  Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_UI_OnePlusFreeOfferView__Show_358f318
                            (lVar6,uVar7);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_0130472c();
                  }
                  lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                    (*(undefined8 *)puVar2);
                    /* try { // try from 0368f2c4 to 0378f317 has its CatchHandler @ 0368f89c */
                  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                  if ((lVar8 != 0) &&
                     (System_Action_bool____ctor_1645204
                                (lVar8,param_1,*(undefined8 *)PTR_DAT_057d5600,0), lVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343cb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0577eba8 + 0x20) +
                                                    0xc0) + 8) + 8))(lVar6,lVar8);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

