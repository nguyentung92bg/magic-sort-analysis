/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseAnimationConfig$$GetCoverItemClipNameByType
System_String_o* Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig__GetCoverItemClipNameByType (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig_o* __this, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseAnimationConfig$$GetCoverItemClipNameByType
   System_String_o*
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig__GetCoverItemClipNameByType
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig_o* __this, int32_t
   duckType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseAnimationConfig__GetCoverItemClipNameByType_27566bc
               (long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_0576c200;
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    uVar2 = param_2 - 1;
    if (((int)uVar2 < 0) || ((int)(uVar1 - 1) < (int)uVar2)) {
      if (uVar1 == 0) goto LAB_0285670c;
    }
    else {
      if (uVar1 <= uVar2) {
LAB_0285670c:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      lVar4 = lVar4 + (long)(int)uVar2 * 8;
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if (lVar4 != 0) {
      if ((bRam0000000005c3a495 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0576c200,0);
        bRam0000000005c3a495 = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      if (pcRam0000000005c3a510 == (code *)0x0) {
        pcRam0000000005c3a510 = (code *)FUN_012d0d84(&UNK_043ee894);
      }
                    /* WARNING: Could not recover jumptable at 0x04178d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a510)(lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

