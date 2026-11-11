/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$CanReveal
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__CanReveal (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$CanReveal
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__CanReveal
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__CanReveal_249d1bc(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  
  if ((bRam0000000005c2b30d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b30d = 1;
  }
  puVar1 = PTR_DAT_05802430;
  if (*(char *)(param_1 + 0x4c) != '\0') {
LAB_0259d1fc:
    uVar2 = 0;
LAB_0259d27c:
    return uVar2 & 1;
  }
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllWatersVisible_2498edc
                          (param_1);
        if ((uVar5 & 1) != 0) goto LAB_0259d1fc;
        uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__HasBlocker_2498528
                          (param_1,9);
        uVar2 = uVar2 ^ 1;
        goto LAB_0259d27c;
      }
      plVar4 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar3,iVar6,*(undefined8 *)puVar1);
      if (plVar4 == (long *)0x0) break;
      uVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4,*(undefined8 *)(*plVar4 + 0x2d0));
      if ((uVar5 & 1) != 0) {
        uVar2 = 1;
        goto LAB_0259d27c;
      }
      lVar3 = *(long *)(param_1 + 0x88);
      iVar6 = iVar6 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

