/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$RotateWaters
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RotateWaters (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float rotation, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$RotateWaters
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RotateWaters
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float rotation, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RotateWaters_2494da4
               (undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  int *piVar17;
  uint *puVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  
  if ((bRam0000000005c2b2cb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05758878);
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_0575d540);
    FUN_012d0dc8(PTR_DAT_057a5d70);
    FUN_012d0dc8(PTR_DAT_057d91a8);
    bRam0000000005c2b2cb = 1;
  }
  puVar4 = PTR_DAT_057f2468;
  puVar3 = PTR_DAT_057d91a8;
  lVar7 = *(long *)(param_4 + 0x80);
  if (lVar7 != 0) {
    iVar2 = *(int *)(param_4 + 0xe8);
    iVar1 = iVar2;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar1) {
        return;
      }
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar1,*(undefined8 *)puVar4);
      if (lVar7 == 0) break;
      lVar19 = *(long *)(lVar7 + 0x20);
      if (iVar2 < iVar1) {
        if ((*(long *)(param_4 + 0x80) == 0) ||
           (lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_4 + 0x80),iVar1 + -1,*(undefined8 *)puVar4),
           lVar8 == 0)) break;
        lVar8 = *(long *)(lVar8 + 0x20);
      }
      else {
        lVar8 = 0;
      }
      if ((lVar8 != lVar19) && (lVar19 != 0)) {
        if (lVar8 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetWaterRotationAnimation_1e9e7a4
                            (lVar8,0);
        }
        if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        bVar5 = UnityEngine_Object__op_Inequality_408e110(lVar9,0,0);
        bVar5 = iVar2 <= iVar1 & bVar5;
        if (bVar5 == 0) {
          if (cRam0000000005c2345c == '\0') {
            FUN_012d0dc8(PTR_DAT_05803150);
            cRam0000000005c2345c = '\x01';
          }
          puVar12 = *(uint **)(*(long *)PTR_DAT_05803150 + 0xb8);
          puVar13 = puVar12 + 1;
          puVar16 = puVar13;
          puVar18 = puVar12;
        }
        else {
          if (lVar9 == 0) break;
          puVar12 = (uint *)(lVar9 + 0x24);
          puVar13 = (uint *)(lVar9 + 0x28);
          puVar16 = (uint *)(lVar9 + 0x30);
          puVar18 = (uint *)(lVar9 + 0x2c);
        }
        param_3 = (ulong)*puVar13;
        param_2 = (ulong)*puVar12;
        Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__RotateWaters_1e9e62c
                  (-(float)param_1,param_2,param_3,*puVar18,*puVar16,lVar19,iVar1,iVar2,bVar5,
                   *(undefined4 *)(param_4 + 0x48),lVar8,*(undefined8 *)(param_4 + 0xa0),0);
      }
      plVar20 = *(long **)(lVar7 + 0x30);
      if (plVar20 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)puVar3 + 300);
        uVar14 = param_3;
        if (((bVar5 <= *(byte *)(*plVar20 + 300)) &&
            (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar5 * 8 + -8) == *(long *)puVar3)) &&
           (lVar19 != 0)) {
          uVar21 = *(undefined8 *)(param_4 + 0xa0);
          plVar10 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                      (param_4,0);
          if (plVar10 == (long *)0x0) break;
          lVar9 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar14 != 0) {
            piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0575a2d8) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
                uVar14 = param_3;
                goto LAB_0259504c;
              }
              uVar14 = uVar14 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,0);
          uVar14 = param_3;
