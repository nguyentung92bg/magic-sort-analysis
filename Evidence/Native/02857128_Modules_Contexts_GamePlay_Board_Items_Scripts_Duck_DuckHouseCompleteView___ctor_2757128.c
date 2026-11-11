/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseCompleteView$$.ctor
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView___ctor (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseCompleteView$$.ctor
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView___ctor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView_o* __this, const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView___ctor_2757128
          (ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR_DAT_057f5710;
  if ((bRam0000000005c2c728 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576e040);
    FUN_012d0dc8(PTR_DAT_058017a0);
    FUN_012d0dc8(PTR_DAT_05802458);
    FUN_012d0dc8(PTR_DAT_057f5710);
    bRam0000000005c2c728 = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_058017a0;
  if (lVar3 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)PTR_DAT_058017a0);
    *(long *)(param_1 + 0x18) = lVar3;
    FUN_012d0d74((long *)(param_1 + 0x18),lVar3);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_05802458;
    if (lVar3 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x20) = lVar3;
      FUN_012d0d74((long *)(param_1 + 0x20),lVar3);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        System_Collections_Generic_List_object____ctor_21fc1fc
                  (lVar3,*(undefined8 *)PTR_DAT_0576e040);
        *(long *)(param_1 + 0x30) = lVar3;
        FUN_012d0d74((long *)(param_1 + 0x30),lVar3);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

