/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItem$$OnBottleMove
void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__OnBottleMove (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem_o* __this, int32_t pourableHeight, bool isLeft, float animationDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItem$$OnBottleMove
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__OnBottleMove
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem_o* __this, int32_t pourableHeight,
   bool isLeft, float animationDuration, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItem__OnBottleMove_260b4ac
               (long param_1,int param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2b9de & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f4f48);
    FUN_012d0dc8(PTR_DAT_0576cad8);
    FUN_012d0dc8(PTR_DAT_057cafe0);
    FUN_012d0dc8(PTR_DAT_058168a0);
    FUN_012d0dc8(PTR_DAT_0577e808);
    FUN_012d0dc8(PTR_DAT_05767bf8);
    bRam0000000005c2b9de = 1;
  }
  lVar1 = *(long *)(lVar1 + 0x48);
  if ((param_3 & 1) == 0) {
    if (lVar1 == 0) goto LAB_0270b5b4;
    puVar3 = (undefined8 *)PTR_DAT_058168a0;
    puVar4 = (undefined8 *)PTR_DAT_057cafe0;
    if (param_2 != 2) {
      puVar3 = (undefined8 *)PTR_DAT_0576cad8;
    }
  }
  else {
    if (lVar1 == 0) {
LAB_0270b5b4:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    puVar3 = (undefined8 *)PTR_DAT_05767bf8;
    puVar4 = (undefined8 *)PTR_DAT_0577e808;
    if (param_2 != 2) {
      puVar3 = (undefined8 *)PTR_DAT_057f4f48;
    }
  }
  if (param_2 != 3) {
    puVar4 = puVar3;
  }
  uVar2 = *puVar4;
  if (pcRam0000000005c28c10 == (code *)0x0) {
    pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000005c28c10)(lVar1,uVar2,0);
  return;
}

