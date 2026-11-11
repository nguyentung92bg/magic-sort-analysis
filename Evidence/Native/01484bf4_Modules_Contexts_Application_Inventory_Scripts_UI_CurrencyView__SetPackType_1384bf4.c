/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetPackType
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetPackType (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetPackType
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetPackType
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, int32_t packId, const
   MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetPackType_1384bf4
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c23042 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0578d5d8);
    bRam0000000005c23042 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0xa8) == 0) {
LAB_01484e18:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar3 = Modules_Contexts_Home_Collection_Scripts_UI_CollectionCardPackVisualsConfig__GetVisual_3775f58
                      (*(long *)(param_1 + 0xa8),param_2,0);
    if (lVar3 != 0) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_01484e18;
      UnityEngine_SpriteRenderer__set_sprite_4095b64
                (*(long *)(param_1 + 0x58),*(undefined8 *)(lVar3 + 0x18),0);
      uVar5 = *(undefined8 *)(param_1 + 0xd0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(param_1 + 0xd0) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0xd0),0),
           lVar4 == 0)) goto LAB_01484e18;
        UnityEngine_GameObject__SetActive_408e318(lVar4,*(undefined1 *)(lVar3 + 0x44),0);
      }
      uVar5 = *(undefined8 *)(param_1 + 200);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(param_1 + 200) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 200),0),
           lVar4 == 0)) goto LAB_01484e18;
        UnityEngine_GameObject__SetActive_408e318(lVar4,*(char *)(lVar3 + 0x44) == '\0',0);
        uVar5 = *(undefined8 *)(param_1 + 0xc0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
        if ((uVar2 & 1) != 0) {
          plVar6 = *(long **)(param_1 + 0xc0);
          uVar5 = System_Int32__ToString_26c9768(lVar3 + 0x40,0);
          if (plVar6 == (long *)0x0) goto LAB_01484e18;
          (**(code **)(*plVar6 + 0x558))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x560));
        }
      }
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
      puVar1 = PTR_DAT_0578d5d8;
      if ((uVar2 & 1) != 0) {
        uStack_24 = *(undefined4 *)(lVar3 + 0x40);
        lVar3 = *(long *)(param_1 + 0xb8);
        uVar5 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_24);
        uVar5 = System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar5,0);
        if (lVar3 == 0) goto LAB_01484e18;
        Modules_Contexts_Home_UI_Toolbar_Scripts_ToolbarButton__SetToolbarModel_2dcb3ac
                  (lVar3,uVar5,0,0);
      }
    }
  }
  return;
}

