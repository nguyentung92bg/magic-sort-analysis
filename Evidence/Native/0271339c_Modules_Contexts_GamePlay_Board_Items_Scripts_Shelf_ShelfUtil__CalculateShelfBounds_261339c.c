/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Shelf.ShelfUtil$$CalculateShelfBounds
UnityEngine_Bounds_o Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfUtil__CalculateShelfBounds (System_Collections_Generic_List_BottleItem__o* belongingBottles, bool hasBottleLeftSideOfSegment, bool hasBottleRightSideOfSegment, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Shelf.ShelfUtil$$CalculateShelfBounds
   UnityEngine_Bounds_o
   Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfUtil__CalculateShelfBounds
   (System_Collections_Generic_List_BottleItem__o* belongingBottles, bool
   hasBottleLeftSideOfSegment, bool hasBottleRightSideOfSegment, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Shelf_ShelfUtil__CalculateShelfBounds_261339c
               (float *param_1,long param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam0000000005c2ba1a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c2ba1a = 1;
  }
  puVar2 = PTR_DAT_057b43e8;
  if ((param_2 == 0) || (iVar1 = *(int *)(param_2 + 0x18), iVar1 == 0)) {
                    /* try { // try from 02713438 to 0281346b has its CatchHandler @ 02713180 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02713434 with catch @ 02713440
                        */
    if (cRam0000000005c230aa == '\0') {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02713424 with catch @ 02713444
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02713428 with catch @ 02713448
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02713368 with catch @ 0271344c
                        */
      FUN_012d0dc8(PTR_DAT_05805c10);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02713294 with catch @ 02713450
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 027132d4 with catch @ 02713454
                        */
      cRam0000000005c230aa = '\x01';
    }
    pfVar6 = *(float **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    fVar10 = *pfVar6;
    fVar11 = pfVar6[1];
                    /* try { // try from 0271346c to 0281346f has its CatchHandler @ 027134e8 */
    fVar9 = pfVar6[2];
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    fVar7 = fVar10;
    fVar8 = fVar11;
    fVar12 = fVar9;
  }
  else {
    lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (param_2,0,*(undefined8 *)PTR_DAT_057b43e8);
    if (iVar1 == 1) {
      if (lVar4 == 0) {
LAB_02713534:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      fVar7 = *(float *)(lVar4 + 0x28);
      fVar8 = *(float *)(lVar4 + 0x2c);
      fVar9 = *(float *)(lVar4 + 0x30);
                    /* try { // try from 02713424 to 02813427 has its CatchHandler @ 02713444 */
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
                    /* try { // try from 02713428 to 0281342f has its CatchHandler @ 02713448 */
      param_1[4] = 0.0;
      param_1[5] = 0.0;
                    /* try { // try from 02713430 to 02813433 has its CatchHandler @ 02713180 */
      fVar10 = 2.0;
                    /* try { // try from 02713434 to 02813437 has its CatchHandler @ 02713440 */
    }
    else {
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (param_2,*(int *)(param_2 + 0x18) + -1,*(undefined8 *)puVar2);
      if ((lVar4 == 0) || (lVar5 == 0)) goto LAB_02713534;
      fVar7 = *(float *)(lVar4 + 0x28);
      fVar8 = *(float *)(lVar4 + 0x2c);
      fVar10 = *(float *)(lVar5 + 0x28);
                    /* try { // try from 027134ac to 028134d3 has its CatchHandler @ 027134f4 */
      fVar12 = fVar7;
      if (fVar10 <= fVar7) {
        fVar12 = fVar10;
      }
      if (fVar7 <= fVar10) {
        fVar7 = fVar10;
      }
      fVar10 = (fVar7 - fVar12) + 2.0;
                    /* try { // try from 027134d4 to 028134df has its CatchHandler @ 02713180 */
      bVar3 = (param_3 & 1) == 0;
      if (bVar3) {
        fVar12 = fVar12 + -120.0;
      }
                    /* try { // try from 027134e0 to 028134e7 has its CatchHandler @ 027134f4 */
      if (bVar3) {
        fVar10 = fVar10 + 120.0;
      }
                    /* catch() { ... } // from try @ 0271346c with catch @ 027134e8 */
      bVar3 = (param_4 & 1) == 0;
      if (bVar3) {
        fVar7 = fVar7 + 120.0;
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027134ac with catch @ 027134f4
                       catch(type#2 @ 00000000) { ... } // from try @ 027134e0 with catch @ 027134f4
                        */
      if (bVar3) {
        fVar10 = fVar10 + 120.0;
      }
      fVar7 = (fVar12 + fVar7) * 0.5;
      fVar9 = 0.0;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
    }
    fVar11 = 0.5;
    fVar12 = fVar11;
  }
  *param_1 = fVar7;
  param_1[1] = fVar8;
  param_1[2] = fVar9;
  param_1[3] = fVar10 * 0.5;
  param_1[4] = fVar11 * 0.5;
  param_1[5] = fVar12 * 0.5;
  return;
}

