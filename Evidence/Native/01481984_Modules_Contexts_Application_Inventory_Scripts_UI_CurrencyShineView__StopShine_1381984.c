/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyShineView$$StopShine
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__StopShine (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyShineView$$StopShine
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__StopShine
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyShineView__StopShine_1381984
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar3,0,0);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_012d0d74((long *)(param_1 + 0x38),0);
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
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    uVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar6) {
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      lVar3 = *(long *)(lVar3 + uVar6 * 8 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = UnityEngine_Object__op_Equality_407f288(lVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if (lVar3 == 0) break;
        UnityEngine_Renderer__GetPropertyBlock_40821e4(lVar3,*(undefined8 *)(param_1 + 0x30),0);
        lVar5 = *(long *)(param_1 + 0x30);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (lVar5 == 0) break;
        UnityEngine_MaterialPropertyBlock__SetFloat_384132c
                  (uVar7,lVar5,**(undefined4 **)(*(long *)puVar2 + 0xb8),0);
        UnityEngine_Renderer__SetPropertyBlock_408214c(lVar3,*(undefined8 *)(param_1 + 0x30),0);
      }
      lVar3 = *(long *)(param_1 + 0x18);
      uVar6 = uVar6 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

