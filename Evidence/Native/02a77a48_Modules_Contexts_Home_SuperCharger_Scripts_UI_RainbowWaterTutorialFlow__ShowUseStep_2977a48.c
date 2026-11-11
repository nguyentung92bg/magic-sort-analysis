/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$ShowUseStep
void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__ShowUseStep (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$ShowUseStep
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__ShowUseStep
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__ShowUseStep_2977a48
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000005c2d706 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057d0988);
    FUN_012d0dc8(PTR_DAT_057b8de8);
    bRam0000000005c2d706 = 1;
  }
  if ((*(long *)(param_4 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_4 + 0x10) + 0x30), lVar4 != 0)) {
    UnityEngine_Behaviour__set_enabled_408d778(lVar4,0,0);
    puVar2 = PTR_DAT_057b8de8;
    if (*(long *)(param_4 + 0x10) != 0) {
      lVar4 = *(long *)(*(long *)(param_4 + 0x10) + 0x40);
      if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                        (*(undefined8 *)puVar2,0);
      if (lVar4 != 0) {
        TMPro_TMP_Text__SetText_3dc1ab4(lVar4,uVar5,1,0);
        puVar2 = PTR_DAT_057d0988;
        plVar6 = *(long **)(param_4 + 0x28);
        if (plVar6 != (long *)0x0) {
          fVar9 = (float)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          lVar4 = *(long *)puVar2;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar4 = *(long *)puVar2;
          }
          pfVar8 = *(float **)(lVar4 + 0xb8);
          fVar11 = *pfVar8;
          fVar12 = pfVar8[1];
          fVar13 = pfVar8[2];
          Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetFingerMirrored_2977d64
                    (param_4,fVar9 < 0.0);
          if (*(long *)(param_4 + 0x10) == 0) goto LAB_02a77ba8;
          fVar10 = -fVar11;
          if (0.0 <= fVar9) {
            fVar10 = fVar11;
          }
          Modules_Contexts_Home_SuperCharger_Scripts_UI_SuperChargerTutorialView__ShowFingerAt_29771c4
                    (fVar9 - fVar10,param_2 - fVar12,param_3 - fVar13);
        }
        puVar2 = PTR_DAT_057606c8;
        uVar1 = _UNK_04359fc0;
        lVar4 = *(long *)(param_4 + 0x10);
        if (lVar4 != 0) {
          if ((bRam0000000005c2d70e & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_058057a8);
            FUN_012d0dc8(PTR_DAT_057606c8);
            FUN_012d0dc8(PTR_DAT_0577bc68);
            bRam0000000005c2d70e = 1;
          }
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          puVar2 = PTR_DAT_0577bc68;
          if (lVar3 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,lVar4,*(undefined8 *)PTR_DAT_058057a8,0);
            lVar3 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar1,lVar3,1,0);
            uVar5 = *(undefined8 *)(lVar4 + 0x10);
            uVar7 = *(undefined8 *)puVar2;
            if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
              *(undefined8 *)(lVar3 + 0x30) = uVar5;
              FUN_012d0d74((undefined8 *)(lVar3 + 0x30),uVar5,uVar7);
            }
            return lVar3;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
LAB_02a77ba8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

