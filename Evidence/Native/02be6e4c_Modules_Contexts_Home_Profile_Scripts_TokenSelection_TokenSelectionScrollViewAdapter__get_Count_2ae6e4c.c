/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionScrollViewAdapter$$get_Count
int32_t Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__get_Count (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionScrollViewAdapter$$get_Count
   int32_t
   Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__get_Count
   (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter_o* __this,
   const MethodInfo* method); */

undefined4
Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionScrollViewAdapter__get_Count_2ae6e4c
          (long param_1)

{
  undefined4 uVar1;
  
  if ((bRam0000000005c2eb57 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ae4a0);
    bRam0000000005c2eb57 = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
  }
  return uVar1;
}

