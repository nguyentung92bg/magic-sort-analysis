/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetExistingBagRequiredAmount
int32_t Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetExistingBagRequiredAmount (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.EditorBottleCollection$$GetExistingBagRequiredAmount
   int32_t
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetExistingBagRequiredAmount
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection_o* __this, const
   MethodInfo* method); */

undefined4
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetExistingBagRequiredAmount_37b0f20
          (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
                    /* try { // try from 038b0f24 to 039b0f2f has its CatchHandler @ 038b3318 */
                    /* try { // try from 038b0f44 to 039b0f4f has its CatchHandler @ 038b3338 */
  if ((bRam0000000005c33e5f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05799bc0);
    FUN_012d0dc8(PTR_DAT_057c2cf0);
                    /* try { // try from 038b0f64 to 039b0f6f has its CatchHandler @ 038b3334 */
    FUN_012d0dc8(PTR_DAT_05797338);
    FUN_012d0dc8(PTR_DAT_0581b3d8);
                    /* try { // try from 038b0f7c to 039b0f87 has its CatchHandler @ 038b3328 */
    FUN_012d0dc8(PTR_DAT_057d7b88);
    FUN_012d0dc8(PTR_DAT_05777528);
                    /* try { // try from 038b0f94 to 039b0f9f has its CatchHandler @ 038b331c */
    FUN_012d0dc8(PTR_DAT_05795a80);
    FUN_012d0dc8(PTR_DAT_057c3bb8);
                    /* try { // try from 038b0fb4 to 039b0fbb has its CatchHandler @ 038b3330 */
    FUN_012d0dc8(PTR_DAT_05793800);
                    /* try { // try from 038b0fbc to 039b109b has its CatchHandler @ 038ae800 */
    bRam0000000005c33e5f = 1;
  }
  puVar7 = PTR_DAT_057d7b88;
  puVar6 = PTR_DAT_057c3bb8;
  puVar5 = PTR_DAT_057c2cf0;
  puVar4 = PTR_DAT_05799bc0;
  puVar3 = PTR_DAT_05797338;
  puVar2 = PTR_DAT_05793800;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    iVar11 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar11) {
        return 1;
      }
      lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar8,iVar11,*(undefined8 *)puVar6);
      if (lVar8 == 0) break;
      if (0 < *(int *)(lVar8 + 0x18)) {
        iVar12 = 0;
        do {
          lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar8,iVar12,*(undefined8 *)puVar2);
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x68) == 0)) goto LAB_038b1108;
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_98,*(long *)(lVar9 + 0x68),*(undefined8 *)puVar7);
          uStack_78 = uStack_90;
          uStack_80 = uStack_98;
          plStack_70 = plStack_88;
          while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_80,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
            if (plStack_70 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)puVar4 + 300);
                    /* try { // try from 038b109c to 039b10a3 has its CatchHandler @ 038b2fb0 */
              if ((bVar1 <= *(byte *)(*plStack_70 + 300)) &&
                 (*(long *)(*(long *)(*plStack_70 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4
                 )) {
                lVar8 = plStack_70[8];
                    /* try { // try from 038b1114 to 039b114b has its CatchHandler @ 038b3040 */
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_80,*(undefined8 *)puVar5);
                return (int)lVar8;
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_80,*(undefined8 *)puVar5);
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(lVar8 + 0x18));
      }
                    /* try { // try from 038b10fc to 039b1103 has its CatchHandler @ 038b2fa8 */
      lVar8 = *(long *)(param_1 + 0x18);
      iVar11 = iVar11 + 1;
    } while (lVar8 != 0);
  }
LAB_038b1108:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

