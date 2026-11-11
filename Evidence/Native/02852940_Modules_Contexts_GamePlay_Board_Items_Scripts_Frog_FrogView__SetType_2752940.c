/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogView$$SetType
void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView__SetType (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView_o* __this, int32_t frogType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog.FrogView$$SetType
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView__SetType
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView_o* __this, int32_t frogType, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogView__SetType_2752940
               (long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  switch(param_2) {
  case 1:
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) {
code_r0x02852a20:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uStack_2c = _UNK_0438f380;
    uStack_28 = 0;
    break;
  case 2:
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) goto code_r0x02852a20;
    uStack_2c = 0x3f800000;
    uStack_30 = 0;
    uStack_28 = 0;
    goto code_r0x02852a14;
  case 3:
    lVar1 = *(long *)(param_1 + 0x28);
    uStack_2c = _UNK_0438f378;
    uStack_28 = _UNK_0438f37c;
    if (lVar1 == 0) goto code_r0x02852a20;
    break;
  case 4:
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) goto code_r0x02852a20;
    uStack_2c = 0x3f000000;
    goto code_r0x02852a10;
  case 5:
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) goto code_r0x02852a20;
    uStack_2c = 0x3f800000;
    uStack_28 = 0x3f800000;
    break;
  case 6:
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 == 0) goto code_r0x02852a20;
    uStack_2c = 0;
code_r0x02852a10:
    uStack_30 = 0x3f000000;
    uStack_28 = 0x3f000000;
    goto code_r0x02852a14;
  default:
    return;
  }
  uStack_30 = 0x3f800000;
code_r0x02852a14:
  uStack_24 = 0x3f800000;
  if (pcRam0000000005c3a788 == (code *)0x0) {
    pcRam0000000005c3a788 = (code *)FUN_012d0d84(&UNK_043efbae,0);
  }
  (*pcRam0000000005c3a788)(lVar1,&uStack_30);
  return;
}

