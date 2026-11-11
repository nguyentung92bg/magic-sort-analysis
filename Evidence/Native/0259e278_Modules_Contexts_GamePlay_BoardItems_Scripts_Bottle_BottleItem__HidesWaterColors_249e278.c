/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$HidesWaterColors
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HidesWaterColors (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$HidesWaterColors
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HidesWaterColors
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HidesWaterColors_249e278
          (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  
  if ((bRam0000000005c2b320 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b320 = 1;
  }
  puVar1 = PTR_DAT_05802430;
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar5) {
        return 0;
      }
      plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar2,iVar5,*(undefined8 *)puVar1);
      if (plVar3 == (long *)0x0) break;
      uVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      lVar2 = *(long *)(param_1 + 0x88);
      iVar5 = iVar5 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

