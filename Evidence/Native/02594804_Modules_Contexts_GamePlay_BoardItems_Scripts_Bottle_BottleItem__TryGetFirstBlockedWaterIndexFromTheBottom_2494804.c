/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$TryGetFirstBlockedWaterIndexFromTheBottom
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetFirstBlockedWaterIndexFromTheBottom (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t* index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02594a6c) */
/* WARNING: Removing unreachable block (ram,0x02594aa0) */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$TryGetFirstBlockedWaterIndexFromTheBottom
   bool 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetFirstBlockedWaterIndexFromTheBottom
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t* index, const
   MethodInfo* method); */

uint Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetFirstBlockedWaterIndexFromTheBottom_2494804
               (long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
                    /* try { // try from 0259481c to 02694833 has its CatchHandler @ 025948b0 */
  if ((bRam0000000005c2b326 & 1) == 0) {
                    /* try { // try from 02594834 to 0269489f has its CatchHandler @ 02594774 */
    FUN_012d0dc8(PTR_DAT_0580af70);
    FUN_012d0dc8(PTR_DAT_057f9000);
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_057f9758);
    FUN_012d0dc8(PTR_DAT_05763bd8);
    FUN_012d0dc8(PTR_DAT_057da7b0);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_057fb658);
                    /* try { // try from 025948a0 to 026948af has its CatchHandler @ 025948b0 */
    FUN_012d0dc8(PTR_DAT_057791d8);
                    /* catch() { ... } // from try @ 025947e8 with catch @ 025948b0
                       catch() { ... } // from try @ 0259481c with catch @ 025948b0
                       catch() { ... } // from try @ 025948a0 with catch @ 025948b0 */
                    /* try { // try from 025948b4 to 026948b7 has its CatchHandler @ 025948c0 */
    FUN_012d0dc8(PTR_DAT_057822a8);
                    /* try { // try from 025948b8 to 026948c3 has its CatchHandler @ 02594774 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025948b4 with catch @ 025948c0
                        */
    FUN_012d0dc8(PTR_DAT_057db9e8);
    FUN_012d0dc8(PTR_DAT_057690c0);
    bRam0000000005c2b326 = 1;
  }
  puVar8 = PTR_DAT_0580af70;
  puVar7 = PTR_DAT_057f9758;
  puVar6 = PTR_DAT_057f9000;
  puVar5 = PTR_DAT_057e1088;
  puVar4 = PTR_DAT_057db9e8;
  puVar3 = PTR_DAT_057791d8;
  puVar2 = PTR_DAT_057690c0;
  puVar1 = PTR_DAT_05763bd8;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_d8,*(long *)(param_1 + 0x80),*(undefined8 *)PTR_DAT_057822a8);
  uVar16 = 0xffffffff;
  uStack_78 = uStack_d0;
  uStack_80 = uStack_d8;
  lStack_70 = lStack_c8;
  do {
    uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                       (&uStack_80,*(undefined8 *)puVar5);
    if ((uVar10 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_80,*(undefined8 *)PTR_DAT_05795370);
      *param_2 = uVar16;
      return ~uVar16 >> 0x1f;
    }
    if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(lStack_70 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_d8,*(long *)(lStack_70 + 0x38),*(undefined8 *)puVar4);
    uStack_98 = uStack_d0;
    uStack_a0 = uStack_d8;
    lStack_90 = lStack_c8;
    while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_a0,*(undefined8 *)puVar1), (uVar10 & 1) != 0) {
      plVar11 = (long *)thunk_FUN_01320d5c(lStack_90,*(undefined8 *)puVar3);
      if (plVar11 != (long *)0x0) {
        lVar14 = *plVar11;
        lVar13 = *(long *)puVar3;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar10 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar13) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02594a0c;
            }
            uVar10 = uVar10 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,lVar13,0);
LAB_02594a0c:
        lVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Collections_Generic_List_int___GetEnumerator_204fcb0
                  (&uStack_d8,lVar13,*(undefined8 *)puVar2);
        uStack_b8 = uStack_d0;
        uStack_c0 = uStack_d8;
        lStack_b0 = lStack_c8;
        uVar9 = uVar16;
        while (uVar16 = uVar9,
              uVar10 = System_Collections_Generic_List_Enumerator_int___MoveNext_41d2ec0
                                 (&uStack_c0,*(undefined8 *)puVar7), (uVar10 & 1) != 0) {
          uVar9 = (uint)lStack_b0;
          if ((int)(uint)lStack_b0 <= (int)uVar16) {
            uVar9 = uVar16;
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose_41d2ebc
                  (&uStack_c0,*(undefined8 *)puVar8);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_a0,*(undefined8 *)puVar6);
  } while( true );
}

