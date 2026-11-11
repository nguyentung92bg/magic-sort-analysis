/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsIntersect
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsIntersect (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$IsIntersect
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsIntersect
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o
   position, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsIntersect_24944ec
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  
  if ((bRam0000000005c2b2c8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b2c8 = 1;
  }
  uVar2 = UnityEngine_Bounds__Contains_38372b4(param_1,param_2,param_3,param_4 + 0x68,0);
  puVar1 = PTR_DAT_05802430;
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  lVar3 = *(long *)(param_4 + 0x88);
  if (lVar3 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar5) {
        return 0;
      }
      plVar4 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar3,iVar5,*(undefined8 *)puVar1);
      if (plVar4 == (long *)0x0) break;
      uVar2 = (**(code **)(*plVar4 + 0x3d8))
                        (param_1,param_2,param_3,plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      lVar3 = *(long *)(param_4 + 0x88);
      iVar5 = iVar5 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

