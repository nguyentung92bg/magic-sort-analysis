/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$SetTutorialSorting
void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetTutorialSorting (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$SetTutorialSorting
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetTutorialSorting
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetTutorialSorting_2977938
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2d708 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2d708 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0)) &&
     (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar2,*(undefined8 *)PTR_DAT_0575c3c8), lVar2 != 0)) {
    lVar3 = *(long *)(param_1 + 0x20);
    auVar4 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetChargeableBottleTutorialSorting_400332c
                       (lVar2,1,0);
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + 0x50);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(long *)(lVar2 + 0x58) != 0) {
        UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                  (*(long *)(lVar2 + 0x58),auVar4._8_8_ & 0xffffffff,0,0);
        lVar2 = *(long *)(lVar2 + 0x58);
        if (lVar2 != 0) {
          if (pcRam0000000005c37828 == (code *)0x0) {
            pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
          }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c37828)(lVar2,auVar4._0_8_);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

