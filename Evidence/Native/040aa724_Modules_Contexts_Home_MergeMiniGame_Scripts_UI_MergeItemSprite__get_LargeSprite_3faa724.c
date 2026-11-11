/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemSprite$$get_LargeSprite
UnityEngine_Sprite_o* Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSprite__get_LargeSprite (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSprite_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.MergeItemSprite$$get_LargeSprite
   UnityEngine_Sprite_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSprite__get_LargeSprite
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSprite_o* __this, const MethodInfo*
   method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSprite__get_LargeSprite_3faa724
          (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c39012 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c39012 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      if (pcRam0000000005c3a728 == (code *)0x0) {
        pcRam0000000005c3a728 = (code *)FUN_012d0d84(&UNK_043ef900);
      }
                    /* WARNING: Could not recover jumptable at 0x04195b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*pcRam0000000005c3a728)(lVar3);
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return 0;
}

