/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameItemDataConfig$$GetItemData
Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o* Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemDataConfig__GetItemData (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemDataConfig_o* __this, int32_t itemType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MiniGame.Scripts.Board.MiniGameItemDataConfig$$GetItemData
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemData_o*
   Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemDataConfig__GetItemData
   (Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemDataConfig_o* __this, int32_t itemType,
   const MethodInfo* method); */

long Modules_Contexts_Home_MiniGame_Scripts_Board_MiniGameItemDataConfig__GetItemData_218b2d8
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c29d8f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f55d0);
    FUN_012d0dc8(PTR_DAT_057e4ee8);
    FUN_012d0dc8(PTR_DAT_057ae460);
    FUN_012d0dc8(PTR_DAT_0580e9d8);
    bRam0000000005c29d8f = 1;
  }
  puVar2 = PTR_DAT_057f55d0;
  puVar1 = PTR_DAT_057e4ee8;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0580e9d8);
  do {
    uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_48,*(undefined8 *)puVar1);
    if ((uVar3 & 1) == 0) {
      lVar5 = 0;
      iVar4 = 5;
      goto LAB_0228b39c;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  } while (*(int *)(lStack_38 + 0x10) != param_2);
  iVar4 = 4;
  lVar5 = lStack_38;
LAB_0228b39c:
  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
            (&uStack_48,*(undefined8 *)puVar2);
  if (iVar4 != 4) {
    lVar5 = 0;
  }
  return lVar5;
}

