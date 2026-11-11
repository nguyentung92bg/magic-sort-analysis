/* IL2CPP: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$Initialize
void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__Initialize (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.OnePlusFreeOfferService$$Initialize
   void 
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__Initialize
   (Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService__Initialize_358b898
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
                    /* catch() { ... } // from try @ 0368b870 with catch @ 0368b898 */
  if ((bRam0000000005c32df3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ace48);
    FUN_012d0dc8(PTR_DAT_0575a510);
                    /* try { // try from 0368b8cc to 0378b8d7 has its CatchHandler @ 0368b750 */
    FUN_012d0dc8(PTR_DAT_058105b0);
                    /* try { // try from 0368b8d8 to 0378b8df has its CatchHandler @ 0368b8e0 */
    bRam0000000005c32df3 = 1;
  }
  puVar4 = PTR_DAT_0575a510;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368b848 with catch @ 0368b8e0
                       catch(type#2 @ 00000000) { ... } // from try @ 0368b880 with catch @ 0368b8e0
                       catch(type#2 @ 00000000) { ... } // from try @ 0368b8d8 with catch @ 0368b8e0
                        */
  if (*(long *)(param_1 + 0x38) != 0) {
    Modules_Infrastructure_DI_CustomUpdater__AddIntervalUpdate_3d24448
              (0x43160000,*(long *)(param_1 + 0x38),param_1,0);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    puVar5 = PTR_DAT_058105b0;
    puVar4 = PTR_DAT_057ace48;
    if (lVar6 != 0) {
      Modules_Infrastructure_Common_Scripts_SecondTimer___ctor_40e4c9c(lVar6,uVar8,0);
      *(long *)(param_1 + 0x40) = lVar6;
      FUN_012d0d74((long *)(param_1 + 0x40),lVar6);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)puVar5;
      FUN_012d0d74();
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if (lVar6 != 0) {
        System_Object___ctor_23dfe5c(lVar6,0);
        plVar7 = (long *)(param_1 + 0x68);
        *plVar7 = lVar6;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

