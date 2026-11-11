/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetDynamicDurationRequiredForSequence
float Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetDynamicDurationRequiredForSequence (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o targetPosition, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t targetBottleRowIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetDynamicDurationRequiredForSequence
   float 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetDynamicDurationRequiredForSequence
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o targetPosition,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t
   targetBottleRowIndex, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetDynamicDurationRequiredForSequence_2611338
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               undefined4 param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_78 [24];
  
  uVar7 = param_2;
  uVar8 = param_3;
  if ((bRam0000000005c2ba0a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c2ba0a = 1;
  }
  fVar10 = (float)uVar8;
  fVar9 = (float)uVar7;
  if ((param_5 != 0) &&
     (plVar1 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                 (param_5,0), plVar1 != (long *)0x0)) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0575a2d8) {
                    /* try { // try from 027113f8 to 02811447 has its CatchHandler @ 027113f8
                       catch() { ... } // from try @ 027113f8 with catch @ 027113f8
                       catch() { ... } // from try @ 0271148c with catch @ 027113f8
                       catch() { ... } // from try @ 027114c4 with catch @ 027113f8
                       catch() { ... } // from try @ 027114f4 with catch @ 027113f8
                       catch() { ... } // from try @ 02711568 with catch @ 027113f8 */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_027113fc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0131971c(plVar1,*(long *)PTR_DAT_0575a2d8,0);
LAB_027113fc:
    fVar6 = (float)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (*(long *)(param_4 + 0x38) != 0) {
      fVar11 = *(float *)(*(long *)(param_4 + 0x38) + 0x308);
      if (cRam0000000005c230ac == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230ac = '\x01';
      }
                    /* try { // try from 02711448 to 0281148b has its CatchHandler @ 027114c4 */
      lVar3 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      fVar6 = fVar6 + fVar11 * *(float *)(lVar3 + 0x18);
      fVar9 = fVar9 + fVar11 * *(float *)(lVar3 + 0x1c);
      fVar10 = fVar10 + fVar11 * *(float *)(lVar3 + 0x20);
                    /* try { // try from 0271148c to 028114b7 has its CatchHandler @ 027113f8 */
      Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetBezierControlPointsForPosition_2611f38
                (auStack_78,fVar6,fVar9,fVar10,param_1,param_2,param_3,param_4,
                 *(undefined4 *)(param_5 + 0xdc),param_6);
                    /* try { // try from 027114b8 to 028114c3 has its CatchHandler @ 027114c4 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02711448 with catch @ 027114c4
                       catch(type#1 @ 054cbd58) { ... } // from try @ 027114b8 with catch @ 027114c4
                       try { // try from 027114c4 to 028114db has its CatchHandler @ 027113f8 */
      Modules_Infrastructure_Utils_BezierUtils__Get2NodeBezierControlPointsXYConfigurable_3de0b30
                (fVar6,fVar9,fVar10,param_1,param_2,param_3,0);
                    /* try { // try from 027114dc to 028114f3 has its CatchHandler @ 02711560 */
                    /* try { // try from 027114f4 to 0281154f has its CatchHandler @ 027113f8 */
      Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchHitDynamicDuration_260f3e8
                (fVar6,fVar9,fVar10,param_1,param_2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

