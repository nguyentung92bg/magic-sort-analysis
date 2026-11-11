/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.WinState$$Enter
void Modules_Contexts_GamePlay_Loop_Scripts_Daily_WinState__Enter (Modules_Contexts_GamePlay_Loop_Scripts_Daily_WinState_o* __this, Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Loop.Scripts.Daily.WinState$$Enter
   void Modules_Contexts_GamePlay_Loop_Scripts_Daily_WinState__Enter
   (Modules_Contexts_GamePlay_Loop_Scripts_Daily_WinState_o* __this,
   Modules_Infrastructure_FiniteStateMachine_StateArguments_o* stateArguments, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Loop_Scripts_Daily_WinState__Enter_1f12e94(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_057606c8;
  if ((bRam0000000005c28616 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_057eb718);
    bRam0000000005c28616 = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,param_1,*(undefined8 *)PTR_DAT_057eb718,0);
  puVar2 = PTR_DAT_057815e0;
  uVar1 = _UNK_04321760;
  if ((bRam0000000005c28460 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0,0,0);
    FUN_012d0dc8(PTR_DAT_057d6890);
    FUN_012d0dc8(PTR_DAT_057ca968);
    FUN_012d0dc8(PTR_DAT_057f1100);
    bRam0000000005c28460 = 1;
  }
  puVar5 = PTR_DAT_057f1100;
  puVar4 = PTR_DAT_057d6890;
  puVar3 = PTR_DAT_057ca968;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  DG_Tweening_DOTween__Sequence_1eda154();
  uVar6 = DG_Tweening_TweenSettingsExtensions__AppendInterval_1edcc0c(uVar1);
  uVar6 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__24505cc
                    (uVar6,lVar7,*(undefined8 *)puVar4);
  lVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__2451520
                    (uVar6,0,0,*(undefined8 *)puVar5);
  uVar6 = *(undefined8 *)puVar3;
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) && (*(char *)(lVar7 + 0x100) == '\0')) {
    *(undefined1 *)(lVar7 + 0x9c) = 1;
    return;
  }
  return;
}

