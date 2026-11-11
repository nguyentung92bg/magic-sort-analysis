/* IL2CPP: Modules.Contexts.Home.BroomStreak.Scripts.UI.InLevelBroomStreakView$$Show
void Modules_Contexts_Home_BroomStreak_Scripts_UI_InLevelBroomStreakView__Show (Modules_Contexts_Home_BroomStreak_Scripts_UI_InLevelBroomStreakView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.BroomStreak.Scripts.UI.InLevelBroomStreakView$$Show
   void Modules_Contexts_Home_BroomStreak_Scripts_UI_InLevelBroomStreakView__Show
   (Modules_Contexts_Home_BroomStreak_Scripts_UI_InLevelBroomStreakView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_BroomStreak_Scripts_UI_InLevelBroomStreakView__Show_3fcaeac(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c39141 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f6990);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05812a58);
    FUN_012d0dc8(PTR_DAT_058184a0);
    FUN_012d0dc8(PTR_DAT_05765720);
    bRam0000000005c39141 = 1;
  }
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar7 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar7 != 0)) {
    lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar7,*(undefined8 *)PTR_DAT_057f6990);
    plVar12 = (long *)(param_1 + 0x30);
    *plVar12 = lVar7;
    FUN_012d0d74(plVar12,lVar7);
    lVar7 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    if (lVar7 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
      if ((*plVar12 != 0) && (lVar7 = *(long *)(*plVar12 + 0x10), lVar7 != 0)) {
        uVar4 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakDataService__GetWinCount_3b32a2c
                          (lVar7,0);
        if (*plVar12 != 0) {
          uVar8 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__IsReachedMaxWinCount_3fbf024
                            (*plVar12);
          if (*plVar12 != 0) {
            uVar5 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetNextMainStep_3fbe7a8
                              (*plVar12);
            if ((uVar8 & 1) == 0) {
              bVar1 = false;
            }
            else {
              if (*plVar12 == 0) goto LAB_040cb0ec;
              uVar5 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetMaxStepStreak_3fbf1ec
                                ();
              bVar1 = true;
            }
            puVar3 = PTR_DAT_057db748;
            puVar2 = PTR_DAT_05765720;
            plVar13 = *(long **)(param_1 + 0x18);
            uStack_44 = uVar4;
            uVar9 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_44);
            uStack_48 = uVar5;
            uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_48);
            uVar9 = System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar9,uVar10,0);
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x558))(plVar13,uVar9,*(undefined8 *)(*plVar13 + 0x560));
              puVar2 = PTR_DAT_058184a0;
              if (*plVar12 != 0) {
                lVar7 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetLastSeenViewModels_3fbd7fc
                                  ();
                if (bVar1) {
                  if (lVar7 == 0) goto LAB_040cb0ec;
                  uVar9 = *(undefined8 *)puVar2;
                  iVar6 = *(int *)(lVar7 + 0x18) + -1;
                }
                else {
                  if ((*plVar12 == 0) ||
                     (iVar6 = Modules_Contexts_Home_BroomStreak_Scripts_BroomStreakService__GetNextMainStep_3fbe7a8
                                        (), lVar7 == 0)) goto LAB_040cb0ec;
                  uVar9 = *(undefined8 *)puVar2;
                }
                lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c(lVar7,iVar6,uVar9)
                ;
                if ((lVar7 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
                  lVar11 = *(long *)(param_1 + 0x20);
                  uVar9 = Modules_Contexts_Home_UI_Chest_Scripts_ChestSpriteConfig__GetSprite_2984dec
                                    (*(long *)(param_1 + 0x28),*(undefined4 *)(lVar7 + 0x34),0);
                  if (lVar11 != 0) {
                    UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar11,uVar9,0);
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
LAB_040cb0ec:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

