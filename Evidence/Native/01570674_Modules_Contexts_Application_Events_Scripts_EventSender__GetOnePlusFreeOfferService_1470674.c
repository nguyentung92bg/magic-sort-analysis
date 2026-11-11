/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$GetOnePlusFreeOfferService
Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o* Modules_Contexts_Application_Events_Scripts_EventSender__GetOnePlusFreeOfferService (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$GetOnePlusFreeOfferService
   Modules_Contexts_Home_Monetization_OnePlusFreeOffer_Scripts_OnePlusFreeOfferService_o*
   Modules_Contexts_Application_Events_Scripts_EventSender__GetOnePlusFreeOfferService (const
   MethodInfo* method); */

long Modules_Contexts_Application_Events_Scripts_EventSender__GetOnePlusFreeOfferService_1470674
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237e7 & 1) == 0) {
                    /* try { // try from 01570698 to 016706a3 has its CatchHandler @ 0156f408 */
    FUN_012d0dc8(PTR_DAT_05815878);
                    /* try { // try from 015706a4 to 016706ab has its CatchHandler @ 015706b8 */
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* catch() { ... } // from try @ 01570628 with catch @ 015706ac */
    bRam0000000005c237e7 = 1;
  }
  puVar2 = PTR_DAT_0578a3a8;
                    /* catch() { ... } // from try @ 01570670 with catch @ 015706b8
                       catch() { ... } // from try @ 015706a4 with catch @ 015706b8 */
                    /* try { // try from 015706bc to 01670883 has its CatchHandler @ 015706bc
                       catch() { ... } // from try @ 015706bc with catch @ 015706bc
                       catch() { ... } // from try @ 0157096c with catch @ 015706bc
                       catch() { ... } // from try @ 01570ad8 with catch @ 015706bc
                       catch() { ... } // from try @ 01570b9c with catch @ 015706bc
                       catch() { ... } // from try @ 01570c6c with catch @ 015706bc */
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) {
    lVar5 = *(long *)PTR_DAT_05815878;
    if ((bRam0000000005c2c578 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578a3a8);
      bRam0000000005c2c578 = 1;
    }
    uVar6 = **(undefined8 **)(lVar5 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = System_Type__GetTypeFromHandle_2690398(uVar6,0);
    lVar3 = Modules_Infrastructure_DI_Injection_Container__ResolveWithoutId_3d3240c(lVar3,uVar6,0);
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_0131942c(lVar5);
    }
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01320d5c(lVar3,lVar5);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d1288(lVar3,lVar5);
      }
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

