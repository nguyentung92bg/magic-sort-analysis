/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInfoPopup$$Show
void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup__Show (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup_o* __this, Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.UI.WeeklyTournamentInfoPopup$$Show
   void Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup__Show
   (Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments_o* popUpArguments, const
   MethodInfo* method); */

long Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup__Show_32dc874
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x1;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c31d8b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790e10);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c31d8b = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 == 0)) ||
     (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar7,*(undefined8 *)PTR_DAT_05790e10), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentService__MarkWeeklyIntroduced_32da614
            ();
  Modules_Contexts_Home_WeeklyTournament_Scripts_UI_WeeklyTournamentInfoPopup__SetActiveAll_32dc1b4
            (param_1,0);
  if ((bRam0000000005c31d87 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f9a60);
    FUN_012d0dc8(PTR_DAT_057c2030);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057e7670);
    FUN_012d0dc8(PTR_DAT_05766e90);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057bd798);
    FUN_012d0dc8(PTR_DAT_057644b0);
    FUN_012d0dc8(PTR_DAT_057dd438);
    bRam0000000005c31d87 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    fVar12 = *(float *)(*(long *)(param_1 + 0x18) + 0x18);
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar7 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar7,0,0);
    }
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    FUN_012d0d74((long *)(param_1 + 0x38),uVar5);
    puVar4 = PTR_DAT_05805c10;
    puVar3 = PTR_DAT_057bd798;
    puVar2 = PTR_DAT_057874c0;
    puVar1 = PTR_DAT_05766e90;
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != 0) {
      iVar8 = 0;
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar8) {
          lVar7 = *(long *)(param_1 + 0x18);
          if (lVar7 != 0) {
            fVar11 = *(float *)(lVar7 + 0x20);
            fVar13 = *(float *)(lVar7 + 0x24);
            uVar5 = *(undefined8 *)(param_1 + 0x38);
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
            if (lVar7 != 0) {
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar7,param_1,*(undefined8 *)PTR_DAT_057dd438,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                        ((fVar12 - (fVar13 + fVar13)) - (fVar11 + fVar11),uVar5,lVar7,0);
              lVar7 = *(long *)(param_1 + 0x38);
              uVar5 = *(undefined8 *)PTR_DAT_057e7670;
              if ((bRam0000000005c2c3bb & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_058163b8,uVar5);
                bRam0000000005c2c3bb = 1;
                uVar5 = extraout_x1;
              }
              if (lVar7 == 0) {
                if (cRam0000000005c24e31 == '\0') {
                  FUN_012d0dc8(PTR_DAT_057ddc60,uVar5);
                  cRam0000000005c24e31 = '\x01';
                }
                if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
                  DG_Tweening_Core_Debugger__LogNullTween_362a2b0(0,0);
                }
              }
              else if (*(char *)(lVar7 + 0xe8) == '\0') {
                if (cRam0000000005c24e31 == '\0') {
                  FUN_012d0dc8(PTR_DAT_057ddc60,uVar5);
                  cRam0000000005c24e31 = '\x01';
                }
                if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
                  DG_Tweening_Core_Debugger__LogInvalidTween_362a224(lVar7,0);
                }
              }
              else if (*(char *)(lVar7 + 0xe9) == '\0') {
                if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                DG_Tweening_Core_TweenManager__Play_3330e80(lVar7,0);
              }
              else {
                if (cRam0000000005c24e31 == '\0') {
                  FUN_012d0dc8(PTR_DAT_057ddc60,uVar5);
                  cRam0000000005c24e31 = '\x01';
                }
                if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
                  DG_Tweening_Core_Debugger__LogNestedTween_362a268(lVar7,0);
                }
              }
              return lVar7;
            }
          }
          break;
        }
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057644b0);
        if (lVar7 == 0) break;
        System_Object___ctor_23dfe5c(lVar7,0);
        if (*(long *)(param_1 + 0x20) == 0) break;
        uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x20),iVar8,*(undefined8 *)PTR_DAT_057c2030);
        puVar9 = (undefined8 *)(lVar7 + 0x10);
        *puVar9 = uVar5;
        FUN_012d0d74(puVar9,uVar5);
        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar5 = DG_Tweening_DOTween__Sequence_1eda154(0);
        uVar5 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(fVar12,uVar5,0);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
        if (lVar6 == 0) break;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar6,lVar7,*(undefined8 *)puVar3,0);
        uVar5 = DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar5,lVar6,0);
        uVar10 = *(undefined8 *)(lVar7 + 0x10);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(puVar4);
          cRam0000000005c230a9 = '\x01';
        }
        if (*(long *)(param_1 + 0x18) == 0) break;
        fVar11 = *(float *)(*(long *)(param_1 + 0x18) + 0x1c);
        lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
        uVar10 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                           (*(float *)(lVar7 + 0xc) * fVar11,*(float *)(lVar7 + 0x10) * fVar11,
                            *(float *)(lVar7 + 0x14) * fVar11,0,uVar10,0);
        uVar5 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar10,0);
        uVar10 = *puVar9;
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(puVar4);
          cRam0000000005c230a9 = '\x01';
        }
        if (*(long *)(param_1 + 0x18) == 0) break;
        lVar7 = *(long *)(*(long *)puVar4 + 0xb8);
        uVar10 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                           (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                            *(undefined4 *)(lVar7 + 0x14),
                            *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),uVar10,0);
        if (*(long *)(param_1 + 0x18) == 0) break;
        uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                           (uVar10,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),
                            *(undefined8 *)puVar2);
        uVar5 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar5,uVar10,0);
        if (*(long *)(param_1 + 0x18) == 0) break;
        uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar5,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),
                           *(undefined8 *)puVar1);
        if (*(long *)(param_1 + 0x18) == 0) break;
        fVar12 = fVar12 + *(float *)(*(long *)(param_1 + 0x18) + 0x24);
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                  (0,*(undefined8 *)(param_1 + 0x38),uVar5,0);
        lVar7 = *(long *)(param_1 + 0x20);
        iVar8 = iVar8 + 1;
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

