/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopRemoteService$$SendClaimPurchasesRequest
System_Threading_Tasks_Task_ApiResponse_ClaimAppchargePurchasesResponse___o* Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService__SendClaimPurchasesRequest (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService_o* __this, System_Collections_Generic_List_string__o* purchaseIds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.WebShopRemoteService$$SendClaimPurchasesRequest
   System_Threading_Tasks_Task_ApiResponse_ClaimAppchargePurchasesResponse___o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService__SendClaimPurchasesRequest
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService_o* __this,
   System_Collections_Generic_List_string__o* purchaseIds, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_WebShopRemoteService__SendClaimPurchasesRequest_3166f88
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_05797e98;
  if ((bRam0000000005c3155d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4718);
    FUN_012d0dc8(PTR_DAT_0580abf8);
    FUN_012d0dc8(PTR_DAT_057f7018);
    FUN_012d0dc8(PTR_DAT_05797e98);
    bRam0000000005c3155d = 1;
  }
  puVar4 = PTR_DAT_0580abf8;
  puVar3 = PTR_DAT_057f7018;
  puVar2 = PTR_DAT_057b4718;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_98,*(undefined8 *)puVar2);
  uVar5 = (ulong)&uStack_80 | 8;
  uStack_70 = uStack_90;
  uStack_78 = uStack_98;
  uStack_68 = uStack_88;
  FUN_012d0d74(uVar5,0);
  uStack_58 = param_1;
  FUN_012d0d74(&uStack_58,param_1);
  uStack_60 = param_2;
  FUN_012d0d74(&uStack_60,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_WebShopRemoteService__SendClaimPurchasesRequest_d__12__332d11c
            (uVar5,&uStack_80,*(undefined8 *)puVar4);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar3);
  return;
}

