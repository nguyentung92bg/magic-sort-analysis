/* IL2CPP: Modules.Contexts.Application.Player.Scripts.LevelTextView$$.ctor
void Modules_Contexts_Application_Player_Scripts_LevelTextView___ctor (Modules_Contexts_Application_Player_Scripts_LevelTextView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Player.Scripts.LevelTextView$$.ctor
   void Modules_Contexts_Application_Player_Scripts_LevelTextView___ctor
   (Modules_Contexts_Application_Player_Scripts_LevelTextView_o* __this, const MethodInfo* method);
    */

undefined1  [16]
Modules_Contexts_Application_Player_Scripts_LevelTextView___ctor_3ced09c(ulong param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_DAT_05774390;
  if ((bRam0000000005c370ff & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774390);
                    /* try { // try from 03ded0cc to 03eed0db has its CatchHandler @ 03ded0dc */
    bRam0000000005c370ff = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)puVar1;
                    /* catch() { ... } // from try @ 03ded034 with catch @ 03ded0dc
                       catch() { ... } // from try @ 03ded0cc with catch @ 03ded0dc */
  FUN_012d0d74();
                    /* try { // try from 03ded0e0 to 03eed0e3 has its CatchHandler @ 03ded0ec */
                    /* try { // try from 03ded0e4 to 03eed0ef has its CatchHandler @ 03dec6d4 */
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)puVar1;
                    /* catch() { ... } // from try @ 03dece98 with catch @ 03ded0ec
                       catch() { ... } // from try @ 03decf84 with catch @ 03ded0ec
                       catch() { ... } // from try @ 03decfd4 with catch @ 03ded0ec
                       catch() { ... } // from try @ 03ded0e0 with catch @ 03ded0ec */
  FUN_012d0d74();
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a2b8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a2b8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}