LAB_0259504c:
          param_3 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          uVar15 = param_2;
          param_2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetWoodBoxKeyPositionValuesForWater_1e9e658
                              (param_1,param_3,param_2,uVar14,lVar19,lVar8,uVar21,0);
          uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                            (param_4,lVar19);
          (**(code **)(*plVar20 + 0x308))
                    (param_1,param_2,param_3,uVar15,plVar20,uVar6,*(undefined8 *)(*plVar20 + 0x310))
          ;
          plVar20 = *(long **)(lVar7 + 0x30);
          uVar14 = param_3;
          if (plVar20 == (long *)0x0) goto LAB_02595424;
        }
        bVar5 = *(byte *)(*(long *)PTR_DAT_0575d540 + 300);
        if (((bVar5 <= *(byte *)(*plVar20 + 300)) &&
            (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar5 * 8 + -8) ==
             *(long *)PTR_DAT_0575d540)) && (lVar19 != 0)) {
          uVar21 = *(undefined8 *)(param_4 + 0xa0);
          plVar10 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                      (param_4,0);
          if (plVar10 == (long *)0x0) break;
          lVar9 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0575a2d8) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_02595174;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,0);
LAB_02595174:
          param_3 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          uVar15 = param_2;
          param_2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetWoodBoxKeyPositionValuesForWater_1e9e658
                              (param_1,param_3,param_2,uVar14,lVar19,lVar8,uVar21,0);
          (**(code **)(*plVar20 + 0x308))
                    (param_1,param_2,param_3,uVar15,plVar20,iVar1,*(undefined8 *)(*plVar20 + 0x310))
          ;
          plVar20 = *(long **)(lVar7 + 0x30);
          uVar14 = param_3;
          if (plVar20 == (long *)0x0) goto LAB_02595424;
        }
        bVar5 = *(byte *)(*(long *)PTR_DAT_05758878 + 300);
        param_3 = uVar14;
        if (((bVar5 <= *(byte *)(*plVar20 + 300)) &&
            (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar5 * 8 + -8) ==
             *(long *)PTR_DAT_05758878)) && (lVar19 != 0)) {
          uVar21 = *(undefined8 *)(param_4 + 0xa0);
          plVar10 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                      (param_4,0);
          if (plVar10 == (long *)0x0) break;
          lVar9 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0575a2d8) {
                puVar11 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_02595290;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,0);
LAB_02595290:
          param_3 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          uVar15 = param_2;
          param_2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetWoodBoxKeyPositionValuesForWater_1e9e658
                              (param_1,param_3,param_2,uVar14,lVar19,lVar8,uVar21,0);
          (**(code **)(*plVar20 + 0x308))
                    (param_1,param_2,param_3,uVar15,plVar20,iVar1,*(undefined8 *)(*plVar20 + 0x310))
          ;
          plVar20 = *(long **)(lVar7 + 0x30);
          if (plVar20 == (long *)0x0) goto LAB_02595424;
        }
        bVar5 = *(byte *)(*(long *)PTR_DAT_057a5d70 + 300);
        if (bVar5 <= *(byte *)(*plVar20 + 300)) {
          if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)PTR_DAT_057a5d70) {
            plVar20 = (long *)0x0;
          }
          if ((plVar20 != (long *)0x0) && (lVar19 != 0)) {
            uVar21 = *(undefined8 *)(param_4 + 0xa0);
            plVar10 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                        (param_4,0);
            if (plVar10 == (long *)0x0) break;
            lVar7 = *plVar10;
            uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar14 != 0) {
              piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0575a2d8) {
                  puVar11 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                  uVar14 = param_3;
                  goto LAB_025953b0;
                }
                uVar14 = uVar14 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar14 != 0);
            }
            puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0575a2d8,0);
            uVar14 = param_3;
LAB_025953b0:
            param_3 = (*(code *)*puVar11)(plVar10,puVar11[1]);
            if (lVar19 == 0) break;
            uVar15 = param_2;
            param_2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetWoodBoxKeyPositionValuesForWater_1e9e658
                                (param_1,param_3,param_2,uVar14,lVar19,lVar8,uVar21,0);
            (**(code **)(*plVar20 + 0x308))
                      (param_1,param_2,param_3,uVar15,plVar20,iVar1,
                       *(undefined8 *)(*plVar20 + 0x310));
          }
        }
      }
LAB_02595424:
      lVar7 = *(long *)(param_4 + 0x80);
      iVar1 = iVar1 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

