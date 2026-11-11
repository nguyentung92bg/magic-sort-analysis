/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopRemoteService$$Dispose
void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService__Dispose (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopRemoteService$$Dispose
   void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService__Dispose
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService__Dispose_3169df0
               (long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  undefined8 uStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Threading_CancellationTokenSource__Cancel_2a9d0fc(*(long *)(param_1 + 0x20),0);
    puVar4 = PTR_DAT_0576ac48;
    plVar8 = *(long **)(param_1 + 0x20);
    if (plVar8 != (long *)0x0) {
      if ((bRam0000000005c2e8e8 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0576ac48,0);
        bRam0000000005c2e8e8 = 1;
      }
      (**(code **)(*plVar8 + 0x188))(plVar8,1,*(undefined8 *)(*plVar8 + 400));
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if ((bRam0000000005c2ab6b & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0576ac48,0);
        bRam0000000005c2ab6b = 1;
      }
      if (plVar8 == (long *)0x0) {
        thunk_FUN_0136d790(PTR_DAT_057c1ad0);
        uVar5 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar7 = thunk_FUN_0136d790(PTR_DAT_057ee290);
        System_ArgumentNullException___ctor_211d594(uVar5,uVar7,0);
        uVar7 = thunk_FUN_0136d790(PTR_DAT_057de8d8);
                    /* WARNING: Subroutine does not return */
        FUN_012d0eb8(uVar5,uVar7);
      }
      if (*(int *)(*(long *)PTR_DAT_0576ac48 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (plVar8 == (long *)0x0) {
        uVar5 = FUN_012d534c(&UNK_04733a99);
                    /* WARNING: Subroutine does not return */
        FUN_012d4744(uVar5,0);
      }
      uStack_40 = 0x5c3c6e8;
      lVar6 = pthread_self();
      if (lVar6 == lRam0000000005c3c728) {
        iRam0000000005c3c730 = iRam0000000005c3c730 + 1;
      }
      else {
        iVar9 = 0;
        do {
          iVar3 = iRam0000000005c3c6e8;
          if (iRam0000000005c3c6e8 == iVar9) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0x5c3c6e8,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              iRam0000000005c3c6e8 = iVar9 + 1;
            }
            if (cVar1 != '\0') goto LAB_01336834;
            bVar2 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01336834:
            bVar2 = false;
          }
        } while ((iVar3 != 2) && (iVar9 = iVar3, !bVar2));
        while (iVar3 != 0) {
          FUN_0139c9ac(0x5c3c6e8,2,0xffffffff);
          do {
            iVar3 = iRam0000000005c3c6e8;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0x5c3c6e8,0x10);
            if (bVar2) {
              iRam0000000005c3c6e8 = 2;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        iRam0000000005c3c730 = 1;
        lRam0000000005c3c728 = lVar6;
      }
      uStack_d0 = (ulong)uStack_d0._4_4_ << 0x20;
      plStack_c8 = plVar8;
      FUN_013396b0(auStack_88,0x5c3c738,&uStack_d0);
      lStack_b0 = 0;
      uStack_d0 = 0x5c3c738;
      plStack_c8 = (long *)lRam0000000005c3c778;
      lStack_a8 = lRam0000000005c3c778;
      lStack_a0 = lRam0000000005c3c780;
      lStack_c0 = lRam0000000005c3c780;
      lStack_b8 = lRam0000000005c3c780;
      lStack_98 = lRam0000000005c3c780;
      uStack_90 = 0;
      FUN_0133854c(&uStack_d0);
      if (((((long *)lStack_80 == plStack_c8) && (lStack_78 == lStack_c0)) &&
          (lStack_70 == lStack_b8)) && ((lStack_70 == lStack_78 || (lStack_68 == lStack_b0)))) {
        FUN_0138e41c(plVar8,0,0,&uStack_d0,auStack_38);
      }
      else {
        *(undefined1 *)(lStack_68 + 0x18) = 0;
      }
      FUN_012d1b44(&uStack_40);
      return;
    }
  }
  return;
}

