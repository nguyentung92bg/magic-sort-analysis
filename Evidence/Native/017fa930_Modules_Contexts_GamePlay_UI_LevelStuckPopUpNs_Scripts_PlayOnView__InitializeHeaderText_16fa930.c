/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnView$$InitializeHeaderText
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__InitializeHeaderText (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_ILevelManager_o* levelManager, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnView$$InitializeHeaderText
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__InitializeHeaderText
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_ILevelManager_o* levelManager, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__InitializeHeaderText_16fa930
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((bRam0000000005c24ba6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_0577f600);
    FUN_012d0dc8(PTR_DAT_05791448);
    FUN_012d0dc8(PTR_DAT_0576cf98);
    bRam0000000005c24ba6 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
          goto LAB_017fa9f0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(param_2,*(long *)PTR_DAT_0581aae8,10);
LAB_017fa9f0:
    lVar7 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if ((lVar7 != 0) &&
       (lVar7 = Modules_Contexts_GamePlay_Levels_Scripts_ALevel__GetDefaultPlayOnBehaviour_1f170a8
                          (lVar7,0), puVar2 = PTR_DAT_057bc5e8, puVar1 = PTR_DAT_05791448,
       lVar7 != 0)) {
      uVar3 = System_Collections_Generic_List_Int32Enum___get_Item_2051860
                        (lVar7,0,*(undefined8 *)PTR_DAT_0577f600);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar7);
      }
      lVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                        (*(undefined8 *)puVar1,0);
      if ((uVar3 | 4) == 5) {
        if (*(long *)(param_1 + 0x50) != 0) {
          Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnTagView__SetTinyBottleTag_16fa730
                    ();
        }
        puVar1 = PTR_DAT_0576cf98;
        if (uVar3 == 1) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                            (*(undefined8 *)puVar1,0);
        }
      }
      plVar5 = *(long **)(param_1 + 0x38);
      if (plVar5 != (long *)0x0) {
        if (lVar7 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(lVar7 + 0x10);
        }
        TMPro_TMP_Text__PopulateTextBackingArray_3dc04a0(plVar5,lVar7,0,uVar6);
        plVar5[0x1a] = lVar7;
        FUN_012d0d74(plVar5 + 0x1a,lVar7);
        *(undefined4 *)(plVar5 + 0x7f) = 3;
        TMPro_TMP_Text__PopulateTextProcessingArray_3dbfa30(plVar5);
        *(undefined1 *)(plVar5 + 0x6d) = 1;
        (**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x03ec1b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

