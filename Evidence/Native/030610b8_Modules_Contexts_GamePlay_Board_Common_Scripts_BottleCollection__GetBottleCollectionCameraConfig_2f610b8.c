/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBottleCollectionCameraConfig
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o* Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleCollectionCameraConfig (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, bool is3Row, bool isFirstLevels, bool isDaily, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBottleCollectionCameraConfig
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleCollectionCameraConfig_o*
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleCollectionCameraConfig
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, bool is3Row, bool
   isFirstLevels, bool isDaily, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleCollectionCameraConfig_2f610b8
          (long param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *(long *)(lVar1 + 0x10);
  if (((param_2 & 1) == 0) && ((param_4 & 1) == 0)) {
    if (lVar2 == 0) {
LAB_0170c43c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0(lVar1,param_2 & 1,param_3 & 1,param_4 & 1,0);
    }
    if (*(char *)(lVar1 + 0x18) == '\0') {
      puVar3 = (undefined8 *)(lVar2 + 0x28);
    }
    else {
      puVar3 = (undefined8 *)(lVar2 + 0x30);
    }
  }
  else {
    if (lVar2 == 0) goto LAB_0170c43c;
    puVar3 = (undefined8 *)(lVar2 + 0x18);
    if (*(char *)(lVar1 + 0x18) != '\0') {
      puVar3 = (undefined8 *)(lVar2 + 0x20);
    }
  }
  return *puVar3;
}

