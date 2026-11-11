/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$TryMergeColors
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryMergeColors (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$TryMergeColors
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryMergeColors
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

undefined4
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryMergeColors_2496144(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  
                    /* try { // try from 0259615c to 0269617b has its CatchHandler @ 025961c4 */
  if ((bRam0000000005c2b2f0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758878);
                    /* try { // try from 0259617c to 026961df has its CatchHandler @ 025960a8 */
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_0575d540);
    FUN_012d0dc8(PTR_DAT_057a5d70);
    FUN_012d0dc8(PTR_DAT_057d91a8);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02596138 with catch @ 025961c0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0259615c with catch @ 025961c4
                        */
    bRam0000000005c2b2f0 = 1;
  }
  puVar4 = PTR_DAT_057f2468;
  puVar3 = PTR_DAT_057a5d70;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0259610c with catch @ 025961c8
                        */
  lVar7 = *(long *)(param_1 + 0x80);
  if (lVar7 != 0) {
                    /* try { // try from 025961e0 to 026961e3 has its CatchHandler @ 025961f0 */
    uVar16 = 0;
    iVar15 = 0;
    do {
                    /* catch() { ... } // from try @ 025961e0 with catch @ 025961f0 */
      if (*(int *)(lVar7 + 0x18) <= iVar15) {
        return uVar16;
      }
                    /* try { // try from 025961fc to 02696207 has its CatchHandler @ 0259621c */
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar15,*(undefined8 *)puVar4);
      if (lVar7 == 0) break;
      lVar7 = *(long *)(lVar7 + 0x20);
                    /* try { // try from 02596208 to 02696213 has its CatchHandler @ 025960a8 */
      if (lVar7 != 0) {
                    /* try { // try from 02596214 to 0269621b has its CatchHandler @ 0259621c */
        uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                          (lVar7,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025961fc with catch @ 0259621c
                       catch(type#2 @ 00000000) { ... } // from try @ 02596214 with catch @ 0259621c
                        */
                    /* try { // try from 02596220 to 026962fb has its CatchHandler @ 02596220
                       catch() { ... } // from try @ 02596220 with catch @ 02596220
                       catch() { ... } // from try @ 02596494 with catch @ 02596220
                       catch() { ... } // from try @ 025965a4 with catch @ 02596220
                       catch() { ... } // from try @ 02596610 with catch @ 02596220 */
        iVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWaterHeightBySameVisibilityAndSameColor_249975c
                          (param_1,iVar15,uVar5);
        iVar17 = *(int *)(lVar7 + 0x40);
        if (iVar17 < iVar6) {
          do {
            if (*(long *)(param_1 + 0x80) == 0) goto LAB_02596638;
            iVar1 = iVar17 + iVar15;
            lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_1 + 0x80),iVar1,*(undefined8 *)puVar4);
            if (lVar8 == 0) goto LAB_02596638;
            plVar9 = *(long **)(lVar8 + 0x30);
            if (plVar9 != (long *)0x0) {
              lVar8 = *plVar9;
              bVar2 = *(byte *)(*(long *)PTR_DAT_057d91a8 + 300);
              if ((bVar2 <= *(byte *)(lVar8 + 300)) &&
                 (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) ==
                  *(long *)PTR_DAT_057d91a8)) {
                (**(code **)(lVar8 + 0x218))(plVar9,lVar7,*(undefined8 *)(lVar8 + 0x220));
              }
            }
            if ((*(long *)(param_1 + 0x80) == 0) ||
               (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (*(long *)(param_1 + 0x80),iVar1,*(undefined8 *)puVar4),
               lVar8 == 0)) goto LAB_02596638;
            plVar9 = *(long **)(lVar8 + 0x30);
            if (plVar9 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)PTR_DAT_05758878 + 300);
              if ((bVar2 <= *(byte *)(*plVar9 + 300)) &&
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
                  *(long *)PTR_DAT_05758878)) {
                    /* try { // try from 025962fc to 0269631b has its CatchHandler @ 025965c8 */
                plVar10 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                            (plVar9,0);
                uVar11 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (lVar7,0);
                if (plVar10 == (long *)0x0) goto LAB_02596638;
                lVar8 = *plVar10;
                uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    /* try { // try from 02596338 to 02696343 has its CatchHandler @ 025965c4 */
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0575a2d8) {
                      puVar12 = (undefined8 *)(lVar8 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                      goto LAB_02596370;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,10);
LAB_02596370:
                (*(code *)*puVar12)(plVar10,uVar11,puVar12[1]);
                    /* try { // try from 02596380 to 02696383 has its CatchHandler @ 025965b4 */
                    /* try { // try from 02596384 to 02696393 has its CatchHandler @ 025965bc */
                (**(code **)(*plVar9 + 0x218))(plVar9,lVar7,*(undefined8 *)(*plVar9 + 0x220));
              }
            }
                    /* try { // try from 025963ac to 026963af has its CatchHandler @ 025965ac */
            if ((*(long *)(param_1 + 0x80) == 0) ||
               (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (*(long *)(param_1 + 0x80),iVar1,*(undefined8 *)puVar4),
               lVar8 == 0)) goto LAB_02596638;
            plVar9 = *(long **)(lVar8 + 0x30);
            if (plVar9 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)PTR_DAT_0575d540 + 300);
                    /* try { // try from 025963d4 to 026963db has its CatchHandler @ 025965c0 */
              if ((bVar2 <= *(byte *)(*plVar9 + 300)) &&
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
                  *(long *)PTR_DAT_0575d540)) {
                plVar10 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                            (plVar9,0);
                    /* try { // try from 025963f8 to 026963fb has its CatchHandler @ 025965a8 */
                    /* try { // try from 025963fc to 0269640b has its CatchHandler @ 025965b0 */
                uVar11 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (lVar7,0);
                if (plVar10 == (long *)0x0) goto LAB_02596638;
                lVar8 = *plVar10;
                uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
                    /* try { // try from 02596424 to 02696473 has its CatchHandler @ 025965c0 */
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0575a2d8) {
                      puVar12 = (undefined8 *)(lVar8 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                      goto LAB_02596468;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,10);
LAB_02596468:
                (*(code *)*puVar12)(plVar10,uVar11,puVar12[1]);
                    /* try { // try from 02596488 to 02696493 has its CatchHandler @ 025965b8 */
                (**(code **)(*plVar9 + 0x218))(plVar9,lVar7,*(undefined8 *)(*plVar9 + 0x220));
              }
            }
                    /* try { // try from 02596494 to 02696593 has its CatchHandler @ 02596220 */
            if ((*(long *)(param_1 + 0x80) == 0) ||
               (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (*(long *)(param_1 + 0x80),iVar1,*(undefined8 *)puVar4),
               lVar8 == 0)) goto LAB_02596638;
            plVar9 = *(long **)(lVar8 + 0x30);
            if (plVar9 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)puVar3 + 300);
              if ((bVar2 <= *(byte *)(*plVar9 + 300)) &&
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) {
                plVar10 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                            (plVar9,0);
                uVar11 = Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                   (lVar7,0);
                if (plVar10 == (long *)0x0) goto LAB_02596638;
                lVar8 = *plVar10;
                uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0575a2d8) {
                      puVar12 = (undefined8 *)(lVar8 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                      goto LAB_02596558;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,10);
LAB_02596558:
                (*(code *)*puVar12)(plVar10,uVar11,puVar12[1]);
                (**(code **)(*plVar9 + 0x218))(plVar9,lVar7,*(undefined8 *)(*plVar9 + 0x220));
              }
            }
                    /* try { // try from 02596594 to 02696597 has its CatchHandler @ 025965a4 */
                    /* try { // try from 02596598 to 0269659b has its CatchHandler @ 025965c0 */
                    /* try { // try from 0259659c to 0269659f has its CatchHandler @ 025965b8 */
            if (((*(long *)(param_1 + 0x80) == 0) ||
                (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (*(long *)(param_1 + 0x80),iVar1,*(undefined8 *)puVar4),
                lVar8 == 0)) || (*(long *)(lVar8 + 0x20) == 0)) goto LAB_02596638;
                    /* try { // try from 025965a0 to 026965a3 has its CatchHandler @ 025965c0 */
                    /* catch() { ... } // from try @ 02596594 with catch @ 025965a4
                       try { // try from 025965a4 to 026965df has its CatchHandler @ 02596220 */
                    /* catch() { ... } // from try @ 025963f8 with catch @ 025965a8 */
                    /* catch() { ... } // from try @ 025963ac with catch @ 025965ac */
            if ((*(char *)(*(long *)(lVar8 + 0x20) + 0x55) != '\0') &&
               (*(char *)(lVar7 + 0x55) == '\0')) {
                    /* catch() { ... } // from try @ 025963fc with catch @ 025965b0 */
                    /* catch() { ... } // from try @ 02596380 with catch @ 025965b4 */
                    /* catch() { ... } // from try @ 02596488 with catch @ 025965b8
                       catch() { ... } // from try @ 0259659c with catch @ 025965b8 */
                    /* catch() { ... } // from try @ 02596384 with catch @ 025965bc */
              Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetRainbow_1e9e860
                        (lVar7,1,0);
            }
                    /* catch() { ... } // from try @ 025963d4 with catch @ 025965c0
                       catch() { ... } // from try @ 02596424 with catch @ 025965c0
                       catch() { ... } // from try @ 02596598 with catch @ 025965c0
                       catch() { ... } // from try @ 025965a0 with catch @ 025965c0 */
                    /* catch() { ... } // from try @ 02596338 with catch @ 025965c4 */
                    /* catch() { ... } // from try @ 025962fc with catch @ 025965c8 */
            if (((*(long *)(param_1 + 0x80) == 0) ||
                (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                   (*(long *)(param_1 + 0x80),iVar1,*(undefined8 *)puVar4),
                lVar8 == 0)) || (*(long *)(lVar8 + 0x20) == 0)) goto LAB_02596638;
                    /* try { // try from 025965e0 to 026965e3 has its CatchHandler @ 025965f8 */
            Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98
                      (*(long *)(lVar8 + 0x20),0);
                    /* catch() { ... } // from try @ 025965e0 with catch @ 025965f8 */
            if ((*(long *)(param_1 + 0x80) == 0) ||
               (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                  (*(long *)(param_1 + 0x80),iVar1,*(undefined8 *)puVar4),
               lVar8 == 0)) goto LAB_02596638;
            *(long *)(lVar8 + 0x20) = lVar7;
                    /* try { // try from 02596604 to 0269660f has its CatchHandler @ 02596624 */
            FUN_012d0d74((long *)(lVar8 + 0x20),lVar7);
            iVar17 = iVar17 + 1;
                    /* try { // try from 02596610 to 0269661b has its CatchHandler @ 02596220 */
          } while (iVar17 != iVar6);
                    /* try { // try from 0259661c to 02696623 has its CatchHandler @ 02596624 */
                    /* catch() { ... } // from try @ 02596604 with catch @ 02596624
                       catch() { ... } // from try @ 0259661c with catch @ 02596624 */
          Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetHeight_1e9e2e8
                    (lVar7,iVar6,0);
          uVar16 = 1;
        }
      }
      lVar7 = *(long *)(param_1 + 0x80);
      iVar15 = iVar15 + 1;
    } while (lVar7 != 0);
  }
LAB_02596638:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

