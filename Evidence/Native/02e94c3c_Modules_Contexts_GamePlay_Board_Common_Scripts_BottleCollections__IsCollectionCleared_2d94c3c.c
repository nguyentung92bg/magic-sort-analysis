/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$IsCollectionCleared
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsCollectionCleared (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$IsCollectionCleared
   bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsCollectionCleared
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__IsCollectionCleared_2d94c3c
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  
  puVar1 = PTR_DAT_058007e8;
  if ((bRam0000000005c2f9fa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_058007e8);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c2f9fa = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if (cRam0000000005c244b6 == '\0') {
    FUN_012d0dc8(PTR_DAT_058007e8);
    cRam0000000005c244b6 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar4 = *(long *)puVar1;
  }
  if (**(char **)(lVar4 + 0xb8) != '\0') {
    return 0;
  }
  if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
      (lVar4 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar4 != 0)) &&
     (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar4,*(undefined8 *)PTR_DAT_057e8f70), plVar5 != (long *)0x0)) {
    lVar4 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02e94dc0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_0581aae8,0);
LAB_02e94dc0:
    iVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar2 = PTR_DAT_057b43e8;
    puVar1 = PTR_DAT_057b0e08;
    if ((iVar3 != 7) && (iVar3 != 1)) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x18) < 1) {
        return 1;
      }
      iVar3 = 0;
      while (lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar4,iVar3,*(undefined8 *)puVar1), lVar7 != 0) {
        if (0 < *(int *)(lVar7 + 0x18)) {
          iVar11 = 0;
          do {
            lVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar7,iVar11,*(undefined8 *)puVar2);
            if (lVar8 == 0) goto LAB_02e94e84;
            uVar9 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__IsClear_2499014
                              (lVar8,0);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(lVar7 + 0x18));
        }
        iVar3 = iVar3 + 1;
        if (*(int *)(lVar4 + 0x18) <= iVar3) {
          return 1;
        }
      }
    }
  }
LAB_02e94e84:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

