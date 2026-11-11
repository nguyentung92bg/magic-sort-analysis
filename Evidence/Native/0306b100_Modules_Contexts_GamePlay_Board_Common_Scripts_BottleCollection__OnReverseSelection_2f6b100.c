/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$OnReverseSelection
void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnReverseSelection (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t waterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$OnReverseSelection
   void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnReverseSelection
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* originBottle,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* targetBottle, int32_t
   waterColorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__OnReverseSelection_2f6b100
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  if ((bRam0000000005c3091d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c3091d = 1;
  }
  puVar1 = PTR_DAT_05802430;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        return;
      }
      plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar2,iVar4,*(undefined8 *)puVar1);
      if (plVar3 == (long *)0x0) break;
      if ((char)plVar3[8] == '\0') {
        (**(code **)(*plVar3 + 0x338))
                  (plVar3,param_2,param_3,param_4,*(undefined8 *)(*plVar3 + 0x340));
      }
      lVar2 = *(long *)(param_1 + 0x20);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

