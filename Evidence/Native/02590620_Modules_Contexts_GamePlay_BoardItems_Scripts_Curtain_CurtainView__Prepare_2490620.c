/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, UnityEngine_Color_o color, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainView$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, UnityEngine_Color_o color, int32_t
   blockerVariant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__Prepare_2490620
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  
  Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__SetVariant_2490c0c
            (param_1,param_4);
  Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__SetSorting_2490dc8
            (param_1,param_2,param_3);
  lVar1 = *(long *)(param_1 + 0x68);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) {
    UnityEngine_Animation__Play_1f7a100(*(long *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_Animation__Play_1f7a100
                (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
                    /* try { // try from 02590694 to 026906a3 has its CatchHandler @ 025906a4 */
      if (*(long *)(param_1 + 0x20) != 0) {
                    /* catch() { ... } // from try @ 025905dc with catch @ 025906a4
                       catch() { ... } // from try @ 02590694 with catch @ 025906a4 */
        Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView__SetSortOrder_2307aac
                  (*(long *)(param_1 + 0x20),(int)param_3 + 1,0);
                    /* try { // try from 025906a8 to 026906ab has its CatchHandler @ 025906b4 */
                    /* try { // try from 025906ac to 026906b7 has its CatchHandler @ 0259051c */
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
          if (lVar1 != 0) {
            if (pcRam0000000005c3a788 == (code *)0x0) {
              pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
            }
            (*pcRam0000000005c3a788)(lVar1,&stack0xffffffffffffffd0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0(0,0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

