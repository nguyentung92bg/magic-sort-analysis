/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$Initialize
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__Initialize (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this, System_Collections_Generic_List_ProfileTokenSprite__o* allTokenSprites, System_String_o* activeTokenId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$Initialize
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__Initialize
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this,
   System_Collections_Generic_List_ProfileTokenSprite__o* allTokenSprites, System_String_o*
   activeTokenId, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__Initialize_2add860
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  puVar4 = PTR_DAT_058197b0;
  if ((bRam0000000005c2eafc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05776540);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057906e8);
    FUN_012d0dc8(PTR_DAT_05801700);
    FUN_012d0dc8(PTR_DAT_05771d70);
    FUN_012d0dc8(PTR_DAT_05766950);
    FUN_012d0dc8(PTR_DAT_05811c20);
    FUN_012d0dc8(PTR_DAT_057f0650);
    FUN_012d0dc8(PTR_DAT_057b7e98);
    FUN_012d0dc8(PTR_DAT_058197b0);
    FUN_012d0dc8(PTR_DAT_05778c18);
    FUN_012d0dc8(PTR_DAT_057db3d8);
    bRam0000000005c2eafc = 1;
  }
  *(undefined8 *)(param_1 + 0x38) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x38),param_2);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),param_3);
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_05778c18;
  if (lVar7 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_05811c20);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar8 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar8,*(undefined8 *)PTR_DAT_05766950);
      lVar9 = Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__GetPlayerTokenSprites_2addc64
                        (param_1);
      puVar3 = PTR_DAT_05801700;
      puVar2 = PTR_DAT_057db3d8;
      puVar4 = PTR_DAT_057b7e98;
      if (lVar9 != 0) {
        if (0 < *(int *)(lVar9 + 0x18)) {
          iVar6 = 0;
          do {
            lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (lVar9,iVar6,*(undefined8 *)puVar4);
            lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
            if (lVar11 == 0) goto LAB_02bddc60;
            System_Object___ctor_23dfe5c(lVar11,0);
            *(long *)(lVar11 + 0x10) = lVar10;
            FUN_012d0d74((long *)(lVar11 + 0x10),lVar10);
            *(undefined1 *)(lVar11 + 0x18) = 0;
            lVar16 = *(long *)(lVar7 + 0x10);
            lVar17 = *(long *)PTR_DAT_057906e8;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_02bddc60;
            uVar19 = *(uint *)(lVar7 + 0x18);
            if (uVar19 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar19 + 1;
              plVar12 = (long *)(lVar16 + (long)(int)uVar19 * 8 + 0x20);
              *plVar12 = lVar11;
              FUN_012d0d74(plVar12,lVar11);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar7,lVar11);
            }
            if (lVar10 == 0) goto LAB_02bddc60;
            uVar15 = *(undefined8 *)(lVar10 + 0x38);
            lVar11 = *(long *)(lVar8 + 0x10);
            lVar16 = *(long *)puVar3;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_02bddc60;
            uVar19 = *(uint *)(lVar8 + 0x18);
            if (uVar19 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar19 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar19 * 8 + 0x20) = uVar15;
              FUN_012d0d74();
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))(lVar8)
              ;
            }
            uVar13 = System_String__Equals_1ecf130(*(undefined8 *)(lVar10 + 0x38),param_3,0);
            if ((uVar13 & 1) != 0) {
              *(int *)(param_1 + 0x40) = iVar6;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(lVar9 + 0x18));
        }
        if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
            (lVar9 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar9 != 0))
           && (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar9,*(undefined8 *)PTR_DAT_05776540), lVar9 != 0)) {
          uVar13 = Modules_Contexts_Home_Collection_Scripts_CollectionService__IsEventActive_376c5e0
                             (lVar9,0);
          puVar4 = PTR_DAT_05771d70;
          if ((uVar13 & 1) != 0) {
            uVar15 = Modules_Contexts_Home_Collection_Scripts_CollectionService__GetActiveCollectionTokenId_3770d98
                               (lVar9,0);
            uVar13 = System_Collections_Generic_List_object___Contains_21fce6c
                               (lVar8,uVar15,*(undefined8 *)puVar4);
            if (((uVar13 & 1) == 0) &&
               (lVar8 = Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__GetTokenSpriteById_2addf2c
                                  (param_1,uVar15), lVar8 != 0)) {
              lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              if (lVar9 == 0) goto LAB_02bddc60;
              System_Object___ctor_23dfe5c(lVar9,0);
              *(long *)(lVar9 + 0x10) = lVar8;
              FUN_012d0d74((long *)(lVar9 + 0x10),lVar8);
              *(undefined1 *)(lVar9 + 0x18) = 1;
              lVar8 = *(long *)(lVar7 + 0x10);
              lVar10 = *(long *)PTR_DAT_057906e8;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_02bddc60;
              uVar19 = *(uint *)(lVar7 + 0x18);
              if (uVar19 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar19 + 1;
                plVar12 = (long *)(lVar8 + (long)(int)uVar19 * 8 + 0x20);
                *plVar12 = lVar9;
                FUN_012d0d74(plVar12,lVar9);
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar7,lVar9);
              }
            }
          }
          if ((bRam0000000005c2eafd & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057c4360);
            FUN_012d0dc8(PTR_DAT_057f4220);
            FUN_012d0dc8(PTR_DAT_0576b4c0);
            FUN_012d0dc8(PTR_DAT_057fdb68);
            FUN_012d0dc8(PTR_DAT_057df670);
            FUN_012d0dc8(PTR_DAT_057cd4f8);
            bRam0000000005c2eafd = 1;
          }
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                        (*(long *)(param_1 + 0x18),0), lVar7 != 0)) {
            if (*(int *)(lVar7 + 0x18) == 0) {
              return;
            }
            lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057df670);
            if (lVar8 != 0) {
              System_Collections_Generic_List_object____ctor_21fc1fc
                        (lVar8,*(undefined8 *)PTR_DAT_0576b4c0);
              puVar3 = PTR_DAT_057f4220;
              puVar2 = PTR_DAT_057cd4f8;
              puVar4 = PTR_DAT_057c4360;
              iVar6 = *(int *)(lVar7 + 0x18);
              if (0 < iVar6) {
                iVar21 = 0;
                iVar20 = 0;
                do {
                  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  if (lVar9 == 0) goto LAB_02bde288;
                  iVar6 = iVar6 + iVar21;
                  if (2 < iVar6) {
                    iVar6 = 3;
                  }
                  System_Object___ctor_23dfe5c(lVar9,0);
                  uVar15 = System_Collections_Generic_List_object___GetRange_21fd6b8
                                     (lVar7,iVar20,iVar6,*(undefined8 *)puVar3);
                  *(undefined8 *)(lVar9 + 0x10) = uVar15;
                  FUN_012d0d74();
                  lVar10 = *(long *)(lVar8 + 0x10);
                  lVar11 = *(long *)puVar4;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_02bde288;
                  uVar19 = *(uint *)(lVar8 + 0x18);
                  if (uVar19 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar19 + 1;
                    plVar12 = (long *)(lVar10 + (long)(int)uVar19 * 8 + 0x20);
                    *plVar12 = lVar9;
                    FUN_012d0d74(plVar12,lVar9);
                  }
                  else {
                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                              (lVar8,lVar9);
                  }
                  iVar6 = *(int *)(lVar7 + 0x18);
                  iVar20 = iVar20 + 3;
                  iVar21 = iVar21 + -3;
                } while (iVar20 < iVar6);
              }
              lVar7 = *(long *)(param_1 + 0x28);
              if (lVar7 != 0) {
                uVar15 = *(undefined8 *)(param_1 + 0x30);
                *(long *)(lVar7 + 0x28) = lVar8;
                FUN_012d0d74((long *)(lVar7 + 0x28),lVar8);
                *(undefined8 *)(lVar7 + 0x30) = uVar15;
                FUN_012d0d74((undefined8 *)(lVar7 + 0x30),uVar15);
                if (*(long *)(param_1 + 0x18) != 0) {
                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
                            (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0,0);
                  lVar7 = *(long *)(param_1 + 0x18);
                  if (lVar7 != 0) {
                    uVar19 = (*(int *)(param_1 + 0x40) + -1) / 3;
                    if ((bRam0000000005c393bc & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057b4bd0,uVar19,0);
                      bRam0000000005c393bc = 1;
                    }
                    puVar4 = PTR_DAT_057b4bd0;
                    plVar12 = *(long **)(lVar7 + 0x30);
                    if (plVar12 != (long *)0x0) {
                      lVar8 = *plVar12;
                      uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
                      if (uVar13 != 0) {
                        piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057b4bd0) {
                            puVar14 = (undefined8 *)(lVar8 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                            goto LAB_0410af84;
                          }
                          uVar13 = uVar13 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057b4bd0,1);
LAB_0410af84:
                      iVar6 = (*(code *)*puVar14)(plVar12,puVar14[1]);
                      if (iVar6 == 0) {
                        return;
                      }
                      plVar12 = *(long **)(lVar7 + 0x30);
                      if (plVar12 != (long *)0x0) {
                        lVar8 = *plVar12;
                        uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
                        if (uVar13 != 0) {
                          piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                              puVar14 = (undefined8 *)(lVar8 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                              goto LAB_0410afec;
                            }
                            uVar13 = uVar13 - 1;
                            piVar18 = piVar18 + 4;
                          } while (uVar13 != 0);
                        }
                        puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar4,1);
LAB_0410afec:
                        iVar6 = (*(code *)*puVar14)(plVar12,puVar14[1]);
                        if ((int)uVar19 < 0) {
                          return;
                        }
                        if (iVar6 <= (int)uVar19) {
                          return;
                        }
                        if (*(char *)(lVar7 + 0xb0) == '\0') {
                          return;
                        }
                        plVar12 = *(long **)(lVar7 + 0x30);
                        if (plVar12 != (long *)0x0) {
                          lVar8 = *plVar12;
                          uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
                          if (uVar13 != 0) {
                            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                                puVar14 = (undefined8 *)
                                          (lVar8 + (long)(*piVar18 + 5) * 0x10 + 0x138);
                                goto LAB_0410b078;
                              }
                              uVar13 = uVar13 - 1;
                              piVar18 = piVar18 + 4;
                            } while (uVar13 != 0);
                          }
                          puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar4,5);
LAB_0410b078:
                          uVar13 = (*(code *)*puVar14)(plVar12,puVar14[1]);
                          if ((uVar13 & 1) != 0) {
                            plVar12 = *(long **)(lVar7 + 0x30);
                            if (plVar12 == (long *)0x0) goto LAB_0410b1dc;
                            lVar8 = *plVar12;
                            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
                            if (uVar13 != 0) {
                              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                                  puVar14 = (undefined8 *)
                                            (lVar8 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                                  goto LAB_0410b0e0;
                                }
                                uVar13 = uVar13 - 1;
                                piVar18 = piVar18 + 4;
                              } while (uVar13 != 0);
                            }
                            puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar4,1);
LAB_0410b0e0:
                            iVar6 = (*(code *)*puVar14)(plVar12,puVar14[1]);
                            uVar19 = iVar6 + ~uVar19;
                          }
                          plVar12 = *(long **)(lVar7 + 0x30);
                          if (plVar12 != (long *)0x0) {
                            lVar8 = *plVar12;
                            uVar13 = (ulong)*(ushort *)(lVar8 + 0x12a);
                            if (uVar13 != 0) {
                              piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                                  puVar14 = (undefined8 *)(lVar8 + (long)*piVar18 * 0x10 + 0x138);
                                  goto LAB_0410b148;
                                }
                                uVar13 = uVar13 - 1;
                                piVar18 = piVar18 + 4;
                              } while (uVar13 != 0);
                            }
                            puVar14 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar4,0);
