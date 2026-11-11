/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.NewBoosterIntroPopUpArguments$$.ctor
void Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroPopUpArguments___ctor (Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroPopUpArguments_o* __this, int32_t currencyType, bool is3Row, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.NewBoosterIntroPopUpArguments$$.ctor
   void Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroPopUpArguments___ctor
   (Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroPopUpArguments_o* __this, int32_t
   currencyType, bool is3Row, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_NewBoosterIntroPopUpArguments___ctor_1e93da0
               (long param_1,undefined4 param_2,byte param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_057c77c0;
  if ((bRam0000000005c28186 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c77c0);
    bRam0000000005c28186 = 1;
  }
  Modules_Infrastructure_UI_Common_Scripts_PopUp_PopUpArguments___ctor_4001ff0(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)puVar1;
  FUN_012d0d74((undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(byte *)(param_1 + 0x28) = param_3 & 1;
  return;
}

