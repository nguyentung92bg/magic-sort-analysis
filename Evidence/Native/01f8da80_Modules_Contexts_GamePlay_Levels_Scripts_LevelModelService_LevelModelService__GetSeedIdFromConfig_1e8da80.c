/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetSeedIdFromConfig
System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o* levelConfigModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetSeedIdFromConfig
   System_String_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel_o* levelConfigModel,
   const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig_1e8da80
               (long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  
  if ((bRam0000000005c2811a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dbb00);
    FUN_012d0dc8(PTR_DAT_0576cd98);
    bRam0000000005c2811a = 1;
  }
  uVar14 = *(uint *)(param_1 + 0x38);
  if ((int)uVar14 < 0) {
    if (param_2 == 0) goto LAB_01f8db14;
  }
  else {
    if ((param_2 == 0) || (lVar10 = *(long *)(param_2 + 0x10), lVar10 == 0)) {
LAB_01f8db14:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if ((int)uVar14 < *(int *)(lVar10 + 0x18)) {
      uVar15 = *(undefined8 *)PTR_DAT_0576cd98;
      goto System_Collections_Generic_List_object___get_Item_21fc76c;
    }
  }
  lVar10 = *(long *)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x20);
  lVar16 = *(long *)(param_2 + 0x28);
  if ((bRam0000000005c2811b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_0579d3c8);
    FUN_012d0dc8(PTR_DAT_057ebff0);
    FUN_012d0dc8(PTR_DAT_057dbb00);
    FUN_012d0dc8(PTR_DAT_0576cd98);
    FUN_012d0dc8(PTR_DAT_05778c18);
    bRam0000000005c2811b = 1;
  }
  if (lVar16 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01f8e8d0;
    uVar11 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__IsActive_246d404
                       (*(long *)(param_1 + 0x30),0);
    if (((uVar11 & 1) != 0) &&
       (uVar11 = System_String__IsNullOrEmpty_1ed04ac(lVar16,0), (uVar11 & 1) == 0)) {
      return lVar16;
    }
  }
  puVar3 = PTR_DAT_057636d0;
  plVar18 = *(long **)(param_1 + 0x18);
  if (plVar18 == (long *)0x0) {
LAB_01f8e8d0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar16 = *plVar18;
  uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
  if (uVar11 != 0) {
    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 9) * 0x10 + 0x138);
        goto LAB_01f8e634;
      }
      uVar11 = uVar11 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar11 != 0);
  }
  puVar12 = (undefined8 *)FUN_0131971c(plVar18,*(long *)PTR_DAT_057636d0,9);
LAB_01f8e634:
  iVar8 = (*(code *)*puVar12)(plVar18,puVar12[1]);
  plVar18 = *(long **)(param_1 + 0x18);
  if (plVar18 == (long *)0x0) goto LAB_01f8e8d0;
  lVar16 = *plVar18;
  uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
  if (uVar11 != 0) {
    piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
        puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 0x2f) * 0x10 + 0x138);
        goto LAB_01f8e69c;
      }
      uVar11 = uVar11 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar11 != 0);
  }
  puVar12 = (undefined8 *)FUN_0131971c(plVar18,*(long *)puVar3,0x2f);
LAB_01f8e69c:
  puVar7 = PTR_DAT_057ebff0;
  puVar6 = PTR_DAT_0579d3c8;
  puVar5 = PTR_DAT_05778c18;
  puVar4 = PTR_DAT_0576cd98;
  iVar9 = (*(code *)*puVar12)(plVar18,puVar12[1]);
  uVar14 = iVar8 - iVar9 & (iVar8 - iVar9 >> 0x1f ^ 0xffffffffU);
  if (((lVar13 == 0) || (uVar2 = uVar14 - iVar1, (int)uVar14 < iVar1)) ||
     (*(int *)(lVar13 + 0x18) < 1)) {
    if (lVar10 == 0) goto LAB_01f8e8d0;
    if ((int)uVar14 < *(int *)(lVar10 + 0x18)) {
      uVar15 = *(undefined8 *)puVar4;
      goto System_Collections_Generic_List_object___get_Item_21fc76c;
    }
    lVar13 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if (lVar13 == 0) goto LAB_01f8e8d0;
    System_Collections_Generic_List_object____ctor_21fc324(lVar13,lVar10,*(undefined8 *)puVar7);
    plVar18 = *(long **)(param_1 + 0x18);
    if (plVar18 == (long *)0x0) goto LAB_01f8e8d0;
    lVar16 = *plVar18;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar11 != 0) {
      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 0x1b) * 0x10 + 0x138);
          goto LAB_01f8e810;
        }
        uVar11 = uVar11 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_0131971c(plVar18,*(long *)puVar3,0x1b);
LAB_01f8e810:
    uVar15 = (*(code *)*puVar12)(plVar18,puVar12[1]);
    System_Collections_Generic_List_object___Remove_21fe044(lVar13,uVar15,*(undefined8 *)puVar6);
    iVar1 = *(int *)(lVar13 + 0x18);
    iVar8 = UnityEngine_Random__Range_383a650(0,100,0);
    if (iVar1 == 0) goto LAB_01f8e8a0;
  }
  else {
    if ((int)uVar2 < *(int *)(lVar13 + 0x18)) {
      uVar15 = *(undefined8 *)puVar4;
      lVar10 = lVar13;
      uVar14 = uVar2;
      goto System_Collections_Generic_List_object___get_Item_21fc76c;
    }
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
    if (lVar10 == 0) goto LAB_01f8e8d0;
    System_Collections_Generic_List_object____ctor_21fc324(lVar10,lVar13,*(undefined8 *)puVar7);
    plVar18 = *(long **)(param_1 + 0x18);
    if (plVar18 == (long *)0x0) goto LAB_01f8e8d0;
    lVar16 = *plVar18;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar11 != 0) {
      piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar17 + 0x1b) * 0x10 + 0x138);
          goto LAB_01f8e86c;
        }
        uVar11 = uVar11 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_0131971c(plVar18,*(long *)puVar3,0x1b);
LAB_01f8e86c:
    uVar15 = (*(code *)*puVar12)(plVar18,puVar12[1]);
    System_Collections_Generic_List_object___Remove_21fe044(lVar10,uVar15,*(undefined8 *)puVar6);
    iVar1 = *(int *)(lVar10 + 0x18);
    iVar8 = UnityEngine_Random__Range_383a650(0,100,0);
    if (iVar1 != 0) {
LAB_01f8e8a0:
      iVar1 = *(int *)(lVar10 + 0x18);
      uVar15 = *(undefined8 *)puVar4;
      iVar9 = 0;
      if (iVar1 != 0) {
        iVar9 = iVar8 / iVar1;
      }
      uVar14 = iVar8 - iVar9 * iVar1;
      goto System_Collections_Generic_List_object___get_Item_21fc76c;
    }
  }
  lVar10 = lVar13;
  iVar1 = *(int *)(lVar10 + 0x18);
  uVar15 = *(undefined8 *)puVar4;
  iVar9 = 0;
  if (iVar1 != 0) {
    iVar9 = iVar8 / iVar1;
  }
  uVar14 = iVar8 - iVar9 * iVar1;
System_Collections_Generic_List_object___get_Item_21fc76c:
  if (*(uint *)(lVar10 + 0x18) <= uVar14) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4(0,uVar14,uVar15);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
  return *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
}

