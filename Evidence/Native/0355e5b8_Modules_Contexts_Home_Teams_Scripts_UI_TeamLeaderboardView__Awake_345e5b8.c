/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardView$$Awake
void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__Awake (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardView$$Awake
   void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__Awake
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardView__Awake_345e5b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c3261c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057c94c0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05817c20);
    bRam0000000005c3261c = 1;
  }
  puVar2 = PTR_DAT_0578b048;
  lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
                    /* try { // try from 0355e630 to 0365e657 has its CatchHandler @ 0355e6b8 */
    uVar4 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar7,*(undefined8 *)PTR_DAT_057c94c0);
    *(undefined8 *)(param_1 + 0x70) = uVar4;
    FUN_012d0d74((undefined8 *)(param_1 + 0x70),uVar4);
    lVar8 = *(long *)(param_1 + 0x68);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 0355e680 to 0365e683 has its CatchHandler @ 0355e6b0 */
    if ((lVar7 != 0) &&
       (System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_05817c20,0), lVar8 != 0))
    {
      if ((bRam0000000005c3941f & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578b048,lVar7,0);
        bRam0000000005c3941f = 1;
      }
      puVar1 = PTR_DAT_0578b048;
      plVar9 = (long *)(lVar8 + 0x38);
      lVar8 = *plVar9;
      while ((plVar5 = (long *)System_Delegate__Combine_23e3964(lVar8,lVar7,0),
             plVar5 == (long *)0x0 || (*plVar5 == *(long *)puVar1))) {
        lVar6 = FUN_01351224(plVar9,plVar5,lVar8);
        bVar3 = lVar8 == lVar6;
        lVar8 = lVar6;
        if (bVar3) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(plVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

