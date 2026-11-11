/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$OnPlayOnUsed
void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__OnPlayOnUsed (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$OnPlayOnUsed
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__OnPlayOnUsed
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__OnPlayOnUsed_1f19030(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c28649 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc3f0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c28649 = 1;
  }
  *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 == 0)) ||
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_057dc3f0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lVar3 + 0x18) != 0) {
    iVar2 = Modules_Contexts_Home_MagicStreakGAE_Scripts_MagicStreakGaeStateService__GetState_3cff5f8
                      (*(long *)(lVar3 + 0x18),0);
    if (iVar2 == 3) {
      lVar3 = *(long *)(lVar3 + 0x28);
      if ((lVar3 == 0) || (lVar4 = *(long *)(lVar3 + 0x20), lVar4 == 0)) goto LAB_03dfebf8;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
      *(undefined2 *)(lVar3 + 0x18) = 0x101;
    }
    return;
  }
LAB_03dfebf8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

