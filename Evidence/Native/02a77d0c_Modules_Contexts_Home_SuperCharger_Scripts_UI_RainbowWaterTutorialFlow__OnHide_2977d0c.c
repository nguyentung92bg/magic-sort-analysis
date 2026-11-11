/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$OnHide
void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__OnHide (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.SuperCharger.Scripts.UI.RainbowWaterTutorialFlow$$OnHide
   void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__OnHide
   (Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__OnHide_2977d0c
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x48), lVar4 != 0)) {
    UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
    Modules_Contexts_Home_SuperCharger_Scripts_UI_RainbowWaterTutorialFlow__SetFingerMirrored_2977d64
              (param_1,0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_012d0d74((undefined8 *)(param_1 + 0x20),0);
    puVar5 = (undefined8 *)(param_1 + 0x28);
    *puVar5 = 0;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

