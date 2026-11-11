/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$Complete
void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__Complete (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, bool startImmediately, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Ice.IceItem$$Complete
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__Complete
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem_o* __this, bool startImmediately,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__Complete_274d8a0
               (long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c2c6d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_05775628);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c2c6d4 = 1;
  }
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveOutItem_2499654
              (*(long *)(param_1 + 0x50),param_1,0);
    puVar5 = PTR_DAT_057d0ba8;
    puVar4 = PTR_DAT_057b8520;
    puVar3 = PTR_DAT_057b41c8;
    puVar2 = PTR_DAT_05775628;
    puVar1 = PTR_DAT_05768d80;
    if (*(long *)(param_1 + 0x58) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_88,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_05768d80);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      lStack_60 = lStack_78;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_70,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
        if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__RemoveBlocker_248db1c
                  (lStack_60,param_1,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_70,*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x58) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_88,*(long *)(param_1 + 0x58),*(undefined8 *)puVar1);
        uStack_68 = uStack_80;
        uStack_70 = uStack_88;
        lStack_60 = lStack_78;
        while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                 (&uStack_70,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
          if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          if (*(long *)(lStack_60 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50
                    (*(long *)(lStack_60 + 0x40),param_1,0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar5);
        *(undefined1 *)(param_1 + 0x40) = 1;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        if (lVar7 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4(lVar7,0);
          Modules_Contexts_GamePlay_Board_Items_Scripts_Ice_IceItem__PlayRevealAnimationOrdered_274db50
                    (param_1,param_2 & 1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

