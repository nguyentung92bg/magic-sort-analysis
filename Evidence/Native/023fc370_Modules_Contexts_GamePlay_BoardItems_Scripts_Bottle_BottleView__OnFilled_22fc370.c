/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$OnFilled
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__OnFilled (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, int32_t bottleHeight, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* winParticleColor, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, bool hasAnimationBlockingBlocker, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$OnFilled
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__OnFilled
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, int32_t bottleHeight,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* winParticleColor,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, bool hasAnimationBlockingBlocker,
   const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__OnFilled_22fc370
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_058018c8;
  if ((bRam0000000005c2a5f9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05805608);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    FUN_012d0dc8(PTR_DAT_0579e470);
    FUN_012d0dc8(PTR_DAT_05776e10);
    FUN_012d0dc8(PTR_DAT_0575d0e0);
    FUN_012d0dc8(PTR_DAT_058018c8);
    bRam0000000005c2a5f9 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(long *)(lVar3 + 0x10) = param_1;
    FUN_012d0d74((long *)(lVar3 + 0x10),param_1);
    *(undefined4 *)(lVar3 + 0x18) = param_2;
    *(undefined8 *)(lVar3 + 0x20) = param_3;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x20),param_3);
    *(undefined8 *)(lVar3 + 0x28) = param_4;
    *(undefined8 *)(lVar3 + 0x30) = param_5;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x28),0);
    if (*(long *)(param_1 + 0x80) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleStopperView__Hide_22fbce4();
      puVar1 = PTR_DAT_057606c8;
      if (*(long *)(param_1 + 0x88) != 0) {
        uVar7 = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x68);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057606c8);
        puVar2 = PTR_DAT_0576aae0;
        if (lVar4 != 0) {
          DG_Tweening_TweenCallback___ctor_1ed6da8(lVar4,lVar3,*(undefined8 *)PTR_DAT_05776e10,0);
          DG_Tweening_DOVirtual__DelayedCall_1edcb38(uVar7,lVar4,0,0);
          if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
               (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) &&
              (lVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar4,*(undefined8 *)PTR_DAT_05805608), lVar4 != 0)) &&
             ((*(long *)(lVar4 + 0x10) != 0 && (*(long *)(param_1 + 0x80) != 0)))) {
            lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + 0x50);
            lVar4 = UnityEngine_Component__get_transform_408b444(*(long *)(param_1 + 0x80),0);
            if ((lVar6 != 0) &&
               ((lVar6 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_ConfigsByBottleHeight__GetConfigByHeightAndVariant_22fc5c4
                                   (lVar6,*(undefined4 *)(lVar3 + 0x18),0), lVar6 != 0 &&
                (lVar4 != 0)))) {
              UnityEngine_Transform__set_localPosition_4092ce0
                        (*(undefined4 *)(lVar6 + 0xb0),*(undefined4 *)(lVar6 + 0xb4),
                         *(undefined4 *)(lVar6 + 0xb8),lVar4,0);
              if (*(long *)(param_1 + 0xd8) != 0) {
                lVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCompleteAnimationController__PlayStopperAnimation_24920a8
                                  (*(long *)(param_1 + 0xd8),*(undefined4 *)(lVar3 + 0x18),
                                   param_6 & 1,0);
                lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                puVar1 = PTR_DAT_0579e470;
                if (lVar6 != 0) {
                  DG_Tweening_TweenCallback___ctor_1ed6da8
                            (lVar6,lVar3,*(undefined8 *)PTR_DAT_0575d0e0,0);
                  uVar5 = *(undefined8 *)puVar1;
                  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
                    *(long *)(lVar4 + 0x80) = lVar6;
                    FUN_012d0d74((long *)(lVar4 + 0x80),lVar6,uVar5);
                  }
                  return lVar4;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

