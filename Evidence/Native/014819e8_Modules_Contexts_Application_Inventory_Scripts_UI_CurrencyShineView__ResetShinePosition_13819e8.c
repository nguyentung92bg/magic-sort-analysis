/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyShineView$$ResetShinePosition
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__ResetShinePosition (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyShineView$$ResetShinePosition
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__ResetShinePosition
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__ResetShinePosition_13819e8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    return;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  if ((bRam0000000005c23027 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580c678);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c23027 = 1;
  }
  puVar2 = PTR_DAT_0580c678;
  puVar1 = PTR_DAT_0576c200;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    uVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar6) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      lVar4 = *(long *)(lVar4 + uVar6 * 8 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar3 = UnityEngine_Object__op_Equality_407f288(lVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (lVar4 == 0) break;
        UnityEngine_Renderer__GetPropertyBlock_40821e4(lVar4,*(undefined8 *)(param_1 + 0x30),0);
        lVar5 = *(long *)(param_1 + 0x30);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (lVar5 == 0) break;
        UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                  (uVar7,lVar5,**(undefined4 **)(*(long *)puVar2 + 0xb8),0);
        UnityEngine_Renderer__SetPropertyBlock_408214c(lVar4,*(undefined8 *)(param_1 + 0x30),0);
      }
      lVar4 = *(long *)(param_1 + 0x18);
      uVar6 = uVar6 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

