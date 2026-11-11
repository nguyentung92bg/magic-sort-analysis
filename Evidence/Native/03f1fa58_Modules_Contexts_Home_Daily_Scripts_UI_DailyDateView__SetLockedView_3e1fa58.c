/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetLockedView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetLockedView (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetLockedView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetLockedView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetLockedView_3e1fa58(long param_1)

{
  long lVar1;
  
                    /* try { // try from 03f1fa6c to 0401fa93 has its CatchHandler @ 03f1fb14 */
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x38), lVar1 != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    UnityEngine_SpriteRenderer__set_sprite_4095b64
              (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x38),0);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0),
       lVar1 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
                    /* try { // try from 03f1faac to 0401fab3 has its CatchHandler @ 03f1fb2c */
                    /* try { // try from 03f1fab4 to 0401faef has its CatchHandler @ 03f1f890 */
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
         lVar1 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0),
           lVar1 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
                    /* try { // try from 03f1faf0 to 0401faf7 has its CatchHandler @ 03f1fb14 */
          if ((*(long *)(param_1 + 0x28) != 0) &&
             (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0),
             lVar1 != 0)) {
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03f1fb08 to 0401fb0b has its CatchHandler @ 03f1fb38 */
  FUN_012d0ef0();
}

