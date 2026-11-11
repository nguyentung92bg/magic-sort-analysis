/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicView$$Recycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__Recycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicView$$Recycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__Recycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__Recycle_37b5148
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c33e86 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a650);
    FUN_012d0dc8(PTR_DAT_057a2b58);
    FUN_012d0dc8(PTR_DAT_05795338);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057e5348);
    bRam0000000005c33e86 = 1;
  }
  puVar2 = PTR_DAT_05795338;
  puVar1 = PTR_DAT_0575a650;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar5 != 0) &&
     (System_Action_Int32Enum__object____ctor_1c4bbfc
                (lVar5,param_1,*(undefined8 *)PTR_DAT_057a2b58,0), lVar4 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum__object___Unsubscribe_333e29c
              (lVar4,lVar5,*(undefined8 *)PTR_DAT_057e5348);
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      if (pcRam0000000005c3a388 == (code *)0x0) {
        pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
      }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a388)(lVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

