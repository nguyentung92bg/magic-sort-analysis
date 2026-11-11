/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$Broadcast
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__Broadcast (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic.EditorMosaicItem$$Broadcast
   void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__Broadcast
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Mosaic_EditorMosaicItem__Broadcast_37b4524
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_DAT_057b8520;
  if ((bRam0000000005c33e7a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e6ca8);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    FUN_012d0dc8(PTR_DAT_05795338);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_0580a258);
    bRam0000000005c33e7a = 1;
  }
  puVar2 = PTR_DAT_05795338;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar4 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar2);
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
  puVar3 = PTR_DAT_0580a258;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_Int32Enum____ctor_2051418
            (lVar5,uVar6,*(undefined8 *)PTR_DAT_057e6ca8);
  if (*(long *)(lVar4 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343e2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x18) + 8))
              (*(long *)(lVar4 + 0x18),uVar1,lVar5);
    return;
  }
  return;
}

