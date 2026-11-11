/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$ValidateSpriteSizes
bool Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__ValidateSpriteSizes (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this, System_Collections_Generic_List_ProfileSprite__o* profileSprites, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$ValidateSpriteSizes
   bool 
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__ValidateSpriteSizes
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this,
   System_Collections_Generic_List_ProfileSprite__o* profileSprites, const MethodInfo* method); */

bool Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__ValidateSpriteSizes_298d8d0
               (long param_1,long param_2)

{
  if ((bRam0000000005c2d7e5 & 1) == 0) {
                    /* try { // try from 02a8d8f4 to 02b8d903 has its CatchHandler @ 02a8d904 */
    FUN_012d0dc8(PTR_DAT_057c7a38);
    FUN_012d0dc8(PTR_DAT_0579f880);
                    /* catch() { ... } // from try @ 02a8d878 with catch @ 02a8d904
                       catch() { ... } // from try @ 02a8d8f4 with catch @ 02a8d904 */
                    /* try { // try from 02a8d908 to 02b8d90b has its CatchHandler @ 02a8d914 */
    bRam0000000005c2d7e5 = 1;
  }
                    /* try { // try from 02a8d90c to 02b8d917 has its CatchHandler @ 02a8d7a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02a8d908 with catch @ 02a8d914
                        */
  if ((*(long *)(param_1 + 0x20) != 0) && (param_2 != 0)) {
    return *(int *)(*(long *)(param_1 + 0x20) + 0x18) == *(int *)(param_2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

