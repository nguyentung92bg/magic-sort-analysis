/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetColorAndColorId
Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorAndColorId (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetColorAndColorId
   Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorAndColorId
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t colorId,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorAndColorId_2f62dbc
          (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((bRam0000000005c30907 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575e6c0);
    bRam0000000005c30907 = 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = System_Collections_Generic_List_Int32Enum___IndexOf_20528e4
                      (*(long *)(param_1 + 0x70),param_2,*(undefined8 *)PTR_DAT_0575e6c0);
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
      if ((bRam0000000005c2a659 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057ec328,uVar1,0);
        FUN_012d0dc8(PTR_DAT_057f7928);
        bRam0000000005c2a659 = 1;
      }
      lVar2 = *(long *)(lVar2 + 0x30);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,uVar1,*(undefined8 *)PTR_DAT_057f7928);
      if (lVar2 != 0) {
        return *(undefined8 *)(lVar2 + 0x18);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

