/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$Recycle
void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__Recycle (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$Recycle
   void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__Recycle
   (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__Recycle_1e90aa8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c2812e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9000);
    FUN_012d0dc8(PTR_DAT_05763bd8);
    FUN_012d0dc8(PTR_DAT_057da7b0);
    FUN_012d0dc8(PTR_DAT_057db9e8);
    FUN_012d0dc8(PTR_DAT_05764cd8);
    FUN_012d0dc8(PTR_DAT_057e11f8);
    bRam0000000005c2812e = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lVar5,0);
  }
  plVar7 = (long *)(param_1 + 0x20);
  if (*plVar7 != 0) {
    Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(*plVar7,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_012d0d74(plVar7,0);
  if (*(long *)(param_1 + 0x28) != 0) {
    Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98
              (*(long *)(param_1 + 0x28),0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_012d0d74(plVar7,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_012d0d74((long *)(param_1 + 0x30),0);
  puVar4 = PTR_DAT_057f9000;
  puVar3 = PTR_DAT_057e11f8;
  puVar2 = PTR_DAT_05764cd8;
  puVar1 = PTR_DAT_05763bd8;
  plVar7 = (long *)(param_1 + 0x38);
  if (*plVar7 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*plVar7,*(undefined8 *)PTR_DAT_057db9e8);
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_48,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
      if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Infrastructure_Common_Scripts_Component_AItem__Recycle_40e9d98(lStack_38,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar4);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if (lVar5 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)puVar2);
      *plVar7 = lVar5;
      FUN_012d0d74(plVar7,lVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

