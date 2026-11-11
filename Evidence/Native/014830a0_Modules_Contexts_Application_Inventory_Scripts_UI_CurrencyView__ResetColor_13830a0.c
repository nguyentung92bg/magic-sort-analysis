/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$ResetColor
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ResetColor (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$ResetColor
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ResetColor
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__ResetColor_13830a0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c23034 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    bRam0000000005c23034 = 1;
  }
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    UnityEngine_SpriteRenderer__set_color_4095de0
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(long *)(param_1 + 0x58),0);
    plVar3 = *(long **)(param_1 + 0x40);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar3,*(undefined8 *)(*plVar3 + 0x2b0)
                );
      puVar2 = PTR_DAT_057fbae0;
      puVar1 = PTR_DAT_057936b8;
      if (*(long *)(param_1 + 0x60) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_38,*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_0579f3e8);
        while( true ) {
          uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                            (&uStack_38,*(undefined8 *)puVar2);
          if ((uVar4 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_38,*(undefined8 *)puVar1);
            return;
          }
          if (lStack_28 == 0) break;
          UnityEngine_SpriteRenderer__set_color_4095de0
                    (0x3f800000,0x3f800000,0x3f800000,0x3f800000,lStack_28,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

