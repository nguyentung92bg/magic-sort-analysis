/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPHandler$$PurchaseAsync
System_Threading_Tasks_Task_bool__o* Modules_Contexts_Application_IAP_Scripts_IAPHandler__PurchaseAsync (Modules_Contexts_Application_IAP_Scripts_IAPHandler_o* __this, System_String_o* productId, int32_t iapOrigin, int32_t iapReason, int32_t context, bool giveRewardsWithoutAnimation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPHandler$$PurchaseAsync
   System_Threading_Tasks_Task_bool__o*
   Modules_Contexts_Application_IAP_Scripts_IAPHandler__PurchaseAsync
   (Modules_Contexts_Application_IAP_Scripts_IAPHandler_o* __this, System_String_o* productId,
   int32_t iapOrigin, int32_t iapReason, int32_t context, bool giveRewardsWithoutAnimation, const
   MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPHandler__PurchaseAsync_1386a64
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR_DAT_05766da0;
                    /* try { // try from 01486a80 to 01586a83 has its CatchHandler @ 01486aa8 */
                    /* try { // try from 01486a84 to 01586ac3 has its CatchHandler @ 01486a54 */
                    /* catch() { ... } // from try @ 01486a80 with catch @ 01486aa8 */
  if ((bRam0000000005c2305d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577b428);
    FUN_012d0dc8(PTR_DAT_057af310);
    FUN_012d0dc8(PTR_DAT_057f5ad8);
    FUN_012d0dc8(PTR_DAT_05766da0);
                    /* try { // try from 01486adc to 01586b1b has its CatchHandler @ 01486adc
                       catch() { ... } // from try @ 01486adc with catch @ 01486adc
                       catch() { ... } // from try @ 01486b74 with catch @ 01486adc */
    bRam0000000005c2305d = 1;
  }
  puVar4 = PTR_DAT_057f5ad8;
  puVar3 = PTR_DAT_057af310;
  puVar2 = PTR_DAT_0577b428;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 01486b1c to 01586b1f has its CatchHandler @ 01486bbc */
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Create_1aeddc8
            (&uStack_f8,*(undefined8 *)puVar2);
  uVar5 = (ulong)&uStack_c0 | 8;
  uStack_d0 = uStack_e8;
  uStack_d8 = uStack_f0;
  uStack_e0 = uStack_f8;
  uStack_b0 = uStack_f0;
  uStack_b8 = uStack_f8;
  uStack_a8 = uStack_e8;
  FUN_012d0d74(uVar5,0);
  uStack_88 = param_1;
                    /* try { // try from 01486b60 to 01586b73 has its CatchHandler @ 01486bc0 */
  FUN_012d0d74(&uStack_88,param_1);
  uStack_a0 = param_2;
                    /* try { // try from 01486b74 to 01586bd3 has its CatchHandler @ 01486adc */
  FUN_012d0d74(&uStack_a0,param_2);
  uStack_90 = CONCAT35(uStack_90._5_3_,CONCAT14(param_6,param_5)) & 0xffffff01ffffffff;
  uStack_98 = CONCAT44(param_3,param_4);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___Start_IAPHandler__PurchaseAsync_d__1__3c5f7dc
            (uVar5,&uStack_c0,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_bool___get_Task_1aedddc
            (uVar5,*(undefined8 *)puVar4);
                    /* catch() { ... } // from try @ 01486b1c with catch @ 01486bbc */
                    /* catch() { ... } // from try @ 01486b60 with catch @ 01486bc0 */
  return;
}

