/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetRequiredAmountBySafeType
int32_t Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetRequiredAmountBySafeType (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, int32_t safeType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetRequiredAmountBySafeType
   int32_t
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetRequiredAmountBySafeType
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this,
   int32_t safeType, const MethodInfo* method); */

undefined4
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetRequiredAmountBySafeType_37b0818
          (long param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
                    /* try { // try from 038b082c to 039b0867 has its CatchHandler @ 038b33c4 */
  if ((bRam0000000005c33e60 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05781ad8);
    FUN_012d0dc8(PTR_DAT_057c2cf0);
    FUN_012d0dc8(PTR_DAT_05797338);
    FUN_012d0dc8(PTR_DAT_0581b3d8);
                    /* try { // try from 038b087c to 039b0883 has its CatchHandler @ 038b3080 */
    FUN_012d0dc8(PTR_DAT_057d7b88);
    FUN_012d0dc8(PTR_DAT_05777528);
    FUN_012d0dc8(PTR_DAT_05795a80);
                    /* try { // try from 038b08a0 to 039b08ab has its CatchHandler @ 038b3074 */
    FUN_012d0dc8(PTR_DAT_057c3bb8);
                    /* try { // try from 038b08ac to 039b08e3 has its CatchHandler @ 038b33c0 */
    FUN_012d0dc8(PTR_DAT_05793800);
    bRam0000000005c33e60 = 1;
  }
  puVar6 = PTR_DAT_057d7b88;
  puVar5 = PTR_DAT_057c2cf0;
  puVar4 = PTR_DAT_05797338;
  puVar3 = PTR_DAT_05793800;
  puVar2 = PTR_DAT_05781ad8;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 != 0) {
    iVar10 = 0;
    do {
                    /* try { // try from 038b08f8 to 039b08ff has its CatchHandler @ 038b3098 */
      if (*(int *)(lVar7 + 0x18) <= iVar10) {
                    /* try { // try from 038b0a38 to 039b0a4f has its CatchHandler @ 038b0abc */
                    /* try { // try from 038b0a54 to 039b0a6f has its CatchHandler @ 038b0ac0 */
        return 1;
      }
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar10,*(undefined8 *)PTR_DAT_057c3bb8);
      if (lVar7 == 0) break;
                    /* try { // try from 038b091c to 039b0927 has its CatchHandler @ 038b3088 */
                    /* try { // try from 038b0928 to 039b095f has its CatchHandler @ 038b33bc */
      if (0 < *(int *)(lVar7 + 0x18)) {
        iVar11 = 0;
        do {
          lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar7,iVar11,*(undefined8 *)puVar3);
          if (lVar8 == 0) goto LAB_038b0a20;
          uVar9 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem__HasOverlayBlocker_3ddf3a8
                            (lVar8,0);
          if ((uVar9 & 1) != 0) {
            if (*(long *)(lVar8 + 0x68) == 0) goto LAB_038b0a20;
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_98,*(long *)(lVar8 + 0x68),*(undefined8 *)puVar6);
            uStack_78 = uStack_90;
            uStack_80 = uStack_98;
                    /* try { // try from 038b0974 to 039b097f has its CatchHandler @ 038b307c */
            plStack_70 = plStack_88;
            while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                     (&uStack_80,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
                    /* try { // try from 038b0988 to 039b0993 has its CatchHandler @ 038b3070 */
              if (plStack_70 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)puVar2 + 300);
                    /* try { // try from 038b09ac to 039b09b7 has its CatchHandler @ 038b3084 */
                if (((bVar1 <= *(byte *)(*plStack_70 + 300)) &&
                    (*(long *)(*(long *)(*plStack_70 + 200) + (ulong)bVar1 * 8 + -8) ==
                     *(long *)puVar2)) && (*(int *)((long)plStack_70 + 0x44) == param_2)) {
                  lVar7 = plStack_70[8];
                    /* try { // try from 038b0a2c to 039b0a33 has its CatchHandler @ 038b3078 */
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_80,*(undefined8 *)puVar5);
                  return (int)lVar7;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&uStack_80,*(undefined8 *)puVar5);
          }
                    /* try { // try from 038b09dc to 039b09e7 has its CatchHandler @ 038b3094 */
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar7 + 0x18));
      }
                    /* try { // try from 038b0a14 to 039b0a1b has its CatchHandler @ 038b308c */
      lVar7 = *(long *)(param_1 + 0x18);
      iVar10 = iVar10 + 1;
    } while (lVar7 != 0);
  }
LAB_038b0a20:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

