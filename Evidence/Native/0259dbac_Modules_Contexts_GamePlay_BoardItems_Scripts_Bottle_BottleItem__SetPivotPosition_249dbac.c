/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetPivotPosition
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetPivotPosition (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o localPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetPivotPosition
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetPivotPosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o
   localPosition, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetPivotPosition_249dbac
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  if ((bRam0000000005c2b318 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e5fc8);
    FUN_012d0dc8(PTR_DAT_057e8460);
    bRam0000000005c2b318 = 1;
  }
  lVar2 = *(long *)(param_4 + 0x98);
  *(undefined4 *)(param_4 + 0x28) = param_1;
  *(undefined4 *)(param_4 + 0x2c) = param_2;
  *(undefined4 *)(param_4 + 0x30) = param_3;
  puVar1 = PTR_DAT_057e8460;
  if (lVar2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        return;
      }
      plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar2,iVar4,*(undefined8 *)puVar1);
      Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14(param_4,0)
      ;
      if (plVar3 == (long *)0x0) break;
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      lVar2 = *(long *)(param_4 + 0x98);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

