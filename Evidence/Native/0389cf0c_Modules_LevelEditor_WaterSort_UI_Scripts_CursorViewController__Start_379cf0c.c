/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.CursorViewController$$Start
void Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController__Start (Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.CursorViewController$$Start
   void Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController__Start
   (Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController_o* __this, const MethodInfo*
   method); */

undefined8
Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController__Start_379cf0c
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
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  
  puVar3 = PTR_DAT_057bb220;
  puVar2 = PTR_DAT_0576b9f0;
  if ((bRam0000000005c33dbc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bba10);
    FUN_012d0dc8(PTR_DAT_0576b9f0);
    FUN_012d0dc8(PTR_DAT_057dfa78);
    FUN_012d0dc8(PTR_DAT_057bb220);
    FUN_012d0dc8(PTR_DAT_05798a80);
    FUN_012d0dc8(PTR_DAT_0577d7e8);
    FUN_012d0dc8(PTR_DAT_05765640);
    FUN_012d0dc8(PTR_DAT_0578cc18);
    FUN_012d0dc8(PTR_DAT_057e0158);
    FUN_012d0dc8(PTR_DAT_05778c80);
    FUN_012d0dc8(PTR_DAT_0579fba0);
    FUN_012d0dc8(PTR_DAT_057967f8);
    FUN_012d0dc8(PTR_DAT_057eeb40);
    FUN_012d0dc8(PTR_DAT_057d9a50);
    FUN_012d0dc8(PTR_DAT_057f9f28);
    FUN_012d0dc8(PTR_DAT_0575b3b8);
    FUN_012d0dc8(PTR_DAT_057c6898);
    bRam0000000005c33dbc = 1;
  }
  plVar9 = (long *)FUN_012d0e38(*(undefined8 *)puVar2,2);
  plVar10 = (long *)FUN_012d0e38(*(undefined8 *)puVar3,2);
  puVar2 = PTR_DAT_0577d7e8;
  if (plVar10 == (long *)0x0) {
LAB_0389d45c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)PTR_DAT_0577d7e8 == 0) {
    lVar14 = 0;
    plVar11 = plVar10;
  }
  else {
    plVar11 = (long *)thunk_FUN_01320d5c(*(long *)PTR_DAT_0577d7e8,*(undefined8 *)(*plVar10 + 0x40))
    ;
    if (plVar11 == (long *)0x0) goto LAB_0389d450;
    lVar14 = *(long *)puVar2;
  }
  puVar4 = PTR_DAT_0579fba0;
  auVar20._8_8_ = lVar14;
  auVar20._0_8_ = plVar11;
  if ((int)plVar10[3] == 0) {
LAB_0389d44c:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8(auVar20._0_8_,auVar20._8_8_);
  }
  plVar10[4] = lVar14;
  lVar14 = FUN_012d0d74(plVar10 + 4,lVar14);
  lVar13 = *(long *)puVar4;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar14 = thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar10 + 0x40));
    if (lVar14 == 0) goto LAB_0389d450;
    lVar13 = *(long *)puVar4;
  }
  puVar4 = PTR_DAT_057dfa78;
  auVar20._8_8_ = lVar13;
  auVar20._0_8_ = lVar14;
  if (*(uint *)(plVar10 + 3) < 2) goto LAB_0389d44c;
  plVar10[5] = lVar13;
  FUN_012d0d74(plVar10 + 5,lVar13);
  lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if ((lVar14 == 0) ||
     (SimpleFileBrowser_FileBrowser_Filter___ctor_34457fc
                (lVar14,*(undefined8 *)PTR_DAT_0578cc18,plVar10,0), plVar9 == (long *)0x0))
  goto LAB_0389d45c;
  auVar20 = thunk_FUN_01320d5c(lVar14,*(undefined8 *)(*plVar9 + 0x40));
  if (auVar20._0_8_ == 0) goto LAB_0389d450;
  if ((int)plVar9[3] == 0) goto LAB_0389d44c;
  plVar9[4] = lVar14;
  FUN_012d0d74(plVar9 + 4,lVar14);
  plVar10 = (long *)FUN_012d0e38(*(undefined8 *)puVar3,2);
  puVar5 = PTR_DAT_057e0158;
  if (plVar10 == (long *)0x0) goto LAB_0389d45c;
  if (*(long *)PTR_DAT_057e0158 == 0) {
    lVar14 = 0;
    plVar11 = plVar10;
  }
  else {
    plVar11 = (long *)thunk_FUN_01320d5c(*(long *)PTR_DAT_057e0158,*(undefined8 *)(*plVar10 + 0x40))
    ;
    if (plVar11 == (long *)0x0) goto LAB_0389d450;
    lVar14 = *(long *)puVar5;
  }
  puVar5 = PTR_DAT_057c6898;
  auVar20._8_8_ = lVar14;
  auVar20._0_8_ = plVar11;
  if ((int)plVar10[3] == 0) goto LAB_0389d44c;
  plVar10[4] = lVar14;
  lVar14 = FUN_012d0d74(plVar10 + 4,lVar14);
  lVar13 = *(long *)puVar5;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar14 = thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar10 + 0x40));
    if (lVar14 == 0) goto LAB_0389d450;
    lVar13 = *(long *)puVar5;
  }
  auVar20._8_8_ = lVar13;
  auVar20._0_8_ = lVar14;
  if (*(uint *)(plVar10 + 3) < 2) goto LAB_0389d44c;
  plVar10[5] = lVar13;
  FUN_012d0d74(plVar10 + 5,lVar13);
  lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar14 == 0) goto LAB_0389d45c;
  SimpleFileBrowser_FileBrowser_Filter___ctor_34457fc
            (lVar14,*(undefined8 *)PTR_DAT_0575b3b8,plVar10,0);
  auVar20 = thunk_FUN_01320d5c(lVar14,*(undefined8 *)(*plVar9 + 0x40));
  puVar4 = PTR_DAT_057bba10;
  if (auVar20._0_8_ == 0) {
LAB_0389d450:
    uVar12 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar12,0);
  }
  if (*(uint *)(plVar9 + 3) < 2) goto LAB_0389d44c;
  plVar9[5] = lVar14;
  FUN_012d0d74(plVar9 + 5,lVar14);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  SimpleFileBrowser_FileBrowser__SetFilters_3444874(1,plVar9,0);
  SimpleFileBrowser_FileBrowser__SetDefaultFilter_34449dc(*(undefined8 *)puVar2,0);
  plVar9 = (long *)FUN_012d0e38(*(undefined8 *)puVar3,5);
  puVar2 = PTR_DAT_05798a80;
  if (plVar9 == (long *)0x0) goto LAB_0389d45c;
  if (*(long *)PTR_DAT_05798a80 == 0) {
    lVar14 = 0;
    plVar10 = plVar9;
  }
  else {
    plVar10 = (long *)thunk_FUN_01320d5c(*(long *)PTR_DAT_05798a80,*(undefined8 *)(*plVar9 + 0x40));
    if (plVar10 == (long *)0x0) goto LAB_0389d450;
    lVar14 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_05765640;
  auVar20._8_8_ = lVar14;
  auVar20._0_8_ = plVar10;
  if ((int)plVar9[3] == 0) goto LAB_0389d44c;
  plVar9[4] = lVar14;
  lVar14 = FUN_012d0d74(plVar9 + 4,lVar14);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar14 = thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar9 + 0x40));
    if (lVar14 == 0) goto LAB_0389d450;
    lVar13 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_05778c80;
  auVar20._8_8_ = lVar13;
  auVar20._0_8_ = lVar14;
  if (*(uint *)(plVar9 + 3) < 2) goto LAB_0389d44c;
  plVar9[5] = lVar13;
  lVar14 = FUN_012d0d74(plVar9 + 5,lVar13);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar14 = thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar9 + 0x40));
    if (lVar14 == 0) goto LAB_0389d450;
    lVar13 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_057d9a50;
  auVar20._8_8_ = lVar13;
  auVar20._0_8_ = lVar14;
  if (*(uint *)(plVar9 + 3) < 3) goto LAB_0389d44c;
  plVar9[6] = lVar13;
  lVar14 = FUN_012d0d74(plVar9 + 6,lVar13);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar14 = thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar9 + 0x40));
    if (lVar14 == 0) goto LAB_0389d450;
    lVar13 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_057967f8;
  auVar20._8_8_ = lVar13;
  auVar20._0_8_ = lVar14;
  if (*(uint *)(plVar9 + 3) < 4) goto LAB_0389d44c;
  plVar9[7] = lVar13;
  lVar14 = FUN_012d0d74(plVar9 + 7,lVar13);
  lVar13 = *(long *)puVar2;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar14 = thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar9 + 0x40));
    if (lVar14 == 0) goto LAB_0389d450;
    lVar13 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_057f9f28;
  puVar2 = PTR_DAT_057eeb40;
  auVar20._8_8_ = lVar13;
  auVar20._0_8_ = lVar14;
  if (*(uint *)(plVar9 + 3) < 5) goto LAB_0389d44c;
  plVar9[8] = lVar13;
  FUN_012d0d74();
  SimpleFileBrowser_FileBrowser__SetExcludedExtensions_3439b74(plVar9,0);
  uVar12 = *(undefined8 *)puVar3;
  lVar14 = *(long *)puVar2;
  uVar16 = 0;
  if ((bRam0000000005c324ef & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bba10,lVar14,0,0);
    bRam0000000005c324ef = 1;
  }
  uVar8 = System_String__IsNullOrEmpty_1ed04ac(lVar14,0);
  if (((uVar8 & 1) != 0) ||
     (uVar8 = SimpleFileBrowser_FileBrowserHelpers__DirectoryExists_3438470(lVar14),
     puVar2 = PTR_DAT_057bba10, (uVar8 & 1) == 0)) {
    return 0;
  }
  lVar13 = *(long *)PTR_DAT_057bba10;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar13 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x50) == '\0') {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (cRam0000000005c32551 == '\0') {
      FUN_012d0dc8(PTR_DAT_057bba10);
      cRam0000000005c32551 = '\x01';
    }
    lVar13 = *(long *)puVar2;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar13 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x10) != '\0') {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      SimpleFileBrowser_FileBrowser__RequestPermission_34412f4();
      lVar13 = *(long *)puVar2;
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar13 = SimpleFileBrowser_FileBrowser__get_Instance_343554c();
    if (lVar13 == 0) goto LAB_03543850;
    SimpleFileBrowser_FileBrowser__InitializeQuickLinks_343b3ac();
    lVar13 = *(long *)puVar2;
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar13 = SimpleFileBrowser_FileBrowser__get_Instance_343554c();
  if (lVar13 == 0) {
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
  uVar8 = System_String__IsNullOrEmpty_1ed04ac(lVar14,0);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  uVar8 = SimpleFileBrowser_FileBrowserHelpers__ShouldUseSAFForPath_343828c(lVar14);
  if ((uVar8 & 1) == 0) {
    uVar8 = System_IO_Directory__Exists_3481cbc(lVar14,0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    if (lVar14 == 0) goto LAB_0353b830;
    uVar6 = System_String__Trim_1ed51e0(lVar14,0);
    lVar14 = SimpleFileBrowser_FileBrowser__GetPathWithoutTrailingDirectorySeparator_34382e8
                       (uVar6,uVar6);
  }
  puVar5 = PTR_DAT_057fb488;
  puVar4 = PTR_DAT_057f59c8;
  puVar3 = PTR_DAT_057766b8;
  puVar2 = PTR_DAT_0576c200;
  lVar7 = *(long *)(lVar13 + 0xd8);
  if (lVar7 != 0) {
    iVar17 = 0;
    do {
      fVar19 = (float)param_2;
      if (*(int *)(lVar7 + 0x18) <= iVar17) {
        uVar6 = *(undefined8 *)(lVar13 + 0xd0);
        uVar18 = *(undefined8 *)(lVar13 + 0x130);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar7 = UnityEngine_Object__Instantiate_object__2aac970
                          (uVar6,uVar18,0,*(undefined8 *)puVar5);
        if (lVar7 == 0) break;
        uVar6 = *(undefined8 *)(lVar13 + 0x18);
        *(long *)(lVar7 + 0x30) = lVar13;
        FUN_012d0d74((long *)(lVar7 + 0x30),lVar13);
        SimpleFileBrowser_FileBrowserItem__OnSkinRefreshed_343bf1c(lVar7,uVar6,0);
        uVar8 = UnityEngine_Object__op_Inequality_408e110(0,0,0);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(lVar13 + 0x18) == 0) break;
          uVar16 = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x280);
        }
        SimpleFileBrowser_FileBrowserItem__SetFile_343b290(lVar7,uVar16,uVar12,1);
        *(long *)(lVar7 + 0x80) = lVar14;
        FUN_012d0d74((long *)(lVar7 + 0x80),lVar14);
        if (*(long *)(lVar13 + 0x130) != 0) {
          UnityEngine_RectTransform__get_sizeDelta_4094e94(*(long *)(lVar13 + 0x130),0);
          lVar14 = SimpleFileBrowser_FileBrowserItem__get_TransformComponent_343be44(lVar7);
          if (lVar14 != 0) {
            UnityEngine_RectTransform__set_anchoredPosition_4094e08(0,-fVar19,lVar14,0);
            if ((*(long *)(lVar13 + 0x18) != 0) && (*(long *)(lVar13 + 0x130) != 0)) {
              UnityEngine_RectTransform__set_sizeDelta_4094f24
                        (0,-(-fVar19 - *(float *)(*(long *)(lVar13 + 0x18) + 0x218)),
                         *(long *)(lVar13 + 0x130),0);
              lVar14 = *(long *)(lVar13 + 0xd8);
              if (lVar14 != 0) {
                lVar13 = *(long *)(lVar14 + 0x10);
                lVar15 = *(long *)puVar4;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar14 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                    plVar9 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar9 = lVar7;
                    FUN_012d0d74(plVar9,lVar7);
                  }
                  else {
                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                              (lVar14,lVar7);
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
                        (lVar7,iVar17,*(undefined8 *)puVar3);
      if (lVar7 == 0) break;
      uVar8 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lVar7 + 0x80),lVar14,0);
      if ((uVar8 & 1) != 0) {
        return 0;
      }
      lVar7 = *(long *)(lVar13 + 0xd8);
      iVar17 = iVar17 + 1;
    } while (lVar7 != 0);
  }
LAB_0353b830:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

