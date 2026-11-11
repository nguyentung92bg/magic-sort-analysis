/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.DailyContextInstaller$$Install
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyContextInstaller__Install (Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyContextInstaller_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.DailyContextInstaller$$Install
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyContextInstaller__Install
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyContextInstaller_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_DailyContextInstaller__Install_1f109ac
               (long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  puVar5 = PTR_DAT_0576aae0;
  if ((bRam0000000005c285fb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575ef68);
    FUN_012d0dc8(PTR_DAT_05776010);
    FUN_012d0dc8(PTR_DAT_05771148);
    FUN_012d0dc8(PTR_DAT_057d91e8);
    FUN_012d0dc8(PTR_DAT_057731d0);
    FUN_012d0dc8(PTR_DAT_057e68c8);
    FUN_012d0dc8(PTR_DAT_057a9930);
    FUN_012d0dc8(PTR_DAT_057c5cf8);
    FUN_012d0dc8(PTR_DAT_057fd600);
    FUN_012d0dc8(PTR_DAT_057af040);
    FUN_012d0dc8(PTR_DAT_0575ddf8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057dcc90);
    FUN_012d0dc8(PTR_DAT_057691b0);
    FUN_012d0dc8(PTR_DAT_05812198);
    FUN_012d0dc8(PTR_DAT_057bbd88);
    FUN_012d0dc8(PTR_DAT_057e1c28);
    FUN_012d0dc8(PTR_DAT_05812088);
    FUN_012d0dc8(PTR_DAT_057eb928);
    FUN_012d0dc8(PTR_DAT_05771150);
    FUN_012d0dc8(PTR_DAT_05763ef8);
    FUN_012d0dc8(PTR_DAT_0579e0d8);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c285fb = 1;
  }
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20) = *(undefined8 *)(param_1 + 0x18);
  FUN_012d0d74();
  **(undefined8 **)(*(long *)puVar5 + 0xb8) = *(undefined8 *)(param_1 + 0x18);
  FUN_012d0d74(*(undefined8 *)(*(long *)puVar5 + 0xb8));
  lVar7 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
  if (lVar7 != 0) {
    Modules_Infrastructure_DI_Injection_SceneContext__SetContextAsChild_40019f4
              (lVar7,*(undefined8 *)(param_1 + 0x18),0);
    puVar6 = PTR_DAT_05812198;
    lVar7 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
    if (lVar7 != 0) {
      Modules_Infrastructure_DI_Injection_SceneContext__SetContextAsParent_4001a18
                (lVar7,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
      lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc(param_1,0);
      uVar12 = *(undefined8 *)(param_1 + 0x68);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
      if ((lVar8 != 0) &&
         (Modules_Contexts_GamePlay_UI_Common_Scripts_GameplayConfigService___ctor_160c328
                    (lVar8,uVar12,0), puVar6 = PTR_DAT_0578a3a8, puVar5 = PTR_DAT_05763ef8,
         lVar7 != 0)) {
        Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                  (lVar7,lVar8,1,*(undefined8 *)PTR_DAT_057d91e8);
        lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc(param_1,0);
        uVar12 = *(undefined8 *)puVar5;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar6);
        }
        uVar12 = System_Type__GetTypeFromHandle_2690398(uVar12,0);
        uVar9 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar5,0);
        if (lVar7 != 0) {
          Modules_Infrastructure_DI_Injection_Container__RegisterSingleton_3d30fd8
                    (lVar7,uVar12,uVar9,1,0);
          lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc(param_1,0);
          if (lVar7 != 0) {
            Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                      (lVar7,*(undefined8 *)(param_1 + 0x20),1,*(undefined8 *)PTR_DAT_057731d0);
            lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                              (param_1,0);
            puVar6 = PTR_DAT_057bbd88;
            puVar5 = PTR_DAT_057691b0;
            if (lVar7 != 0) {
              Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                        (lVar7,*(undefined8 *)(param_1 + 0x40),1,*(undefined8 *)PTR_DAT_0575ef68);
              lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                (param_1,0);
              uVar12 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar6,0);
              uVar9 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar5,0);
              puVar6 = PTR_DAT_057e1c28;
              puVar5 = PTR_DAT_057dcc90;
              if (lVar7 != 0) {
                Modules_Infrastructure_DI_Injection_Container__RegisterSingleton_3d30fd8
                          (lVar7,uVar12,uVar9,1,0);
                lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                  (param_1,0);
                uVar12 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar6,0);
                uVar9 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar5,0);
                puVar5 = PTR_DAT_0579e0d8;
                if (lVar7 != 0) {
                  Modules_Infrastructure_DI_Injection_Container__RegisterSingleton_3d30fd8
                            (lVar7,uVar12,uVar9,1,0);
                  lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                    (param_1,0);
                  uVar12 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar5,0);
                  uVar9 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar5,0);
                  puVar5 = PTR_DAT_05771150;
                  if (lVar7 != 0) {
                    Modules_Infrastructure_DI_Injection_Container__RegisterSingleton_3d30fd8
                              (lVar7,uVar12,uVar9,1,0);
                    lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                      (param_1,0);
                    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                    if ((lVar8 != 0) &&
                       (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory___ctor_2305144
                                  (lVar8,0), puVar5 = PTR_DAT_05812088, lVar7 != 0)) {
                      Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                                (lVar7,lVar8,1,*(undefined8 *)PTR_DAT_057af040);
                      lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                        (param_1,0);
                      uVar12 = *(undefined8 *)(param_1 + 0x30);
                      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                      if ((lVar8 != 0) &&
                         (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory___ctor_2301730
                                    (lVar8,uVar12,0), puVar5 = PTR_DAT_057eb928, lVar7 != 0)) {
                        Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                                  (lVar7,lVar8,1,*(undefined8 *)PTR_DAT_057c5cf8);
                        lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                          (param_1,0);
                        uVar12 = *(undefined8 *)(param_1 + 0x38);
                        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                        if ((lVar8 != 0) &&
                           (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemPartFactory___ctor_2300a04
                                      (lVar8,uVar12,0), lVar7 != 0)) {
                          Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                                    (lVar7,lVar8,1,*(undefined8 *)PTR_DAT_057fd600);
                          lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                            (param_1,0);
                          if (lVar7 != 0) {
                            Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                                      (lVar7,*(undefined8 *)(param_1 + 0x48),1,
                                       *(undefined8 *)PTR_DAT_05776010);
                            lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                              (param_1,0);
                            if (lVar7 != 0) {
                              Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                                        (lVar7,*(undefined8 *)(param_1 + 0x50),1,
                                         *(undefined8 *)PTR_DAT_0575ddf8);
                              lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                                (param_1,0);
                              if (lVar7 != 0) {
                                Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                                          (lVar7,*(undefined8 *)(param_1 + 0x58),1,
                                           *(undefined8 *)PTR_DAT_057a9930);
                                lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                                  (param_1,0);
                                if (lVar7 != 0) {
                                  Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                                            (lVar7,*(undefined8 *)(param_1 + 0x60),1,
                                             *(undefined8 *)PTR_DAT_057e68c8);
                                  lVar7 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                                    (param_1,0);
                                  if (lVar7 != 0) {
                                    lVar8 = *(long *)(param_1 + 0x70);
                                    lVar11 = *(long *)PTR_DAT_05771148;
                                    if ((bRam0000000005c2c57b & 1) == 0) {
                                      FUN_012d0dc8(PTR_DAT_057807b0);
                                      FUN_012d0dc8(PTR_DAT_057ebfa8);
                                      FUN_012d0dc8(PTR_DAT_0576b848);
                                      FUN_012d0dc8(PTR_DAT_0578a3a8);
                                      bRam0000000005c2c57b = 1;
                                    }
                                    if (lVar8 != 0) {
                                      lVar13 = *(long *)(lVar7 + 0x10);
                                      uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 8);
                                      if (*(int *)(*(long *)PTR_DAT_0578a3a8 + 0xe0) == 0) {
                                        thunk_FUN_0130472c();
                                      }
                                      uVar12 = System_Type__GetTypeFromHandle_2690398(uVar12,0);
                                      puVar5 = PTR_DAT_057ebfa8;
                                      if (lVar13 != 0) {
                                        System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                                                  (lVar13,uVar12,lVar8,
                                                   *(undefined8 *)PTR_DAT_057807b0);
                                        lVar11 = *(long *)(lVar7 + 0x38);
                                        lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                                        if ((lVar7 != 0) &&
                                           (Modules_Infrastructure_DI_Injection_InstanceInfo___ctor_4001934
                                                      (lVar7,lVar8,1,0), lVar11 != 0)) {
                                          lVar8 = *(long *)(lVar11 + 0x10);
                                          lVar13 = *(long *)PTR_DAT_0576b848;
                                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar2 = *(uint *)(lVar11 + 0x18);
                                            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                              plVar10 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20
                                                                );
                                              *plVar10 = lVar7;
                                              if (iRam0000000005c3d478 != 0) {
                                                puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff)
                                                                   * 8 + 0x5c86b80);
                                                do {
                                                  cVar3 = '\x01';
                                                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                  if (bVar4) {
                                                    *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc
                                                                              & 0x3f);
                                                    cVar3 = ExclusiveMonitorsStatus();
                                                  }
                                                } while (cVar3 != '\0');
                                              }
                                              return;
                                            }
                    /* WARNING: Could not recover jumptable at 0x02822240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                            (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x58) + 8))(lVar11,lVar7);
                                            return;
                                          }
                                        }
                                      }
                    /* WARNING: Subroutine does not return */
                                      FUN_012d0ef0();
                                    }
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
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

