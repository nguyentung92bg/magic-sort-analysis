/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItemSorting$$.ctor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItemSorting___ctor (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItemSorting_o __this, Modules_Infrastructure_UI_Common_Scripts_Sorting_o toggleItemOpened, Modules_Infrastructure_UI_Common_Scripts_Sorting_o toggleItemClosed, Modules_Infrastructure_UI_Common_Scripts_Sorting_o capLid, Modules_Infrastructure_UI_Common_Scripts_Sorting_o neckRope, Modules_Infrastructure_UI_Common_Scripts_Sorting_o shortRope, Modules_Infrastructure_UI_Common_Scripts_Sorting_o curvedRope, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItemSorting$$.ctor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItemSorting___ctor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItemSorting_o __this,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o toggleItemOpened,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o toggleItemClosed,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o capLid,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o neckRope,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o shortRope,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o curvedRope, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItemSorting___ctor_260b12c
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  param_1[2] = param_4;
  param_1[3] = param_5;
  FUN_012d0d74(param_1 + 2,0);
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_012d0d74(param_1,0);
  param_1[4] = param_6;
  param_1[5] = param_7;
  FUN_012d0d74(param_1 + 4,0);
  param_1[6] = param_9;
  param_1[7] = param_10;
  FUN_012d0d74(param_1 + 6,0);
  param_1[8] = param_11;
  param_1[9] = param_12;
  FUN_012d0d74(param_1 + 8,0);
  puVar4 = param_1 + 10;
  *puVar4 = param_13;
  param_1[0xb] = param_14;
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

