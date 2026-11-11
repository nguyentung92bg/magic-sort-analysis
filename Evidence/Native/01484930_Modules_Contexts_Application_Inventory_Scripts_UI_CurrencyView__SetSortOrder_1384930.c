/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetSortOrder
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetSortOrder (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t order, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetSortOrder
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetSortOrder
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t order, const
   MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetSortOrder_1384930
               (long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c23040 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c23040 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Implicit_4081098(uVar6,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_01484aa8;
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x58),param_2,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Implicit_4081098(uVar6,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_01484aa8;
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x78),param_2 + 1,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Implicit_4081098(uVar6,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_01484aa8;
    TMPro_TextMeshPro__set_sortingOrder_38b5690(*(long *)(param_1 + 0x40),param_2 + 2,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) goto LAB_01484aa8;
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0xd8),param_2 + 3,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  puVar1 = PTR_DAT_0576c200;
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0xc0);
  if (lVar3 != 0) {
    param_2 = param_2 + 4;
    if ((bRam0000000005c34ac4 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,param_2,0);
      bRam0000000005c34ac4 = 1;
    }
    uVar6 = TMPro_TextMeshPro__get_renderer_38b539c(lVar3);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    uVar2 = UnityEngine_Object__op_Equality_407f288(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (*(long *)(lVar3 + 0x6e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(lVar3 + 0x6e0),param_2,0);
    *(int *)(lVar3 + 0x6c8) = param_2;
    if ((bRam0000000005c34af4 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200);
      bRam0000000005c34af4 = 1;
    }
    puVar1 = PTR_DAT_0576c200;
    lVar4 = *(long *)(lVar3 + 0x700);
    if (lVar4 != 0) {
      lVar7 = 5;
      do {
        if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)(lVar7 - 4U)) {
          return;
        }
        if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar7 - 4U) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        lVar4 = *(long *)(lVar4 + lVar7 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar2 = UnityEngine_Object__op_Inequality_408e110(lVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if (lVar4 == 0) break;
          uVar6 = TMPro_TMP_SubMesh__get_renderer_3d41b10(lVar4,0);
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_0130472c(lVar5);
          }
          uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
          if ((uVar2 & 1) != 0) {
            lVar4 = TMPro_TMP_SubMesh__get_renderer_3d41b10(lVar4,0);
            if (lVar4 == 0) break;
            UnityEngine_Renderer__set_sortingOrder_40826fc(lVar4,param_2,0);
          }
        }
        lVar4 = *(long *)(lVar3 + 0x700);
        lVar7 = lVar7 + 1;
      } while (lVar4 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_01484aa8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

