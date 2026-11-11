/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain.CurtainItem$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem_o* __this,
   UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   int32_t blockerVariant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainItem__Prepare_2490588
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
               undefined4 param_9)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 02590594 to 02690597 has its CatchHandler @ 025905bc */
                    /* try { // try from 025905a4 to 026905ab has its CatchHandler @ 025905c0 */
  *(undefined8 *)(param_4 + 0x50) = param_7;
                    /* try { // try from 025905ac to 026905db has its CatchHandler @ 0259051c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02590594 with catch @ 025905bc
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025905a4 with catch @ 025905c0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0259056c with catch @ 025905c4
                        */
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  plVar3 = (long *)(param_4 + 0x58);
  *plVar3 = param_8;
  FUN_012d0d74(plVar3,param_8);
                    /* try { // try from 025905dc to 026905f3 has its CatchHandler @ 025906a4 */
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  if ((*plVar3 != 0) && (lVar1 = *(long *)(param_4 + 0x48), lVar1 != 0)) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__SetVariant_2490c0c
              (lVar1,param_9);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Curtain_CurtainView__SetSorting_2490dc8
              (lVar1,param_5,param_6);
    lVar2 = *(long *)(lVar1 + 0x68);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) {
      UnityEngine_Animation__Play_1f7a100(*(long *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),0);
      if (*(long *)(lVar1 + 0x28) != 0) {
        UnityEngine_Animation__Play_1f7a100(*(long *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),0)
        ;
        if (*(long *)(lVar1 + 0x20) != 0) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Common_Objective_ObjectiveView__SetSortOrder_2307aac
                    (*(long *)(lVar1 + 0x20),(int)param_6 + 1,0);
          if (*(long *)(lVar1 + 0x20) != 0) {
            lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 0x18);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

