/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$RevealCell
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__RevealCell (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkItem$$RevealCell
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__RevealCell
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottle,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* cell, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkItem__RevealCell_2754f40
               (undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c2c714 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_057822a8);
    bRam0000000005c2c714 = 1;
  }
  puVar2 = PTR_DAT_057e1088;
  puVar1 = PTR_DAT_05795370;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if ((param_3 != 0) && (lVar4 = *(long *)(param_3 + 0x20), lVar4 != 0)) {
    if (*(int *)(lVar4 + 0x40) == 1) {
      Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__TryReveal_1e90f3c(param_3,0);
    }
    else {
      if ((param_2 == 0) || (*(long *)(param_2 + 0x80) == 0)) goto LAB_02855054;
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_38,*(long *)(param_2 + 0x80),*(undefined8 *)PTR_DAT_057822a8);
      while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_38,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
        if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if ((*(long *)(lStack_28 + 0x20) != 0) && (*(long *)(lStack_28 + 0x20) == lVar4)) {
          Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__TryReveal_1e90f3c(lStack_28,0);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_38,*(undefined8 *)puVar1);
    }
    return;
  }
LAB_02855054:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

