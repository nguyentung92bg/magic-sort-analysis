/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$Dispose
void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__Dispose (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.PawTouchOfferService$$Dispose
   void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__Dispose
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_PawTouchOfferService__Dispose_347269c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c373db & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7e58,param_1,0);
    FUN_012d0dc8(PTR_DAT_05785160);
    FUN_012d0dc8(PTR_DAT_05765b78);
    bRam0000000005c373db = 1;
  }
  puVar2 = PTR_DAT_057a7e58;
  puVar1 = PTR_DAT_05765b78;
  lVar4 = *(long *)(lVar3 + 0x38);
  if (lVar4 != 0) {
    iVar5 = *(int *)(lVar4 + 0x18) + -1;
    if (iVar5 < 0) {
      return;
    }
    do {
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar5,*(undefined8 *)puVar1);
      if (lVar4 == 0) break;
      if (*(long *)(lVar4 + 0x18) == param_1) {
        if (*(long *)(lVar3 + 0x38) == 0) break;
        System_Collections_Generic_List_object___RemoveAt_21fe320
                  (*(long *)(lVar3 + 0x38),iVar5,*(undefined8 *)puVar2);
      }
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return;
      }
      lVar4 = *(long *)(lVar3 + 0x38);
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

