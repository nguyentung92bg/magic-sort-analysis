/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.ItemInfoButton$$SetItem
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ItemInfoButton__SetItem (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ItemInfoButton_o* __this, int32_t setID, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.ItemInfoButton$$SetItem
   void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ItemInfoButton__SetItem
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ItemInfoButton_o* __this, int32_t setID, int32_t
   level, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_ItemInfoButton__SetItem_3fa7d44
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 uStack_44;
  
  if ((bRam0000000005c38ff8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05768ec8);
    FUN_012d0dc8(PTR_DAT_057662d8);
    bRam0000000005c38ff8 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar8 = *(long *)(param_1 + 0x18);
    uVar5 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig__GetSprite_3fa7e80
                      (*(long *)(param_1 + 0x30),param_2,param_3,0,0);
    puVar4 = PTR_DAT_057db748;
    puVar3 = PTR_DAT_057bc5e8;
    puVar2 = PTR_DAT_05768ec8;
    puVar1 = PTR_DAT_057662d8;
    if (lVar8 != 0) {
      UnityEngine_SpriteRenderer__set_sprite_4095b64(lVar8,uVar5,0);
      plVar7 = *(long **)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900
                        (*(undefined8 *)puVar1,0);
      uStack_44 = param_3;
      uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_44);
      uVar5 = System_String__Format_1ed15b8(*(undefined8 *)puVar2,uVar5,uVar6,0);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

