/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$Deinitialize
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__Deinitialize (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$Deinitialize
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__Deinitialize
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__Deinitialize_2d94bb0
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c2f9f9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05769ad0);
    FUN_012d0dc8(PTR_DAT_057a0df8);
    bRam0000000005c2f9f9 = 1;
  }
  puVar1 = PTR_DAT_057a0df8;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        return;
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,iVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) break;
      Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__Deinitialize_2f6bebc(lVar2,0)
      ;
      lVar2 = *(long *)(param_1 + 0x18);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

