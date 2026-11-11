/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$.cctor
void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$.cctor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView___cctor (const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView___cctor_260d814(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  if ((bRam0000000005c2b9f0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c0d90);
    bRam0000000005c2b9f0 = 1;
  }
  puVar2 = PTR_DAT_057c0d90;
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  puVar3 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  uVar1 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8) + 1);
  *puVar3 = **(undefined8 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
  *(undefined4 *)(puVar3 + 1) = uVar1;
  return;
}

