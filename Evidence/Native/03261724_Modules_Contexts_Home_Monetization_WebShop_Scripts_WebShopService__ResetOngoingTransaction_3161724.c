/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$ResetOngoingTransaction
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ResetOngoingTransaction (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$ResetOngoingTransaction
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ResetOngoingTransaction
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__ResetOngoingTransaction_3161724
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  
  if ((bRam0000000005c31576 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d16a0);
    bRam0000000005c31576 = 1;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_012d0d74((undefined8 *)(param_1 + 0x48),0);
  plVar4 = (long *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*plVar4 != 0) {
    System_Threading_Tasks_TaskCompletionSource_bool___TrySetResult_1db4dec
              (*plVar4,0,*(undefined8 *)PTR_DAT_057d16a0);
    *plVar4 = 0;
                    /* try { // try from 0326178c to 033617db has its CatchHandler @ 0326178c
                       catch() { ... } // from try @ 0326178c with catch @ 0326178c
                       catch() { ... } // from try @ 03261810 with catch @ 0326178c
                       catch() { ... } // from try @ 03261868 with catch @ 0326178c
                       catch() { ... } // from try @ 032618f8 with catch @ 0326178c */
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}

