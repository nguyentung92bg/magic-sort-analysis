/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterItem$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottleItem, int32_t blockerVariant, bool isNewParticleEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster.PlasterItem$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem_o* __this,
   UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottleItem, int32_t
   blockerVariant, bool isNewParticleEnabled, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterItem__Prepare_248d7b0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               byte param_9)

{
  *(undefined8 *)(param_4 + 0x50) = param_7;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_7);
  *(undefined4 *)(param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  if (*(long *)(param_4 + 0x48) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Plaster_PlasterView__Prepare_248d844
              (*(long *)(param_4 + 0x48),param_5,param_6,param_8);
    *(byte *)(param_4 + 0x58) = param_9 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

