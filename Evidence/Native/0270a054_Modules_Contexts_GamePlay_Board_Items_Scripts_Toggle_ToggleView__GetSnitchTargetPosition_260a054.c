/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$GetSnitchTargetPosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetSnitchTargetPosition (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleView$$GetSnitchTargetPosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetSnitchTargetPosition
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__GetSnitchTargetPosition_260a054
          (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 extraout_s0;
  undefined4 uVar6;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_DAT_0576c200;
                    /* try { // try from 0270a05c to 0280a063 has its CatchHandler @ 0270a070 */
                    /* catch() { ... } // from try @ 02709fe0 with catch @ 0270a064 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270a028 with catch @ 0270a070
                       catch(type#2 @ 00000000) { ... } // from try @ 0270a05c with catch @ 0270a070
                        */
  if ((bRam0000000005c2b9d5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b9d5 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Equality_407f288(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    UnityEngine_Transform__get_position_4092b08(*(long *)(param_1 + 0x38),0);
    uVar4 = extraout_s0;
    uVar6 = extraout_var;
    uVar3 = extraout_var_00;
  }
  else {
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    uVar4 = **(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar6 = 0;
    uVar3 = 0;
  }
  auVar5._4_4_ = uVar6;
  auVar5._0_4_ = uVar4;
  auVar5._8_8_ = uVar3;
  return auVar5;
}

