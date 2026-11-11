/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PlayersLeaderboardController$$Initialize
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Initialize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PlayersLeaderboardController$$Initialize
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Initialize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PlayersLeaderboardController__Initialize_2ae85e0
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_World_WorldLeaderboardController__Initialize_2aef1c8
              ();
    puVar3 = PTR_DAT_0576aae0;
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      if ((bRam0000000005c2ebb4 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057a1e60);
        FUN_012d0dc8(PTR_DAT_057a4490);
        FUN_012d0dc8(PTR_DAT_0578f608);
        FUN_012d0dc8(PTR_DAT_0576aae0);
        FUN_012d0dc8(PTR_DAT_0579f848);
        FUN_012d0dc8(PTR_DAT_057ce0a0);
        FUN_012d0dc8(PTR_DAT_057a31c8);
        FUN_012d0dc8(PTR_DAT_0578cb98);
        bRam0000000005c2ebb4 = 1;
      }
      if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
         (lVar7 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar7 != 0)) {
        uVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar7,*(undefined8 *)PTR_DAT_057a4490);
        *(undefined8 *)(lVar6 + 0x18) = uVar8;
        FUN_012d0d74();
        if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
           (lVar7 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar7 != 0)) {
          uVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar7,*(undefined8 *)PTR_DAT_057a1e60);
          *(undefined8 *)(lVar6 + 0x20) = uVar8;
          FUN_012d0d74();
          puVar4 = PTR_DAT_057ce0a0;
          if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
             (lVar7 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar7 != 0)) {
            uVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar7,*(undefined8 *)PTR_DAT_0578f608);
            *(undefined8 *)(lVar6 + 0x28) = uVar8;
            FUN_012d0d74();
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
            puVar3 = PTR_DAT_0579f848;
            if (lVar7 != 0) {
              System_Collections_Generic_List_object____ctor_21fc1fc
                        (lVar7,*(undefined8 *)PTR_DAT_0579f848);
              *(long *)(lVar6 + 0x50) = lVar7;
              FUN_012d0d74((long *)(lVar6 + 0x50),lVar7);
              lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
              puVar4 = PTR_DAT_0578cb98;
              if (lVar7 != 0) {
                System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)puVar3);
                *(long *)(lVar6 + 0x48) = lVar7;
                FUN_012d0d74((long *)(lVar6 + 0x48),lVar7);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                if (lVar7 != 0) {
                  Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object____ctor_30ea8d0
                            (lVar7,10,*(undefined8 *)PTR_DAT_057a31c8);
                  *(long *)(lVar6 + 0x58) = lVar7;
                  FUN_012d0d74((long *)(lVar6 + 0x58),lVar7);
                  if ((bRam0000000005c2ebb6 & 1) == 0) {
                    FUN_012d0dc8(PTR_DAT_0576b148);
                    FUN_012d0dc8(PTR_DAT_05806ae8);
                    FUN_012d0dc8(PTR_DAT_057a4dd8);
                    FUN_012d0dc8(PTR_DAT_057774c0);
                    FUN_012d0dc8(PTR_DAT_057b4b50);
                    FUN_012d0dc8(PTR_DAT_057f6190);
                    bRam0000000005c2ebb6 = 1;
                  }
                  Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__UpdateViewModels_2af1b3c
                            (lVar6);
                  lVar7 = *(long *)(lVar6 + 0x30);
                  if (lVar7 != 0) {
                    if (*(char *)(lVar7 + 0xb0) == '\0') {
                      iVar12 = -1;
                    }
                    else {
                      iVar12 = *(int *)(lVar7 + 0x38) + *(int *)(lVar7 + 0x3c);
                      if (iVar12 < 0) {
                        iVar12 = iVar12 + 1;
                      }
                      iVar12 = iVar12 >> 1;
                      Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                                (lVar7,0);
                    }
                    if ((*(long *)(lVar6 + 0x50) != 0) && (*(long *)(lVar6 + 0x70) != 0)) {
                      iVar2 = *(int *)(*(long *)(lVar6 + 0x50) + 0x18);
                      UnityEngine_GameObject__SetActive_408e318
                                (*(long *)(lVar6 + 0x70),iVar2 == 0,0);
                      if (*(long *)(lVar6 + 0x78) != 0) {
                        UnityEngine_GameObject__SetActive_408e318
                                  (*(long *)(lVar6 + 0x78),iVar2 != 0,0);
                        puVar3 = PTR_DAT_057f6190;
                        if (iVar2 == 0) {
                          if (*(long *)(lVar6 + 0x68) != 0) {
                            Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Dispose_400d49c
                                      (*(long *)(lVar6 + 0x68),0);
                            if (*(long *)(lVar6 + 0x30) != 0) {
                              Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                                        (*(long *)(lVar6 + 0x30),0);
LAB_02bf1b20:
                              if ((bRam0000000005c2ebb7 & 1) == 0) {
                                FUN_012d0dc8(PTR_DAT_05806ae8);
                                FUN_012d0dc8(PTR_DAT_05809290);
                                FUN_012d0dc8(PTR_DAT_057a4dd8);
                                FUN_012d0dc8(PTR_DAT_0577ac60);
                                bRam0000000005c2ebb7 = 1;
                              }
                              puVar4 = PTR_DAT_057a4dd8;
                              puVar3 = PTR_DAT_0577ac60;
                              lVar7 = *(long *)(lVar6 + 0x60);
                              if (lVar7 != 0) {
                                iVar12 = 0;
                                while( true ) {
                                  if (*(int *)(lVar7 + 0x18) <= iVar12) {
                                    return;
                                  }
                                  if (*(long *)(lVar6 + 0x48) == 0) break;
                                  iVar2 = *(int *)(*(long *)(lVar6 + 0x48) + 0x18);
                                  lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                    (lVar7,iVar12,*(undefined8 *)puVar3);
                                  if ((lVar7 == 0) ||
                                     (lVar7 = UnityEngine_Component__get_gameObject_408b480(lVar7,0)
                                     , lVar7 == 0)) break;
                                  if (iVar12 < iVar2) {
                                    UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
                                    if (*(long *)(lVar6 + 0x60) == 0) break;
                                    lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                      (*(long *)(lVar6 + 0x60),iVar12,
                                                       *(undefined8 *)puVar3);
                                    if ((*(long *)(lVar6 + 0x48) == 0) ||
                                       (uVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                          (*(long *)(lVar6 + 0x48),iVar12,
                                                           *(undefined8 *)puVar4), lVar7 == 0))
                                    break;
                                    Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardDegreeElementView__SetModel_2aee7d0
                                              (lVar7,uVar8);
                                  }
                                  else {
                                    UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
                                  }
                                  lVar7 = *(long *)(lVar6 + 0x60);
                                  iVar12 = iVar12 + 1;
                                  if (lVar7 == 0) break;
                                }
                              }
                    /* WARNING: Subroutine does not return */
                              FUN_012d0ef0();
                            }
                          }
                        }
                        else if (*(long *)(lVar6 + 0x40) != 0) {
                          *(undefined8 *)(*(long *)(lVar6 + 0x40) + 0x28) =
                               *(undefined8 *)(lVar6 + 0x50);
                          FUN_012d0d74();
                          lVar7 = *(long *)puVar3;
                          lVar10 = *(long *)(lVar6 + 0x50);
                          if (*(int *)(lVar7 + 0xe0) == 0) {
                            thunk_FUN_0130472c();
                            lVar7 = *(long *)puVar3;
                          }
                          puVar4 = PTR_DAT_057774c0;
                          lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                          if (lVar11 == 0) {
                            if (*(int *)(lVar7 + 0xe0) == 0) {
                              thunk_FUN_0130472c();
                              lVar7 = *(long *)puVar3;
                            }
                            uVar8 = **(undefined8 **)(lVar7 + 0xb8);
                            lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                            if (lVar11 == 0) goto LAB_02bf1b38;
                            System_Predicate_object____ctor_30fcf30
                                      (lVar11,uVar8,*(undefined8 *)PTR_DAT_057b4b50,0);
                            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                            *plVar9 = lVar11;
                            FUN_012d0d74(plVar9,lVar11);
                          }
                          if (lVar10 != 0) {
                            iVar5 = System_Collections_Generic_List_object___FindIndex_21fd2fc
                                              (lVar10,lVar11,*(undefined8 *)PTR_DAT_0576b148);
                            lVar7 = *(long *)(lVar6 + 0x68);
                            iVar2 = 0;
                            if (iVar5 != -1) {
                              iVar2 = iVar5;
                            }
                            iVar1 = iVar2;
                            if (iVar12 != -1) {
                              iVar1 = iVar12;
                            }
                            if (iVar5 == -1) {
                              if (lVar7 == 0) goto LAB_02bf1b38;
                              Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Dispose_400d49c
                                        (iVar2,lVar7,0);
                            }
                            else {
                              if ((*(long *)(lVar6 + 0x50) == 0) ||
                                 (uVar8 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                    (*(long *)(lVar6 + 0x50),iVar5,
                                                     *(undefined8 *)PTR_DAT_057a4dd8), lVar7 == 0))
                              goto LAB_02bf1b38;
                              Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Initialize_400d10c
                                        (lVar7,iVar5,uVar8,0);
                            }
                            if (*(long *)(lVar6 + 0x30) != 0) {
                              Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
                                        (*(long *)(lVar6 + 0x30),*(undefined8 *)(lVar6 + 0x38),iVar1
                                         ,0);
                              goto LAB_02bf1b20;
                            }
                          }
                        }
                      }
                    }
                  }
LAB_02bf1b38:
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

