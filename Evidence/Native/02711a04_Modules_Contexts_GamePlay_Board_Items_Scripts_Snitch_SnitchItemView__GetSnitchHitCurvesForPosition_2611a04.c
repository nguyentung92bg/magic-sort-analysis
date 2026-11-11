/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetSnitchHitCurvesForPosition
System_ValueTuple_AnimationCurve__AnimationCurve__o Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchHitCurvesForPosition (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, UnityEngine_Vector3_o startPosition, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$GetSnitchHitCurvesForPosition
   System_ValueTuple_AnimationCurve__AnimationCurve__o
   Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchHitCurvesForPosition
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this,
   UnityEngine_Vector3_o startPosition, UnityEngine_Vector3_o targetPosition, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetSnitchHitCurvesForPosition_2611a04
          (long param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000005c2ba05 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577a798);
    bRam0000000005c2ba05 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    uStack_30 = 0;
    uStack_28 = 0;
    System_ValueTuple_object__object____ctor_2b92f7c
              (&uStack_30,*(undefined8 *)(lVar2 + 0x150),*(undefined8 *)(lVar2 + 0x158),
               *(undefined8 *)PTR_DAT_0577a798);
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = uStack_30;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

