/* IL2CPP: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$ConsumeRainbow
void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__ConsumeRainbow (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView_o* __this, DG_Tweening_TweenCallback_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow.RainbowWaterView$$ConsumeRainbow
   void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__ConsumeRainbow
   (Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView_o* __this,
   DG_Tweening_TweenCallback_o* onComplete, const MethodInfo* method); */

void Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__ConsumeRainbow_20ef33c
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_057815e0;
  if ((bRam0000000005c2974c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    bRam0000000005c2974c = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__KillActiveFadeTween_20ef158
            (param_1);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1eda154(0);
  puVar2 = PTR_DAT_057fbae0;
  puVar1 = PTR_DAT_057936b8;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0579f3e8);
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                        (0,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18),uStack_38,0);
      DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar3,uVar5,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar1);
  }
  DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
            (uVar3,param_2,*(undefined8 *)PTR_DAT_0579e470);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  FUN_012d0d74((undefined8 *)(param_1 + 0x30),uVar3);
  return;
}

