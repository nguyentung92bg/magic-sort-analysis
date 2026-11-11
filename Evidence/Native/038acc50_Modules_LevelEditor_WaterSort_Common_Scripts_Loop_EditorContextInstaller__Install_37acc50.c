/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Loop.EditorContextInstaller$$Install
void Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorContextInstaller__Install (Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorContextInstaller_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Loop.EditorContextInstaller$$Install
   void Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorContextInstaller__Install
   (Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorContextInstaller_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_Loop_EditorContextInstaller__Install_37acc50
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000005c33e37 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05771ec8);
    FUN_012d0dc8(PTR_DAT_0575ef68);
    FUN_012d0dc8(PTR_DAT_05793e40);
    FUN_012d0dc8(PTR_DAT_05784400);
    FUN_012d0dc8(PTR_DAT_05771148);
    FUN_012d0dc8(PTR_DAT_057ad3a8);
    FUN_012d0dc8(PTR_DAT_057731d0);
    FUN_012d0dc8(PTR_DAT_057af040);
    FUN_012d0dc8(PTR_DAT_05790230);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575d2f0);
    FUN_012d0dc8(PTR_DAT_057dde88);
    FUN_012d0dc8(PTR_DAT_05771150);
    FUN_012d0dc8(PTR_DAT_05763ef8);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c33e37 = 1;
  }
  puVar1 = PTR_DAT_0576aae0;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  if (cRam0000000005c33e8c == '\0') {
    FUN_012d0dc8(PTR_DAT_0576aae0);
    cRam0000000005c33e8c = '\x01';
  }
  puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
  *puVar3 = uVar7;
  FUN_012d0d74(puVar3,uVar7);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = *(undefined8 *)(param_1 + 0x18);
  FUN_012d0d74(*(undefined8 *)(*(long *)puVar1 + 0xb8));
  lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (lVar4 != 0) {
    Modules_Infrastructure_DI_Injection_SceneContext__SetContextAsChild_40019f4
              (lVar4,*(undefined8 *)(param_1 + 0x18),0);
    if (cRam0000000005c33e8a == '\0') {
      FUN_012d0dc8(PTR_DAT_0576aae0);
      cRam0000000005c33e8a = '\x01';
    }
    lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
    if (lVar4 != 0) {
      Modules_Infrastructure_DI_Injection_SceneContext__SetContextAsParent_4001a18
                (lVar4,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
      lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc(param_1,0);
      if (lVar4 != 0) {
        Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                  (lVar4,*(undefined8 *)(param_1 + 0x48),1,*(undefined8 *)PTR_DAT_05771ec8);
        lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc(param_1,0);
        if (lVar4 != 0) {
          Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                    (lVar4,*(undefined8 *)(param_1 + 0x30),1,*(undefined8 *)PTR_DAT_057731d0);
          lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc(param_1,0);
          puVar2 = PTR_DAT_0578a3a8;
          puVar1 = PTR_DAT_05763ef8;
          if (lVar4 != 0) {
            Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                      (lVar4,*(undefined8 *)(param_1 + 0x60),1,*(undefined8 *)PTR_DAT_05771148);
            lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                              (param_1,0);
            uVar7 = *(undefined8 *)puVar1;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar2);
            }
            uVar7 = System_Type__GetTypeFromHandle_2690398(uVar7,0);
            uVar5 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar1,0);
            puVar1 = PTR_DAT_057dde88;
            if (lVar4 != 0) {
              Modules_Infrastructure_DI_Injection_Container__RegisterSingleton_3d30fd8
                        (lVar4,uVar7,uVar5,1,0);
              lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                (param_1,0);
              uVar7 = *(undefined8 *)(param_1 + 0x58);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if ((lVar6 != 0) &&
                 (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory___ctor_3dda9b8
                            (lVar6,uVar7,0), puVar1 = PTR_DAT_05771150, lVar4 != 0)) {
                Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                          (lVar4,lVar6,1,*(undefined8 *)PTR_DAT_05793e40);
                lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                  (param_1,0);
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                if ((lVar6 != 0) &&
                   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_OptimizedGameObjectFactory___ctor_2305144
                              (lVar6,0), lVar4 != 0)) {
                  Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                            (lVar4,lVar6,1,*(undefined8 *)PTR_DAT_057af040);
                  lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                    (param_1,0);
                  puVar1 = PTR_DAT_0575d2f0;
                  if (lVar4 != 0) {
                    Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                              (lVar4,*(undefined8 *)(param_1 + 0x28),1,
                               *(undefined8 *)PTR_DAT_05784400);
                    lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                      (param_1,0);
                    uVar7 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar1,0);
                    uVar5 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar1,0);
                    if (lVar4 != 0) {
                      Modules_Infrastructure_DI_Injection_Container__RegisterSingleton_3d30fd8
                                (lVar4,uVar7,uVar5,1,0);
                      lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                        (param_1,0);
                      if (lVar4 != 0) {
                        Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                                  (lVar4,*(undefined8 *)(param_1 + 0x38),1,
                                   *(undefined8 *)PTR_DAT_057ad3a8);
                        lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                          (param_1,0);
                        if (lVar4 != 0) {
                          Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                                    (lVar4,*(undefined8 *)(param_1 + 0x40),1,
                                     *(undefined8 *)PTR_DAT_05790230);
                          lVar4 = Modules_Infrastructure_DI_Install_MonoInstaller__get_Container_3d30cbc
                                            (param_1,0);
                          if (lVar4 != 0) {
                            Modules_Infrastructure_DI_Injection_Container__RegisterSingletonUsingInstance_object__27220d4
                                      (lVar4,*(undefined8 *)(param_1 + 0x50),1,
                                       *(undefined8 *)PTR_DAT_0575ef68);
                            if (pcRam0000000005c34540 == (code *)0x0) {
                              pcRam0000000005c34540 = (code *)FUN_012d0d84(&UNK_043b2dbc);
                            }
                    /* WARNING: Could not recover jumptable at 0x0393ac38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*pcRam0000000005c34540)(4,2);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

