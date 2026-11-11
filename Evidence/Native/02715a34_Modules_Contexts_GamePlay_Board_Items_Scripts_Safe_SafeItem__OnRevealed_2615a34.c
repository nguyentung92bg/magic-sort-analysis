/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeItem$$OnRevealed
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__OnRevealed (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02715ba0) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeItem$$OnRevealed
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__OnRevealed
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__OnRevealed_2615a34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  if ((bRam0000000005c2ba25 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b7918);
    bRam0000000005c2ba25 = 1;
  }
  puVar5 = PTR_DAT_057d0ba8;
  puVar4 = PTR_DAT_057b7918;
  puVar3 = PTR_DAT_057b41c8;
  puVar2 = PTR_DAT_057a7f80;
  puVar1 = PTR_DAT_057605b8;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  uStack_60 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_98,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_05768d80);
  uStack_58 = uStack_90;
  uStack_60 = uStack_98;
  plStack_50 = plStack_88;
  while( true ) {
    uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_60,*(undefined8 *)puVar3);
    if ((uVar6 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_60,*(undefined8 *)puVar5);
      return;
    }
    if (plStack_50 == (long *)0x0) break;
    if (plStack_50[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_98,plStack_50[0x11],*(undefined8 *)puVar4);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    plStack_70 = plStack_88;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_80,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
      if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      (**(code **)(*plStack_70 + 0x468))(plStack_70,*(undefined8 *)(*plStack_70 + 0x470));
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)puVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

