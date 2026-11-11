/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$GetSnitchTargetPosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__GetSnitchTargetPosition (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$GetSnitchTargetPosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__GetSnitchTargetPosition
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__GetSnitchTargetPosition_260a03c
          (long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 extraout_s0;
  undefined4 uVar7;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_0576c200;
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0270a050 to 0280a05b has its CatchHandler @ 02709b00 */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b9d5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b9d5 = 1;
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Equality_407f288(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(lVar2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    UnityEngine_Transform__get_position_4092b08(*(long *)(lVar2 + 0x38),0);
    uVar5 = extraout_s0;
    uVar7 = extraout_var;
    uVar4 = extraout_var_00;
  }
  else {
    if (cRam0000000005c230aa == '\0') {
      FUN_012d0dc8(PTR_DAT_05805c10);
      cRam0000000005c230aa = '\x01';
    }
    uVar5 = **(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar7 = 0;
    uVar4 = 0;
  }
  auVar6._4_4_ = uVar7;
  auVar6._0_4_ = uVar5;
  auVar6._8_8_ = uVar4;
  return auVar6;
}

