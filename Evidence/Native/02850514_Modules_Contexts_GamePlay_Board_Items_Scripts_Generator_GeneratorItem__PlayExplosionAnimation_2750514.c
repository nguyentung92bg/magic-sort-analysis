/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$PlayExplosionAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__PlayExplosionAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, int32_t previousWaterHeight, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$PlayExplosionAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__PlayExplosionAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, int32_t
   previousWaterHeight, int32_t colorId, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__PlayExplosionAnimation_2750514
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_DAT_057606c8;
  if ((bRam0000000005c2c6e8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577e818);
    FUN_012d0dc8(PTR_DAT_057d08c8);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_057cbe78);
    FUN_012d0dc8(PTR_DAT_0578e950);
    bRam0000000005c2c6e8 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_0578e950;
  if (lVar5 != 0) {
    DG_Tweening_TweenCallback___ctor_1ed6da8(lVar5,param_4,*(undefined8 *)PTR_DAT_0577e818,0);
    DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_04339bf8,lVar5,0,0);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar5 = *(long *)puVar3;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar5 = *(long *)puVar3;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar7 == 0) goto LAB_028507a8;
      DG_Tweening_TweenCallback___ctor_1ed6da8(lVar7,uVar8,*(undefined8 *)PTR_DAT_057cbe78,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar6 = lVar7;
      FUN_012d0d74(plVar6,lVar7);
    }
    DG_Tweening_DOVirtual__DelayedCall_1edcb38(_UNK_0438f370,lVar7,1,0);
    if (*(long *)(param_4 + 0x50) != 0) {
      uVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWaterHeight_2494c34
                        (*(long *)(param_4 + 0x50),0);
      if (*(long *)(param_4 + 0x50) != 0) {
        lVar5 = *(long *)(*(long *)(param_4 + 0x50) + 0x40);
        if (lVar5 != 0) {
          Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar5,param_4,0);
          if (*(long *)(param_4 + 0x50) != 0) {
            uVar9 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                              (*(long *)(param_4 + 0x50),0);
            lVar5 = *(long *)(param_4 + 0x50);
            uVar8 = param_2;
            uVar11 = param_3;
            if (cRam0000000005c230aa == '\0') {
              FUN_012d0dc8(PTR_DAT_05805c10);
              cRam0000000005c230aa = '\x01';
            }
            if (lVar5 != 0) {
              uVar1 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8) + 1);
              *(undefined8 *)(lVar5 + 0x34) = **(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
              *(undefined4 *)(lVar5 + 0x3c) = uVar1;
              if (*(long *)(param_4 + 0x50) != 0) {
                uVar10 = Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                                   (*(long *)(param_4 + 0x50),0);
                if (*(long *)(param_4 + 0x50) != 0) {
                  lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlayGeneratorExplosionAnimation_249aa2c
                                    (uVar9,param_2,param_3,uVar10,uVar8,uVar11,
                                     *(long *)(param_4 + 0x50),param_5,uVar4,param_6,0);
                  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                  puVar2 = PTR_DAT_0579e470;
                  if (lVar7 != 0) {
                    DG_Tweening_TweenCallback___ctor_1ed6da8
                              (lVar7,param_4,*(undefined8 *)PTR_DAT_057d08c8,0);
                    uVar8 = *(undefined8 *)puVar2;
                    if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
                      *(long *)(lVar5 + 0x80) = lVar7;
                      FUN_012d0d74((long *)(lVar5 + 0x80),lVar7,uVar8);
                    }
                    return lVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_028507a8:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

