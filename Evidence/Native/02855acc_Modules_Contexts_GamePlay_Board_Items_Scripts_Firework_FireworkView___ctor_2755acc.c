/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$.ctor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView___ctor (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework.FireworkView$$.ctor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView___ctor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_Items_Scripts_Firework_FireworkView___ctor_2755acc(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_057d5bc8;
  if ((bRam0000000005c2c71e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05790880);
    FUN_012d0dc8(PTR_DAT_057d5bc8);
    bRam0000000005c2c71e = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_05790880;
  if (lVar3 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)PTR_DAT_05790880);
    *(long *)(param_1 + 0x50) = lVar3;
    FUN_012d0d74((long *)(param_1 + 0x50),lVar3);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x58) = lVar3;
      FUN_012d0d74((long *)(param_1 + 0x58),lVar3);
      puVar1 = PTR_DAT_0576c200;
      if ((bRam0000000005c3a2b8 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0576c200,0);
        bRam0000000005c3a2b8 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1;
      return auVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

