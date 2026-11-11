/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$GetNewBlockerToIntroduce
int32_t Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__GetNewBlockerToIntroduce (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevel$$GetNewBlockerToIntroduce
   int32_t
   Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__GetNewBlockerToIntroduce
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevel__GetNewBlockerToIntroduce_1f1d5f0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c28662 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c28662 = 1;
  }
  lVar10 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
    plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar10,*(undefined8 *)PTR_DAT_057a1e60);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar10 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GetBlockers_2d95288
                           (*(long *)(param_1 + 0x40),0), puVar3 = PTR_DAT_05802430,
       puVar1 = PTR_DAT_057636d0, lVar10 != 0)) {
      if (0 < *(int *)(lVar10 + 0x18)) {
        iVar5 = 0;
        do {
          lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                            (lVar10,iVar5,*(undefined8 *)puVar3);
          if (lVar7 == 0) goto LAB_0201da14;
          uVar12 = *(uint *)(lVar7 + 0x18);
          if ((0x1c < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x10002878U) == 0)) {
            uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                              (uVar12,0);
            if (plVar6 == (long *)0x0) goto LAB_0201da14;
            lVar7 = *plVar6;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
                  goto LAB_0201d788;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0x14);
LAB_0201d788:
            uVar8 = (*(code *)*puVar9)(plVar6,uVar4,puVar9[1]);
            if ((uVar8 & 1) == 0) {
              if (uVar12 != 0) {
                return uVar12;
              }
              break;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar10 + 0x18));
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        uVar8 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__HasLongBottle_2d9537c
                          (*(long *)(param_1 + 0x40),0);
        if ((uVar8 & 1) != 0) {
          uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                            (0x15,0);
          if (plVar6 == (long *)0x0) goto LAB_0201da14;
          lVar10 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
                goto LAB_0201d818;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0x14);
LAB_0201d818:
          uVar8 = (*(code *)*puVar9)(plVar6,uVar4,puVar9[1]);
          if ((uVar8 & 1) == 0) {
            return 0x15;
          }
        }
        lVar10 = **(long **)(*(long *)puVar2 + 0xb8);
        if ((((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) &&
            (lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar10,*(undefined8 *)PTR_DAT_057d9070), lVar10 != 0)) &&
           (*(long *)(lVar10 + 0x10) != 0)) {
          lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x20);
          if (lVar10 == 0) {
            return 0;
          }
          if (plVar6 != (long *)0x0) {
            lVar7 = *plVar6;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_0201d8c4;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,1);
LAB_0201d8c4:
            iVar5 = (*(code *)*puVar9)(plVar6,puVar9[1]);
            if (*(int *)(lVar10 + 0x10) == iVar5) {
              uVar12 = 4;
            }
            else if (*(int *)(lVar10 + 0x14) == iVar5) {
              uVar12 = 6;
            }
            else {
              if (*(int *)(lVar10 + 0x18) != iVar5) {
                Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                          (0,0);
                return 0;
              }
              uVar12 = 5;
            }
            uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPairs__ToItemId_2304c7c
                              (uVar12,0);
            lVar10 = *plVar6;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 0x16) * 0x10 + 0x138);
                  goto LAB_0201d968;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0x16);
LAB_0201d968:
            uVar8 = (*(code *)*puVar9)(plVar6,uVar12,puVar9[1]);
            if ((uVar8 & 1) == 0) {
              return uVar12;
            }
            lVar10 = *plVar6;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar9 = (undefined8 *)(lVar10 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
                  goto LAB_0201d9cc;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar1,0x14);
LAB_0201d9cc:
            uVar8 = (*(code *)*puVar9)(plVar6,uVar4,puVar9[1]);
            if ((uVar8 & 1) != 0) {
              return 0;
            }
            return uVar12;
          }
        }
      }
    }
  }
LAB_0201da14:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

