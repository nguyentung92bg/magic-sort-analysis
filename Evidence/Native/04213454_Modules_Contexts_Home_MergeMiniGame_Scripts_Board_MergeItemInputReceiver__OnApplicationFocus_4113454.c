/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$OnApplicationFocus
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnApplicationFocus (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this, bool hasFocus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemInputReceiver$$OnApplicationFocus
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnApplicationFocus
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver_o* __this, bool
   hasFocus, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemInputReceiver__OnApplicationFocus_4113454
               (long *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  if (cRam0000000005c2345c == '\0') {
    FUN_012d0dc8(PTR_DAT_05803150);
    cRam0000000005c2345c = '\x01';
  }
                    /* WARNING: Could not recover jumptable at 0x042134b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))
            (**(undefined4 **)(*(long *)PTR_DAT_05803150 + 0xb8),
             (*(undefined4 **)(*(long *)PTR_DAT_05803150 + 0xb8))[1],param_1,
             *(undefined8 *)(*param_1 + 0x210));
  return;
}

