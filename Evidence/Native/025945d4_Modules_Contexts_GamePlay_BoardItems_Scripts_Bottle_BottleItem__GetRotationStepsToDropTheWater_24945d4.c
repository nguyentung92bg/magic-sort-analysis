/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetRotationStepsToDropTheWater
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_RotationSteps_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetRotationStepsToDropTheWater (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, bool isLeft, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetRotationStepsToDropTheWater
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_RotationSteps_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetRotationStepsToDropTheWater
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, bool isLeft, const
   MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetRotationStepsToDropTheWater_24945d4
               (long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iStack_44;
  
  if ((bRam0000000005c2b2c9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05779428);
    bRam0000000005c2b2c9 = 1;
  }
  iStack_44 = 0;
  iVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetEmptyCellCount_2494700
                    (param_1);
  uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetFirstBlockedWaterIndexFromTheBottom_2494804
                    (param_1,&iStack_44);
  if ((uVar3 & 1) != 0) {
    iVar2 = iVar2 + iStack_44 + 1;
  }
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (lVar4 = BakedFluid_BottleAnimationConfig__GetRotationByEmptyCell_3af56e8
                        (*(long *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x48),iVar2,0),
     lVar4 != 0)) {
    fVar7 = *(float *)(lVar4 + 0x14);
    lVar4 = *(long *)(param_1 + 0xa0);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    fVar8 = -1.0;
    if ((param_2 & 1) == 0) {
      fVar8 = 1.0;
    }
    lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                      (param_1);
    if (lVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(lVar5 + 0x40);
    }
    if ((lVar4 != 0) &&
       (lVar4 = BakedFluid_BottleAnimationConfig__GetRotationByEmptyCell_3af56e8
                          (lVar4,uVar1,iVar6 + iVar2,0), lVar4 != 0)) {
      fVar9 = *(float *)(lVar4 + 0x14);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05779428);
      if (lVar4 != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_RotationSteps___ctor_22fe98c
                  (fVar8 * fVar7,fVar8 * fVar9,lVar4,0);
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

