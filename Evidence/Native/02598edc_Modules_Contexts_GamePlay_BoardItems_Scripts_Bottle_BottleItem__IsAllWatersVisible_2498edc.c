/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsAllWatersVisible
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllWatersVisible (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsAllWatersVisible
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllWatersVisible
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsAllWatersVisible_2498edc
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  
  if ((bRam0000000005c2b2fa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057f2468);
    bRam0000000005c2b2fa = 1;
  }
  puVar2 = PTR_DAT_05802430;
  puVar1 = PTR_DAT_057f2468;
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        lVar3 = *(long *)(param_1 + 0x88);
        if (lVar3 != 0) {
          iVar6 = 0;
          goto LAB_02598f94;
        }
        break;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar6,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      if ((*(long *)(lVar3 + 0x20) != 0) && (*(char *)(*(long *)(lVar3 + 0x20) + 0x54) == '\0')) {
        return 0;
      }
      lVar3 = *(long *)(param_1 + 0x80);
      iVar6 = iVar6 + 1;
    } while (lVar3 != 0);
  }
  goto LAB_02598fd0;
  while( true ) {
    uVar5 = (**(code **)(*plVar4 + 0x318))(plVar4,*(undefined8 *)(*plVar4 + 800));
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x88);
    iVar6 = iVar6 + 1;
    if (lVar3 == 0) break;
LAB_02598f94:
    if (*(int *)(lVar3 + 0x18) <= iVar6) {
      return 1;
    }
    plVar4 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar3,iVar6,*(undefined8 *)puVar2);
    if (plVar4 == (long *)0x0) break;
  }
LAB_02598fd0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

