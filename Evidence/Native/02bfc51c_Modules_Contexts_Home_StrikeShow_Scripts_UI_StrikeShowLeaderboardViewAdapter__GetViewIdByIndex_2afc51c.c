/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$GetViewIdByIndex
int32_t Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetViewIdByIndex (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$GetViewIdByIndex
   int32_t
   Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetViewIdByIndex
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this, int32_t
   index, const MethodInfo* method); */

bool Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetViewIdByIndex_2afc51c
               (long param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 02bfc524 to 02cfc52b has its CatchHandler @ 02bfc5cc */
  if ((bRam0000000005c2ec10 & 1) == 0) {
                    /* try { // try from 02bfc540 to 02cfc543 has its CatchHandler @ 02bfc5c4 */
    FUN_012d0dc8(PTR_DAT_057a9e48);
                    /* try { // try from 02bfc544 to 02cfc547 has its CatchHandler @ 02bfc5c8 */
    FUN_012d0dc8(PTR_DAT_057da770);
                    /* try { // try from 02bfc550 to 02cfc573 has its CatchHandler @ 02bfc5d8 */
    FUN_012d0dc8(PTR_DAT_057cd3b8);
    bRam0000000005c2ec10 = 1;
  }
  if (-1 < param_2) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc4e4 with catch @ 02bfc5dc
                        */
      FUN_012d0ef0();
    }
                    /* try { // try from 02bfc574 to 02cfc58b has its CatchHandler @ 02bfc5d4 */
    if (param_2 < *(int *)(lVar2 + 0x18)) {
                    /* try { // try from 02bfc58c to 02cfc5bf has its CatchHandler @ 02bfc47c */
      plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar2,param_2,*(undefined8 *)PTR_DAT_057da770);
      if (plVar3 == (long *)0x0) {
        return false;
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_057cd3b8 + 300);
      if (bVar1 <= *(byte *)(*plVar3 + 300)) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc540 with catch @ 02bfc5c4
                       try { // try from 02bfc5c4 to 02cfc5f3 has its CatchHandler @ 02bfc47c */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc544 with catch @ 02bfc5c8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc524 with catch @ 02bfc5cc
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc5c0 with catch @ 02bfc5cc
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc518 with catch @ 02bfc5d0
                        */
        return *(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
               *(long *)PTR_DAT_057cd3b8;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc574 with catch @ 02bfc5d4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc550 with catch @ 02bfc5d8
                        */
      }
    }
  }
                    /* try { // try from 02bfc5c0 to 02cfc5c3 has its CatchHandler @ 02bfc5cc */
  return false;
}

