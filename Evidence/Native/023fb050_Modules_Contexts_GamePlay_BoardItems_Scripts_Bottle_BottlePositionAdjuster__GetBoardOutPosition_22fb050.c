/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetBoardOutPosition
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBoardOutPosition (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, float screenWidth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottlePositionAdjuster$$GetBoardOutPosition
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBoardOutPosition
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, float
   screenWidth, const MethodInfo* method); */

float Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBoardOutPosition_22fb050
                (float param_1,long param_2)

{
  float fVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottlePositionAdjuster__GetBoardPosition_22fb0d0
            ();
  if (param_2 != 0) {
    Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBounds_2f68c3c
              (&uStack_68,param_2,0);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    uStack_40 = uStack_58;
    fVar1 = (float)UnityEngine_Bounds__get_size_3837648(&uStack_50,0);
    return fVar1 + param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

