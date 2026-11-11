/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$Initialize
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__Initialize (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobView$$Initialize
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__Initialize
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobView__Initialize_2309364
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar4 = PTR_DAT_0576c200;
  if ((bRam0000000005c2a660 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2a660 = 1;
  }
  puVar6 = (undefined8 *)(param_1 + 0x48);
  uVar7 = *puVar6;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar5 = UnityEngine_Object__op_Equality_407f288(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar7 = UnityEngine_Renderer__get_material_40828f4(*(long *)(param_1 + 0x20),0);
      *puVar6 = uVar7;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

