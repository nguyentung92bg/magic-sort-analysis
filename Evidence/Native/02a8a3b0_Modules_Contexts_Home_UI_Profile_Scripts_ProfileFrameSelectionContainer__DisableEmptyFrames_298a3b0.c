/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$DisableEmptyFrames
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__DisableEmptyFrames (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this, int32_t frameCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileFrameSelectionContainer$$DisableEmptyFrames
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__DisableEmptyFrames
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer_o* __this, int32_t
   frameCount, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileFrameSelectionContainer__DisableEmptyFrames_298a3b0
               (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000005c2d7b5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc0b0);
    FUN_012d0dc8(PTR_DAT_0581b040);
    bRam0000000005c2d7b5 = 1;
  }
  puVar1 = PTR_DAT_0581b040;
  lVar2 = *(long *)(param_1 + 0x18);
  while (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) <= param_2) {
      return;
    }
    lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar2,param_2,*(undefined8 *)puVar1);
    if ((lVar2 == 0) || (lVar2 = UnityEngine_Component__get_gameObject_408b480(lVar2,0), lVar2 == 0)
       ) break;
    UnityEngine_GameObject__SetActive_408e318(lVar2,0,0);
    param_2 = param_2 + 1;
    lVar2 = *(long *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

