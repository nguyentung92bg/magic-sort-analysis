/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.LevelLoadButton$$Start
void Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadButton__Start (Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.LevelLoadButton$$Start
   void Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadButton__Start
   (Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadButton_o* __this, const MethodInfo* method);
    */

undefined8
Modules_LevelEditor_WaterSort_UI_Scripts_LevelLoadButton__Start_379ddc4
          (undefined1 param_1 [16],undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 uVar17;
  float fVar18;
  
  puVar2 = PTR_DAT_057bb220;
  if ((bRam0000000005c33dc6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bba10);
    FUN_012d0dc8(PTR_DAT_057bb220);
    FUN_012d0dc8(PTR_DAT_057f2cd0);
    FUN_012d0dc8(PTR_DAT_05798a80);
    FUN_012d0dc8(PTR_DAT_0577d7e8);
    FUN_012d0dc8(PTR_DAT_05765640);
    FUN_012d0dc8(PTR_DAT_05778c80);
    FUN_012d0dc8(PTR_DAT_057967f8);
    FUN_012d0dc8(PTR_DAT_057eeb40);
    FUN_012d0dc8(PTR_DAT_057d9a50);
    FUN_012d0dc8(PTR_DAT_057f9f28);
    bRam0000000005c33dc6 = 1;
  }
  plVar10 = (long *)FUN_012d0e38(*(undefined8 *)puVar2,1);
  puVar3 = PTR_DAT_057f2cd0;
  if (plVar10 == (long *)0x0) {
LAB_0389e12c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)PTR_DAT_057f2cd0 == 0) {
    lVar13 = 0;
    plVar11 = plVar10;
  }
  else {
    plVar11 = (long *)thunk_FUN_01320d5c(*(long *)PTR_DAT_057f2cd0,*(undefined8 *)(*plVar10 + 0x40))
    ;
    if (plVar11 == (long *)0x0) goto LAB_0389e120;
    lVar13 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_057bba10;
  if ((int)plVar10[3] == 0) {
LAB_0389e11c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8(plVar11,lVar13);
  }
  plVar10[4] = lVar13;
  FUN_012d0d74(plVar10 + 4,lVar13);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  SimpleFileBrowser_FileBrowser__SetFilters_3443904(1,plVar10,0);
  plVar10 = (long *)FUN_012d0e38(*(undefined8 *)puVar2,6);
  puVar2 = PTR_DAT_05798a80;
  if (plVar10 == (long *)0x0) goto LAB_0389e12c;
  if (*(long *)PTR_DAT_05798a80 == 0) {
    lVar13 = 0;
    plVar11 = plVar10;
  }
  else {
    plVar11 = (long *)thunk_FUN_01320d5c(*(long *)PTR_DAT_05798a80,*(undefined8 *)(*plVar10 + 0x40))
    ;
    if (plVar11 == (long *)0x0) goto LAB_0389e120;
    lVar13 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_05765640;
  if ((int)plVar10[3] == 0) goto LAB_0389e11c;
  plVar10[4] = lVar13;
  plVar11 = (long *)FUN_012d0d74(plVar10 + 4,lVar13);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    plVar11 = (long *)thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar10 + 0x40));
    if (plVar11 == (long *)0x0) goto LAB_0389e120;
    lVar13 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_05778c80;
  if (*(uint *)(plVar10 + 3) < 2) goto LAB_0389e11c;
  plVar10[5] = lVar13;
  plVar11 = (long *)FUN_012d0d74(plVar10 + 5,lVar13);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    plVar11 = (long *)thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar10 + 0x40));
    if (plVar11 == (long *)0x0) goto LAB_0389e120;
    lVar13 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_057d9a50;
  if (*(uint *)(plVar10 + 3) < 3) goto LAB_0389e11c;
  plVar10[6] = lVar13;
  plVar11 = (long *)FUN_012d0d74(plVar10 + 6,lVar13);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    plVar11 = (long *)thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar10 + 0x40));
    if (plVar11 == (long *)0x0) goto LAB_0389e120;
    lVar13 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_057967f8;
  if (*(uint *)(plVar10 + 3) < 4) goto LAB_0389e11c;
  plVar10[7] = lVar13;
  plVar11 = (long *)FUN_012d0d74(plVar10 + 7,lVar13);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    plVar11 = (long *)thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar10 + 0x40));
    if (plVar11 == (long *)0x0) goto LAB_0389e120;
    lVar13 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_0577d7e8;
  if (*(uint *)(plVar10 + 3) < 5) goto LAB_0389e11c;
  plVar10[8] = lVar13;
  plVar11 = (long *)FUN_012d0d74(plVar10 + 8,lVar13);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    plVar11 = (long *)thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar10 + 0x40));
    if (plVar11 == (long *)0x0) {
LAB_0389e120:
      uVar12 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar12,0);
    }
    lVar13 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_057f9f28;
  puVar2 = PTR_DAT_057eeb40;
  if (*(uint *)(plVar10 + 3) < 6) goto LAB_0389e11c;
  plVar10[9] = lVar13;
  FUN_012d0d74();
  SimpleFileBrowser_FileBrowser__SetExcludedExtensions_3439b74(plVar10,0);
  uVar12 = *(undefined8 *)puVar3;
  lVar13 = *(long *)puVar2;
  uVar15 = 0;
  if ((bRam0000000005c324ef & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bba10,lVar13,0,0);
    bRam0000000005c324ef = 1;
  }
  uVar8 = System_String__IsNullOrEmpty_1ed04ac(lVar13,0);
  if (((uVar8 & 1) != 0) ||
     (uVar8 = SimpleFileBrowser_FileBrowserHelpers__DirectoryExists_3438470(lVar13),
     puVar2 = PTR_DAT_057bba10, (uVar8 & 1) == 0)) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_057bba10;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar9 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x50) == '\0') {
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (cRam0000000005c32551 == '\0') {
      FUN_012d0dc8(PTR_DAT_057bba10);
      cRam0000000005c32551 = '\x01';
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar9 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x10) != '\0') {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      SimpleFileBrowser_FileBrowser__RequestPermission_34412f4();
      lVar9 = *(long *)puVar2;
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar9 = SimpleFileBrowser_FileBrowser__get_Instance_343554c();
    if (lVar9 == 0) goto LAB_03543850;
    SimpleFileBrowser_FileBrowser__InitializeQuickLinks_343b3ac();
    lVar9 = *(long *)puVar2;
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar9 = SimpleFileBrowser_FileBrowser__get_Instance_343554c();
  if (lVar9 == 0) {
LAB_03543850:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c324dd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f59c8);
    FUN_012d0dc8(PTR_DAT_05775f58);
    FUN_012d0dc8(PTR_DAT_057766b8);
    FUN_012d0dc8(PTR_DAT_057fb488);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c324dd = 1;
  }
  uVar8 = System_String__IsNullOrEmpty_1ed04ac(lVar13,0);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  uVar8 = SimpleFileBrowser_FileBrowserHelpers__ShouldUseSAFForPath_343828c(lVar13);
  if ((uVar8 & 1) == 0) {
    uVar8 = System_IO_Directory__Exists_3481cbc(lVar13,0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    if (lVar13 == 0) goto LAB_0353b830;
    uVar6 = System_String__Trim_1ed51e0(lVar13,0);
    lVar13 = SimpleFileBrowser_FileBrowser__GetPathWithoutTrailingDirectorySeparator_34382e8
                       (uVar6,uVar6);
  }
  puVar5 = PTR_DAT_057fb488;
  puVar4 = PTR_DAT_057f59c8;
  puVar3 = PTR_DAT_057766b8;
  puVar2 = PTR_DAT_0576c200;
  lVar7 = *(long *)(lVar9 + 0xd8);
  if (lVar7 != 0) {
    iVar16 = 0;
    do {
      fVar18 = (float)param_2;
      if (*(int *)(lVar7 + 0x18) <= iVar16) {
        uVar6 = *(undefined8 *)(lVar9 + 0xd0);
        uVar17 = *(undefined8 *)(lVar9 + 0x130);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar7 = UnityEngine_Object__Instantiate_object__2aac970
                          (uVar6,uVar17,0,*(undefined8 *)puVar5);
        if (lVar7 == 0) break;
        uVar6 = *(undefined8 *)(lVar9 + 0x18);
        *(long *)(lVar7 + 0x30) = lVar9;
        FUN_012d0d74((long *)(lVar7 + 0x30),lVar9);
        SimpleFileBrowser_FileBrowserItem__OnSkinRefreshed_343bf1c(lVar7,uVar6,0);
        uVar8 = UnityEngine_Object__op_Inequality_408e110(0,0,0);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(lVar9 + 0x18) == 0) break;
          uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x280);
        }
        SimpleFileBrowser_FileBrowserItem__SetFile_343b290(lVar7,uVar15,uVar12,1);
        *(long *)(lVar7 + 0x80) = lVar13;
        FUN_012d0d74((long *)(lVar7 + 0x80),lVar13);
        if (*(long *)(lVar9 + 0x130) != 0) {
          UnityEngine_RectTransform__get_sizeDelta_4094e94(*(long *)(lVar9 + 0x130),0);
          lVar13 = SimpleFileBrowser_FileBrowserItem__get_TransformComponent_343be44(lVar7);
          if (lVar13 != 0) {
            UnityEngine_RectTransform__set_anchoredPosition_4094e08(0,-fVar18,lVar13,0);
            if ((*(long *)(lVar9 + 0x18) != 0) && (*(long *)(lVar9 + 0x130) != 0)) {
              UnityEngine_RectTransform__set_sizeDelta_4094f24
                        (0,-(-fVar18 - *(float *)(*(long *)(lVar9 + 0x18) + 0x218)),
                         *(long *)(lVar9 + 0x130),0);
              lVar13 = *(long *)(lVar9 + 0xd8);
              if (lVar13 != 0) {
                lVar9 = *(long *)(lVar13 + 0x10);
                lVar14 = *(long *)puVar4;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar10 = lVar7;
                    FUN_012d0d74(plVar10,lVar7);
                  }
                  else {
                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                              (lVar13,lVar7);
                  }
                  return 1;
                }
              }
            }
          }
        }
        break;
      }
      lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar7,iVar16,*(undefined8 *)puVar3);
      if (lVar7 == 0) break;
      uVar8 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lVar7 + 0x80),lVar13,0);
      if ((uVar8 & 1) != 0) {
        return 0;
      }
      lVar7 = *(long *)(lVar9 + 0xd8);
      iVar16 = iVar16 + 1;
    } while (lVar7 != 0);
  }
LAB_0353b830:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

