/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterView$$Recycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__Recycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water.EditorWaterView$$Recycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__Recycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__Recycle_37b24e8
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000005c33e6b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057af1b8);
    bRam0000000005c33e6b = 1;
  }
  puVar1 = PTR_DAT_057af1b8;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
                    /* try { // try from 038b2528 to 039b26c7 has its CatchHandler @ 038b374c */
    DG_Tweening_TweenExtensions__Kill_1edd6a4(lVar2,0,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_012d0d74((long *)(param_1 + 0x20),0);
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Water_EditorWaterView__SetSortingLayer_37b2494
            (param_1,*(undefined8 *)puVar1);
  lVar2 = UnityEngine_Component__get_transform_408b444(param_1,0);
  if (lVar2 != 0) {
    if (pcRam0000000005c3a5a0 == (code *)0x0) {
      pcRam0000000005c3a5a0 = (code *)FUN_012d0d84(&UNK_043eec3f,0,0);
    }
                    /* WARNING: Could not recover jumptable at 0x04193570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a5a0)(lVar2,0,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

