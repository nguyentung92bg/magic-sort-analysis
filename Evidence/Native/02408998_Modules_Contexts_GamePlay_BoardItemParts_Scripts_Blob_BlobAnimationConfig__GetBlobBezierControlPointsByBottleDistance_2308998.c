/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobAnimationConfig$$GetBlobBezierControlPointsByBottleDistance
Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobBezierControlPoints_o Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobAnimationConfig__GetBlobBezierControlPointsByBottleDistance (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobAnimationConfig_o* __this, int32_t distance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobAnimationConfig$$GetBlobBezierControlPointsByBottleDistance
   Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobBezierControlPoints_o
   Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobAnimationConfig__GetBlobBezierControlPointsByBottleDistance
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobAnimationConfig_o* __this, int32_t
   distance, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobAnimationConfig__GetBlobBezierControlPointsByBottleDistance_2308998
               (undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c2a65e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7a30);
    FUN_012d0dc8(PTR_DAT_057ed8e8);
    bRam0000000005c2a65e = 1;
  }
  lVar1 = *(long *)(param_2 + 200);
  if (lVar1 != 0) {
    if ((param_3 < *(int *)(lVar1 + 0x18)) && (*(int *)(lVar1 + 0x18) != 0)) {
      System_Collections_Generic_List_BlobBezierControlPoints___get_Item_2c0c968
                (&uStack_48,lVar1,param_3,*(undefined8 *)PTR_DAT_057ed8e8);
    }
    else {
      uStack_38 = 0x40400000;
      uStack_48 = _UNK_0438e220;
      uStack_40 = _UNK_0438e228;
    }
    param_1[2] = uStack_38;
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

