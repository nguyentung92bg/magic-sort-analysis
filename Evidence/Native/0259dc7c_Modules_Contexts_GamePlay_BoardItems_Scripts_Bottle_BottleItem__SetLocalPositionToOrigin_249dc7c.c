/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetLocalPositionToOrigin
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetLocalPositionToOrigin (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$SetLocalPositionToOrigin
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetLocalPositionToOrigin
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetLocalPositionToOrigin_249dc7c
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c2b319 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e5fc8);
    FUN_012d0dc8(PTR_DAT_057e8460);
    bRam0000000005c2b319 = 1;
  }
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalPositionToOrigin_40e9e54(param_4,0)
  ;
  puVar1 = PTR_DAT_057e8460;
  lVar2 = *(long *)(param_4 + 0x98);
  if (lVar2 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar7) {
        lVar2 = *(long *)(param_4 + 0xe0);
        if (lVar2 == 0) {
          return;
        }
        uVar8 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                          (param_4,0);
        if ((bRam0000000005c3aa91 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575a2d8,0);
          bRam0000000005c3aa91 = 1;
        }
        lVar2 = *(long *)(lVar2 + 0x20);
        if ((lVar2 == 0) || (plVar3 = *(long **)(lVar2 + 0x18), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar2 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
        if (uVar5 == 0) goto LAB_041ea7d0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_041ea7b8;
      }
      plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar2,iVar7,*(undefined8 *)puVar1);
      if (plVar3 == (long *)0x0) break;
      (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      lVar2 = *(long *)(param_4 + 0x98);
      iVar7 = iVar7 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_041ea7b8:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
      puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 5) * 0x10 + 0x138);
      goto LAB_041ea7f0;
    }
  }
LAB_041ea7d0:
  puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0575a2d8,5);
LAB_041ea7f0:
                    /* WARNING: Could not recover jumptable at 0x041ea814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(uVar8,param_2,param_3,plVar3,puVar4[1]);
  return;
}

