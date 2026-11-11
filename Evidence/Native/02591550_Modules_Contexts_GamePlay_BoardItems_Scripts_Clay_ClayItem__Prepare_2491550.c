/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayItem$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t blockerVariant, bool isNewParticleEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay.ClayItem$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t
   blockerVariant, bool isNewParticleEnabled, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayItem__Prepare_2491550
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               byte param_9)

{
  *(undefined8 *)(param_4 + 0x50) = param_7;
                    /* try { // try from 02591584 to 026915ab has its CatchHandler @ 02591650 */
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  if (*(long *)(param_4 + 0x48) != 0) {
                    /* try { // try from 025915b4 to 026915bf has its CatchHandler @ 02591648 */
    Modules_Contexts_GamePlay_BoardItems_Scripts_Clay_ClayView__Prepare_24915e4
              (*(long *)(param_4 + 0x48),param_5,param_6,param_8);
    *(byte *)(param_4 + 0x58) = param_9 & 1;
                    /* try { // try from 025915cc to 026915d3 has its CatchHandler @ 02591644 */
                    /* try { // try from 025915d4 to 02691623 has its CatchHandler @ 0259141c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

