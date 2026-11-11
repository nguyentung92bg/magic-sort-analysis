/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetSeedIdFromConfig
System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this, System_Collections_Generic_List_string__o* dlbSeeds, System_Collections_Generic_List_string__o* seeds, int32_t dlbCap, System_String_o* slSeed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService.LevelModelService$$GetSeedIdFromConfig
   System_String_o*
   Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService_o* __this,
   System_Collections_Generic_List_string__o* dlbSeeds, System_Collections_Generic_List_string__o*
   seeds, int32_t dlbCap, System_String_o* slSeed, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelModelService__GetSeedIdFromConfig_1e8e524
               (long param_1,long param_2,long param_3,int param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  
  if ((bRam0000000005c2811b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_0579d3c8);
    FUN_012d0dc8(PTR_DAT_057ebff0);
    FUN_012d0dc8(PTR_DAT_057dbb00);
    FUN_012d0dc8(PTR_DAT_0576cd98);
    FUN_012d0dc8(PTR_DAT_05778c18);
    bRam0000000005c2811b = 1;
  }
  if (param_5 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01f8e8d0;
    uVar9 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__IsActive_246d404
                      (*(long *)(param_1 + 0x30),0);
    if (((uVar9 & 1) != 0) &&
       (uVar9 = System_String__IsNullOrEmpty_1ed04ac(param_5,0), (uVar9 & 1) == 0)) {
      return param_5;
    }
  }
  puVar2 = PTR_DAT_057636d0;
  plVar15 = *(long **)(param_1 + 0x18);
  if (plVar15 == (long *)0x0) {
LAB_01f8e8d0:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar13 = *plVar15;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 9) * 0x10 + 0x138);
        goto LAB_01f8e634;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_0131971c(plVar15,*(long *)PTR_DAT_057636d0,9);
LAB_01f8e634:
  iVar7 = (*(code *)*puVar10)(plVar15,puVar10[1]);
  plVar15 = *(long **)(param_1 + 0x18);
  if (plVar15 == (long *)0x0) goto LAB_01f8e8d0;
  lVar13 = *plVar15;
  uVar9 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x2f) * 0x10 + 0x138);
        goto LAB_01f8e69c;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar10 = (undefined8 *)FUN_0131971c(plVar15,*(long *)puVar2,0x2f);
LAB_01f8e69c:
  puVar6 = PTR_DAT_057ebff0;
  puVar5 = PTR_DAT_0579d3c8;
  puVar4 = PTR_DAT_05778c18;
  puVar3 = PTR_DAT_0576cd98;
  iVar8 = (*(code *)*puVar10)(plVar15,puVar10[1]);
  uVar11 = iVar7 - iVar8 & (iVar7 - iVar8 >> 0x1f ^ 0xffffffffU);
  if (((param_2 == 0) || ((int)uVar11 < param_4)) || (*(int *)(param_2 + 0x18) < 1)) {
    if (param_3 == 0) goto LAB_01f8e8d0;
    if ((int)uVar11 < *(int *)(param_3 + 0x18)) {
      uVar12 = *(undefined8 *)puVar3;
      goto LAB_01f8e8b4;
    }
    param_2 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (param_2 == 0) goto LAB_01f8e8d0;
    System_Collections_Generic_List_object____ctor_21fc324(param_2,param_3,*(undefined8 *)puVar6);
    plVar15 = *(long **)(param_1 + 0x18);
    if (plVar15 == (long *)0x0) goto LAB_01f8e8d0;
    lVar13 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x1b) * 0x10 + 0x138);
          goto LAB_01f8e810;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_0131971c(plVar15,*(long *)puVar2,0x1b);
LAB_01f8e810:
    uVar12 = (*(code *)*puVar10)(plVar15,puVar10[1]);
    System_Collections_Generic_List_object___Remove_21fe044(param_2,uVar12,*(undefined8 *)puVar5);
    iVar7 = *(int *)(param_2 + 0x18);
    iVar8 = UnityEngine_Random__Range_383a650(0,100,0);
    if (iVar7 != 0) goto LAB_01f8e844;
  }
  else {
    if ((int)(uVar11 - param_4) < *(int *)(param_2 + 0x18)) {
      uVar12 = *(undefined8 *)puVar3;
      param_3 = param_2;
      uVar11 = uVar11 - param_4;
      goto LAB_01f8e8b4;
    }
    param_3 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (param_3 == 0) goto LAB_01f8e8d0;
    System_Collections_Generic_List_object____ctor_21fc324(param_3,param_2,*(undefined8 *)puVar6);
    plVar15 = *(long **)(param_1 + 0x18);
    if (plVar15 == (long *)0x0) goto LAB_01f8e8d0;
    lVar13 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0x1b) * 0x10 + 0x138);
          goto LAB_01f8e86c;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_0131971c(plVar15,*(long *)puVar2,0x1b);
LAB_01f8e86c:
    uVar12 = (*(code *)*puVar10)(plVar15,puVar10[1]);
    System_Collections_Generic_List_object___Remove_21fe044(param_3,uVar12,*(undefined8 *)puVar5);
    iVar7 = *(int *)(param_3 + 0x18);
    iVar8 = UnityEngine_Random__Range_383a650(0,100,0);
    if (iVar7 == 0) {
LAB_01f8e844:
      param_3 = param_2;
      iVar7 = *(int *)(param_3 + 0x18);
      uVar12 = *(undefined8 *)puVar3;
      iVar1 = 0;
      if (iVar7 != 0) {
        iVar1 = iVar8 / iVar7;
      }
      uVar11 = iVar8 - iVar1 * iVar7;
      goto LAB_01f8e8b4;
    }
  }
  iVar7 = *(int *)(param_3 + 0x18);
  uVar12 = *(undefined8 *)puVar3;
  iVar1 = 0;
  if (iVar7 != 0) {
    iVar1 = iVar8 / iVar7;
  }
  uVar11 = iVar8 - iVar1 * iVar7;
LAB_01f8e8b4:
  if (*(uint *)(param_3 + 0x18) <= uVar11) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4(0,uVar11,uVar12);
  }
  lVar13 = *(long *)(param_3 + 0x10);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
  return *(long *)(lVar13 + (long)(int)uVar11 * 8 + 0x20);
}

