/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.PurchaseResult$$GetFailReason
System_String_o* Modules_Contexts_Application_IAP_Scripts_PurchaseResult__GetFailReason (Modules_Contexts_Application_IAP_Scripts_PurchaseResult_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.PurchaseResult$$GetFailReason
   System_String_o* Modules_Contexts_Application_IAP_Scripts_PurchaseResult__GetFailReason
   (Modules_Contexts_Application_IAP_Scripts_PurchaseResult_o* __this, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_IAP_Scripts_PurchaseResult__GetFailReason_1386ea8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
                    /* try { // try from 01486ebc to 01586ecf has its CatchHandler @ 01486fac */
  if ((bRam0000000005c23068 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578bb00);
                    /* try { // try from 01486ed0 to 01586edf has its CatchHandler @ 01486fa8 */
    FUN_012d0dc8(PTR_DAT_057eee60);
                    /* try { // try from 01486ee4 to 01586eff has its CatchHandler @ 01486f90 */
    FUN_012d0dc8(PTR_DAT_057e04c0);
    bRam0000000005c23068 = 1;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
                    /* try { // try from 01486f0c to 01586f2f has its CatchHandler @ 01486f8c */
    if (*(char *)(param_1 + 0x20) == '\0') {
      if (*(char *)(param_1 + 0x28) == '\0') {
        return *(undefined8 *)PTR_DAT_057e04c0;
      }
      uStack_28 = *(undefined4 *)(param_1 + 0x2c);
      puVar2 = (undefined8 *)PTR_DAT_057eee60;
    }
    else {
      uStack_28 = *(undefined4 *)(param_1 + 0x24);
      puVar2 = (undefined8 *)PTR_DAT_0578bb00;
    }
    uStack_38 = *puVar2;
    uStack_30 = 0xffffffffffffffff;
    uVar1 = System_Enum__ToString_23a4eac(&uStack_38,0);
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
  }
  return uVar1;
}

