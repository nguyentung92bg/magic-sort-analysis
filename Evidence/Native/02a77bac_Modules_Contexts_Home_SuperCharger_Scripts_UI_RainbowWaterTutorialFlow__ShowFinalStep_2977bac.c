/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$ShowFinalStep
void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__ShowFinalStep (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$ShowFinalStep
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__ShowFinalStep
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const
   MethodInfo* method); */

long Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__ShowFinalStep_2977bac
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000005c2d707 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057816e8);
    bRam0000000005c2d707 = 1;
  }
  puVar2 = PTR_DAT_057816e8;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
    if (*(int *)(*(long *)PTR_DAT_057bc5e8 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar4 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                      (*(undefined8 *)puVar2,0);
    if (lVar6 != 0) {
      TMPro_TMP_Text__SetText_3dc1ab4(lVar6,uVar4,1,0);
      puVar2 = PTR_DAT_057606c8;
      uVar1 = _UNK_04359fc0;
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 != 0) {
        if ((bRam0000000005c2d70e & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_058057a8);
          FUN_012d0dc8(PTR_DAT_057606c8);
          FUN_012d0dc8(PTR_DAT_0577bc68);
          bRam0000000005c2d70e = 1;
        }
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        puVar2 = PTR_DAT_0577bc68;
        if (lVar3 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,lVar6,*(undefined8 *)PTR_DAT_058057a8,0);
          lVar3 = DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar1,lVar3,1,0);
          uVar4 = *(undefined8 *)(lVar6 + 0x10);
          uVar5 = *(undefined8 *)puVar2;
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
            *(undefined8 *)(lVar3 + 0x30) = uVar4;
            FUN_012d0d74((undefined8 *)(lVar3 + 0x30),uVar4,uVar5);
          }
          return lVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

