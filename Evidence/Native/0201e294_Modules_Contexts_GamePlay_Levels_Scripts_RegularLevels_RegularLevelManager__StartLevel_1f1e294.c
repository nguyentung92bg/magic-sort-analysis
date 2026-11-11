/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevelManager$$StartLevel
void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager__StartLevel (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels.RegularLevelManager$$StartLevel
   void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager__StartLevel
   (Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_RegularLevels_RegularLevelManager__StartLevel_1f1e294
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c28668 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_058007e8);
    FUN_012d0dc8(PTR_DAT_057de4f8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057f8ce0);
    FUN_012d0dc8(PTR_DAT_058002f8);
    FUN_012d0dc8(PTR_DAT_05774d20);
    FUN_012d0dc8(PTR_DAT_0579f248);
    FUN_012d0dc8(PTR_DAT_0579e730);
    FUN_012d0dc8(PTR_DAT_057ef618);
    FUN_012d0dc8(PTR_DAT_0576d0a8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c28668 = 1;
  }
  puVar1 = PTR_DAT_057ef618;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  DG_Tweening_DOTween__KillAll_1eda810(0,0);
  *(undefined4 *)(param_1 + 0x40) = 1;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_058007e8;
  if (lVar5 == 0) goto LAB_0201e95c;
  System_Object___ctor_23dfe5c(lVar5,0);
  plVar10 = (long *)(param_1 + 0x38);
  *plVar10 = lVar5;
  FUN_012d0d74(plVar10,lVar5);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  if (cRam0000000005c244b6 == '\0') {
    FUN_012d0dc8(PTR_DAT_058007e8);
    cRam0000000005c244b6 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_057636d0;
  if (**(char **)(lVar5 + 0xb8) == '\0') {
    plVar12 = *(long **)(param_1 + 0x18);
    if (plVar12 == (long *)0x0) goto LAB_0201e95c;
    lVar5 = *plVar12;
    plVar11 = *(long **)(param_1 + 0x10);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0201e584;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057636d0,1);
LAB_0201e584:
    uVar4 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if (plVar11 == (long *)0x0) goto LAB_0201e95c;
    lVar5 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_057de4f8) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0201e5ec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057de4f8,0);
LAB_0201e5ec:
    lVar5 = (*(code *)*puVar7)(plVar11,uVar4,puVar7[1]);
    plVar12 = (long *)(param_1 + 0x48);
    *plVar12 = lVar5;
    FUN_012d0d74(plVar12,lVar5);
    puVar2 = PTR_DAT_0579e730;
    lVar5 = *plVar12;
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) goto LAB_0201e95c;
    if ((*(char *)(*(long *)(lVar5 + 0x18) + 0x44) != '\0') &&
       ((lVar5 = *(long *)(lVar5 + 0x30), lVar5 != 0 && (*(int *)(lVar5 + 0x18) != 0)))) {
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar5,0,*(undefined8 *)PTR_DAT_0579e730);
      if ((lVar5 == 0) ||
         ((*(long *)(lVar5 + 0x28) != 0 &&
          ((((*plVar12 == 0 || (lVar5 = *(long *)(*plVar12 + 0x30), lVar5 == 0)) ||
            (lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar5,0,*(undefined8 *)puVar2), lVar5 == 0)) ||
           (*(long *)(lVar5 + 0x28) == 0)))))) goto LAB_0201e95c;
    }
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (plVar12 = *(long **)(param_1 + 0x18), plVar12 == (long *)0x0)) goto LAB_0201e95c;
    lVar5 = *plVar12;
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x1a) * 0x10 + 0x138);
          goto LAB_0201e6e4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,0x1a);
LAB_0201e6e4:
    (*(code *)*puVar7)(plVar12,uVar13,puVar7[1]);
    plVar12 = *(long **)(param_1 + 0x18);
    if (plVar12 == (long *)0x0) goto LAB_0201e95c;
    lVar5 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_0201e74c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,4);
