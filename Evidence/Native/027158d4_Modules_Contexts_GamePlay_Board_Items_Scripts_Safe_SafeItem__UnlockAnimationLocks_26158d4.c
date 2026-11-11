/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeItem$$UnlockAnimationLocks
void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__UnlockAnimationLocks (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Safe.SafeItem$$UnlockAnimationLocks
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__UnlockAnimationLocks
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Safe_SafeItem__UnlockAnimationLocks_26158d4
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
                    /* try { // try from 027158ec to 028158f7 has its CatchHandler @ 02715384 */
  if ((bRam0000000005c2ba24 & 1) == 0) {
                    /* try { // try from 027158f8 to 028158ff has its CatchHandler @ 0271590c */
    FUN_012d0dc8(PTR_DAT_057d0ba8);
                    /* catch() { ... } // from try @ 0271587c with catch @ 02715900 */
    FUN_012d0dc8(PTR_DAT_057b41c8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 027158c4 with catch @ 0271590c
                       catch(type#2 @ 00000000) { ... } // from try @ 027158f8 with catch @ 0271590c
                        */
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05768d80);
    bRam0000000005c2ba24 = 1;
  }
  puVar2 = PTR_DAT_057d0ba8;
  puVar1 = PTR_DAT_057b41c8;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_38,*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_05768d80);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_38,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_38,*(undefined8 *)puVar2);
        return;
      }
      if (lStack_28 == 0) break;
      if (*(long *)(lStack_28 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00
                (*(long *)(lStack_28 + 0x40),param_1,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

