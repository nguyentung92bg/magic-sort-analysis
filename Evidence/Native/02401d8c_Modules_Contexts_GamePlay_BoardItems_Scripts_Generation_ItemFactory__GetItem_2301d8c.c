/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetItem
Modules_Infrastructure_Common_Scripts_Component_AItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, int32_t itemType, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetItem
   Modules_Infrastructure_Common_Scripts_Component_AItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, int32_t itemType,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, const MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000005c2a634 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ba368);
    FUN_012d0dc8(PTR_DAT_057b5500);
    FUN_012d0dc8(PTR_DAT_057cbd00);
    FUN_012d0dc8(PTR_DAT_05812770);
    bRam0000000005c2a634 = 1;
  }
  if ((*(long *)(param_4 + 0x18) != 0) &&
     (plVar2 = (long *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item_36d1354
                                 (*(long *)(param_4 + 0x18),param_5,*(undefined8 *)PTR_DAT_057b5500)
     , puVar1 = PTR_DAT_057ba368, plVar2 != (long *)0x0)) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057cbd00) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_02401e80;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_057cbd00,1);
LAB_02401e80:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar4 != 0) &&
       (System_Action_object____ctor_1647468(lVar4,param_4,*(undefined8 *)PTR_DAT_05812770,0),
       plVar2 != (long *)0x0)) {
      Modules_Infrastructure_Common_Scripts_Component_AItem__add_OnRecycled_40e9b84(plVar2,lVar4,0);
      Modules_Infrastructure_Common_Scripts_Component_AItem__Spawn_40e9d64(plVar2,0);
      Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(plVar2,param_6,0);
      (**(code **)(*plVar2 + 0x1a8))
                (param_1,param_2,param_3,plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

