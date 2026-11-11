/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicItem$$OnInitialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__OnInitialize (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic.MosaicItem$$OnInitialize
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__OnInitialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Mosaic_MosaicItem__OnInitialize_2746470
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  
  if ((bRam0000000005c2c6a0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_05800018);
    FUN_012d0dc8(PTR_DAT_057fd598);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    FUN_012d0dc8(PTR_DAT_05797568);
    bRam0000000005c2c6a0 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 != (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_05797568;
    bVar2 = *(byte *)(lVar8 + 300);
    if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar8)) {
      *(long **)(param_1 + 0x48) = plVar7;
      if ((bVar2 <= *(byte *)(*plVar7 + 300)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + ((ulong)bVar2 - 1) * 8) == lVar8)) goto LAB_02846548;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar7,lVar8);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
LAB_02846548:
  puVar6 = PTR_DAT_057fd598;
  FUN_012d0d74();
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
  puVar6 = PTR_DAT_05805bc0;
  if (lVar8 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar8,*(undefined8 *)PTR_DAT_05800018);
    *(long *)(param_1 + 0x58) = lVar8;
    FUN_012d0d74((long *)(param_1 + 0x58),lVar8);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
    puVar5 = PTR_DAT_057b99d0;
    if (lVar8 != 0) {
      System_Collections_Generic_List_Int32Enum____ctor_20512f0
                (lVar8,*(undefined8 *)PTR_DAT_057b99d0);
      *(long *)(param_1 + 0x68) = lVar8;
      FUN_012d0d74((long *)(param_1 + 0x68),lVar8);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
      if (lVar8 != 0) {
        System_Collections_Generic_List_Int32Enum____ctor_20512f0(lVar8,*(undefined8 *)puVar5);
        plVar7 = (long *)(param_1 + 0x70);
        *plVar7 = lVar8;
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

