/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementView$$AddSortingGroup
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView__AddSortingGroup (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView_o* __this, System_String_o* popup, int32_t i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardElementView$$AddSortingGroup
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView__AddSortingGroup
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView_o* __this,
   System_String_o* popup, int32_t i, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView__AddSortingGroup_3a76180
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_05793aa8;
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c35aa5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793aa8);
    FUN_012d0dc8(PTR_DAT_057ac2a0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c35aa5 = 1;
  }
  lVar3 = UnityEngine_Component__GetComponent_object__27205b8(param_1,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_407f288(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    lVar3 = UnityEngine_Component__get_gameObject_408b480(param_1,0);
    if (lVar3 == 0) goto LAB_03b76274;
    lVar3 = UnityEngine_GameObject__AddComponent_object__23906b8
                      (lVar3,*(undefined8 *)PTR_DAT_057ac2a0);
  }
  if (lVar3 != 0) {
    UnityEngine_Rendering_SortingGroup__set_sortingLayerName_3d5ee44(lVar3,param_2,0);
    if (pcRam0000000005c37840 == (code *)0x0) {
      pcRam0000000005c37840 = (code *)FUN_012d0d84(&UNK_043e4dbb);
    }
                    /* WARNING: Could not recover jumptable at 0x03e5ef40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c37840)(lVar3,param_3);
    return;
  }
LAB_03b76274:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

