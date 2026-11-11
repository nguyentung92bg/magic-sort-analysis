/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.ChestSpriteConfig$$GetSpriteLibrary
UnityEngine_U2D_Animation_SpriteLibraryAsset_o* Modules_Contexts_Home_UI_Chest_Scripts_ChestSpriteConfig__GetSpriteLibrary (Modules_Contexts_Home_UI_Chest_Scripts_ChestSpriteConfig_o* __this, int32_t chestId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Chest.Scripts.ChestSpriteConfig$$GetSpriteLibrary
   UnityEngine_U2D_Animation_SpriteLibraryAsset_o*
   Modules_Contexts_Home_UI_Chest_Scripts_ChestSpriteConfig__GetSpriteLibrary
   (Modules_Contexts_Home_UI_Chest_Scripts_ChestSpriteConfig_o* __this, int32_t chestId, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_UI_Chest_Scripts_ChestSpriteConfig__GetSpriteLibrary_2984e7c
          (long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000005c2d786 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9a10);
    FUN_012d0dc8(PTR_DAT_057594a0);
    bRam0000000005c2d786 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  param_2 = param_2 + -1;
  if (param_2 < 0) {
    if (lVar1 == 0) goto LAB_02a84f08;
LAB_02a84ee8:
    uVar2 = *(undefined8 *)PTR_DAT_057594a0;
    param_2 = 0;
  }
  else {
    if (lVar1 == 0) goto LAB_02a84f08;
    if (*(int *)(lVar1 + 0x18) < param_2) goto LAB_02a84ee8;
    uVar2 = *(undefined8 *)PTR_DAT_057594a0;
  }
  lVar1 = System_Collections_Generic_List_object___get_Item_21fc76c(lVar1,param_2,uVar2);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x18);
  }
LAB_02a84f08:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

