/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t type, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t type,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__Prepare_260dbc8
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x100) = param_2;
                    /* try { // try from 0270dbdc to 0280dbe3 has its CatchHandler @ 0270dcf0 */
  Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__SetSorting_260e660
            (param_1,param_3,param_4);
  Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__UpdateView_260e6a4(param_1);
  uVar1 = UnityEngine_Random__Range_383a610(0,0x42c80000,0);
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  uVar1 = UnityEngine_Random__Range_383a610(0,0x42c80000,0);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  uVar2 = UnityEngine_Random__Range_383a610(0,0x42c80000,0);
  uVar1 = _UNK_0434cd00;
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
                    /* try { // try from 0270dc40 to 0280dc47 has its CatchHandler @ 0270dcf4 */
  uVar1 = UnityEngine_Random__Range_383a610(0,uVar1,0);
                    /* try { // try from 0270dc48 to 0280dcc7 has its CatchHandler @ 0270d9d8 */
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}

