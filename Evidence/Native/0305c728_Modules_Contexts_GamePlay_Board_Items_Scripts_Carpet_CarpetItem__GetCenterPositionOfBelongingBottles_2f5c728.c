/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$GetCenterPositionOfBelongingBottles
UnityEngine_Vector3_o Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__GetCenterPositionOfBelongingBottles (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet.CarpetItem$$GetCenterPositionOfBelongingBottles
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__GetCenterPositionOfBelongingBottles
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_Items_Scripts_Carpet_CarpetItem__GetCenterPositionOfBelongingBottles_2f5c728
          (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  float extraout_s0;
  float fVar10;
  float fVar11;
  undefined4 extraout_var;
  undefined4 uVar13;
  undefined8 extraout_var_00;
  undefined8 uVar14;
  undefined1 auVar12 [16];
  
  if ((bRam0000000005c308d6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    bRam0000000005c308d6 = 1;
  }
  puVar3 = PTR_DAT_057b43e8;
  puVar2 = PTR_DAT_0575a2d8;
  lVar4 = *(long *)(param_1 + 0x58);
  if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0x18), iVar1 != 0)) {
    lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar4,0,*(undefined8 *)PTR_DAT_057b43e8);
    if (iVar1 == 1) {
      if ((lVar4 != 0) &&
         (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                     (lVar4,0), plVar5 != (long *)0x0)) {
        lVar4 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0305c8c4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0);
LAB_0305c8c4:
                    /* try { // try from 0305c8cc to 0315c8d3 has its CatchHandler @ 0305ce04 */
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        fVar10 = extraout_s0;
        uVar13 = extraout_var;
        uVar14 = extraout_var_00;
        goto LAB_0305c984;
      }
    }
    else {
      lVar7 = *(long *)(param_1 + 0x58);
      if (((lVar7 != 0) &&
          (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar7,*(int *)(lVar7 + 0x18) + -1,*(undefined8 *)puVar3), lVar4 != 0))
         && (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                        (lVar4,0), plVar5 != (long *)0x0)) {
        lVar4 = *plVar5;
                    /* try { // try from 0305c880 to 0315c883 has its CatchHandler @ 0305cde4 */
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0305c8e0;
            }
            uVar8 = uVar8 - 1;
                    /* try { // try from 0305c8a0 to 0315c8a7 has its CatchHandler @ 0305ce08 */
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0);
LAB_0305c8e0:
        fVar10 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((lVar7 != 0) &&
           (plVar5 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                       (lVar7,0), plVar5 != (long *)0x0)) {
          lVar4 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
                    /* try { // try from 0305c930 to 0315c937 has its CatchHandler @ 0305cdfc */
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0305c95c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0);
LAB_0305c95c:
                    /* try { // try from 0305c95c to 0315c963 has its CatchHandler @ 0305ce00 */
          fVar11 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
          fVar10 = (fVar10 + fVar11) * 0.5;
          uVar13 = 0;
          uVar14 = 0;
          goto LAB_0305c984;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  fVar10 = **(float **)(*(long *)PTR_DAT_05805c10 + 0xb8);
  uVar13 = 0;
  uVar14 = 0;
LAB_0305c984:
  auVar12._4_4_ = uVar13;
  auVar12._0_4_ = fVar10;
  auVar12._8_8_ = uVar14;
  return auVar12;
}

