/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetCalendarController
void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetCalendarController (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* calendarController, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetCalendarController
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetCalendarController
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this,
   Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* calendarController, const
   MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetCalendarController_3e1fb3c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
                    /* catch() { ... } // from try @ 03f1f924 with catch @ 03f1fb3c */
  puVar4 = (undefined8 *)(param_1 + 0x58);
  *puVar4 = param_2;
                    /* catch() { ... } // from try @ 03f1f908 with catch @ 03f1fb40 */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

