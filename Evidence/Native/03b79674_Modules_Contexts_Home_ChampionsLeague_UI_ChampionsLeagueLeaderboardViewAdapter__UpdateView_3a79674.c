/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$UpdateView
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__UpdateView (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$UpdateView
   void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__UpdateView
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this,
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* basicView, Il2CppObject*
   viewModel, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__UpdateView_3a79674
               (undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000005c35ac0 & 1) == 0) {
                    /* try { // try from 03b79690 to 03c79693 has its CatchHandler @ 03b796a0 */
                    /* try { // try from 03b79694 to 03c796c3 has its CatchHandler @ 03b79268 */
    FUN_012d0dc8(PTR_DAT_057aa2e0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b79690 with catch @ 03b796a0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b795ec with catch @ 03b796a4
                        */
    FUN_012d0dc8(PTR_DAT_0576cfb8);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b7952c with catch @ 03b796a8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 03b7956c with catch @ 03b796ac
                        */
    bRam0000000005c35ac0 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar1 = *(long *)PTR_DAT_057aa2e0;
                    /* try { // try from 03b796c4 to 03c796c7 has its CatchHandler @ 03b79740 */
    if ((*(byte *)(lVar1 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) == lVar1)) {
      lVar2 = *param_2;
                    /* try { // try from 03b79704 to 03c7972b has its CatchHandler @ 03b7974c */
      if ((*(byte *)(lVar1 + 300) <= *(byte *)(lVar2 + 300)) &&
         (*(long *)(*(long *)(lVar2 + 200) + (ulong)*(byte *)(lVar1 + 300) * 8 + -8) == lVar1)) {
        if (param_3 == 0) {
          lVar1 = 0;
        }
        else {
          uVar3 = *(undefined8 *)PTR_DAT_0576cfb8;
          lVar1 = thunk_FUN_01320d5c(param_3,uVar3);
                    /* try { // try from 03b7972c to 03c79737 has its CatchHandler @ 03b79268 */
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d1288(param_3,uVar3);
          }
          lVar2 = *param_2;
                    /* try { // try from 03b79738 to 03c7973f has its CatchHandler @ 03b7974c */
        }
                    /* catch() { ... } // from try @ 03b796c4 with catch @ 03b79740 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03b79704 with catch @ 03b7974c
                       catch(type#2 @ 00000000) { ... } // from try @ 03b79738 with catch @ 03b7974c
                        */
                    /* WARNING: Could not recover jumptable at 0x03b79750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x1c8))(param_2,lVar1,*(undefined8 *)(lVar2 + 0x1d0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

