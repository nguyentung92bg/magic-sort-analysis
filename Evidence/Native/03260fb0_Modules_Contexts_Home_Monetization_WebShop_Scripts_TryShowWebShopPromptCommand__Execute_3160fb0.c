/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.TryShowWebShopPromptCommand$$Execute
System_Threading_Tasks_Task_WebShopPromptResult__o* Modules_Contexts_Home_Monetization_WebShop_Scripts_TryShowWebShopPromptCommand__Execute (Modules_Contexts_Home_Monetization_WebShop_Scripts_TryShowWebShopPromptCommand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.TryShowWebShopPromptCommand$$Execute
   System_Threading_Tasks_Task_WebShopPromptResult__o*
   Modules_Contexts_Home_Monetization_WebShop_Scripts_TryShowWebShopPromptCommand__Execute
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_TryShowWebShopPromptCommand_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_TryShowWebShopPromptCommand__Execute_3160fb0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_057b3e78;
  if ((bRam0000000005c3150f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0581add0);
    FUN_012d0dc8(PTR_DAT_0580e280);
    FUN_012d0dc8(PTR_DAT_057b3c98);
    FUN_012d0dc8(PTR_DAT_057b3e78);
    bRam0000000005c3150f = 1;
  }
  puVar4 = PTR_DAT_0581add0;
  puVar3 = PTR_DAT_0580e280;
  puVar1 = PTR_DAT_057b3c98;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17b04b0
            (&uStack_88,*(undefined8 *)puVar4);
  uVar5 = (ulong)&uStack_70 | 8;
  uStack_60 = uStack_80;
  uStack_68 = uStack_88;
  uStack_58 = uStack_78;
  FUN_012d0d74(uVar5,0);
  uStack_50 = param_1;
  FUN_012d0d74(&uStack_50,param_1);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_TryShowWebShopPromptCommand__Execute_d__5__332c3e8
            (uVar5,&uStack_70,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17b04c4
            (uVar5,*(undefined8 *)puVar1);
  return;
}

