/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Country.CountryLeaderboardController$$Initialize
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__Initialize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Country.CountryLeaderboardController$$Initialize
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__Initialize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__Initialize_2aef3b0
               (long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  
  puVar3 = PTR_DAT_0576aae0;
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
     (lVar6 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar6 != 0)) {
    uVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar6,*(undefined8 *)PTR_DAT_057a4490);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    FUN_012d0d74();
    if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar6 != 0)) {
      uVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_057a1e60);
      *(undefined8 *)(param_1 + 0x20) = uVar7;
      FUN_012d0d74();
      puVar4 = PTR_DAT_057ce0a0;
      if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
         (lVar6 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar6 != 0)) {
        uVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar6,*(undefined8 *)PTR_DAT_0578f608);
        *(undefined8 *)(param_1 + 0x28) = uVar7;
        FUN_012d0d74();
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
        puVar3 = PTR_DAT_0579f848;
        if (lVar6 != 0) {
          System_Collections_Generic_List_object____ctor_21fc1fc
                    (lVar6,*(undefined8 *)PTR_DAT_0579f848);
          *(long *)(param_1 + 0x50) = lVar6;
          FUN_012d0d74((long *)(param_1 + 0x50),lVar6);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
          puVar4 = PTR_DAT_0578cb98;
          if (lVar6 != 0) {
            System_Collections_Generic_List_object____ctor_21fc1fc(lVar6,*(undefined8 *)puVar3);
            *(long *)(param_1 + 0x48) = lVar6;
            FUN_012d0d74((long *)(param_1 + 0x48),lVar6);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
            if (lVar6 != 0) {
              Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object____ctor_30ea8d0
                        (lVar6,10,*(undefined8 *)PTR_DAT_057a31c8);
              *(long *)(param_1 + 0x58) = lVar6;
              FUN_012d0d74((long *)(param_1 + 0x58),lVar6);
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
                        (param_1);
              lVar6 = *(long *)(param_1 + 0x30);
              if (lVar6 != 0) {
                if (*(char *)(lVar6 + 0xb0) == '\0') {
                  iVar11 = -1;
                }
                else {
                  iVar11 = *(int *)(lVar6 + 0x38) + *(int *)(lVar6 + 0x3c);
                  if (iVar11 < 0) {
                    iVar11 = iVar11 + 1;
                  }
                  iVar11 = iVar11 >> 1;
                  Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                            (lVar6,0);
                }
                if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x70) != 0)) {
                  iVar2 = *(int *)(*(long *)(param_1 + 0x50) + 0x18);
                  UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x70),iVar2 == 0,0);
                  if (*(long *)(param_1 + 0x78) != 0) {
                    UnityEngine_GameObject__SetActive_408e318
                              (*(long *)(param_1 + 0x78),iVar2 != 0,0);
                    puVar3 = PTR_DAT_057f6190;
                    if (iVar2 == 0) {
                      if (*(long *)(param_1 + 0x68) != 0) {
                        Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Dispose_400d49c
                                  (*(long *)(param_1 + 0x68),0);
                        if (*(long *)(param_1 + 0x30) != 0) {
                          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Dispose_400b414
                                    (*(long *)(param_1 + 0x30),0);
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
                          lVar6 = *(long *)(param_1 + 0x60);
                          if (lVar6 != 0) {
                            iVar11 = 0;
                            while( true ) {
                              if (*(int *)(lVar6 + 0x18) <= iVar11) {
                                return;
                              }
                              if (*(long *)(param_1 + 0x48) == 0) break;
                              iVar2 = *(int *)(*(long *)(param_1 + 0x48) + 0x18);
                              lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                (lVar6,iVar11,*(undefined8 *)puVar3);
                              if ((lVar6 == 0) ||
                                 (lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar6,0),
                                 lVar6 == 0)) break;
                              if (iVar11 < iVar2) {
                                UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
                                if (*(long *)(param_1 + 0x60) == 0) break;
                                lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                  (*(long *)(param_1 + 0x60),iVar11,
                                                   *(undefined8 *)puVar3);
                                if ((*(long *)(param_1 + 0x48) == 0) ||
                                   (uVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                      (*(long *)(param_1 + 0x48),iVar11,
                                                       *(undefined8 *)puVar4), lVar6 == 0)) break;
                                Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardDegreeElementView__SetModel_2aee7d0
                                          (lVar6,uVar7);
                              }
                              else {
                                UnityEngine_GameObject__SetActive_408e318(lVar6,0,0);
                              }
                              lVar6 = *(long *)(param_1 + 0x60);
                              iVar11 = iVar11 + 1;
                              if (lVar6 == 0) break;
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                      }
                    }
                    else if (*(long *)(param_1 + 0x40) != 0) {
                      *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x28) =
                           *(undefined8 *)(param_1 + 0x50);
                      FUN_012d0d74();
                      lVar6 = *(long *)puVar3;
                      lVar9 = *(long *)(param_1 + 0x50);
                      if (*(int *)(lVar6 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                        lVar6 = *(long *)puVar3;
                      }
                      puVar4 = PTR_DAT_057774c0;
                      lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                      if (lVar10 == 0) {
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_0130472c();
                          lVar6 = *(long *)puVar3;
                        }
                        uVar7 = **(undefined8 **)(lVar6 + 0xb8);
                        lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                        if (lVar10 == 0) goto LAB_02bf1b38;
                        System_Predicate_object____ctor_30fcf30
                                  (lVar10,uVar7,*(undefined8 *)PTR_DAT_057b4b50,0);
                        plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                        *plVar8 = lVar10;
                        FUN_012d0d74(plVar8,lVar10);
                      }
                      if (lVar9 != 0) {
                        iVar5 = System_Collections_Generic_List_object___FindIndex_21fd2fc
                                          (lVar9,lVar10,*(undefined8 *)PTR_DAT_0576b148);
                        lVar6 = *(long *)(param_1 + 0x68);
                        iVar2 = 0;
                        if (iVar5 != -1) {
                          iVar2 = iVar5;
                        }
                        iVar1 = iVar2;
                        if (iVar11 != -1) {
                          iVar1 = iVar11;
                        }
                        if (iVar5 == -1) {
                          if (lVar6 == 0) goto LAB_02bf1b38;
                          Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Dispose_400d49c
                                    (iVar2,lVar6,0);
                        }
                        else {
                          if ((*(long *)(param_1 + 0x50) == 0) ||
                             (uVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                (*(long *)(param_1 + 0x50),iVar5,
                                                 *(undefined8 *)PTR_DAT_057a4dd8), lVar6 == 0))
                          goto LAB_02bf1b38;
                          Modules_Infrastructure_UI_Common_Scripts_Scroll_StickyScrollElementsController__Initialize_400d10c
                                    (lVar6,iVar5,uVar7,0);
                        }
                        if (*(long *)(param_1 + 0x30) != 0) {
                          Modules_Infrastructure_UI_Common_Scripts_Scroll_ScrollBar__Initialize_4009288
                                    (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),iVar1
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

