/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.LevelWinButton$$LevelWin
void Modules_Contexts_GamePlay_UI_Common_Scripts_LevelWinButton__LevelWin (Modules_Contexts_GamePlay_UI_Common_Scripts_LevelWinButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.Common.Scripts.LevelWinButton$$LevelWin
   void Modules_Contexts_GamePlay_UI_Common_Scripts_LevelWinButton__LevelWin
   (Modules_Contexts_GamePlay_UI_Common_Scripts_LevelWinButton_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_GamePlay_UI_Common_Scripts_LevelWinButton__LevelWin_160dcf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_0576a228;
  if ((bRam0000000005c2444e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0581a800);
    FUN_012d0dc8(PTR_DAT_0576a228);
    bRam0000000005c2444e = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar5 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_057606c8;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar5 = *(long *)puVar2;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,uVar8,*(undefined8 *)PTR_DAT_0581a800,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar6 = lVar7;
    FUN_012d0d74(plVar6,lVar7);
  }
  puVar2 = PTR_DAT_057815e0;
  if ((bRam0000000005c28460 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,0,0);
    FUN_012d0dc8(PTR_DAT_057d6890);
    FUN_012d0dc8(PTR_DAT_057ca968);
    FUN_012d0dc8(PTR_DAT_057f1100);
    bRam0000000005c28460 = 1;
  }
  puVar4 = PTR_DAT_057f1100;
  puVar3 = PTR_DAT_057d6890;
  puVar1 = PTR_DAT_057ca968;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  DG_Tweening_DOTween__Sequence_1eda154();
  uVar8 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(0x3f000000);
  uVar8 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                    (uVar8,lVar7,*(undefined8 *)puVar3);
  lVar5 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                    (uVar8,0,0,*(undefined8 *)puVar4);
  uVar8 = *(undefined8 *)puVar1;
  if (((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) && (*(char *)(lVar5 + 0x100) == '\0')) {
    *(undefined1 *)(lVar5 + 0x9c) = 1;
    return;
  }
  return;
}

