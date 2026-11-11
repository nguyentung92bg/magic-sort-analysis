/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$IsIntersect
bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__IsIntersect (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle.EditorBottleItem$$IsIntersect
   bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__IsIntersect
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* __this,
   UnityEngine_Vector3_o position, const MethodInfo* method); */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__IsIntersect_3ddec70
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  
  if ((bRam0000000005c37e4a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b1718);
                    /* try { // try from 03edecac to 03fded3f has its CatchHandler @ 03edecac
                       catch() { ... } // from try @ 03edecac with catch @ 03edecac
                       catch() { ... } // from try @ 03eded60 with catch @ 03edecac
                       catch() { ... } // from try @ 03eded88 with catch @ 03edecac
                       catch() { ... } // from try @ 03ededb0 with catch @ 03edecac
                       catch() { ... } // from try @ 03edede0 with catch @ 03edecac */
    FUN_012d0dc8(PTR_DAT_057f8600);
    bRam0000000005c37e4a = 1;
  }
  uVar2 = UnityEngine_Bounds__Contains_38372b4(param_1,param_2,param_3,param_4 + 0x48,0);
  puVar1 = PTR_DAT_057f8600;
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 03eded54 to 03fded5f has its CatchHandler @ 03eded90 */
    return 1;
  }
  lVar3 = *(long *)(param_4 + 0x68);
  if (lVar3 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar5) {
        return 0;
      }
      plVar4 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar3,iVar5,*(undefined8 *)puVar1);
      if (plVar4 == (long *)0x0) break;
      uVar2 = (**(code **)(*plVar4 + 0x208))
                        (param_1,param_2,param_3,plVar4,*(undefined8 *)(*plVar4 + 0x210));
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      lVar3 = *(long *)(param_4 + 0x68);
      iVar5 = iVar5 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

