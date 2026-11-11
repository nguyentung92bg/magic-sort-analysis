/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$LoadFacebookProfilePhoto
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__LoadFacebookProfilePhoto (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$LoadFacebookProfilePhoto
   void 
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__LoadFacebookProfilePhoto
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__LoadFacebookProfilePhoto_298da50
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2d7e7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2d7e7 = 1;
  }
  uVar2 = Modules_Contexts_Home_UI_Profile_Scripts_SocialProfilePhotoManager__LoadProfilePhoto_2adfca8
                    (0);
                    /* try { // try from 02a8da8c to 02b8dab7 has its CatchHandler @ 02a8d9f8 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 02a8dab8 to 02b8dac3 has its CatchHandler @ 02a8dac4 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02a8da48 with catch @ 02a8dac4
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02a8dab8 with catch @ 02a8dac4
                       try { // try from 02a8dac4 to 02b8dadb has its CatchHandler @ 02a8d9f8 */
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar4 != 0)) {
      if (pcRam0000000005c3a730 == (code *)0x0) {
        pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
      }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a730)(lVar4,uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* try { // try from 02a8dadc to 02b8daf3 has its CatchHandler @ 02a8db60 */
  return;
}

