/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$Dispose
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__Dispose (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopService$$Dispose
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__Dispose
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopService__Dispose_316b7a4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_057b8520;
  if ((bRam0000000005c3156b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05790238);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057fb680);
    bRam0000000005c3156b = 1;
  }
  puVar3 = PTR_DAT_05790238;
  puVar2 = PTR_DAT_0578b048;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar3);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057fb680,0), lVar4 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar4,lVar5,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Infrastructure_DI_CustomUpdater__RemoveFocusChanged_3d2df44
                (*(long *)(param_1 + 0x20),param_1,0);
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 != 0) {
        if ((bRam0000000005c373db & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057a7e58,param_1,0);
          FUN_012d0dc8(PTR_DAT_05785160);
          FUN_012d0dc8(PTR_DAT_05765b78);
          bRam0000000005c373db = 1;
        }
        puVar2 = PTR_DAT_057a7e58;
        puVar1 = PTR_DAT_05765b78;
        lVar5 = *(long *)(lVar4 + 0x38);
        if (lVar5 != 0) {
          iVar6 = *(int *)(lVar5 + 0x18) + -1;
          if (iVar6 < 0) {
            return;
          }
          do {
            lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar5,iVar6,*(undefined8 *)puVar1);
            if (lVar5 == 0) break;
            if (*(long *)(lVar5 + 0x18) == param_1) {
              if (*(long *)(lVar4 + 0x38) == 0) break;
              System_Collections_Generic_List_object___RemoveAt_21fe320
                        (*(long *)(lVar4 + 0x38),iVar6,*(undefined8 *)puVar2);
            }
            iVar6 = iVar6 + -1;
            if (iVar6 < 0) {
              return;
            }
            lVar5 = *(long *)(lVar4 + 0x38);
          } while (lVar5 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