LAB_0410b148:
                            lVar8 = (*(code *)*puVar14)(plVar12,uVar19,puVar14[1]);
                            iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                              (lVar7);
                            if (lVar8 != 0) {
                              lVar9 = 0x14;
                              if (iVar6 != 1) {
                                lVar9 = 0x10;
                              }
                              fVar25 = *(float *)(lVar7 + 0x70);
                              fVar23 = -*(float *)(lVar8 + lVar9);
                              fVar24 = *(float *)(lVar7 + 0x6c);
                              if (fVar23 <= *(float *)(lVar7 + 0x6c)) {
                                fVar24 = fVar23;
                              }
                              fVar26 = fVar24;
                              if (fVar23 < fVar25) {
                                fVar26 = fVar25;
                              }
                              iVar6 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                                (lVar7);
                              if (*(long *)(lVar7 + 0x28) != 0) {
                                fVar23 = (float)UnityEngine_Transform__get_localPosition_4092c40
                                                          (*(long *)(lVar7 + 0x28),0);
                                if (iVar6 != 1) {
                                  fVar24 = fVar23;
                                }
                                fVar24 = fVar26 - fVar24;
                                if ((bRam0000000005c393b5 & 1) == 0) {
                                  FUN_012d0dc8(PTR_DAT_057f7938);
                                  FUN_012d0dc8(PTR_DAT_057be0d0);
                                  FUN_012d0dc8(PTR_DAT_057b68e8);
                                  bRam0000000005c393b5 = 1;
                                }
                                fVar23 = (float)Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__GetDisplacement_400a4c0
                                                          (fVar24,lVar7);
                                lVar8 = *(long *)(lVar7 + 0x98);
                                if (cRam0000000005c272fe == '\0') {
                                  FUN_012d0dc8(PTR_DAT_057d6f00);
                                  cRam0000000005c272fe = '\x01';
                                }
                                if (*(int *)(*(long *)PTR_DAT_057d6f00 + 0xe0) == 0) {
                                  thunk_FUN_0130472c();
                                }
                                if (lVar8 != 0) {
                                  fVar22 = 1.0;
                                  if (fVar24 < 0.0) {
                                    fVar22 = -1.0;
                                  }
                                  System_Collections_Generic_Queue_float___Enqueue_336a53c
                                            (fVar22 * SQRT(fVar25 * fVar25 +
                                                           fVar23 * fVar23 + fVar26 * fVar26),lVar8,
                                             *(undefined8 *)PTR_DAT_057be0d0);
                                  lVar8 = *(long *)(lVar7 + 0x98);
                                  if (lVar8 != 0) {
                                    if (3 < *(int *)(lVar8 + 0x20)) {
                                      System_Collections_Generic_Queue_float___Dequeue_336a6e8
                                                (lVar8,*(undefined8 *)PTR_DAT_057f7938);
                                    }
                                    fVar24 = *(float *)(lVar7 + 0x54);
                                    fVar23 = fVar23 + *(float *)(lVar7 + 0x50);
                                    fVar26 = fVar26 + fVar24;
                                    fVar25 = fVar25 + *(float *)(lVar7 + 0x58);
                                    *(float *)(lVar7 + 0x50) = fVar23;
                                    *(float *)(lVar7 + 0x54) = fVar26;
                                    *(float *)(lVar7 + 0x58) = fVar25;
                                    if (*(long *)(lVar7 + 0x28) != 0) {
                                      fVar22 = (float)
                                                  UnityEngine_Transform__get_localPosition_4092c40
                                                            (*(long *)(lVar7 + 0x28),0);
                                      if (*(long *)(lVar7 + 0x28) != 0) {
                                        UnityEngine_Transform__set_localPosition_4092ce0
                                                  (fVar23,fVar26,fVar25,*(long *)(lVar7 + 0x28),0);
                                        Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                                  (lVar7);
                                        iVar6 = *(int *)(lVar7 + 0x38);
                                        iVar20 = *(int *)(lVar7 + 0x3c);
                                        for (iVar21 = 9999;
                                            ((((uVar13 = 
                                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheUpperElement_4009c74
                                                            (lVar7), (uVar13 & 1) != 0 ||
                                               (uVar13 = 
                                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsExceedingTheBottomElement_4009f18
                                                            (lVar7), (uVar13 & 1) != 0)) ||
                                              (uVar13 = 
                                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewDownElementBecameVisible_400a028
                                                            (lVar7), (uVar13 & 1) != 0)) ||
                                             (uVar13 = 
                                                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__IsNewUpElementBecameVisible_4009d84
                                                            (lVar7), (uVar13 & 1) != 0)) &&
                                            (iVar21 != 0)); iVar21 = iVar21 + -1) {
                                          iVar5 = Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__get_Orientation_4009058
                                                            (lVar7);
                                          fVar25 = fVar26 - fVar24;
                                          if (iVar5 != 1) {
                                            fVar25 = fVar23 - fVar22;
                                          }
                                          if (fVar25 <= 0.0) {
                                            Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentDown_400a878
                                                      (lVar7);
                                          }
                                          else {
                                            Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__MoveContentUp_400a724
                                                      ();
                                          }
                                          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__UpdateScrollElementsBounds_400a534
                                                    (lVar7);
                                        }
                                        iVar21 = *(int *)(lVar7 + 0x38);
                                        iVar5 = *(int *)(lVar7 + 0x3c);
                                        iVar1 = iVar6;
                                        puVar4 = PTR_DAT_057b4bd0;
                                        if ((bRam0000000005c393b6 & 1) == 0) {
                                          FUN_012d0dc8(PTR_DAT_057b4bd0);
                                          bRam0000000005c393b6 = 1;
                                          puVar4 = PTR_DAT_057b4bd0;
                                        }
                                        for (; puVar2 = PTR_DAT_057b4bd0, iVar1 <= iVar20;
                                            iVar1 = iVar1 + 1) {
                                          if ((iVar1 < iVar21) || (iVar5 < iVar1)) {
                                            plVar12 = *(long **)(lVar7 + 0x30);
                                            if (plVar12 == (long *)0x0) goto LAB_0410aa3c;
                                            lVar9 = *plVar12;
                                            lVar8 = *(long *)PTR_DAT_057b4bd0;
                                            uVar13 = (ulong)*(ushort *)(lVar9 + 0x12a);
                                            PTR_DAT_057b4bd0 = puVar4;
                                            if (uVar13 != 0) {
                                              piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                              do {
                                                if (*(long *)(piVar18 + -2) == lVar8) {
                                                  puVar14 = (undefined8 *)
                                                            (lVar9 + (long)(*piVar18 + 2) * 0x10 +
                                                            0x138);
                                                  goto LAB_0410a980;
                                                }
                                                uVar13 = uVar13 - 1;
                                                piVar18 = piVar18 + 4;
                                              } while (uVar13 != 0);
                                            }
                                            puVar14 = (undefined8 *)FUN_0131971c(plVar12,lVar8,2);
LAB_0410a980:
                                            (*(code *)*puVar14)(plVar12,iVar1,puVar14[1]);
                                            puVar4 = PTR_DAT_057b4bd0;
                                          }
                                          PTR_DAT_057b4bd0 = puVar4;
                                          puVar4 = PTR_DAT_057b4bd0;
                                          PTR_DAT_057b4bd0 = puVar2;
                                        }
                                        do {
                                          PTR_DAT_057b4bd0 = puVar4;
                                          if (iVar5 < iVar21) {
                                            return;
                                          }
                                          if ((iVar21 < iVar6) || (iVar20 < iVar21)) {
                                            plVar12 = *(long **)(lVar7 + 0x30);
                                            puVar4 = PTR_DAT_057b4bd0;
                                            if (plVar12 == (long *)0x0) {
LAB_0410aa3c:
                                              PTR_DAT_057b4bd0 = puVar4;
                    /* WARNING: Subroutine does not return */
                                              FUN_012d0ef0();
                                            }
                                            lVar9 = *plVar12;
                                            lVar8 = *(long *)puVar2;
                                            uVar13 = (ulong)*(ushort *)(lVar9 + 0x12a);
                                            if (uVar13 != 0) {
                                              piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                              do {
                                                if (*(long *)(piVar18 + -2) == lVar8) {
                                                  puVar14 = (undefined8 *)
                                                            (lVar9 + (long)(*piVar18 + 3) * 0x10 +
                                                            0x138);
                                                  goto LAB_0410aa08;
                                                }
                                                uVar13 = uVar13 - 1;
                                                piVar18 = piVar18 + 4;
                                              } while (uVar13 != 0);
                                            }
                                            puVar14 = (undefined8 *)FUN_0131971c(plVar12,lVar8,3);
LAB_0410aa08:
                                            (*(code *)*puVar14)(plVar12,iVar21,puVar14[1]);
                                          }
                                          iVar21 = iVar21 + 1;
                                          puVar4 = PTR_DAT_057b4bd0;
                                        } while( true );
                                      }
                                    }
                                  }
                                }
                    /* WARNING: Subroutine does not return */
                                FUN_012d0ef0();
                              }
                            }
                          }
                        }
                      }
                    }
LAB_0410b1dc:
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                }
              }
            }
          }
LAB_02bde288:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
LAB_02bddc60:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

