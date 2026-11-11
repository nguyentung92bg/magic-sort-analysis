/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.MagicSeal.EditorMagicSealItem$$OnInitialize
void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealItem__OnInitialize (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.MagicSeal.EditorMagicSealItem$$OnInitialize
   void 
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealItem__OnInitialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealItem_o* __this,
   const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_MagicSeal_EditorMagicSealItem__OnInitialize_3dd89c4
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000005c37e18 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578ff68);
    bRam0000000005c37e18 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_0578ff68;
    bVar2 = *(byte *)(lVar6 + 300);
    if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
      *(long **)(param_1 + 0x30) = plVar5;
      if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto FUN_012d0d74;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar5,lVar6);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
FUN_012d0d74:
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x30U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x30U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

