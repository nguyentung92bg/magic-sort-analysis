/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.MusicToggle$$OnDisable
void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_MusicToggle__OnDisable (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_MusicToggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.MusicToggle$$OnDisable
   void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_MusicToggle__OnDisable
   (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_MusicToggle_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_MusicToggle__OnDisable_16f710c
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_05818458;
  if ((bRam0000000005c24b86 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05818458);
    FUN_012d0dc8(PTR_DAT_058035b0);
    bRam0000000005c24b86 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar3 != 0) &&
     (System_Action_bool____ctor_1645204(lVar3,param_1,*(undefined8 *)PTR_DAT_058035b0,0),
     lVar6 != 0)) {
    if ((bRam0000000005c3938b & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05818458,lVar3,0);
      bRam0000000005c3938b = 1;
    }
    puVar1 = PTR_DAT_05818458;
    plVar7 = (long *)(lVar6 + 0x30);
    lVar6 = *plVar7;
    do {
      lVar4 = System_Delegate__Remove_23e3b70(lVar6,lVar3,0);
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      else {
        uVar8 = *(undefined8 *)puVar1;
        lVar5 = thunk_FUN_01320d5c(lVar4,uVar8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar4,uVar8);
        }
      }
      lVar4 = FUN_01351224(plVar7,lVar5,lVar6);
      bVar2 = lVar6 != lVar4;
      lVar6 = lVar4;
    } while (bVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

