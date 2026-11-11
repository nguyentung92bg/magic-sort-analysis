/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$PlayResetScale
void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayResetScale (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItemParts.Scripts.Blob.BlobItemPart$$PlayResetScale
   void Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayResetScale
   (Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_GamePlay_BoardItemParts_Scripts_Blob_BlobItemPart__PlayResetScale_23091f4
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar6 = UnityEngine_Component__get_transform_408b444(lVar5,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  puVar1 = PTR_DAT_05784178;
  if (*(long *)(lVar5 + 0x40) != 0) {
    uVar11 = *(undefined4 *)(*(long *)(lVar5 + 0x40) + 0xc0);
    lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar8 = *(undefined4 *)(lVar5 + 0xc);
    uVar9 = *(undefined4 *)(lVar5 + 0x10);
    uVar10 = *(undefined4 *)(lVar5 + 0x14);
    if ((bRam0000000005c284b2 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0577f050,0);
      FUN_012d0dc8(PTR_DAT_0580e4a0);
      FUN_012d0dc8(PTR_DAT_057815e0);
      FUN_012d0dc8(PTR_DAT_05809208);
      FUN_012d0dc8(PTR_DAT_057ac800);
      FUN_012d0dc8(PTR_DAT_057ff6e8);
      FUN_012d0dc8(PTR_DAT_05784178);
      bRam0000000005c284b2 = 1;
    }
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0577f050;
    if (lVar5 != 0) {
      System_Object___ctor_23dfe5c(lVar5,0);
      puVar7 = (undefined8 *)(lVar5 + 0x10);
      *puVar7 = uVar6;
      FUN_012d0d74(puVar7,uVar6);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_0580e4a0;
      if (lVar3 != 0) {
        DG_Tweening_Core_DOGetter_Vector3____ctor_156d7c4
                  (lVar3,lVar5,*(undefined8 *)PTR_DAT_057ac800,0);
        lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar2 = PTR_DAT_05809208;
        puVar1 = PTR_DAT_057815e0;
        if (lVar4 != 0) {
          DG_Tweening_Core_DOSetter_Vector3____ctor_156ebf4
                    (lVar4,lVar5,*(undefined8 *)PTR_DAT_057ff6e8,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          uVar6 = DG_Tweening_DOTween__To_1ed8974(uVar8,uVar9,uVar10,uVar11,lVar3,lVar4);
          DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                    (uVar6,*puVar7,*(undefined8 *)puVar2);
          return uVar6;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

