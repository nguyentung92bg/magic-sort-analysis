/* IL2CPP: Modules.Contexts.Home.Monetization.WebShop.Scripts.Commands.TryShowWebPurchaseCompletedCommand$$Initialize
void Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand__Initialize (Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.WebShop.Scripts.Commands.TryShowWebPurchaseCompletedCommand$$Initialize
   void 
   Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand__Initialize
   (Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand_o*
   __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_WebShop_Scripts_Commands_TryShowWebPurchaseCompletedCommand__Initialize_316e658
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c31590 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057acad0);
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c31590 = 1;
  }
  lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
    uVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar3,*(undefined8 *)PTR_DAT_057f83f8);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    FUN_012d0d74();
    lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
      uVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_057acad0);
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      FUN_012d0d74((undefined8 *)(param_1 + 0x20),uVar2);
      *(undefined1 *)(param_1 + 0x10) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

