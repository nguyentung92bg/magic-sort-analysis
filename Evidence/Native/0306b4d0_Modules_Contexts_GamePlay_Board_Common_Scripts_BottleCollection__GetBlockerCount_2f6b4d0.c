/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBlockerCount
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t itemType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetBlockerCount
   int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t itemType,
   const MethodInfo* method); */

int Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBlockerCount_2f6b4d0
              (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  if ((bRam0000000005c30923 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c30923 = 1;
  }
  puVar1 = PTR_DAT_05802430;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar5) {
        return iVar4;
      }
      lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar5,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      lVar2 = *(long *)(param_1 + 0x20);
      iVar5 = iVar5 + 1;
      if (*(int *)(lVar3 + 0x18) == param_2) {
        iVar4 = iVar4 + 1;
      }
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

