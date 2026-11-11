/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$TryGetIAPModel
bool Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, System_String_o* productId, Modules_Contexts_Application_IAP_Scripts_IAPModel_o** iapModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$TryGetIAPModel
   bool Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel
   (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, System_String_o* productId,
   Modules_Contexts_Application_IAP_Scripts_IAPModel_o** iapModel, const MethodInfo* method); */

undefined8
Modules_Contexts_Application_IAP_Scripts_IAPService__TryGetIAPModel_1386e38
          (long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000005c23087 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578f048);
    bRam0000000005c23087 = 1;
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 01486e90 to 01586e97 has its CatchHandler @ 01486f84 */
  uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0578f048 + 0x20) + 0xc0) +
                                0xa8) + 8))(lVar2,param_2);
                    /* try { // try from 01486e98 to 01586ebb has its CatchHandler @ 01486dd0 */
  if ((int)uVar1 < 0) {
    uVar3 = 0;
    *param_3 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    *param_3 = *(undefined8 *)(lVar2 + (long)(int)uVar1 * 0x18 + 0x30);
    FUN_012d0d74(param_3);
    uVar3 = 1;
  }
  return uVar3;
}

