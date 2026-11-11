/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayItem$$OnRecycle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__OnRecycle (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayItem$$OnRecycle
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__OnRecycle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__OnRecycle_2491620(long *param_1)

{
  long lVar1;
  
                    /* try { // try from 02591624 to 02691627 has its CatchHandler @ 02591650 */
                    /* try { // try from 02591628 to 0269162b has its CatchHandler @ 02591630 */
                    /* try { // try from 0259162c to 0269162f has its CatchHandler @ 02591640 */
                    /* catch() { ... } // from try @ 02591628 with catch @ 02591630
                       try { // try from 02591630 to 02691667 has its CatchHandler @ 0259141c */
                    /* catch() { ... } // from try @ 025914e0 with catch @ 02591634 */
  Modules_Infrastructure_Common_Scripts_Component_AItem__SetParent_40e9f48(param_1,0,0);
                    /* catch() { ... } // from try @ 025914a0 with catch @ 02591638 */
                    /* catch() { ... } // from try @ 02591544 with catch @ 0259163c */
                    /* catch() { ... } // from try @ 025914fc with catch @ 02591640
                       catch() { ... } // from try @ 0259162c with catch @ 02591640 */
  if (cRam0000000005c230a9 == '\0') {
                    /* catch() { ... } // from try @ 025915cc with catch @ 02591644 */
                    /* catch() { ... } // from try @ 025915b4 with catch @ 02591648 */
                    /* catch() { ... } // from try @ 02591480 with catch @ 0259164c
                       catch() { ... } // from try @ 025914c0 with catch @ 0259164c */
    FUN_012d0dc8(PTR_DAT_05805c10);
                    /* catch() { ... } // from try @ 02591584 with catch @ 02591650
                       catch() { ... } // from try @ 02591624 with catch @ 02591650 */
    cRam0000000005c230a9 = '\x01';
  }
                    /* try { // try from 02591668 to 0269167f has its CatchHandler @ 0259174c */
  lVar1 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
                    /* try { // try from 02591680 to 0269173b has its CatchHandler @ 0259141c */
                    /* WARNING: Could not recover jumptable at 0x02591684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1d8))
            (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
             *(undefined4 *)(lVar1 + 0x14),param_1,*(undefined8 *)(*param_1 + 0x1e0));
  return;
}

