/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, int32_t frontSortOrder, int32_t backSortOrder, int32_t bottleHeight, int32_t bottlesAndWaterVariant, Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines_o* bottleOutlines, bool isEllipseActivated, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, int32_t frontSortOrder,
   int32_t backSortOrder, int32_t bottleHeight, int32_t bottlesAndWaterVariant,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Water_BottleOutlines_o* bottleOutlines, bool
   isEllipseActivated, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__Prepare_248a8c0
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,uint param_7)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000005c2b275 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b275 = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__SetSortOrder_1e9f108
              (*(long *)(param_1 + 0x50),param_2,0);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetBackSortOrder_248aa2c
              (param_1,param_3);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetVariant_248aae8
              (param_1,param_5);
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__SetWaterSpriteConfigsForBottle_248ab18
              (param_1,param_4);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_0258aa0c;
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x88) + 0x18);
      *puVar3 = param_6;
      FUN_012d0d74(puVar3,param_6);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterShapeRenderer__ToggleWaterShape_1e9ebec
                (*(long *)(param_1 + 0x50),param_7 & 1,0);
      uVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
                        (param_1);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar4 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x40),0),
         lVar4 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
        lVar4 = *(long *)(param_1 + 0x90);
        if (lVar4 != 0) {
          Modules_Contexts_GamePlay_SuperCharger_Strategies_Rainbow_RainbowWaterView__KillActiveFadeTween_20ef158
                    (lVar4,0,0);
          lVar4 = *(long *)(lVar4 + 0x20);
          if (lVar4 != 0) {
            if (pcRam0000000005c3a388 == (code *)0x0) {
              pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
            }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000005c3a388)(lVar4,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
  }
LAB_0258aa0c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

