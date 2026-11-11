/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$.ctor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView___ctor (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$.ctor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView___ctor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView___ctor_275a3e8(ulong param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_057bde50;
  if ((bRam0000000005c2c73c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bde50);
    bRam0000000005c2c73c = 1;
  }
  uVar2 = UnityEngine_Animator__StringToHash_1f799a8(*(undefined8 *)puVar1,0);
  *(undefined4 *)(param_1 + 200) = uVar2;
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a2b8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a2b8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}

