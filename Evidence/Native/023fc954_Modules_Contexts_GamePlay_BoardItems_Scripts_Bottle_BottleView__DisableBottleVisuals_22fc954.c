/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$DisableBottleVisuals
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__DisableBottleVisuals (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleByHeight_o* bottleByHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$DisableBottleVisuals
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__DisableBottleVisuals
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleByHeight_o* bottleByHeight, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__DisableBottleVisuals_22fc954
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 023fc8f8 with catch @ 023fc958
                        */
  if ((bRam0000000005c2a5fb & 1) == 0) {
                    /* try { // try from 023fc970 to 024fc987 has its CatchHandler @ 023fca00 */
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2a5fb = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (param_2 != 0) {
                    /* try { // try from 023fc988 to 024fc9ef has its CatchHandler @ 023fc8a0 */
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_023fca18;
      UnityEngine_GameObject__SetActive_408e318(*(long *)(param_2 + 0x18),0,0);
    }
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
                    /* try { // try from 023fc9f0 to 024fc9ff has its CatchHandler @ 023fca00 */
    if (((uVar2 & 1) != 0) && (lVar3 = *(long *)(param_2 + 0x60), lVar3 != 0)) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar3,0);
      return;
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023fca04 with catch @ 023fca10
                        */
    return;
  }
LAB_023fca18:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