LAB_0201e74c:
    (*(code *)*puVar7)(plVar12,puVar7[1]);
    plVar12 = *(long **)(param_1 + 0x18);
    if (plVar12 == (long *)0x0) goto LAB_0201e95c;
    lVar5 = *plVar12;
    lVar6 = *(long *)(param_1 + 0x48);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_0201e7b4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,9);
LAB_0201e7b4:
    uVar4 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if (lVar6 == 0) goto LAB_0201e95c;
    *(undefined4 *)(lVar6 + 0x4c) = uVar4;
    plVar12 = *(long **)(param_1 + 0x18);
    if (plVar12 == (long *)0x0) goto LAB_0201e95c;
    lVar5 = *plVar12;
    lVar6 = *(long *)(param_1 + 0x48);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x44) * 0x10 + 0x138);
          goto LAB_0201e824;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,0x44);
LAB_0201e824:
    uVar4 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if (lVar6 == 0) goto LAB_0201e95c;
    *(undefined4 *)(lVar6 + 0x50) = uVar4;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0201e95c;
    lVar5 = *(long *)(param_1 + 0x48);
    bVar3 = Modules_Contexts_Home_MagicBottle_Scripts_MagicBottleService__HasMagicBottle_375d4e4
                      (*(long *)(param_1 + 0x28),0);
    if (lVar5 == 0) goto LAB_0201e95c;
    *(byte *)(lVar5 + 0x48) = bVar3 & 1;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0201e95c;
    lVar5 = *(long *)(param_1 + 0x48);
    bVar3 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__IsActive_246d404
                      (*(long *)(param_1 + 0x30),0);
    if (lVar5 == 0) goto LAB_0201e95c;
    *(byte *)(lVar5 + 0x49) = bVar3 & 1;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0201e95c;
    uVar8 = Modules_Contexts_Home_Snitch_Scripts_SnitchService__IsActive_246d404
                      (*(long *)(param_1 + 0x30),0);
    if ((uVar8 & 1) != 0) {
      plVar12 = *(long **)(param_1 + 0x18);
      if (plVar12 == (long *)0x0) goto LAB_0201e95c;
      lVar5 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x30) * 0x10 + 0x138);
            goto LAB_0201e8e4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar1,0x30);
LAB_0201e8e4:
      (*(code *)*puVar7)(plVar12,puVar7[1]);
    }
  }
  else {
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f8ce0);
    if (lVar5 == 0) goto LAB_0201e95c;
    System_Object___ctor_23dfe5c(lVar5,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (cRam0000000005c2819d == '\0') {
      FUN_012d0dc8(PTR_DAT_058007e8);
      cRam0000000005c2819d = '\x01';
    }
    puVar1 = PTR_DAT_058002f8;
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar2;
    }
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    FUN_012d0d74();
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar6 == 0) goto LAB_0201e95c;
    Modules_Contexts_GamePlay_Levels_Scripts_LevelModelService_LevelConfigModel___ctor_1e8d308
              (lVar6,0);
    *(undefined1 *)(lVar6 + 0x44) = 0;
    *(long *)(lVar5 + 0x18) = lVar6;
    FUN_012d0d74((long *)(lVar5 + 0x18),lVar6);
    if (cRam0000000005c2819d == '\0') {
      FUN_012d0dc8(PTR_DAT_058007e8);
      cRam0000000005c2819d = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_0201e95c;
    *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar6 + 0x20);
    FUN_012d0d74();
    uVar13 = _UNK_04339c10;
    *(undefined2 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x4c) = uVar13;
    *(long *)(param_1 + 0x48) = lVar5;
    FUN_012d0d74((long *)(param_1 + 0x48),lVar5);
  }
  puVar1 = PTR_DAT_057b8520;
  puVar2 = PTR_DAT_0576d0a8;
  plVar10 = (long *)*plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x178))
              (plVar10,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(*plVar10 + 0x180));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar5,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        return;
      }
    }
  }
LAB_0201e95c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

