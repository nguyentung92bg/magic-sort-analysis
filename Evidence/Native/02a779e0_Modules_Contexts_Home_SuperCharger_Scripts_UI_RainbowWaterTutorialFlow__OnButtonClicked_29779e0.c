/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$OnButtonClicked
void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__OnButtonClicked (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$OnButtonClicked
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__OnButtonClicked
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__OnButtonClicked_29779e0
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar2 = *(int *)(param_4 + 0x30);
  iVar1 = iVar2 + 1;
  *(int *)(param_4 + 0x30) = iVar1;
  if (iVar2 == 0) {
    if ((bRam0000000005c2d706 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057bc5e8);
      FUN_012d0dc8(PTR_DAT_057d0988);
      FUN_012d0dc8(PTR_DAT_057b8de8);
      bRam0000000005c2d706 = 1;
    }
    if ((*(long *)(param_4 + 0x10) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_4 + 0x10) + 0x30), lVar10 != 0)) {
      UnityEngine_Behaviour__set_enabled_408d778(lVar10,0,0);
      puVar4 = PTR_DAT_057b8de8;
      if (*(long *)(param_4 + 0x10) != 0) {
        lVar10 = *(long *)(*(long *)(param_4 + 0x10) + 0x40);
        if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                          (*(undefined8 *)puVar4,0);
        if (lVar10 != 0) {
          TMPro_TMP_Text__SetText_3dc1ab4(lVar10,uVar7,1,0);
          puVar4 = PTR_DAT_057d0988;
          plVar6 = *(long **)(param_4 + 0x28);
          if (plVar6 != (long *)0x0) {
            fVar11 = (float)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
            lVar10 = *(long *)puVar4;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_0130472c();
              lVar10 = *(long *)puVar4;
            }
            pfVar9 = *(float **)(lVar10 + 0xb8);
            fVar13 = *pfVar9;
            fVar14 = pfVar9[1];
            fVar15 = pfVar9[2];
            Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetFingerMirrored_2977d64
                      (param_4,fVar11 < 0.0);
            if (*(long *)(param_4 + 0x10) == 0) goto LAB_02a77ba8;
            fVar12 = -fVar13;
            if (0.0 <= fVar11) {
              fVar12 = fVar13;
            }
            Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView__ShowFingerAt_29771c4
                      (fVar11 - fVar12,param_2 - fVar14,param_3 - fVar15);
          }
          lVar10 = *(long *)(param_4 + 0x10);
          if (lVar10 != 0)
          goto 
          Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView__DelayedShowButton_2976600
          ;
        }
      }
    }
LAB_02a77ba8:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (iVar1 != 2) {
    if (*(long *)(param_4 + 0x20) != 0) {
      Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetDefaultSorting_2977c54
                (param_4);
    }
    lVar10 = *(long *)(param_4 + 0x18);
    if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02a77a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar10 = (**(code **)(lVar10 + 0x18))
                         (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
      return lVar10;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2d707 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057816e8);
    bRam0000000005c2d707 = 1;
  }
  puVar4 = PTR_DAT_057816e8;
  if (*(long *)(param_4 + 0x10) != 0) {
    lVar10 = *(long *)(*(long *)(param_4 + 0x10) + 0x40);
    if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar7 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                      (*(undefined8 *)puVar4,0);
    if (lVar10 != 0) {
      TMPro_TMP_Text__SetText_3dc1ab4(lVar10,uVar7,1,0);
      lVar10 = *(long *)(param_4 + 0x10);
      if (lVar10 != 0) {
Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView__DelayedShowButton_2976600:
        puVar4 = PTR_DAT_057606c8;
        uVar3 = _UNK_04359fc0;
        if ((bRam0000000005c2d70e & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_058057a8);
          FUN_012d0dc8(PTR_DAT_057606c8);
          FUN_012d0dc8(PTR_DAT_0577bc68);
          bRam0000000005c2d70e = 1;
        }
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
        puVar4 = PTR_DAT_0577bc68;
        if (lVar5 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,lVar10,*(undefined8 *)PTR_DAT_058057a8,0);
          lVar5 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar3,lVar5,1,0);
          uVar7 = *(undefined8 *)(lVar10 + 0x10);
          uVar8 = *(undefined8 *)puVar4;
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
            *(undefined8 *)(lVar5 + 0x30) = uVar7;
            FUN_012d0d74((undefined8 *)(lVar5 + 0x30),uVar7,uVar8);
          }
          return lVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

