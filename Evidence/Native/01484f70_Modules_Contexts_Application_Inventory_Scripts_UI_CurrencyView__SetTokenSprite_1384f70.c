/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetTokenSprite
void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetTokenSprite (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, System_String_o* tokenId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Inventory.Scripts.UI.CurrencyView$$SetTokenSprite
   void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetTokenSprite
   (Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView_o* __this, System_String_o*
   tokenId, const MethodInfo* method); */

void Modules_Contexts_Application_Inventory_Scripts_UI_CurrencyView__SetTokenSprite_1384f70
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_057fcf18;
  if ((bRam0000000005c23045 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578aaf0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05799138);
    FUN_012d0dc8(PTR_DAT_05782738);
    FUN_012d0dc8(PTR_DAT_057fcf18);
    bRam0000000005c23045 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0576c200;
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    FUN_012d0d74((undefined8 *)(lVar2 + 0x10),param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x98) + 0x38);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05799138);
      if ((lVar4 != 0) &&
         (System_Predicate_object____ctor_30fcf30(lVar4,lVar2,*(undefined8 *)PTR_DAT_05782738,0),
         lVar6 != 0)) {
        lVar2 = System_Collections_Generic_List_object___Find_21fd130
                          (lVar6,lVar4,*(undefined8 *)PTR_DAT_0578aaf0);
        if (lVar2 == 0) {
          return;
        }
        lVar4 = *(long *)(param_1 + 0x58);
        if (lVar4 != 0) {
          uVar5 = *(undefined8 *)(lVar2 + 0x10);
          if (pcRam0000000005c3a730 == (code *)0x0) {
            pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
          }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a730)(lVar4,uVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

