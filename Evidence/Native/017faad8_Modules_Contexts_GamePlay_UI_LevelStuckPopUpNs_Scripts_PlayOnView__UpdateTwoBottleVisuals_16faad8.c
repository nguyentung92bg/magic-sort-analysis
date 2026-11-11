/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnView$$UpdateTwoBottleVisuals
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__UpdateTwoBottleVisuals (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView_o* __this, Modules_Contexts_GamePlay_Levels_Scripts_ILevelManager_o* levelManager, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnView$$UpdateTwoBottleVisuals
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__UpdateTwoBottleVisuals
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView_o* __this,
   Modules_Contexts_GamePlay_Levels_Scripts_ILevelManager_o* levelManager, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnView__UpdateTwoBottleVisuals_16faad8
               (long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  int iStack_54;
  
  if ((bRam0000000005c24ba5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d9070);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_058198d0);
    bRam0000000005c24ba5 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar9 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 10) * 0x10 + 0x138);
          goto LAB_017faba4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0131971c(param_2,*(long *)PTR_DAT_0581aae8,10);
LAB_017faba4:
    lVar9 = (*(code *)*puVar8)(param_2,puVar8[1]);
    puVar3 = PTR_DAT_0576aae0;
    if (lVar9 != 0) {
      uVar6 = Modules_Contexts_GamePlay_Levels_Scripts_ALevel__IsMultipleBottlePlayOn_1f1708c
                        (lVar9,0);
      puVar4 = PTR_DAT_0576c200;
      if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
         (lVar9 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar9 != 0)) {
        lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar9,*(undefined8 *)PTR_DAT_057d9070);
        lVar10 = *(long *)puVar4;
        uVar15 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_0130472c(lVar10);
        }
        uVar11 = UnityEngine_Object__op_Inequality_408e110(uVar15,0,0);
        if ((uVar11 & 1) != 0) {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_017facf8;
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x30),~uVar6 & 1,0);
        }
        uVar15 = *(undefined8 *)(param_1 + 0x40);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar11 = UnityEngine_Object__op_Inequality_408e110(uVar15,0,0);
        puVar4 = PTR_DAT_058198d0;
        puVar3 = PTR_DAT_057bc5e8;
        if ((uVar11 & 1) == 0) {
          return;
        }
        if ((((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) &&
            (lVar9 = *(long *)(*(long *)(lVar9 + 0x18) + 0x1f0), lVar9 != 0)) &&
           (*(long *)(param_1 + 0x40) != 0)) {
          iVar1 = *(int *)(lVar9 + 0x18);
          UnityEngine_GameObject__SetActive_408e318(*(long *)(param_1 + 0x40),uVar6 & 1,0);
          plVar13 = *(long **)(param_1 + 0x48);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar9 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                            (*(undefined8 *)puVar4,0);
          if (plVar13 != (long *)0x0) {
            iStack_54 = 0;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0(plVar13,0,0);
            }
            if (0 < *(int *)(lVar9 + 0x10)) {
              iVar14 = 0;
              iVar17 = 0;
              uVar6 = 0;
              iVar16 = 0;
              uVar18 = 0;
              do {
                uVar7 = System_String__get_Chars_1ecae64(lVar9,iVar14,0);
                iVar5 = iStack_54;
                uVar7 = uVar7 & 0xffff;
                if (uVar7 == 0x7b) {
                  iVar17 = 1;
                }
                else {
                  if (uVar7 != 0x7d) {
                    uVar2 = uVar7 - 0x30;
                    if ((iVar17 == 1) && ((uVar2 & 0xffff) < 9)) {
                      iVar17 = 2;
                      uVar18 = uVar2;
                    }
                    else if (iVar17 == 3) {
                      if (uVar7 != 0x30) goto LAB_03ec1d58;
                      uVar6 = uVar6 + 1;
LAB_03ec1ca0:
                      iVar17 = 3;
                    }
                    else if (iVar17 == 2) {
                      if (uVar7 < 0x2e) {
                        if ((uVar7 != 0x23) && (uVar7 != 0x2c)) {
LAB_03ec1d4c:
                          if (uVar7 - 0x31 < 9) {
                            iVar17 = 2;
                            uVar6 = uVar2;
                            goto LAB_03ec1d74;
                          }
                          goto LAB_03ec1d58;
                        }
                      }
                      else {
                        if (uVar7 == 0x2e) goto LAB_03ec1ca0;
                        if (uVar7 != 0x3a) {
                          if (uVar7 != 0x30) goto LAB_03ec1d4c;
                          iVar16 = iVar16 + 1;
                        }
                      }
                      iVar17 = 2;
                    }
                    else {
LAB_03ec1d58:
                      TMPro_TMP_Text_TextBackingContainer__set_Item_3d43fec
                                (plVar13 + 0xd5,iStack_54,uVar7,0);
                      iStack_54 = iVar5 + 1;
                    }
                    goto LAB_03ec1d74;
                  }
                  switch(uVar18) {
                  case 0:
                    fVar19 = (float)iVar1;
                    break;
                  case 1:
                    fVar19 = 0.0;
                    break;
                  case 2:
                    fVar19 = 0.0;
                    break;
                  case 3:
                    fVar19 = 0.0;
                    break;
                  case 4:
                    fVar19 = 0.0;
                    break;
                  case 5:
                    fVar19 = 0.0;
                    break;
                  case 6:
                    fVar19 = 0.0;
                    break;
                  case 7:
                    fVar19 = 0.0;
                    break;
                  default:
                    goto LAB_03ec1d20;
                  }
                  TMPro_TMP_Text__AddFloatToInternalTextBackingArray_3dc1e88
                            (fVar19,plVar13,iVar16,uVar6,&iStack_54);
LAB_03ec1d20:
                  iVar17 = 0;
                  iVar16 = 0;
                  uVar6 = 0;
                  uVar18 = 0;
                }
LAB_03ec1d74:
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(lVar9 + 0x10));
            }
            iVar1 = iStack_54;
            TMPro_TMP_Text_TextBackingContainer__set_Item_3d43fec(plVar13 + 0xd5,iStack_54,0,0);
            *(int *)(plVar13 + 0xd6) = iVar1;
            *(undefined1 *)(plVar13 + 0x1b) = 1;
            *(undefined4 *)(plVar13 + 0x7f) = 1;
            TMPro_TMP_Text__PopulateTextProcessingArray_3dbfa30(plVar13);
            *(undefined1 *)(plVar13 + 0x6d) = 1;
            (**(code **)(*plVar13 + 0x2f8))(plVar13,*(undefined8 *)(*plVar13 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x03ec1e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar13 + 0x2e8))(plVar13,*(undefined8 *)(*plVar13 + 0x2f0));
            return;
          }
        }
      }
    }
  }
LAB_017facf8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

