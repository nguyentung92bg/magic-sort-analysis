/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnInitialize
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnInitialize (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnInitialize
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnInitialize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnInitialize_274b3b0
               (long param_1)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000005c2c6bf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05776d40);
    bRam0000000005c2c6bf = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_05776d40;
    bVar2 = *(byte *)(lVar6 + 300);
    if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) {
      *(long **)(param_1 + 0x48) = plVar5;
      if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar2 - 1) * 8) == lVar6)) goto FUN_012d0d74;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar5,lVar6);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
FUN_012d0d74:
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)((param_1 + 0x48U >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x48U >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

