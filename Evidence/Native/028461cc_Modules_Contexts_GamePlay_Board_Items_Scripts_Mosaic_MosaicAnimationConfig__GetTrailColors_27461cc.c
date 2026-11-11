/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicAnimationConfig$$GetTrailColors
Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailColors_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetTrailColors (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig_o* __this, int32_t targetColor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicAnimationConfig$$GetTrailColors
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicTrailColors_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetTrailColors
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig_o* __this, int32_t
   targetColor, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicAnimationConfig__GetTrailColors_27461cc
          (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000005c2c69f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576a4c8);
    FUN_012d0dc8(PTR_DAT_057895d8);
    FUN_012d0dc8(PTR_DAT_05812498);
    FUN_012d0dc8(PTR_DAT_057ec5e8);
    FUN_012d0dc8(PTR_DAT_058177d8);
    bRam0000000005c2c69f = 1;
  }
  puVar3 = PTR_DAT_057ec5e8;
  puVar2 = PTR_DAT_057895d8;
  puVar1 = PTR_DAT_0576a4c8;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_58 = 0;
  if (*(long *)(param_1 + 0xc0) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_58,*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_058177d8);
    while( true ) {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_58,*(undefined8 *)puVar2);
      lVar4 = lStack_48;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_58,*(undefined8 *)puVar1);
        return *(undefined8 *)(param_1 + 0xb8);
      }
      if (lStack_48 == 0) break;
      if ((*(long *)(lStack_48 + 0x10) != 0) &&
         (uVar5 = System_Collections_Generic_List_Int32Enum___Contains_2051fc0
                            (*(long *)(lStack_48 + 0x10),param_2,*(undefined8 *)puVar3),
         (uVar5 & 1) != 0)) {
        uVar6 = *(undefined8 *)(lVar4 + 0x18);
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_58,*(undefined8 *)puVar1);
        return uVar6;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

