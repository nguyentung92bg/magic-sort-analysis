/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$GetBlockers
System_Collections_Generic_List_ABlockerItem__o* Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GetBlockers (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollections$$GetBlockers
   System_Collections_Generic_List_ABlockerItem__o*
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GetBlockers
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections_o* __this, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollections__GetBlockers_2d95288
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_05805c38;
  if ((bRam0000000005c2f9fc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b1540);
                    /* try { // try from 02e952bc to 02f952e3 has its CatchHandler @ 02e95304 */
    FUN_012d0dc8(PTR_DAT_057ddcb0);
    FUN_012d0dc8(PTR_DAT_05769ad0);
    FUN_012d0dc8(PTR_DAT_057a0df8);
                    /* try { // try from 02e952e4 to 02f952ef has its CatchHandler @ 02e94f80 */
    FUN_012d0dc8(PTR_DAT_05805c38);
    bRam0000000005c2f9fc = 1;
  }
                    /* try { // try from 02e952f0 to 02f952f7 has its CatchHandler @ 02e95304 */
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 02e9527c with catch @ 02e952f8 */
  if (lVar3 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02e952bc with catch @ 02e95304
                       catch(type#2 @ 00000000) { ... } // from try @ 02e952f0 with catch @ 02e95304
                        */
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar3,*(undefined8 *)PTR_DAT_057ddcb0);
    puVar2 = PTR_DAT_057b1540;
    puVar1 = PTR_DAT_057a0df8;
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 != 0) {
      iVar5 = 0;
      do {
        if (*(int *)(lVar4 + 0x18) <= iVar5) {
          return lVar3;
        }
        lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar4,iVar5,*(undefined8 *)puVar1);
        if (lVar4 == 0) break;
        System_Collections_Generic_List_object___AddRange_21fcc58
                  (lVar3,*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)puVar2);
        lVar4 = *(long *)(param_1 + 0x18);
        iVar5 = iVar5 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

