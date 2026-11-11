/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$Initialize
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__Initialize (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$Initialize
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__Initialize
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__Initialize_316b674
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_057cc9b8;
  if ((bRam0000000005c31569 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc9b8);
    bRam0000000005c31569 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    System_Object___ctor_23dfe5c(lVar5,0);
    *(long *)(lVar5 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar5 + 0x10),param_1);
    plVar6 = (long *)(param_1 + 0x40);
    *plVar6 = lVar5;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

