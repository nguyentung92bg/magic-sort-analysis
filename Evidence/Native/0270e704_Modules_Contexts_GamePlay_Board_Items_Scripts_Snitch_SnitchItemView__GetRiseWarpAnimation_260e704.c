/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetRiseWarpAnimation
System_String_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetRiseWarpAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t snitchIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetRiseWarpAnimation
   System_String_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetRiseWarpAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t
   snitchIndex, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetRiseWarpAnimation_260e704
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iStack_24;
  
  puVar2 = PTR_DAT_057db748;
  puVar1 = PTR_DAT_057d1468;
                    /* catch() { ... } // from try @ 0270e680 with catch @ 0270e70c
                       catch() { ... } // from try @ 0270e6fc with catch @ 0270e70c */
                    /* try { // try from 0270e710 to 0280e713 has its CatchHandler @ 0270e71c */
                    /* try { // try from 0270e714 to 0280e71f has its CatchHandler @ 0270e5ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0270e710 with catch @ 0270e71c
                        */
  if ((bRam0000000005c2b9f6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d1468);
    bRam0000000005c2b9f6 = 1;
  }
  iStack_24 = param_2 + 1;
  uVar3 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_24);
  System_String__Format_1ec10a8(*(undefined8 *)puVar1,uVar3,0);
  return;
}

