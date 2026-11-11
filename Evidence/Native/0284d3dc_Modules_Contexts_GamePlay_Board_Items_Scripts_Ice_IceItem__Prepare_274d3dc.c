/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t width, int32_t id, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* rootBottle, System_Collections_Generic_List_BottleItem__o* belongingBottles, bool useShadow, bool isNewParticleEnabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, UnityEngine_Vector3_o
   viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, int32_t width, int32_t
   id, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* rootBottle,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, bool useShadow, bool
   isNewParticleEnabled, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__Prepare_274d3dc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9,undefined8 param_10,uint param_11,byte param_12)

{
  if ((bRam0000000005c2c6d1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814978);
    bRam0000000005c2c6d1 = 1;
  }
  *(undefined8 *)(param_4 + 0x50) = param_9;
  *(undefined4 *)(param_4 + 0x60) = param_8;
  FUN_012d0d74((undefined8 *)(param_4 + 0x50),param_9);
  if (*(long *)(param_4 + 0x58) != 0) {
    System_Collections_Generic_List_object___AddRange_21fcc58
              (*(long *)(param_4 + 0x58),param_10,*(undefined8 *)PTR_DAT_05814978);
    *(undefined4 *)(param_4 + 0x34) = param_1;
    *(undefined4 *)(param_4 + 0x38) = param_2;
    *(undefined4 *)(param_4 + 0x3c) = param_3;
    if (*(long *)(param_4 + 0x48) != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceView__Prepare_274d4d0
                (*(long *)(param_4 + 0x48),param_5,param_6,param_7,param_11 & 1);
      *(undefined4 *)(param_4 + 100) = param_7;
      *(byte *)(param_4 + 0x88) = param_12 & 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

