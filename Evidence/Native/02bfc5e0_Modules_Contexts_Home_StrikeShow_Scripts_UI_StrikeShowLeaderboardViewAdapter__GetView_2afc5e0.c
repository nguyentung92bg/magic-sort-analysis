/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$GetView
Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetView (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardViewAdapter$$GetView
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o*
   Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetView
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter_o* __this, int32_t
   index, const MethodInfo* method); */

long Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetView_2afc5e0
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x20);
  uVar1 = Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardViewAdapter__GetViewIdByIndex_2afc51c
                    ();
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 02bfc5f4 to 02cfc5f7 has its CatchHandler @ 02bfc604 */
    lVar2 = (**(code **)(*plVar4 + 0x1c8))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x1d0));
                    /* catch() { ... } // from try @ 02bfc5f4 with catch @ 02bfc604 */
                    /* try { // try from 02bfc610 to 02cfc61b has its CatchHandler @ 02bfc630 */
    if ((lVar2 != 0) && (lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar2,0), lVar3 != 0)
       ) {
                    /* try { // try from 02bfc61c to 02cfc627 has its CatchHandler @ 02bfc47c */
      UnityEngine_GameObject__SetActive_408e318(lVar3,1,0);
                    /* try { // try from 02bfc628 to 02cfc62f has its CatchHandler @ 02bfc630 */
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bfc610 with catch @ 02bfc630
                       catch(type#2 @ 00000000) { ... } // from try @ 02bfc628 with catch @ 02bfc630
                        */
  FUN_012d0ef0();
}

