/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopClaimablePurchaseCountEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopClaimablePurchaseCountEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopClaimablePurchaseCountEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopClaimablePurchaseCountEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t count, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopClaimablePurchaseCountEvent_1494674
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iStack_34;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23881 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057ac200);
    FUN_012d0dc8(PTR_DAT_05809c70);
    bRam0000000005c23881 = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_057db748;
  puVar2 = PTR_DAT_057ac200;
  puVar1 = PTR_DAT_0575f9f0;
  if (lVar4 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar4,*(undefined8 *)PTR_DAT_05809c70,0);
    iStack_34 = param_2;
    uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_34);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar4,*(undefined8 *)puVar2,uVar5,0);
    uVar5 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WebShopOfferFulfilledPurchaseCount_2dbae44
                      ((long)param_2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar5,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

