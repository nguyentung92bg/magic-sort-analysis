/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$NextBottleCollection
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__NextBottleCollection (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$NextBottleCollection
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__NextBottleCollection
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__NextBottleCollection_2d94acc
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000005c2f9f7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05769ad0);
    FUN_012d0dc8(PTR_DAT_057a0df8);
    bRam0000000005c2f9f7 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x20) + 1;
  *(int *)(param_1 + 0x20) = iVar7;
  puVar4 = PTR_DAT_057a0df8;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) <= iVar7) {
      iVar7 = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    uVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar5,iVar7,*(undefined8 *)puVar4);
    puVar8 = (undefined8 *)(param_1 + 0x10);
    *puVar8 = uVar6;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

