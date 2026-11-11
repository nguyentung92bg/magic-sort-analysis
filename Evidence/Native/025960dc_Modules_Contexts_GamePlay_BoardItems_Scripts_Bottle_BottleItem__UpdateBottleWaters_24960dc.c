/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateBottleWaters
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleWaters (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateBottleWaters
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleWaters
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleWaters_24960dc
               (long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryMergeColors_2496144();
  if ((uVar1 & 1) != 0) {
    lVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                      (param_1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetActiveTopEllipse_1e9e33c
              (lVar2,1,0);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateWaterOrderComponents_249665c
              (param_1);
                    /* try { // try from 0259610c to 0269612b has its CatchHandler @ 025961c8 */
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateSortOrders_2493ab4
              (param_1);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateFillAmountsWithoutAnimation_249670c
              (param_1);
  }
  uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetTopWater_2495584
                    (param_1);
                    /* try { // try from 02596138 to 0269613b has its CatchHandler @ 025961c0 */
                    /* WARNING: Could not recover jumptable at 0x0259613c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x218))(param_1,uVar3,*(undefined8 *)(*param_1 + 0x220));
  return;
}

