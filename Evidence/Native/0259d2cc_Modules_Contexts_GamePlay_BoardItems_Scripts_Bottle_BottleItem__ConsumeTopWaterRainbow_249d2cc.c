/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ConsumeTopWaterRainbow
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ConsumeTopWaterRainbow (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0258b01c) */
/* WARNING: Removing unreachable block (ram,0x021ef190) */
/* WARNING: Removing unreachable block (ram,0x021ef1b8) */
/* WARNING: Removing unreachable block (ram,0x021ef1fc) */
/* WARNING: Removing unreachable block (ram,0x021ef210) */
/* WARNING: Removing unreachable block (ram,0x021ef214) */
/* WARNING: Removing unreachable block (ram,0x021ef228) */
/* WARNING: Removing unreachable block (ram,0x021ef230) */
/* WARNING: Removing unreachable block (ram,0x021ef238) */
/* WARNING: Removing unreachable block (ram,0x021ef24c) */
/* WARNING: Removing unreachable block (ram,0x021ef258) */
/* WARNING: Removing unreachable block (ram,0x021ef264) */
/* WARNING: Removing unreachable block (ram,0x021ef298) */
/* WARNING: Removing unreachable block (ram,0x021ef2c8) */
/* WARNING: Removing unreachable block (ram,0x021ef2cc) */
/* WARNING: Removing unreachable block (ram,0x012d0d74) */
/* WARNING: Removing unreachable block (ram,0x0138e090) */
/* WARNING: Removing unreachable block (ram,0x0138e0b8) */
/* WARNING: Removing unreachable block (ram,0x0138e0c0) */
/* WARNING: Removing unreachable block (ram,0x0138e0c8) */
/* WARNING: Removing unreachable block (ram,0x021ef300) */
/* WARNING: Removing unreachable block (ram,0x0258b048) */
/* WARNING: Removing unreachable block (ram,0x0258b050) */
/* WARNING: Removing unreachable block (ram,0x0258b05c) */
/* WARNING: Removing unreachable block (ram,0x021ef524) */
/* WARNING: Removing unreachable block (ram,0x021ef548) */
/* WARNING: Removing unreachable block (ram,0x0418e334) */
/* WARNING: Removing unreachable block (ram,0x0418e348) */
/* WARNING: Removing unreachable block (ram,0x021ef55c) */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$ConsumeTopWaterRainbow
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ConsumeTopWaterRainbow
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__ConsumeTopWaterRainbow_249d2cc
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar7 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584();
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x55) == '\0')) {
    return;
  }
  if (*(char *)(lVar7 + 0x55) == '\0') {
    return;
  }
  lVar3 = *(long *)(lVar7 + 0x48);
  *(undefined1 *)(lVar7 + 0x55) = 0;
  if (lVar3 != 0) {
    if ((bRam0000000005c2b27e & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057606c8,0,1,0);
      FUN_012d0dc8(PTR_DAT_0576e2b8);
      bRam0000000005c2b27e = 1;
    }
    uVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                      (lVar3);
    if ((uVar6 & 1) != 0) {
      lVar8 = *(long *)(lVar3 + 0x90);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
      if ((lVar7 != 0) &&
         (DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,lVar3,*(undefined8 *)PTR_DAT_0576e2b8,0),
         puVar1 = PTR_DAT_057815e0, lVar8 != 0)) {
        if ((bRam0000000005c2974c & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_057815e0,lVar7,0);
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
                  (lVar8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
        puVar2 = PTR_DAT_057fbae0;
        puVar1 = PTR_DAT_057936b8;
        if (*(long *)(lVar8 + 0x18) != 0) {
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_48,*(long *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_0579f3e8);
          while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                   (&uStack_48,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
            if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
            uVar5 = DG_Tweening_DOTweenModuleSprite__DOFade_33e2fd0
                              (0,*(undefined4 *)(*(long *)(lVar8 + 0x28) + 0x18),uStack_38,0);
            DG_Tweening_TweenSettingsExtensions__Insert_1eedff4(0,uVar4,uVar5,0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_48,*(undefined8 *)puVar1);
        }
        DG_Tweening_TweenSettingsExtensions__OnComplete_object__24504c4
                  (uVar4,lVar7,*(undefined8 *)PTR_DAT_0579e470);
        *(undefined8 *)(lVar8 + 0x30) = uVar4;
        FUN_012d0d74((undefined8 *)(lVar8 + 0x30),uVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(0,0,0);
}

