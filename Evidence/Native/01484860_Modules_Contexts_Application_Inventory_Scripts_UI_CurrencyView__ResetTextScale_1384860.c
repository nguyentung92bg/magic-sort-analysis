/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$ResetTextScale
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ResetTextScale (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$ResetTextScale
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ResetTextScale
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ResetTextScale_1384860
               (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2303f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2303f = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar3 = TMPro_TextMeshPro__get_transform_38b5900(*(long *)(param_1 + 0x40),0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      if (lVar3 != 0) {
        lVar4 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uStack_30 = *(undefined4 *)(lVar4 + 0xc);
        uStack_2c = *(undefined4 *)(lVar4 + 0x10);
        uStack_28 = *(undefined4 *)(lVar4 + 0x14);
        if (pcRam0000000005c3a650 == (code *)0x0) {
          pcRam0000000005c3a650 = (code *)FUN_012d0d84(&UNK_043ef104,0);
        }
        (*pcRam0000000005c3a650)(lVar3,&uStack_30);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

