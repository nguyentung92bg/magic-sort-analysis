/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetSitRiseAnimation
System_String_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSitRiseAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t snitchIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetSitRiseAnimation
   System_String_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSitRiseAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t
   snitchIndex, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSitRiseAnimation_260e80c
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iStack_24;
  
  puVar2 = PTR_DAT_05813ea8;
  puVar1 = PTR_DAT_057db748;
  if ((bRam0000000005c2b9f8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05813ea8);
    bRam0000000005c2b9f8 = 1;
  }
                    /* try { // try from 0270e858 to 0280e89f has its CatchHandler @ 0270e8d8 */
  iStack_24 = param_2 + 1;
  uVar3 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&iStack_24);
  System_String__Format_1ec10a8(*(undefined8 *)puVar2,uVar3,0);
  return;
}

