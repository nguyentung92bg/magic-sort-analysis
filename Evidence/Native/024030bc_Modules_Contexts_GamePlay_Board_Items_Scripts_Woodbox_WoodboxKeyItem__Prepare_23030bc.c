/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* belongingWoodbox, int32_t woodboxKeyType, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, int32_t blockerVariant, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem_o* __this,
   UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* belongingWoodbox, int32_t
   woodboxKeyType, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o*
   belongingBottle, int32_t blockerVariant, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyItem__Prepare_23030bc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
               undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined4 param_9,
               long param_10,undefined4 param_11)

{
  long *plVar1;
  
  *(undefined4 *)(param_4 + 0xd) = param_9;
  param_4[0xb] = param_7;
  FUN_012d0d74(param_4 + 0xb,param_7);
  plVar1 = param_4 + 10;
  *plVar1 = param_8;
  FUN_012d0d74(plVar1,param_8);
  param_4[0xc] = param_10;
  FUN_012d0d74(param_4 + 0xc,param_10);
  *(undefined4 *)((long)param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 7) = param_2;
  *(undefined4 *)((long)param_4 + 0x3c) = param_3;
  *(undefined4 *)((long)param_4 + 0x7c) = param_1;
  *(undefined4 *)(param_4 + 0x10) = param_2;
  *(undefined4 *)((long)param_4 + 0x84) = param_3;
  if (param_4[9] != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__Prepare_230c604
              (param_4[9],param_5,param_6,param_9,param_11);
    Modules_Infrastructure_Common_Scripts_Component_AItem__SetLocalRotation_40ea1a4
              (*(undefined4 *)((long)param_4 + 0x6c),(int)param_4[0xe],
               *(undefined4 *)((long)param_4 + 0x74),(int)param_4[0xf],param_4,0);
    if (param_7 != 0) {
      if (*(long *)(param_7 + 0x28) == 0) {
        *(undefined1 *)(param_4 + 0x11) = 0;
      }
      else {
        *(undefined1 *)(param_4 + 0x11) = 1;
        (**(code **)(*param_4 + 0x288))(param_4,*(undefined8 *)(*param_4 + 0x290));
      }
      if (*plVar1 != 0) {
        plVar1 = (long *)(*plVar1 + 0x60);
        *plVar1 = (long)param_4;
        FUN_012d0d74(plVar1,param_4);
        *(undefined1 *)((long)param_4 + 0x89) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

