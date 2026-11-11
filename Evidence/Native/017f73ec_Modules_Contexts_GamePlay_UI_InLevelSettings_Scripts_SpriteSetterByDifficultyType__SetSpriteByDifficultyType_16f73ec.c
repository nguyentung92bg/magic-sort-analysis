/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.SpriteSetterByDifficultyType$$SetSpriteByDifficultyType
void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_SpriteSetterByDifficultyType__SetSpriteByDifficultyType (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_SpriteSetterByDifficultyType_o* __this, int32_t difficultyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.SpriteSetterByDifficultyType$$SetSpriteByDifficultyType
   void 
   Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_SpriteSetterByDifficultyType__SetSpriteByDifficultyType
   (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_SpriteSetterByDifficultyType_o* __this,
   int32_t difficultyType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_SpriteSetterByDifficultyType__SetSpriteByDifficultyType_16f73ec
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if (pcRam0000000005c3a730 == (code *)0x0) {
      pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
    }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a730)(lVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

