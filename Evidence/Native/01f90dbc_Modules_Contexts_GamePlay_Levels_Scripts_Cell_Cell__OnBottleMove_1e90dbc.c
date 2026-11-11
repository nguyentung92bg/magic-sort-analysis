/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$OnBottleMove
void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__OnBottleMove (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, int32_t pourableHeight, bool isLeft, float moveDuration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$OnBottleMove
   void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__OnBottleMove
   (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, int32_t pourableHeight, bool
   isLeft, float moveDuration, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__OnBottleMove_1e90dbc
               (undefined8 param_1,long param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((bRam0000000005c28131 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f9000);
    FUN_012d0dc8(PTR_DAT_05763bd8);
    FUN_012d0dc8(PTR_DAT_057da7b0);
    FUN_012d0dc8(PTR_DAT_057db9e8);
    bRam0000000005c28131 = 1;
  }
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
  if (*(long *)(param_2 + 0x28) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_QuestionMark_QuestionMarkItem__HideQuestionMark_2745a5c
              (*(long *)(param_2 + 0x28),0);
  }
  puVar2 = PTR_DAT_057f9000;
  puVar1 = PTR_DAT_05763bd8;
  if (*(long *)(param_2 + 0x38) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_2 + 0x38),*(undefined8 *)PTR_DAT_057db9e8);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar2);
        return;
      }
      if (plStack_38 == (long *)0x0) break;
      (**(code **)(*plStack_38 + 0x228))
                (param_1,plStack_38,param_3,param_4 & 1,*(undefined8 *)(*plStack_38 + 0x230));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

