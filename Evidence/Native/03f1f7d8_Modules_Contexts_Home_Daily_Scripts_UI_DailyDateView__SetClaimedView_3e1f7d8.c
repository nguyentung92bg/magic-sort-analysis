/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetClaimedView
void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetClaimedView (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyDateView$$SetClaimedView
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetClaimedView
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyDateView__SetClaimedView_3e1f7d8(long param_1)

{
  long lVar1;
  
                    /* try { // try from 03f1f7ec to 0401f7fb has its CatchHandler @ 03f1f7fc */
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x38), lVar1 != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
                    /* catch() { ... } // from try @ 03f1f778 with catch @ 03f1f7fc
                       catch() { ... } // from try @ 03f1f7ec with catch @ 03f1f7fc */
                    /* try { // try from 03f1f800 to 0401f803 has its CatchHandler @ 03f1f80c */
    UnityEngine_SpriteRenderer__set_sprite_4095b64
              (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x18),0);
                    /* try { // try from 03f1f804 to 0401f80f has its CatchHandler @ 03f1f1dc */
                    /* catch() { ... } // from try @ 03f1f57c with catch @ 03f1f80c
                       catch() { ... } // from try @ 03f1f708 with catch @ 03f1f80c
                       catch() { ... } // from try @ 03f1f800 with catch @ 03f1f80c */
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x38),0),
       lVar1 != 0)) {
      UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
         lVar1 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x30),0),
           lVar1 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
          if ((*(long *)(param_1 + 0x28) != 0) &&
             (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x28),0),
             lVar1 != 0)) {
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar1,1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

