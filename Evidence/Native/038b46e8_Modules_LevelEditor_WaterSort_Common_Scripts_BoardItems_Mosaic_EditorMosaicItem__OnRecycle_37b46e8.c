/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$OnRecycle
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__OnRecycle (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$OnRecycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__OnRecycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__OnRecycle_37b46e8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar1 = PTR_DAT_0577f3c8;
  if ((bRam0000000005c33e7d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_0575a650);
    FUN_012d0dc8(PTR_DAT_057a6988);
    FUN_012d0dc8(PTR_DAT_0577e168);
    FUN_012d0dc8(PTR_DAT_05795338);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057e5348);
    bRam0000000005c33e7d = 1;
  }
  lVar9 = *(long *)(param_1 + 0x30);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar5 != 0) &&
     (System_Action_int____ctor_1646aac(lVar5,param_1,*(undefined8 *)PTR_DAT_057a6988,0),
     puVar3 = PTR_DAT_057b8520, puVar2 = PTR_DAT_05795338, puVar1 = PTR_DAT_0575a650, lVar9 != 0)) {
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicView__remove_OnAmountTextChanged_37b4894
              (lVar9,lVar5);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar2);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar9 != 0) &&
       (System_Action_Int32Enum__object____ctor_1c4bbfc
                  (lVar9,param_1,*(undefined8 *)PTR_DAT_0577e168,0), lVar5 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum__object___Unsubscribe_333e29c
                (lVar5,lVar9,*(undefined8 *)PTR_DAT_057e5348);
      *(undefined8 *)(param_1 + 0x38) = 0;
      FUN_012d0d74((undefined8 *)(param_1 + 0x38),0);
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetParent_37ac850
                (param_1,0);
      if (cRam0000000005c230a9 == '\0') {
        FUN_012d0dc8(PTR_DAT_05805c10);
        cRam0000000005c230a9 = '\x01';
      }
      lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
      uVar10 = *(undefined4 *)(lVar5 + 0xc);
      uVar11 = *(undefined4 *)(lVar5 + 0x10);
      uVar12 = *(undefined4 *)(lVar5 + 0x14);
      if ((bRam0000000005c33e45 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0575a2d8);
        bRam0000000005c33e45 = 1;
      }
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (plVar8 = *(long **)(*(long *)(param_1 + 0x20) + 0x18), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0575a2d8) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
            goto LAB_038ac9ac;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_0575a2d8,7);
LAB_038ac9ac:
                    /* WARNING: Could not recover jumptable at 0x038ac9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(uVar10,uVar11,uVar12,plVar8,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

