/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddShelvesIfNeeded
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddShelvesIfNeeded (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t levelDifficultyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$AddShelvesIfNeeded
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddShelvesIfNeeded
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t
   levelDifficultyType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__AddShelvesIfNeeded_2f68de4
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  
  if ((bRam0000000005c3090a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577e0d0);
    FUN_012d0dc8(PTR_DAT_05761378);
    FUN_012d0dc8(PTR_DAT_057a3578);
    FUN_012d0dc8(PTR_DAT_05800018);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    FUN_012d0dc8(PTR_DAT_057fd598);
    bRam0000000005c3090a = 1;
  }
  puVar4 = PTR_DAT_057b43e8;
  puVar3 = PTR_DAT_0577e0d0;
  puVar2 = PTR_DAT_05761378;
  if (*(long *)(param_1 + 0x48) != 0) {
    if ((*(char *)(*(long *)(param_1 + 0x48) + 0x39) == '\0') || (*(char *)(param_1 + 0x58) != '\0')
       ) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      iVar15 = 0;
      do {
        if (*(int *)(lVar5 + 0x18) <= iVar15) {
          return;
        }
        lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar5,iVar15,*(undefined8 *)PTR_DAT_057b0e08);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057fd598);
        if ((lVar6 == 0) ||
           (System_Collections_Generic_List_object____ctor_21fc1fc
                      (lVar6,*(undefined8 *)PTR_DAT_05800018), lVar5 == 0)) break;
        iVar11 = *(int *)(lVar5 + 0x18);
        if (0 < iVar11) {
          iVar16 = 0;
          lVar12 = 0;
          do {
            lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar5,iVar16,*(undefined8 *)puVar4);
            if (((lVar12 != 0) &&
                (uVar8 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__HasLongBottleBelowBetween_22fb66c
                                   (*(undefined8 *)(param_1 + 0x18),lVar12,lVar7,iVar15,
                                    *(undefined4 *)(param_1 + 0x60),0), (uVar8 & 1) != 0)) &&
               (0 < (int)*(uint *)(lVar6 + 0x18))) {
              if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x28) == 0))
              goto LAB_03069154;
              uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetShelf_23041e0
                                (*(long *)(param_1 + 0x28),
                                 *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),lVar6,
                                 ~(~*(uint *)(lVar6 + 0x18) + iVar16) >> 0x1f,1,param_2,0);
              lVar12 = *(long *)(param_1 + 0x98);
              if (lVar12 == 0) goto LAB_03069154;
              lVar13 = *(long *)(lVar12 + 0x10);
              lVar14 = *(long *)puVar2;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_03069154;
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                FUN_012d0d74();
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar12);
              }
              iVar11 = *(int *)(lVar6 + 0x18);
              *(undefined4 *)(lVar6 + 0x18) = 0;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (0 < iVar11) {
                System_Array__Clear_26a6bec(*(undefined8 *)(lVar6 + 0x10),0,iVar11,0);
              }
            }
            lVar12 = *(long *)(lVar6 + 0x10);
            lVar13 = *(long *)puVar3;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_03069154;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar7;
              FUN_012d0d74(plVar10,lVar7);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar6,lVar7);
            }
            iVar11 = *(int *)(lVar5 + 0x18);
            iVar16 = iVar16 + 1;
            lVar12 = lVar7;
          } while (iVar16 < iVar11);
        }
        if (0 < (int)*(uint *)(lVar6 + 0x18)) {
          if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x28) == 0)) break;
          uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetShelf_23041e0
                            (*(long *)(param_1 + 0x28),
                             *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),lVar6,
                             ~(iVar11 + ~*(uint *)(lVar6 + 0x18)) >> 0x1f,0,param_2,0);
          lVar5 = *(long *)(param_1 + 0x98);
          if (lVar5 == 0) break;
          lVar6 = *(long *)(lVar5 + 0x10);
          lVar12 = *(long *)puVar2;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 == 0) break;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
            FUN_012d0d74();
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))(lVar5);
          }
        }
        lVar5 = *(long *)(param_1 + 0x18);
        iVar15 = iVar15 + 1;
      } while (lVar5 != 0);
    }
  }
LAB_03069154:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

