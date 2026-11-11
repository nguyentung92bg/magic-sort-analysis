/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetCheckMark
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetCheckMark (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetCheckMark
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetCheckMark
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, bool value, const
   MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetCheckMark_1384678
               (long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2303e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2303e = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0x88) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x88),0),
       lVar4 == 0)) goto LAB_0148485c;
    UnityEngine_GameObject__SetActive_408e318(lVar4,param_2 & 1,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
       lVar4 == 0)) goto LAB_0148485c;
    UnityEngine_GameObject__SetActive_408e318(lVar4,~param_2 & 1,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 200) == 0) goto LAB_0148485c;
    lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 200),0);
    if ((param_2 & 1) == 0) {
      if ((*(long *)(param_1 + 200) == 0) ||
         (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 200),0),
         lVar5 == 0)) goto LAB_0148485c;
      uVar2 = UnityEngine_GameObject__get_activeInHierarchy_408e398(lVar5,0);
    }
    else {
      uVar2 = 0;
    }
    if (lVar4 == 0) goto LAB_0148485c;
    UnityEngine_GameObject__SetActive_408e318(lVar4,uVar2 & 1,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0xd0),0);
    if ((param_2 & 1) == 0) {
      if ((*(long *)(param_1 + 0xd0) == 0) ||
         (lVar5 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0xd0),0),
         lVar5 == 0)) goto LAB_0148485c;
      uVar2 = UnityEngine_GameObject__get_activeInHierarchy_408e398(lVar5,0);
    }
    else {
      uVar2 = 0;
    }
    if (lVar4 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar4,uVar2 & 1);
      return;
    }
  }
LAB_0148485c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

