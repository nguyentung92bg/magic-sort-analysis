/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ColorNS.ColorService$$GetColorAndColorId
Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService_o* __this, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Common.ColorNS.ColorService$$GetColorAndColorId
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService_o* __this, int32_t
   colorId, const MethodInfo* method); */

long Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorService__GetColorAndColorId_2307d70
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam0000000005c2a65a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec328);
    FUN_012d0dc8(PTR_DAT_058009a0);
    FUN_012d0dc8(PTR_DAT_057f7928);
    bRam0000000005c2a65a = 1;
  }
  puVar2 = PTR_DAT_057f7928;
  puVar1 = PTR_DAT_057ec328;
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    iVar4 = 0;
    while (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) <= iVar4) {
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          System_Object___ctor_23dfe5c(lVar3,0);
          return lVar3;
        }
        break;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar4,*(undefined8 *)puVar2);
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x18), lVar3 == 0)) break;
      if (*(int *)(lVar3 + 0x70) == param_2) {
        return lVar3;
      }
      lVar3 = *(long *)(param_1 + 0x30);
      iVar4 = iVar4 + 1;
      if (lVar3 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

