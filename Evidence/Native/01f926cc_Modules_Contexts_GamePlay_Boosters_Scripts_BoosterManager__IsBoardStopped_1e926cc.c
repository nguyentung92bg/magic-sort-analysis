/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$IsBoardStopped
bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__IsBoardStopped (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$IsBoardStopped
   bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__IsBoardStopped
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
    */

uint Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__IsBoardStopped_1e926cc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c24467 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dac98,0);
    FUN_012d0dc8(PTR_DAT_057e1a68);
    bRam0000000005c24467 = 1;
  }
  if ((*(long *)(lVar3 + 0x10) == 0) ||
     (lVar2 = *(long *)(*(long *)(lVar3 + 0x10) + 0x20), lVar2 == 0)) {
LAB_017106c4:
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
LAB_017106a8:
    uVar1 = Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsThereAnyAnimationRunning_1610898
                      (lVar3);
    uVar1 = uVar1 ^ 1;
  }
  else {
    if (*(int *)(lVar2 + 0x18) == 1) {
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,0,*(undefined8 *)PTR_DAT_057e1a68);
      if (lVar2 == 0) goto LAB_017106c4;
      if (*(char *)(lVar2 + 0x20) == '\0') goto LAB_017106a8;
    }
    uVar1 = 0;
  }
  return uVar1 & 1;
}

