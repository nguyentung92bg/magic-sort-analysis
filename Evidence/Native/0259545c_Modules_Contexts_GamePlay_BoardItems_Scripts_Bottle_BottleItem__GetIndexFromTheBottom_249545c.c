/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetIndexFromTheBottom
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Infrastructure_Common_Scripts_Component_AItem_o* baseItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetIndexFromTheBottom
   int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Infrastructure_Common_Scripts_Component_AItem_o* baseItem, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_057e4360;
  if ((bRam0000000005c2b2f4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936d0);
    FUN_012d0dc8(PTR_DAT_057e61b0);
    FUN_012d0dc8(PTR_DAT_0579df48);
    FUN_012d0dc8(PTR_DAT_057e4360);
    bRam0000000005c2b2f4 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057e61b0;
  if (lVar2 != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem___c__DisplayClass108_0___ctor_22f9bf0
              (lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    FUN_012d0d74((undefined8 *)(lVar2 + 0x10),param_2);
    lVar4 = *(long *)(param_1 + 0x80);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar3 != 0) &&
       (System_Predicate_object____ctor_30fcf30(lVar3,lVar2,*(undefined8 *)PTR_DAT_0579df48,0),
       lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x022fd318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057936d0 + 0x20) + 0xc0) + 0xf0) +
                  8))(lVar4,0,*(undefined4 *)(lVar4 + 0x18),lVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

