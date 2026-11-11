/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetRiseWingAnimation
System_String_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetRiseWingAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t snitchIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetRiseWingAnimation
   System_String_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetRiseWingAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t
   snitchIndex, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetRiseWingAnimation_260e788
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iStack_24;
  
  puVar2 = PTR_DAT_057db748;
  puVar1 = PTR_DAT_05761628;
  if ((bRam0000000005c2b9f7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05761628);
    bRam0000000005c2b9f7 = 1;
  }
  iStack_24 = param_2 + 1;
  uVar3 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_24);
  System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar3,0);
                    /* try { // try from 0270e808 to 0280e857 has its CatchHandler @ 0270e808
                       catch() { ... } // from try @ 0270e808 with catch @ 0270e808
                       catch() { ... } // from try @ 0270e8a0 with catch @ 0270e808
                       catch() { ... } // from try @ 0270e8d8 with catch @ 0270e808
                       catch() { ... } // from try @ 0270e908 with catch @ 0270e808
                       catch() { ... } // from try @ 0270e97c with catch @ 0270e808 */
  return;
}

