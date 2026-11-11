/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$<PlayCompleteAnimation>b__23_2
void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView___PlayCompleteAnimation_b__23_2 (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagView$$<PlayCompleteAnimation>b__23_2
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView___PlayCompleteAnimation_b__23_2
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagView___PlayCompleteAnimation_b__23_2_2f605fc
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000005c308f7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c308f7 = 1;
  }
                    /* try { // try from 0306063c to 03160643 has its CatchHandler @ 030607ac */
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (lVar2 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_1 + 0x58),0),
     puVar1 = PTR_DAT_0576aae0, lVar2 != 0)) {
    UnityEngine_Transform__set_parent_40933e0(lVar2,0,0);
                    /* try { // try from 03060668 to 0316066f has its CatchHandler @ 030607c8 */
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       ((lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 != 0 &&
        (lVar2 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar2,*(undefined8 *)PTR_DAT_0575c3c8), lVar2 != 0)))) {
      auVar3 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetWoodBoxKeyMovingSorting_4002b40
                         (lVar2,0);
      if (*(long *)(param_1 + 0x60) != 0) {
        UnityEngine_Behaviour__set_enabled_408d778(*(long *)(param_1 + 0x60),1,0);
        if (*(long *)(param_1 + 0x60) != 0) {
          UnityEngine_Rendering_SortingGroup__set_sortingLayerName_3d5ee44
                    (*(long *)(param_1 + 0x60),auVar3._0_8_,0);
          lVar2 = *(long *)(param_1 + 0x60);
          if (lVar2 != 0) {
                    /* try { // try from 030606c8 to 031606cf has its CatchHandler @ 030607a8 */
                    /* try { // try from 030606d0 to 03160723 has its CatchHandler @ 03060118 */
            if (pcRam0000000005c37840 == (code *)0x0) {
              pcRam0000000005c37840 = (code *)FUN_012d0d84(&UNK_043e4dbb);
            }
                    /* WARNING: Could not recover jumptable at 0x03e5ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c37840)(lVar2,auVar3._8_8_ & 0xffffffff);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

