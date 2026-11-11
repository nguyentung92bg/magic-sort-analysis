/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$GetMovingSorting
Modules_Infrastructure_UI_Common_Scripts_Sorting_o Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__GetMovingSorting (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey.SortKeyView$$GetMovingSorting
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o
   Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__GetMovingSorting (const
   MethodInfo* method); */

undefined1  [16]
Modules_Contexts_GamePlay_Board_Items_Scripts_SortKey_SortKeyView__GetMovingSorting_260d6ec(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2b9e8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2b9e8 = 1;
  }
  if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
      (lVar3 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar3 != 0)) &&
     (lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_0575c3c8), puVar2 = PTR_DAT_057dea60,
     lVar3 != 0)) {
    if ((bRam0000000005c39369 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057dea60,0);
      bRam0000000005c39369 = 1;
    }
    uStack_30 = *(undefined8 *)puVar2;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_012d0d74(&uStack_30);
    auVar1._8_4_ = 5000;
    auVar1._0_8_ = uStack_30;
    auVar1._12_4_ = uStack_24;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

