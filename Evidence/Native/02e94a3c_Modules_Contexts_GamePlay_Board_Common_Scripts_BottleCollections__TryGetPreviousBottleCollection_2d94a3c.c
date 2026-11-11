/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$TryGetPreviousBottleCollection
bool Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__TryGetPreviousBottleCollection (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o** bottleCollection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$TryGetPreviousBottleCollection
   bool 
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__TryGetPreviousBottleCollection
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o** bottleCollection, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__TryGetPreviousBottleCollection_2d94a3c
          (long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000005c2f9f6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a0df8);
    bRam0000000005c2f9f6 = 1;
  }
  *param_2 = 0;
  FUN_012d0d74(param_2,0);
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar1 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x18),*(int *)(param_1 + 0x20) + -1,
                       *(undefined8 *)PTR_DAT_057a0df8);
    *param_2 = uVar1;
    FUN_012d0d74(param_2,uVar1);
    uVar1 = 1;
  }
  return uVar1;
}

