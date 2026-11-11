/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$ApplyInitialBoard
void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ApplyInitialBoard (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBoard_o* initialBoard, System_Collections_Generic_List_BottleItem__o* availableBottles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$ApplyInitialBoard
   void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ApplyInitialBoard
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBoard_o* initialBoard,
   System_Collections_Generic_List_BottleItem__o* availableBottles, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ApplyInitialBoard_1e95aa4
               (undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c28169 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_058089c8);
    FUN_012d0dc8(PTR_DAT_0579e650);
    FUN_012d0dc8(PTR_DAT_057822a8);
    FUN_012d0dc8(PTR_DAT_058167f0);
    FUN_012d0dc8(PTR_DAT_0580b008);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_057cbfe8);
    FUN_012d0dc8(PTR_DAT_057f55a8);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_0575aab8);
    FUN_012d0dc8(PTR_DAT_057e0428);
    FUN_012d0dc8(PTR_DAT_057f2468);
    FUN_012d0dc8(PTR_DAT_057c3630);
    FUN_012d0dc8(PTR_DAT_057cc568);
    bRam0000000005c28169 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c3630);
  if ((lVar7 != 0) &&
     (System_Collections_Generic_List_object____ctor_21fc26c
                (lVar7,4,*(undefined8 *)PTR_DAT_0580b008), puVar5 = PTR_DAT_057f2468,
     puVar4 = PTR_DAT_057e1088, param_3 != 0)) {
    if (0 < *(int *)(param_3 + 0x18)) {
      iVar15 = 0;
      do {
        lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (param_3,iVar15,*(undefined8 *)PTR_DAT_057b43e8);
        if ((((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
            (lVar9 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (*(long *)(param_2 + 0x10),iVar15,*(undefined8 *)PTR_DAT_0575aab8),
            lVar8 == 0)) || ((lVar9 == 0 || (lVar10 = *(long *)(lVar9 + 0x10), lVar10 == 0))))
        goto LAB_01f99608;
        lVar16 = *(long *)(lVar8 + 0x80);
        iVar17 = 0;
        while (iVar17 < *(int *)(lVar10 + 0x18)) {
          uVar6 = System_Collections_Generic_List_Int32Enum___get_Item_2051860
                            (lVar10,iVar17,*(undefined8 *)PTR_DAT_057e0428);
          if (lVar16 == 0) goto LAB_01f99608;
          lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar16,iVar17,*(undefined8 *)puVar5);
          if (lVar10 == 0) goto LAB_01f99608;
          if (*(long *)(lVar10 + 0x20) == 0) {
            lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc568);
            if (lVar10 == 0) goto LAB_01f99608;
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterAndColor___ctor_22f9dbc
                      (lVar10,0,uVar6,1,1,0,0);
            lVar13 = *(long *)(lVar7 + 0x10);
            lVar14 = *(long *)PTR_DAT_058089c8;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_01f99608;
            uVar3 = *(uint *)(lVar7 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar3 + 1;
              plVar11 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
              *plVar11 = lVar10;
              FUN_012d0d74(plVar11,lVar10);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar7,lVar10);
            }
          }
          else {
            lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar16,iVar17,*(undefined8 *)puVar5);
            if ((lVar10 == 0) || (*(long *)(lVar10 + 0x20) == 0)) goto LAB_01f99608;
            cVar1 = *(char *)(*(long *)(lVar10 + 0x20) + 0x54);
            lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar16,iVar17,*(undefined8 *)puVar5);
            if ((lVar10 == 0) || (*(long *)(lVar10 + 0x20) == 0)) goto LAB_01f99608;
            cVar2 = *(char *)(*(long *)(lVar10 + 0x20) + 0x55);
            lVar10 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cc568);
            if (lVar10 == 0) goto LAB_01f99608;
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterAndColor___ctor_22f9dbc
                      (lVar10,0,uVar6,1,cVar1 != '\0',cVar2 != '\0',0);
            lVar13 = *(long *)(lVar7 + 0x10);
            lVar14 = *(long *)PTR_DAT_058089c8;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_01f99608;
            uVar3 = *(uint *)(lVar7 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar3 + 1;
              plVar11 = (long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20);
              *plVar11 = lVar10;
              FUN_012d0d74(plVar11,lVar10);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar7,lVar10);
            }
            lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar16,iVar17,*(undefined8 *)puVar5);
            if ((lVar10 == 0) || (*(long *)(lVar10 + 0x20) == 0)) goto LAB_01f99608;
            Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98
                      (*(long *)(lVar10 + 0x20),0);
          }
          lVar10 = *(long *)(lVar9 + 0x10);
          iVar17 = iVar17 + 1;
          if (lVar10 == 0) goto LAB_01f99608;
        }
        if (lVar16 == 0) goto LAB_01f99608;
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_98,lVar16,*(undefined8 *)PTR_DAT_057822a8);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        lStack_70 = lStack_88;
        while (uVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_80,*(undefined8 *)puVar4), lVar9 = lStack_70,
              (uVar12 & 1) != 0) {
          if (*(int *)(lVar7 + 0x18) == 0) {
            if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            plVar11 = *(long **)(lStack_70 + 0x30);
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x218))
                        (plVar11,*(undefined8 *)(lStack_70 + 0x20),*(undefined8 *)(*plVar11 + 0x220)
                        );
            }
            Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayBottleEmptyAnimation_249eaa4
                      (lVar8,0);
          }
          else if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(long *)(lVar9 + 0x20) != 0) {
            Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98
                      (*(long *)(lVar9 + 0x20),0);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_80,*(undefined8 *)PTR_DAT_05795370);
        lVar9 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c3630);
        if (lVar9 == 0) goto LAB_01f99608;
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar9,*(undefined8 *)PTR_DAT_058167f0);
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleData_249c40c
                  (lVar8,lVar7,lVar9,1,0);
        iVar17 = *(int *)(lVar7 + 0x18);
        *(undefined4 *)(lVar7 + 0x18) = 0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (0 < iVar17) {
          System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar17,0);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(param_3 + 0x18));
    }
    return;
  }
LAB_01f99608:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

