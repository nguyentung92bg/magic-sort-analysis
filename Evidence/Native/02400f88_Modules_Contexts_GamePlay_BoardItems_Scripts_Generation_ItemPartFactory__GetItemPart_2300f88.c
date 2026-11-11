/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$GetItemPart
Modules_Infrastructure_Common_Scripts_Component_AItemPart_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetItemPart (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, int32_t itemPartType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemPartFactory$$GetItemPart
   Modules_Infrastructure_Common_Scripts_Component_AItemPart_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetItemPart
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory_o* __this, int32_t
   itemPartType, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory__GetItemPart_2300f88
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000005c2a613 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f4430);
    FUN_012d0dc8(PTR_DAT_057b3418);
    FUN_012d0dc8(PTR_DAT_057600b8);
    FUN_012d0dc8(PTR_DAT_057b3da0);
    bRam0000000005c2a613 = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (plVar2 = (long *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item_36d1354
                                 (*(long *)(param_1 + 0x18),param_2,*(undefined8 *)PTR_DAT_057b3418)
     , puVar1 = PTR_DAT_057f4430, plVar2 != (long *)0x0)) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057600b8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_02401060;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_057600b8,1);
LAB_02401060:
    lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar4 != 0) &&
       (System_Action_object____ctor_1647468(lVar4,param_1,*(undefined8 *)PTR_DAT_057b3da0,0),
       lVar5 != 0)) {
      Modules_Infrastructure_Common_Scripts_Component_AItemPart__add_OnRecycled_40ea2bc
                (lVar5,lVar4,0);
      Modules_Infrastructure_Common_Scripts_Component_AItemPart__Spawn_40ea48c(lVar5,0);
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

