/* IL2CPP: Modules.Contexts.Home.UI.PreGame.Scripts.Multiplier.MultiplierEventCurrencyController$$Dispose
void Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyController__Dispose (Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.PreGame.Scripts.Multiplier.MultiplierEventCurrencyController$$Dispose
   void 
   Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyController__Dispose
   (Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyController_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyController__Dispose_29791b4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000005c2d718 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05777d38);
    FUN_012d0dc8(PTR_DAT_0579fa00);
    FUN_012d0dc8(PTR_DAT_05771f48);
    FUN_012d0dc8(PTR_DAT_057a6180);
    bRam0000000005c2d718 = 1;
  }
  puVar2 = PTR_DAT_0579fa00;
  puVar1 = PTR_DAT_05777d38;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_057a6180);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar1);
        return;
      }
      if (lStack_28 == 0) break;
      Modules_Contexts_Home_UI_PreGame_Scripts_Multiplier_MultiplierEventCurrencyView__Hide_2979854
                ();
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

