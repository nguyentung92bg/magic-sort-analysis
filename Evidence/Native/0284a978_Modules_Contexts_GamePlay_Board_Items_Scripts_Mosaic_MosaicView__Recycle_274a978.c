/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$Recycle
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Recycle (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicView$$Recycle
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Recycle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicView__Recycle_274a978(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c2c6b7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_058184c0);
    FUN_012d0dc8(PTR_DAT_057f7a80);
    FUN_012d0dc8(PTR_DAT_05810768);
    FUN_012d0dc8(PTR_DAT_05797cd8);
    bRam0000000005c2c6b7 = 1;
  }
  puVar2 = PTR_DAT_058184c0;
  puVar1 = PTR_DAT_057f7a80;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_05797cd8);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar2);
        return;
      }
      if (lStack_28 == 0) break;
      Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTargetView__Recycle_2748e28();
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

