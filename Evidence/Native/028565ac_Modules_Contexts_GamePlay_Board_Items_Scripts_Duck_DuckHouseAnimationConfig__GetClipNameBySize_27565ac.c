/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseAnimationConfig$$GetClipNameBySize
System_String_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig__GetClipNameBySize (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig_o* __this, int32_t size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseAnimationConfig$$GetClipNameBySize
   System_String_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig__GetClipNameBySize
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig_o* __this, int32_t
   size, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig__GetClipNameBySize_27565ac
               (long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam0000000005c2c721 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d7040);
    bRam0000000005c2c721 = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if ((int)param_2 < 0) {
LAB_02856610:
    lVar2 = *(long *)(param_1 + 0x58);
    if (lVar2 == 0) goto LAB_02856638;
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_0285663c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
  }
  else {
    if (*(long *)(param_1 + 0xf0) == 0) goto LAB_02856638;
    if (*(int *)(*(long *)(param_1 + 0xf0) + 0x18) <= (int)param_2) goto LAB_02856610;
    lVar2 = *(long *)(param_1 + 0x58);
    if (lVar2 == 0) goto LAB_02856638;
    if (*(uint *)(lVar2 + 0x18) <= param_2) goto LAB_0285663c;
    lVar2 = lVar2 + (long)(int)param_2 * 8;
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if (lVar2 != 0) {
    if ((bRam0000000005c3a495 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,0);
      bRam0000000005c3a495 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    if (pcRam0000000005c3a510 == (code *)0x0) {
      pcRam0000000005c3a510 = (code *)FUN_012d0d84(&UNK_043ee894);
    }
                    /* WARNING: Could not recover jumptable at 0x04178d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a510)(lVar2);
    return;
  }
LAB_02856638:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

