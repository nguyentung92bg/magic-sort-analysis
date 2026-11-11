/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ColorNS.ColorService$$GetColorAndColorId
Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ColorNS.ColorService$$GetColorAndColorId
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService_o* __this, int32_t
   index, const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307be4
          (long param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((bRam0000000005c2a659 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec328);
    FUN_012d0dc8(PTR_DAT_057f7928);
    bRam0000000005c2a659 = 1;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar1 = System_Collections_Generic_List_object___get_Item_21fc76c
                    (lVar1,param_2,*(undefined8 *)PTR_DAT_057f7928);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

