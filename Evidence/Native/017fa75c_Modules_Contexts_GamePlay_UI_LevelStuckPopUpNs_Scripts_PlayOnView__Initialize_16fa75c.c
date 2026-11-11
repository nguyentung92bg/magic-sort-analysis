/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnView$$Initialize
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__Initialize (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnView$$Initialize
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__Initialize
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__Initialize_16fa75c
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c24ba4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057c9ae0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    bRam0000000005c24ba4 = 1;
  }
  uStack_24 = 0;
  lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
    lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar7,*(undefined8 *)PTR_DAT_057c9ae0);
    lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar8 != 0) &&
       ((lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0 &&
        (plVar3 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar8,*(undefined8 *)PTR_DAT_057e8f70), lVar7 != 0)))) {
      uVar2 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__HasFreePlayOn_1380094
                        (lVar7,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x18),uVar2 & 1,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x20),~uVar2 & 1,0);
          if ((uVar2 & 1) != 0) {
LAB_017fa904:
            Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__InitializeHeaderText_16fa930
                      (param_1,plVar3);
            Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__UpdateTwoBottleVisuals_16faad8
                      (param_1,plVar3);
            return;
          }
          if (plVar3 != (long *)0x0) {
            lVar7 = *plVar3;
            plVar11 = *(long **)(param_1 + 0x28);
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0581aae8) {
                  puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 10) * 0x10 + 0x138);
                  goto LAB_017fa8bc;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_0581aae8,10);
LAB_017fa8bc:
            plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
            if (plVar5 != (long *)0x0) {
              uStack_24 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
              uVar6 = System_Int32__ToString_26c9768(&uStack_24,0);
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 0x558))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x560));
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

