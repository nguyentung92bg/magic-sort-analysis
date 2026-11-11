/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUp$$Show
void Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUp__Show (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUp_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyStuckPopUp$$Show
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUp__Show
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUp_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyStuckPopUp__Show_3e2289c
               (long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined4 uStack_24;
  
  if ((bRam0000000005c3811f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05780680);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057f0388);
    FUN_012d0dc8(PTR_DAT_0580ad08);
    FUN_012d0dc8(PTR_DAT_05774390);
    bRam0000000005c3811f = 1;
  }
  puVar3 = PTR_DAT_0576aae0;
  if (param_2 == (long *)0x0) goto LAB_03f22a3c;
  bVar2 = *(byte *)(*(long *)PTR_DAT_05780680 + 300);
  if ((*(byte *)(*param_2 + 300) < bVar2) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_05780680)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
  if (*(int *)((long)param_2 + 0x24) == 2) {
    iVar1 = *(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_0580ad08;
joined_r0x03f229ac:
    if (iVar1 == 0) {
      thunk_FUN_0130472c();
    }
    uVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900(*puVar5,0);
  }
  else {
    if (*(int *)((long)param_2 + 0x24) == 1) {
      iVar1 = *(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_057f0388;
      goto joined_r0x03f229ac;
    }
    uVar7 = *(undefined8 *)PTR_DAT_05774390;
  }
  if (((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
      (lVar8 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar8 != 0)) &&
     (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar8,*(undefined8 *)PTR_DAT_05805608), lVar8 != 0)) {
    uVar9 = Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService__GetFailFlowAnimationConfig_16070fc
                      (lVar8,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      Modules_Contexts_Home_Daily_Scripts_UI_ADailyStuckPopUpVariant__Activate_410672c
                (*(long *)(param_1 + 0x20),uVar9,uVar7,0);
      plVar10 = *(long **)(param_1 + 0x20);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        puVar3 = PTR_DAT_0576aae0;
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 != 0) {
          if ((bRam0000000005c24ba4 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057e8f70,0);
            FUN_012d0dc8(PTR_DAT_057c9ae0);
            FUN_012d0dc8(PTR_DAT_0576aae0);
            FUN_012d0dc8(PTR_DAT_0581aae8);
            bRam0000000005c24ba4 = 1;
          }
          uStack_24 = 0;
          lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
          if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
            lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar11,*(undefined8 *)PTR_DAT_057c9ae0);
            lVar12 = **(long **)(*(long *)puVar3 + 0xb8);
            if ((lVar12 != 0) &&
               ((lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0 &&
                (plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                             (lVar12,*(undefined8 *)PTR_DAT_057e8f70), lVar11 != 0))
               )) {
              uVar4 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__HasFreePlayOn_1380094
                                (lVar11,0);
              if (*(long *)(lVar8 + 0x18) != 0) {
                UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar8 + 0x18),uVar4 & 1,0);
                if (*(long *)(lVar8 + 0x20) != 0) {
                  UnityEngine_GameObject__SetActive_408e318(*(long *)(lVar8 + 0x20),~uVar4 & 1,0);
                  if ((uVar4 & 1) != 0) {
LAB_017fa904:
                    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__InitializeHeaderText_16fa930
                              (lVar8,plVar10);
                    Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__UpdateTwoBottleVisuals_16faad8
                              (lVar8,plVar10);
                    return;
                  }
                  if (plVar10 != (long *)0x0) {
                    lVar11 = *plVar10;
                    plVar15 = *(long **)(lVar8 + 0x28);
                    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0581aae8) {
                          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                          goto LAB_017fa8bc;
                        }
                        uVar13 = uVar13 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0581aae8,10);
LAB_017fa8bc:
                    plVar6 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
                    if (plVar6 != (long *)0x0) {
                      uStack_24 = (**(code **)(*plVar6 + 0x1e8))
                                            (plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
                      uVar7 = System_Int32__ToString_26c9768(&uStack_24,0);
                      if (plVar15 != (long *)0x0) {
                        (**(code **)(*plVar15 + 0x558))
                                  (plVar15,uVar7,*(undefined8 *)(*plVar15 + 0x560));
                        goto LAB_017fa904;
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
    }
  }
LAB_03f22a3c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

