/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$ToggleDailyDateView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__ToggleDailyDateView (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, bool toggle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$ToggleDailyDateView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__ToggleDailyDateView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, bool toggle, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__ToggleDailyDateView_3e1fb0c
               (undefined8 param_1,uint param_2)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 03f1faf8 with catch @ 03f1fb0c
                       try { // try from 03f1fb0c to 0401fb63 has its CatchHandler @ 03f1f890 */
                    /* catch() { ... } // from try @ 03f1fb00 with catch @ 03f1fb10 */
                    /* catch() { ... } // from try @ 03f1fa6c with catch @ 03f1fb14
                       catch() { ... } // from try @ 03f1faf0 with catch @ 03f1fb14 */
                    /* catch() { ... } // from try @ 03f1f9d0 with catch @ 03f1fb18 */
  lVar1 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
                    /* catch() { ... } // from try @ 03f1f9e4 with catch @ 03f1fb1c */
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 03f1faac with catch @ 03f1fb2c */
    if (pcRam0000000005c3a388 == (code *)0x0) {
      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a388)(lVar1,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03f1f9b0 with catch @ 03f1fb30 */
  FUN_012d0ef0();
}

