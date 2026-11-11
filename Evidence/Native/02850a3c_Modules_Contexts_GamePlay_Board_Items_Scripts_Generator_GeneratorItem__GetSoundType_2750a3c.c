/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$GetSoundType
int32_t Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__GetSoundType (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$GetSoundType
   int32_t Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__GetSoundType
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const
   MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__GetSoundType_2750a3c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = UnityEngine_Random__Range_383a650(0,3,0);
  if (iVar1 != 0) {
    uVar2 = 0x41;
    if (iVar1 != 1) {
      uVar2 = 0x42;
    }
    return uVar2;
  }
  return 0x40;
}

