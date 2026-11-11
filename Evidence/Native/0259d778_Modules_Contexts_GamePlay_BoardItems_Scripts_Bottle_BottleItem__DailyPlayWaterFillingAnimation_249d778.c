/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$DailyPlayWaterFillingAnimation
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__DailyPlayWaterFillingAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t previousHeight, int32_t newHeight, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$DailyPlayWaterFillingAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__DailyPlayWaterFillingAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, int32_t
   previousHeight, int32_t newHeight,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__DailyPlayWaterFillingAnimation_249d778
               (undefined1 param_1 [16],undefined8 param_2,long param_3,undefined4 param_4,
               int param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584();
  if ((*(long *)(param_3 + 0x50) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_3 + 0x50) + 0x60), lVar5 != 0)) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_WaterParticleView__DailyPlay_22ff39c
              (lVar5,param_6,lVar4,param_5,0);
    iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetIndexFromTheBottom_249545c
                      (param_3,lVar4);
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(param_3 + 0x48);
      lVar5 = *(long *)(lVar4 + 0x48);
      *(int *)(lVar4 + 0x60) = param_5;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if ((bRam0000000005c2b27c & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578b048);
        FUN_012d0dc8(PTR_DAT_0577d048);
        FUN_012d0dc8(PTR_DAT_057c7568);
        bRam0000000005c2b27c = 1;
      }
      if (((*(long *)(lVar5 + 0x68) != 0) &&
          (lVar4 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Configs_WaterViewConfig__GetWaterPivotPositionsByBottleHeight_248b788
                             (*(long *)(lVar5 + 0x68),uVar1), lVar4 != 0)) &&
         (*(long *)(lVar4 + 0x18) != 0)) {
        System_Collections_Generic_List_WaterPivotPosition___get_Item_25311fc
                  (*(long *)(lVar4 + 0x18),iVar3 + param_5,*(undefined8 *)PTR_DAT_0577d048);
        puVar2 = PTR_DAT_0578b048;
        if (*(long *)(lVar5 + 0x50) != 0) {
          Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__OnRisingAnimationStart_1e9ee28
                    (*(long *)(lVar5 + 0x50),0);
          plVar6 = *(long **)(lVar5 + 0x80);
          uVar1 = *(undefined4 *)(lVar5 + 200);
          lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if ((lVar4 != 0) &&
             (System_Action___ctor_21239bc(lVar4,lVar5,*(undefined8 *)PTR_DAT_057c7568,0),
             plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0258bd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x188))
                      (param_2,plVar6,param_4,iVar3 + param_5,iVar3,0,uVar1,lVar4,
                       *(undefined8 *)(*plVar6 + 400));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

