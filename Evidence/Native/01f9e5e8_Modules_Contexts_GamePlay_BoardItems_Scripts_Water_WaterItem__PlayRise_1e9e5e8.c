/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$PlayRise
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayRise (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t previousHeight, int32_t newTargetHeight, int32_t distanceToBottomOfTheBottle, int32_t bottleHeight, bool isForGenerator, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$PlayRise
   DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayRise
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t previousHeight,
   int32_t newTargetHeight, int32_t distanceToBottomOfTheBottle, int32_t bottleHeight, bool
   isForGenerator, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__PlayRise_1e9e5e8
               (undefined1 param_1 [16],undefined8 param_2,long param_3,undefined4 param_4,
               int param_5,int param_6,undefined4 param_7,uint param_8)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar3 = *(long *)(param_3 + 0x48);
  *(int *)(param_3 + 0x60) = param_5;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b27c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0577d048);
    FUN_012d0dc8(PTR_DAT_057c7568);
    bRam0000000005c2b27c = 1;
  }
  if (((*(long *)(lVar3 + 0x68) != 0) &&
      (lVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                         (*(long *)(lVar3 + 0x68),param_7), lVar4 != 0)) &&
     (*(long *)(lVar4 + 0x18) != 0)) {
    System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
              (*(long *)(lVar4 + 0x18),param_6 + param_5,*(undefined8 *)PTR_DAT_0577d048);
    puVar2 = PTR_DAT_0578b048;
    if (*(long *)(lVar3 + 0x50) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationStart_1e9ee28
                (*(long *)(lVar3 + 0x50),0);
      plVar5 = *(long **)(lVar3 + 0x80);
      uVar1 = *(undefined4 *)(lVar3 + 200);
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar4 != 0) &&
         (System_Action___ctor_21239bc(lVar4,lVar3,*(undefined8 *)PTR_DAT_057c7568,0),
         plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0258bd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x188))
                  (param_2,plVar5,param_4,param_6 + param_5,param_6,param_8 & 1,uVar1,lVar4,
                   *(undefined8 *)(*plVar5 + 400));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

