/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetTopFilledCellIndex
int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopFilledCellIndex (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetTopFilledCellIndex
   int32_t Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopFilledCellIndex
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopFilledCellIndex_2495814
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_05818d58;
  if ((bRam0000000005c2b2f3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b4fd8);
    FUN_012d0dc8(PTR_DAT_057e61b0);
    FUN_012d0dc8(PTR_DAT_057f2c80);
    FUN_012d0dc8(PTR_DAT_05818d58);
    bRam0000000005c2b2f3 = 1;
  }
  lVar3 = *(long *)puVar2;
  lVar5 = *(long *)(param_1 + 0x80);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar3 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_057e61b0;
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar2;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_02595918;
    System_Predicate_object____ctor_30fcf30(lVar6,uVar7,*(undefined8 *)PTR_DAT_057f2c80,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar4 = lVar6;
    FUN_012d0d74(plVar4,lVar6);
  }
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x022fd418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057b4fd8 + 0x20) + 0xc0) + 0xf8) + 8
                ))(lVar5,*(int *)(lVar5 + 0x18) + -1,*(int *)(lVar5 + 0x18),lVar6);
    return;
  }
LAB_02595918:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

