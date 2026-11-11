/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$GetElementSizeByIndex
UnityEngine_Vector3_o Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetElementSizeByIndex (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$GetElementSizeByIndex
   UnityEngine_Vector3_o
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetElementSizeByIndex
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this,
   int32_t index, const MethodInfo* method); */

undefined4
Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetElementSizeByIndex_3a793dc
          (long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000005c35abd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ce1d8);
    FUN_012d0dc8(PTR_DAT_057a6d70);
    bRam0000000005c35abd = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    lVar1 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_057a6d70);
    if (((lVar1 != 0) && (uVar2 = System_Object__GetType_23e0654(lVar1,0), lVar3 != 0)) &&
       (lVar1 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                          (lVar3,uVar2,*(undefined8 *)PTR_DAT_057ce1d8), lVar1 != 0)) {
      return *(undefined4 *)(lVar1 + 0x10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

