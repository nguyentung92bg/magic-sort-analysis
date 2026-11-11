/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$SwipeToShop
void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__SwipeToShop (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02ed06e0) */
/* WARNING: Removing unreachable block (ram,0x02ed06e8) */
/* WARNING: Removing unreachable block (ram,0x02ed06f0) */
/* WARNING: Removing unreachable block (ram,0x02ed0704) */
/* WARNING: Removing unreachable block (ram,0x02ed0714) */
/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.NavigationManagerDaily$$SwipeToShop
   void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__SwipeToShop
   (Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__SwipeToShop_297cad8
               (long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c2d737 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d2b88);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0578fc60);
    bRam0000000005c2d737 = 1;
  }
  puVar4 = PTR_DAT_057d2b88;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar10 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                     (*(undefined8 *)puVar4);
  if (lVar10 != 0) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
              (lVar10,1,*(undefined8 *)PTR_DAT_0578fc60);
    lVar10 = *(long *)(param_1 + 0x70);
    if (lVar10 != 0) {
      if ((bRam0000000005c2fca3 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0576d808,1,0);
        FUN_012d0dc8(PTR_DAT_0576aae0);
        FUN_012d0dc8(PTR_DAT_057ee200);
        FUN_012d0dc8(PTR_DAT_057b8520);
        FUN_012d0dc8(PTR_DAT_0578fc60);
        bRam0000000005c2fca3 = 1;
      }
      if (*(long *)(lVar10 + 0x20) != 0) {
        iVar1 = *(int *)(lVar10 + 0x18);
        uVar7 = Modules_Contexts_Home_UI_SwipeMenu_Scripts_SwipePageManager__GetIndexByPageType_2dd0518
                          (*(long *)(lVar10 + 0x20),1);
        *(undefined4 *)(lVar10 + 0x18) = uVar7;
        if (*(long *)(lVar10 + 0x28) != 0) {
          Modules_Contexts_Home_UI_Common_Scripts_NavigationManagerDaily__MoveToPage_297ceb0
                    (*(long *)(lVar10 + 0x28),1,1,0);
          puVar4 = PTR_DAT_057ee200;
          puVar3 = PTR_DAT_057b8520;
          if (*(long *)(lVar10 + 0x20) != 0) {
            Modules_Contexts_Home_UI_SwipeMenu_Scripts_SwipePageManager__MoveToPage_2dd07c8
                      (*(long *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x18));
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            lVar11 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                               (*(undefined8 *)puVar4);
            if (lVar11 != 0) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                        (lVar11,1,*(undefined8 *)PTR_DAT_0578fc60);
              if (*(long *)(lVar10 + 0x20) != 0) {
                Modules_Contexts_Home_UI_SwipeMenu_Scripts_SwipePageManager__GetPageTypeByIndex_2dd047c
                          (*(long *)(lVar10 + 0x20),iVar1);
                puVar3 = PTR_DAT_057ece38;
                if (iVar1 == *(int *)(lVar10 + 0x18)) {
                  return;
                }
                if (cRam0000000005c230a8 == '\0') {
                  FUN_012d0dc8(PTR_DAT_057ece38);
                  cRam0000000005c230a8 = '\x01';
                }
                puVar4 = PTR_DAT_0576aae0;
                if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
                  Modules_Contexts_Application_Events_Scripts_EventSender__SendShopOpenedEvent_144a718
                            (**(long **)(*(long *)puVar3 + 0xb8),2,0);
                  if (((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
                      (lVar10 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar10 != 0))
                     && (lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                            (lVar10,*(undefined8 *)PTR_DAT_0576d808), lVar10 != 0))
                  {
                    if ((bRam0000000005c38183 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057e9e10,0);
                      FUN_012d0dc8(PTR_DAT_05791590);
                      bRam0000000005c38183 = 1;
                    }
                    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    uVar12 = Modules_Contexts_Application_Ads_Scripts_AdService__get_IsMaxIsInitialized_1b5e4a4
                                       (*(long *)(lVar10 + 0x10),0);
                    puVar3 = PTR_DAT_05791590;
                    if ((uVar12 & 1) == 0) {
                      return;
                    }
                    if (*(int *)(*(long *)PTR_DAT_057e9e10 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                    }
                    puVar4 = PTR_DAT_057e9e10;
                    lVar10 = *(long *)puVar3;
                    if ((bRam0000000005c23a28 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057e9e10,0,0);
                      FUN_012d0dc8(PTR_DAT_0580bde0);
                      FUN_012d0dc8(PTR_DAT_05774e68);
                      bRam0000000005c23a28 = 1;
                    }
                    puVar3 = PTR_DAT_0580bde0;
                    lVar11 = *(long *)puVar4;
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                      lVar11 = *(long *)puVar4;
                    }
                    lVar11 = **(long **)(lVar11 + 0xb8);
                    plVar8 = (long *)FUN_012d0e38(*(undefined8 *)puVar3,2);
                    if (plVar8 == (long *)0x0) {
LAB_015d6ba0:
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    if ((lVar10 != 0) &&
                       (lVar9 = thunk_FUN_01320d5c(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) {
LAB_015d6ba4:
                      uVar14 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
                      FUN_012d0eb8(uVar14,0);
                    }
                    if ((int)plVar8[3] != 0) {
                      plVar8[4] = lVar10;
                      FUN_012d0d74(plVar8 + 4,lVar10);
                      lVar10 = AppLovinMax_ThirdParty_MiniJson_Json_Serializer__Serialize_14e38f0
                                         (0,0);
                      if ((lVar10 != 0) &&
                         (lVar9 = thunk_FUN_01320d5c(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar9 == 0)) goto LAB_015d6ba4;
                      if (1 < *(uint *)(plVar8 + 3)) {
                        plVar8[5] = lVar10;
                        FUN_012d0d74(plVar8 + 5,lVar10);
                        if (lVar11 != 0) {
                          uVar14 = *(undefined8 *)PTR_DAT_05774e68;
                          if ((bRam0000000005c38ac5 & 1) == 0) {
                            FUN_012d0dc8(PTR_DAT_0580bde0,uVar14,plVar8,0);
                            bRam0000000005c38ac5 = 1;
                          }
                          if (plVar8 == (long *)0x0) {
                            plVar8 = (long *)FUN_012d0e38(*(undefined8 *)PTR_DAT_0580bde0,1);
                          }
                          if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          uVar16 = *(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x18);
                          uVar13 = UnityEngine__AndroidJNIHelper__GetSignature_3f9b460(plVar8);
                          uVar14 = UnityEngine__AndroidJNIHelper__GetMethodID_3f9b830
                                             (uVar16,uVar14,uVar13,1);
                          lVar10 = UnityEngine__AndroidJNIHelper__CreateJNIArgArray_3f99394(plVar8);
                          if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          UnityEngine_AndroidJNISafe__CallStaticVoidMethod_3f97a6c
                                    (*(undefined8 *)(*(long *)(lVar11 + 0x18) + 0x18),uVar14,lVar10)
                          ;
                          if ((bRam0000000005c38ada & 1) == 0) {
                            FUN_012d0dc8(PTR_DAT_05763f10);
                            FUN_012d0dc8(PTR_DAT_057fab28);
                            FUN_012d0dc8(PTR_DAT_05773c40);
                            FUN_012d0dc8(PTR_DAT_057c9ca0);
                            bRam0000000005c38ada = 1;
                          }
                          puVar6 = PTR_DAT_057fab28;
                          puVar5 = PTR_DAT_057c9ca0;
                          puVar4 = PTR_DAT_05773c40;
                          puVar3 = PTR_DAT_05763f10;
                          if (plVar8 == (long *)0x0) {
LAB_0409ada4:
                    /* WARNING: Subroutine does not return */
                            FUN_012d0ef0();
                          }
                          if (0 < (int)plVar8[3]) {
                            uVar12 = 0;
                            uVar15 = plVar8[3] & 0xffffffff;
                            do {
                              if (uVar15 <= uVar12) goto LAB_0409ada0;
                              if ((long *)plVar8[uVar12 + 4] != (long *)0x0) {
                                lVar11 = *(long *)plVar8[uVar12 + 4];
                                if ((lVar11 != *(long *)puVar5) && (lVar11 != *(long *)puVar6)) {
                                  bVar2 = *(byte *)(*(long *)puVar3 + 300);
                                  if ((*(byte *)(lVar11 + 300) < bVar2) ||
                                     (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                                      *(long *)puVar3)) {
                                    bVar2 = *(byte *)(*(long *)puVar4 + 300);
                                    if ((*(byte *)(lVar11 + 300) < bVar2) ||
                                       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8)
                                        != *(long *)puVar4)) goto LAB_0409ad78;
                                  }
                                }
                                if (lVar10 == 0) goto LAB_0409ada4;
                                if (*(uint *)(lVar10 + 0x18) <= uVar12) {
LAB_0409ada0:
                    /* WARNING: Subroutine does not return */
                                  FUN_012d0ef8();
                                }
                                UnityEngine_AndroidJNISafe__DeleteLocalRef_3f97674
                                          (*(undefined8 *)(lVar10 + 0x20 + uVar12 * 8));
                              }
LAB_0409ad78:
                              uVar15 = (ulong)*(uint *)(plVar8 + 3);
                              uVar12 = uVar12 + 1;
                            } while ((long)uVar12 < (long)(int)*(uint *)(plVar8 + 3));
                          }
                          return;
                        }
                        goto LAB_015d6ba0;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef8();
                  }
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

