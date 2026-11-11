/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxView$$SetLockType
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetLockType (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView_o* __this, int32_t woodboxKeyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxView$$SetLockType
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetLockType
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView_o* __this, int32_t
   woodboxKeyType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__SetLockType_2607f34
               (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if ((bRam0000000005c2b9c4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f6840);
    FUN_012d0dc8(PTR_DAT_057d8f98);
    bRam0000000005c2b9c4 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) goto LAB_02708098;
  lVar2 = *(long *)(lVar3 + 0x40);
  switch(param_2 + -1) {
  case 0:
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xe0);
    break;
  case 1:
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xf0);
    goto joined_r0x02707fec;
  case 2:
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xd8);
joined_r0x02707fec:
    if (lVar2 == 0) goto LAB_02708098;
    goto LAB_0270802c;
  case 3:
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xd0);
    break;
  case 4:
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xf8);
    break;
  case 5:
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xe8);
    break;
  default:
    if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02708098;
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 0x28) + 0xa8);
  }
  if (lVar2 != 0) {
LAB_0270802c:
    UnityEngine_U2D_Animation_SpriteLibrary__set_spriteLibraryAsset_1e38a88(lVar2,*puVar4,0);
    puVar1 = PTR_DAT_057d8f98;
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      iVar5 = 0;
      while (lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) <= iVar5) {
          return;
        }
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar3,iVar5,*(undefined8 *)puVar1);
        if ((lVar3 == 0) ||
           (lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar3,0), lVar3 == 0)) break;
        UnityEngine_GameObject__SetActive_408e318(lVar3,param_2 + -1 == iVar5,0);
        lVar3 = *(long *)(param_1 + 0x30);
        iVar5 = iVar5 + 1;
        if (lVar3 == 0) break;
      }
    }
  }
LAB_02708098:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

