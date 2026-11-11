/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$GetView
Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o* Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetView (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$GetView
   Modules_Infrastructure_Common_Scripts_Generation_Basic_BasicView_o*
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetView
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this,
   int32_t index, const MethodInfo* method); */

long Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetView_3a7947c
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c35abe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d08d8);
    FUN_012d0dc8(PTR_DAT_057a6d70);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c35abe = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar7 = *(long **)(param_1 + 0x20);
    lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_057a6d70);
    puVar2 = PTR_DAT_057d08d8;
    puVar1 = PTR_DAT_0578a3a8;
    if (lVar4 != 0) {
      uVar5 = System_Object__GetType_23e0654(lVar4,0);
      uVar8 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      uVar8 = System_Type__GetTypeFromHandle_2690398(uVar8,0);
                    /* try { // try from 03b7952c to 03c79553 has its CatchHandler @ 03b796a8 */
      uVar3 = System_Type__op_Equality_269aba0(uVar5,uVar8,0);
      if (((plVar7 != (long *)0x0) &&
          (lVar4 = (**(code **)(*plVar7 + 0x1c8))
                             (plVar7,~uVar3 & 1,*(undefined8 *)(*plVar7 + 0x1d0)), lVar4 != 0)) &&
         (lVar6 = UnityEngine_Component__get_gameObject_408b480(lVar4,0), lVar6 != 0)) {
                    /* try { // try from 03b7956c to 03c795cf has its CatchHandler @ 03b796ac */
        UnityEngine_GameObject__SetActive_408e318(lVar6,1,0);
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

