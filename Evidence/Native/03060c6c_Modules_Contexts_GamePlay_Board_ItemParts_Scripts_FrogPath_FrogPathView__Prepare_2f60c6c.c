/* IL2CPP: Modules.Contexts.GamePlay.Board.ItemParts.Scripts.FrogPath.FrogPathView$$Prepare
void Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathView__Prepare (Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathView_o* __this, int32_t frogType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.ItemParts.Scripts.FrogPath.FrogPathView$$Prepare
   void Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathView__Prepare
   (Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathView_o* __this, int32_t
   frogType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_ItemParts_Scripts_FrogPath_FrogPathView__Prepare_2f60c6c
               (long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* catch() { ... } // from try @ 03060a30 with catch @ 03060c6c */
  switch(param_2) {
  case 1:
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
LAB_03060d60:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uStack_2c = _UNK_0438f380;
    uStack_28 = 0;
    break;
  case 2:
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) goto LAB_03060d60;
    uStack_2c = 0x3f800000;
    uStack_30 = 0;
    uStack_28 = 0;
    goto LAB_03060d54;
  case 3:
    lVar1 = *(long *)(param_1 + 0x20);
    uStack_2c = _UNK_0438f378;
    uStack_28 = _UNK_0438f37c;
    if (lVar1 == 0) goto LAB_03060d60;
    break;
  case 4:
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) goto LAB_03060d60;
    uStack_2c = 0x3f000000;
    goto code_r0x03060d50;
  case 5:
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) goto LAB_03060d60;
    uStack_2c = 0x3f800000;
    uStack_28 = 0x3f800000;
    break;
  case 6:
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) goto LAB_03060d60;
    uStack_2c = 0;
code_r0x03060d50:
    uStack_30 = 0x3f000000;
    uStack_28 = 0x3f000000;
    goto LAB_03060d54;
  default:
    return;
  }
  uStack_30 = 0x3f800000;
LAB_03060d54:
  uStack_24 = 0x3f800000;
  if (pcRam0000000005c3a788 == (code *)0x0) {
    pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
  }
  (*pcRam0000000005c3a788)(lVar1,&uStack_30);
  return;
}

