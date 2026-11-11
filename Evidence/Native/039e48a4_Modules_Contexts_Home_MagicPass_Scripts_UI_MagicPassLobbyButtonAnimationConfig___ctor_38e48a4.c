/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassLobbyButtonAnimationConfig$$.ctor
void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassLobbyButtonAnimationConfig___ctor (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassLobbyButtonAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassLobbyButtonAnimationConfig$$.ctor
   void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassLobbyButtonAnimationConfig___ctor
   (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassLobbyButtonAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassLobbyButtonAnimationConfig___ctor_38e48a4
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = _UNK_0438dc18;
  uVar1 = _UNK_0438dc10;
                    /* try { // try from 039e48b0 to 03ae49b3 has its CatchHandler @ 039e49c0 */
  *(undefined4 *)(param_1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(param_1 + 0x6c) = uVar2;
  *(undefined8 *)(param_1 + 100) = uVar1;
  puVar3 = PTR_DAT_0576c200;
  if ((bRam0000000005c3a3d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200,0);
    bRam0000000005c3a3d4 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Object___ctor_23dfe5c(param_1,0);
  if (pcRam0000000005c3a3d8 == (code *)0x0) {
    pcRam0000000005c3a3d8 = (code *)FUN_012d0d84(&UNK_043ee072);
  }
                    /* WARNING: Could not recover jumptable at 0x0418f4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c3a3d8)(param_1);
  return;
}

