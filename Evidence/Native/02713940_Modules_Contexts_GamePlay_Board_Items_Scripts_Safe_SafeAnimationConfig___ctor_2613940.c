/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeAnimationConfig$$.ctor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig___ctor (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeAnimationConfig$$.ctor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig___ctor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeAnimationConfig___ctor_2613940
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_0580f750;
  if ((bRam0000000005c2ba1e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05789908);
    FUN_012d0dc8(PTR_DAT_0580f750);
    bRam0000000005c2ba1e = 1;
  }
  uVar2 = _UNK_0438ec28;
  uVar1 = _UNK_0438ec20;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x48) = 0x40147ae1400e147b;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = 0x3ecccccd;
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar4 != 0) {
    System_Collections_Generic_List_float____ctor_1d705b0(lVar4,*(undefined8 *)PTR_DAT_05789908);
    *(long *)(param_1 + 0xf0) = lVar4;
    FUN_012d0d74((long *)(param_1 + 0xf0),lVar4);
    puVar3 = PTR_DAT_0576c200;
    if ((bRam0000000005c3a3d4 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,0);
      bRam0000000005c3a3d4 = 1;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    System_Object___ctor_23dfe5c(param_1,0);
    if (pcRam0000000005c3a3d8 == (code *)0x0) {
      pcRam0000000005c3a3d8 = (code *)FUN_012d0d84(&UNK_043ee072);
    }
                    /* WARNING: Could not recover jumptable at 0x0418f4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c3a3d8)(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

