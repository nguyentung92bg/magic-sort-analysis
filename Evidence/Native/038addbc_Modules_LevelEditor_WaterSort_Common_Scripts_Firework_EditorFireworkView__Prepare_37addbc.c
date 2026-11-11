/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Firework.EditorFireworkView$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView_o* __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t fireworkCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Firework.EditorFireworkView$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView_o* __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t fireworkCount, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView__Prepare_37addbc
               (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_24;
  
  lVar2 = *(long *)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 038add9c with catch @ 038addd4 */
  uStack_24 = param_4;
  uVar1 = System_Int32__ToString_26c9768(&uStack_24,0);
                    /* try { // try from 038adde4 to 039addeb has its CatchHandler @ 038ade00 */
  if (lVar2 != 0) {
                    /* try { // try from 038addec to 039addf7 has its CatchHandler @ 038adc1c */
    TMPro_TMP_InputField__SetTextWithoutNotify_3790e88(lVar2,uVar1,0);
                    /* try { // try from 038addf8 to 039addff has its CatchHandler @ 038ade00 */
    if (*(long *)(param_1 + 0x20) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 038adde4 with catch @ 038ade00
                       catch(type#2 @ 00000000) { ... } // from try @ 038addf8 with catch @ 038ade00
                        */
                    /* try { // try from 038ade04 to 039ade9b has its CatchHandler @ 038ade04
                       catch() { ... } // from try @ 038ade04 with catch @ 038ade04
                       catch() { ... } // from try @ 038adec0 with catch @ 038ade04
                       catch() { ... } // from try @ 038adf00 with catch @ 038ade04
                       catch() { ... } // from try @ 038adf88 with catch @ 038ade04
                       catch() { ... } // from try @ 038adfd4 with catch @ 038ade04 */
      UnityEngine_Renderer__set_sortingOrder_40826fc(*(long *)(param_1 + 0x20),param_3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

