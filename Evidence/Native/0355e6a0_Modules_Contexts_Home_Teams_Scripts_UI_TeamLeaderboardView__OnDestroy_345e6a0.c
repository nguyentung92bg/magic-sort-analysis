/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardView$$OnDestroy
void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__OnDestroy (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardView$$OnDestroy
   void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__OnDestroy
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__OnDestroy_345e6a0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_0578b048;
                    /* try { // try from 0355e6a8 to 0365e6ab has its CatchHandler @ 0355e6ac */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355e6a8 with catch @ 0355e6ac
                       try { // try from 0355e6ac to 0365e6cf has its CatchHandler @ 0355e480 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355e680 with catch @ 0355e6b0
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355e684 with catch @ 0355e6b4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355e630 with catch @ 0355e6b8
                        */
  if ((bRam0000000005c3261d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
                    /* try { // try from 0355e6d0 to 0365e6e7 has its CatchHandler @ 0355e728 */
    FUN_012d0dc8(PTR_DAT_05817c20);
    bRam0000000005c3261d = 1;
  }
  lVar6 = *(long *)(param_1 + 0x68);
                    /* try { // try from 0355e6e8 to 0365e717 has its CatchHandler @ 0355e480 */
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar3 != 0) &&
     (System_Action___ctor_21239bc(lVar3,param_1,*(undefined8 *)PTR_DAT_05817c20,0), lVar6 != 0)) {
    if ((bRam0000000005c39420 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048,lVar3,0);
      bRam0000000005c39420 = 1;
    }
    puVar1 = PTR_DAT_0578b048;
    plVar7 = (long *)(lVar6 + 0x38);
    lVar6 = *plVar7;
    while ((plVar4 = (long *)System_Delegate__Remove_23e3b70(lVar6,lVar3,0), plVar4 == (long *)0x0
           || (*plVar4 == *(long *)puVar1))) {
      lVar5 = FUN_01351224(plVar7,plVar4,lVar6);
      bVar2 = lVar6 == lVar5;
      lVar6 = lVar5;
      if (bVar2) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar4);
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0355e6d0 with catch @ 0355e728
                       catch() { ... } // from try @ 0355e718 with catch @ 0355e728 */
  FUN_012d0ef0();
}

