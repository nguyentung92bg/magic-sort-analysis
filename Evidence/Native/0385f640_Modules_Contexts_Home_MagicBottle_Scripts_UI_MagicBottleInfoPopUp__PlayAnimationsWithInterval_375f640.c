/* IL2CPP: Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleInfoPopUp$$PlayAnimationsWithInterval
void Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__PlayAnimationsWithInterval (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicBottle.Scripts.UI.MagicBottleInfoPopUp$$PlayAnimationsWithInterval
   void 
   Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__PlayAnimationsWithInterval
   (Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_Home_MagicBottle_Scripts_UI_MagicBottleInfoPopUp__PlayAnimationsWithInterval_375f640
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 extraout_x1;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
                    /* try { // try from 0385f660 to 0395f93f has its CatchHandler @ 0385f660
                       catch() { ... } // from try @ 0385f660 with catch @ 0385f660
                       catch() { ... } // from try @ 0385f9fc with catch @ 0385f660
                       catch() { ... } // from try @ 0385fa80 with catch @ 0385f660
                       catch() { ... } // from try @ 0385fb14 with catch @ 0385f660 */
  if ((bRam0000000005c33bb6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057f9a60);
    FUN_012d0dc8(PTR_DAT_057c2030);
    FUN_012d0dc8(PTR_DAT_05764788);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057e7670);
    FUN_012d0dc8(PTR_DAT_05766e90);
    FUN_012d0dc8(PTR_DAT_057874c0);
    FUN_012d0dc8(PTR_DAT_057e3210);
    FUN_012d0dc8(PTR_DAT_0577f478);
    bRam0000000005c33bb6 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    fVar12 = *(float *)(*(long *)(param_1 + 0x18) + 0x18);
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 != 0) {
      DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar5,0,0);
    }
    if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
    *(undefined8 *)(param_1 + 0x38) = uVar6;
    FUN_012d0d74((long *)(param_1 + 0x38),uVar6);
    puVar4 = PTR_DAT_05805c10;
    puVar3 = PTR_DAT_057e3210;
    puVar2 = PTR_DAT_057874c0;
    puVar1 = PTR_DAT_05766e90;
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      iVar8 = 0;
      do {
        if (*(int *)(lVar5 + 0x18) <= iVar8) {
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 != 0) {
            fVar11 = *(float *)(lVar5 + 0x20);
            fVar13 = *(float *)(lVar5 + 0x24);
            uVar6 = *(undefined8 *)(param_1 + 0x38);
            lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
            if (lVar5 != 0) {
                    /* try { // try from 0385f980 to 0395f9e3 has its CatchHandler @ 0385fa94 */
              DG_Tweening_TweenCallback___ctor_1ed6da8
                        (lVar5,param_1,*(undefined8 *)PTR_DAT_05764788,0);
              DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154
                        ((fVar12 - (fVar13 + fVar13)) - (fVar11 + fVar11),uVar6,lVar5,0);
              lVar5 = *(long *)(param_1 + 0x38);
              uVar6 = *(undefined8 *)PTR_DAT_057e7670;
              if ((bRam0000000005c2c3bb & 1) == 0) {
                FUN_012d0dc8(PTR_DAT_058163b8,uVar6);
                bRam0000000005c2c3bb = 1;
                uVar6 = extraout_x1;
              }
              if (lVar5 == 0) {
                if (cRam0000000005c24e31 == '\0') {
                  FUN_012d0dc8(PTR_DAT_057ddc60,uVar6);
                  cRam0000000005c24e31 = '\x01';
                }
                if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
                  DG_Tweening_Core_Debugger__LogNullTween_362a2b0(0,0);
                }
              }
              else if (*(char *)(lVar5 + 0xe8) == '\0') {
                if (cRam0000000005c24e31 == '\0') {
                  FUN_012d0dc8(PTR_DAT_057ddc60,uVar6);
                  cRam0000000005c24e31 = '\x01';
                }
                if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
                  DG_Tweening_Core_Debugger__LogInvalidTween_362a224(lVar5,0);
                }
              }
              else if (*(char *)(lVar5 + 0xe9) == '\0') {
                if (*(int *)(*(long *)PTR_DAT_058163b8 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                }
                DG_Tweening_Core_TweenManager__Play_3330e80(lVar5,0);
              }
              else {
                if (cRam0000000005c24e31 == '\0') {
                  FUN_012d0dc8(PTR_DAT_057ddc60,uVar6);
                  cRam0000000005c24e31 = '\x01';
                }
                if (1 < **(int **)(*(long *)PTR_DAT_057ddc60 + 0xb8)) {
                  DG_Tweening_Core_Debugger__LogNestedTween_362a268(lVar5,0);
                }
              }
              return lVar5;
            }
          }
          break;
        }
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577f478);
        if (lVar5 == 0) break;
        System_Object___ctor_23dfe5c(lVar5,0);
        if (*(long *)(param_1 + 0x20) == 0) break;
        uVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x20),iVar8,*(undefined8 *)PTR_DAT_057c2030);
        puVar9 = (undefined8 *)(lVar5 + 0x10);
        *puVar9 = uVar6;
        FUN_012d0d74(puVar9,uVar6);
        if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar6 = DG_Tweening_DOTween__Sequence_1eda154(0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(fVar12,uVar6,0);
        lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
        if (lVar7 == 0) break;
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,lVar5,*(undefined8 *)puVar3,0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__AppendCallback_1eee078(uVar6,lVar7,0);
        uVar10 = *(undefined8 *)(lVar5 + 0x10);
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(puVar4);
          cRam0000000005c230a9 = '\x01';
        }
        if (*(long *)(param_1 + 0x18) == 0) break;
        fVar11 = *(float *)(*(long *)(param_1 + 0x18) + 0x1c);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        uVar10 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                           (*(float *)(lVar5 + 0xc) * fVar11,*(float *)(lVar5 + 0x10) * fVar11,
                            *(float *)(lVar5 + 0x14) * fVar11,0,uVar10,0);
        uVar6 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar10,0);
        uVar10 = *puVar9;
        if (cRam0000000005c230a9 == '\0') {
          FUN_012d0dc8(puVar4);
          cRam0000000005c230a9 = '\x01';
        }
        if (*(long *)(param_1 + 0x18) == 0) break;
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        uVar10 = DG_Tweening_ShortcutExtensions__DOScale_1ee649c
                           (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                            *(undefined4 *)(lVar5 + 0x14),
                            *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x20),uVar10,0);
        if (*(long *)(param_1 + 0x18) == 0) break;
        uVar10 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                           (uVar10,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),
                            *(undefined8 *)puVar2);
        uVar6 = DG_Tweening_TweenSettingsExtensions__Append_1ee8b88(uVar6,uVar10,0);
        if (*(long *)(param_1 + 0x18) == 0) break;
        uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                          (uVar6,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),
                           *(undefined8 *)puVar1);
        if (*(long *)(param_1 + 0x18) == 0) break;
        fVar12 = fVar12 + *(float *)(*(long *)(param_1 + 0x18) + 0x24);
                    /* try { // try from 0385f940 to 0395f967 has its CatchHandler @ 0385fa90 */
        DG_Tweening_TweenSettingsExtensions__Insert_1eedff4
                  (0,*(undefined8 *)(param_1 + 0x38),uVar6,0);
        lVar5 = *(long *)(param_1 + 0x20);
        iVar8 = iVar8 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

