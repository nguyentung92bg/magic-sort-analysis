/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopRemoteService$$Initialize
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService__Initialize (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopRemoteService$$Initialize
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService__Initialize
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService__Initialize_3169c90
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  puVar4 = PTR_DAT_05801560;
  if ((bRam0000000005c31558 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05801560);
    FUN_012d0dc8(PTR_DAT_057c9e78);
    FUN_012d0dc8(PTR_DAT_05761c48);
    FUN_012d0dc8(PTR_DAT_057b4988);
    FUN_012d0dc8(PTR_DAT_05771cb0);
    FUN_012d0dc8(PTR_DAT_057d24c0);
    FUN_012d0dc8(PTR_DAT_057e6608);
    bRam0000000005c31558 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar8 != 0) {
    System_Threading_CancellationTokenSource___ctor_2a9cf74(lVar8,0);
    *(long *)(param_1 + 0x20) = lVar8;
    FUN_012d0d74((long *)(param_1 + 0x20),lVar8);
    if (((*(long *)(param_1 + 0x30) != 0) &&
        (lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x18), lVar8 != 0)) &&
       (lVar8 = *(long *)(lVar8 + 0x1c8), lVar8 != 0)) {
      uVar10 = *(undefined8 *)(lVar8 + 0x20);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057b4988);
      puVar7 = PTR_DAT_057e6608;
      puVar6 = PTR_DAT_057d24c0;
      puVar5 = PTR_DAT_057c9e78;
      puVar4 = PTR_DAT_05771cb0;
      if (lVar8 != 0) {
        System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
                  (lVar8,*(undefined8 *)PTR_DAT_05761c48);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar8,*(undefined8 *)puVar6,*(undefined8 *)puVar4,*(undefined8 *)puVar5);
        System_Collections_Generic_Dictionary_object__object___Add_3ed02a4
                  (lVar8,*(undefined8 *)puVar7,uVar10,*(undefined8 *)puVar5);
        plVar9 = (long *)(param_1 + 0x28);
        *plVar9 = lVar8;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
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

