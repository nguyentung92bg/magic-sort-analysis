/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWatersInside
System_Collections_Generic_List_WaterAndColor__o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersInside (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetWatersInside
   System_Collections_Generic_List_WaterAndColor__o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersInside
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetWatersInside_2498734
               (long param_1)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  
  puVar5 = PTR_DAT_057c3630;
  if ((bRam0000000005c2b309 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058089c8);
    FUN_012d0dc8(PTR_DAT_05793d90);
    FUN_012d0dc8(PTR_DAT_05770aa0);
    FUN_012d0dc8(PTR_DAT_058167f0);
    FUN_012d0dc8(PTR_DAT_05796ce8);
    FUN_012d0dc8(PTR_DAT_05780fc0);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_057c3630);
    FUN_012d0dc8(PTR_DAT_057cabb8);
    FUN_012d0dc8(PTR_DAT_057cc568);
    bRam0000000005c2b309 = 1;
  }
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_057cabb8;
  if (lVar8 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar8,*(undefined8 *)PTR_DAT_058167f0);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if (lVar9 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_05796ce8);
      puVar6 = PTR_DAT_057f2468;
      puVar5 = PTR_DAT_05770aa0;
      lVar10 = *(long *)(param_1 + 0x80);
      if (lVar10 != 0) {
        iVar16 = 0;
        do {
          if (*(int *)(lVar10 + 0x18) <= iVar16) {
            return lVar8;
          }
          lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar10,iVar16,*(undefined8 *)puVar6);
          if (lVar10 == 0) break;
          lVar10 = *(long *)(lVar10 + 0x20);
          if ((lVar10 != 0) &&
             (uVar11 = System_Collections_Generic_List_object___Contains_21fce6c
                                 (lVar9,lVar10,*(undefined8 *)puVar5), (uVar11 & 1) == 0)) {
            uVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                              (lVar10,0);
            uVar1 = *(undefined4 *)(lVar10 + 0x40);
            cVar2 = *(char *)(lVar10 + 0x54);
            cVar3 = *(char *)(lVar10 + 0x55);
            lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc568);
            if (lVar12 == 0) break;
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterAndColor___ctor_22f9dbc
                      (lVar12,lVar10,uVar7,uVar1,cVar2 != '\0',cVar3 != '\0',0);
            lVar14 = *(long *)(lVar8 + 0x10);
            lVar15 = *(long *)PTR_DAT_058089c8;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar14 == 0) break;
            uVar4 = *(uint *)(lVar8 + 0x18);
            if (uVar4 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar4 + 1;
              plVar13 = (long *)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
              *plVar13 = lVar12;
              FUN_012d0d74(plVar13,lVar12);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar8,lVar12);
            }
            lVar12 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)PTR_DAT_05793d90;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar12 == 0) break;
            uVar4 = *(uint *)(lVar9 + 0x18);
            if (uVar4 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar4 + 1;
              plVar13 = (long *)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
              *plVar13 = lVar10;
              FUN_012d0d74(plVar13,lVar10);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar9,lVar10);
            }
          }
          lVar10 = *(long *)(param_1 + 0x80);
          iVar16 = iVar16 + 1;
        } while (lVar10 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

