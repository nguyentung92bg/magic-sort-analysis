/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetIntersectedBottle
bool Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, UnityEngine_Vector2_o worldPosition, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o** intersectedBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetIntersectedBottle
   bool 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   UnityEngine_Vector2_o worldPosition,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o**
   intersectedBottle, const MethodInfo* method); */

undefined8
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
          (undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
                    /* try { // try from 038b03e0 to 039b03e3 has its CatchHandler @ 038b0424 */
                    /* try { // try from 038b03e8 to 039b03ef has its CatchHandler @ 038b0420 */
                    /* try { // try from 038b03f4 to 039b041b has its CatchHandler @ 038b042c */
  if ((bRam0000000005c33e50 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05777528);
                    /* try { // try from 038b041c to 039b044b has its CatchHandler @ 038ae800 */
                    /* catch() { ... } // from try @ 038b03e8 with catch @ 038b0420 */
    FUN_012d0dc8(PTR_DAT_05795a80);
                    /* catch() { ... } // from try @ 038b03e0 with catch @ 038b0424 */
                    /* catch() { ... } // from try @ 038b03a4 with catch @ 038b0428 */
                    /* catch() { ... } // from try @ 038b03c0 with catch @ 038b042c
                       catch() { ... } // from try @ 038b03f4 with catch @ 038b042c */
    FUN_012d0dc8(PTR_DAT_057c3bb8);
                    /* catch() { ... } // from try @ 038b0148 with catch @ 038b0430 */
                    /* catch() { ... } // from try @ 038b0170 with catch @ 038b0434 */
                    /* catch() { ... } // from try @ 038b011c with catch @ 038b0438 */
    FUN_012d0dc8(PTR_DAT_05793800);
    bRam0000000005c33e50 = 1;
  }
                    /* try { // try from 038b044c to 039b044f has its CatchHandler @ 038b2f14 */
  *param_4 = 0;
                    /* try { // try from 038b0450 to 039b053f has its CatchHandler @ 038ae800 */
  FUN_012d0d74(param_4,0);
  puVar2 = PTR_DAT_057c3bb8;
  puVar1 = PTR_DAT_05793800;
  lVar3 = *(long *)(param_3 + 0x18);
  if (lVar3 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return 0;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar6,*(undefined8 *)puVar2);
      if (lVar3 == 0) break;
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar7 = 0;
        do {
          lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar3,iVar7,*(undefined8 *)puVar1);
          if (lVar4 == 0) goto LAB_038b04ec;
          uVar5 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__IsIntersect_3ddec70
                            (param_1,param_2,0,lVar4,0);
          if ((uVar5 & 1) != 0) {
            *param_4 = lVar4;
            FUN_012d0d74(param_4,lVar4);
            return 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar3 + 0x18));
      }
      lVar3 = *(long *)(param_3 + 0x18);
      iVar6 = iVar6 + 1;
    } while (lVar3 != 0);
  }
LAB_038b04ec:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

