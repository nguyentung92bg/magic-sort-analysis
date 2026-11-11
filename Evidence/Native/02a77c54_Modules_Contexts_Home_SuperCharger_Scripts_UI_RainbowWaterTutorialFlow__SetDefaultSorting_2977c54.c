/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$SetDefaultSorting
void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetDefaultSorting (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$SetDefaultSorting
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetDefaultSorting
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetDefaultSorting_2977c54
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2d709 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2d709 = 1;
  }
  if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_0575c3c8);
    plVar6 = (long *)(param_1 + 0x20);
    lVar7 = *plVar6;
    if ((lVar7 != 0) && (lVar5 != 0)) {
      auVar8 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleSittingSorting_4002958
                         (lVar5,*(undefined4 *)(lVar7 + 0xc0),0);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__SetSorting_249388c
                (lVar7,auVar8._0_8_,auVar8._8_8_,0);
      *plVar6 = 0;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

