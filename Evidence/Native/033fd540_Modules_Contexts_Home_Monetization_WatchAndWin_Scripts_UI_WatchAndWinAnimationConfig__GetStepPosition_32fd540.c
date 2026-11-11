/* IL2CPP: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts.UI.WatchAndWinAnimationConfig$$GetStepPosition
float Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_UI_WatchAndWinAnimationConfig__GetStepPosition (Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_UI_WatchAndWinAnimationConfig_o* __this, int32_t progress, System_Collections_Generic_List_int__o* intervals, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x033fd780) */
/* IL2CPP:
   Modules.Contexts.Home.Monetization.WatchAndWin.Scripts.UI.WatchAndWinAnimationConfig$$GetStepPosition
   float 
   Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_UI_WatchAndWinAnimationConfig__GetStepPosition
   (Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_UI_WatchAndWinAnimationConfig_o* __this,
   int32_t progress, System_Collections_Generic_List_int__o* intervals, const MethodInfo* method);
    */

float Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_UI_WatchAndWinAnimationConfig__GetStepPosition_32fd540
                (long param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000005c31e23 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578a648);
    FUN_012d0dc8(PTR_DAT_05781b18);
    FUN_012d0dc8(PTR_DAT_057c3c28);
    FUN_012d0dc8(PTR_DAT_0577a308);
    FUN_012d0dc8(PTR_DAT_0576d090);
    FUN_012d0dc8(PTR_DAT_057cfb88);
    bRam0000000005c31e23 = 1;
  }
  puVar2 = PTR_DAT_0577a308;
  if (-1 < param_2) {
    if (param_3 == 0) {
LAB_033fd7b4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    iVar4 = System_Collections_Generic_List_int___get_Item_204edf0
                      (param_3,*(int *)(param_3 + 0x18) + -1,*(undefined8 *)PTR_DAT_0577a308);
    if (param_2 <= iVar4) {
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cfb88);
      puVar3 = PTR_DAT_0578a648;
      puVar1 = PTR_DAT_0576d090;
      if (lVar7 == 0) goto LAB_033fd7b4;
      System_Collections_Generic_List_int____ctor_204e9a8
                (lVar7,param_3,*(undefined8 *)PTR_DAT_05781b18);
      System_Collections_Generic_List_int___Insert_204ff8c(lVar7,0,0,*(undefined8 *)puVar3);
      iVar4 = *(int *)(lVar7 + 0x18);
      if (0 < iVar4) {
        uVar8 = 0;
        do {
          iVar4 = System_Collections_Generic_List_int___get_Item_204edf0
                            (lVar7,uVar8,*(undefined8 *)puVar2);
          if (iVar4 == param_2) {
            lVar7 = *(long *)(param_1 + 0x48);
            if (lVar7 != 0) {
              if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                          (0,uVar8,*(undefined8 *)puVar1);
              }
              lVar7 = *(long *)(lVar7 + 0x10);
              if (lVar7 != 0) {
                if (uVar8 < *(uint *)(lVar7 + 0x18)) {
                  return *(float *)(lVar7 + (long)(int)uVar8 * 4 + 0x20);
                }
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef8();
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            goto LAB_033fd7b4;
          }
          iVar4 = *(int *)(lVar7 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < iVar4);
      }
      if (0 < iVar4 + -1) {
        iVar4 = 0;
        do {
          iVar5 = System_Collections_Generic_List_int___get_Item_204edf0
                            (lVar7,iVar4,*(undefined8 *)puVar2);
          iVar6 = iVar4 + 1;
          if ((iVar5 < param_2) &&
             (iVar5 = System_Collections_Generic_List_int___get_Item_204edf0
                                (lVar7,iVar6,*(undefined8 *)puVar2), param_2 < iVar5)) {
            if (*(long *)(param_1 + 0x48) != 0) {
              fVar9 = (float)System_Collections_Generic_List_float___get_Item_1d70b20
                                       (*(long *)(param_1 + 0x48),iVar4,*(undefined8 *)puVar1);
              if (*(long *)(param_1 + 0x48) != 0) {
                fVar10 = (float)System_Collections_Generic_List_float___get_Item_1d70b20
                                          (*(long *)(param_1 + 0x48),iVar4 + 1,*(undefined8 *)puVar1
                                          );
                iVar6 = System_Collections_Generic_List_int___get_Item_204edf0
                                  (lVar7,iVar4,*(undefined8 *)puVar2);
                iVar5 = System_Collections_Generic_List_int___get_Item_204edf0
                                  (lVar7,iVar4 + 1,*(undefined8 *)puVar2);
                iVar4 = System_Collections_Generic_List_int___get_Item_204edf0
                                  (lVar7,iVar4,*(undefined8 *)puVar2);
                fVar11 = (float)(param_2 - iVar6) / (float)(iVar5 - iVar4);
                if (fVar11 < 0.0) {
                  fVar11 = 0.0;
                }
                return fVar9 + (fVar10 - fVar9) * fVar11;
              }
            }
            goto LAB_033fd7b4;
          }
          iVar4 = iVar6;
        } while (iVar6 < *(int *)(lVar7 + 0x18) + -1);
      }
    }
  }
  return 0.0;
}

