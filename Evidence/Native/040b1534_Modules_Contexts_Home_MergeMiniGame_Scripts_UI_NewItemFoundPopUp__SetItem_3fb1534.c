/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.NewItemFoundPopUp$$SetItem
void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__SetItem (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp_o* __this, int32_t setID, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.NewItemFoundPopUp$$SetItem
   void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__SetItem
   (Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp_o* __this, int32_t setID,
   int32_t level, const MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_UI_NewItemFoundPopUp__SetItem_3fb1534(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar1 = Modules_Contexts_Home_MergeMiniGame_Scripts_UI_MergeItemSpriteConfig__GetSprite_3fa7e80
                      ();
    if (lVar2 != 0) {
      if (pcRam0000000005c3a730 == (code *)0x0) {
        pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
      }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a730)(lVar2,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

