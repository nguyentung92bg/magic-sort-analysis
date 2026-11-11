/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$GetSnitchRiseWorldTargetPositionsByIndex
UnityEngine_Vector2_o Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseWorldTargetPositionsByIndex (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$GetSnitchRiseWorldTargetPositionsByIndex
   UnityEngine_Vector2_o
   Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseWorldTargetPositionsByIndex
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t index, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__GetSnitchRiseWorldTargetPositionsByIndex_20fa0e8
          (long param_1,int param_2)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 uVar4;
  undefined8 extraout_var_00;
  undefined8 uVar5;
  undefined1 auVar3 [16];
  
  if ((bRam0000000005c29799 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b9dc8);
                    /* try { // try from 021fa118 to 022fa157 has its CatchHandler @ 021fa118
                       catch() { ... } // from try @ 021fa118 with catch @ 021fa118
                       catch() { ... } // from try @ 021fa16c with catch @ 021fa118
                       catch() { ... } // from try @ 021fa1a8 with catch @ 021fa118
                       catch() { ... } // from try @ 021fa1e8 with catch @ 021fa118 */
    FUN_012d0dc8(PTR_DAT_0578b510);
    bRam0000000005c29799 = 1;
  }
  if (-1 < param_2) {
    lVar1 = *(long *)(param_1 + 0x110);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (param_2 < *(int *)(lVar1 + 0x18)) {
      System_Collections_Generic_List_Vector2___get_Item_22704f4
                (lVar1,param_2,*(undefined8 *)PTR_DAT_0578b510);
      uVar2 = extraout_s0;
      uVar4 = extraout_var;
      uVar5 = extraout_var_00;
      goto LAB_021fa188;
    }
  }
                    /* try { // try from 021fa158 to 022fa16b has its CatchHandler @ 021fa178 */
  if (cRam0000000005c2345c == '\0') {
    FUN_012d0dc8(PTR_DAT_05803150);
                    /* try { // try from 021fa16c to 022fa18f has its CatchHandler @ 021fa118 */
    cRam0000000005c2345c = '\x01';
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 021fa158 with catch @ 021fa178
                        */
  uVar2 = **(undefined4 **)(*(long *)PTR_DAT_05803150 + 0xb8);
  uVar4 = 0;
  uVar5 = 0;
LAB_021fa188:
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = uVar2;
  auVar3._8_8_ = uVar5;
                    /* try { // try from 021fa190 to 022fa1a7 has its CatchHandler @ 021fa1e0 */
  return auVar3;
}

