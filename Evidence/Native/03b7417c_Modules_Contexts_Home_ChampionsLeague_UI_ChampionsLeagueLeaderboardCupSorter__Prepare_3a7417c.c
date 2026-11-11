/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardCupSorter$$Prepare
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter__Prepare (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter_o* __this, int32_t elo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardCupSorter$$Prepare
   void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter__Prepare
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter_o* __this, int32_t
   elo, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter__Prepare_3a7417c
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  lVar4 = param_1;
  if ((bRam0000000005c35a94 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577c688);
    FUN_012d0dc8(PTR_DAT_05759438);
    FUN_012d0dc8(PTR_DAT_05798fd0);
    FUN_012d0dc8(PTR_DAT_057c2298);
    lVar4 = FUN_012d0dc8(PTR_DAT_0576d090);
    bRam0000000005c35a94 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter__DistributePositions_3a74430
                      (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x20),lVar4,
                       *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),param_2);
    puVar3 = PTR_DAT_057c2298;
    puVar2 = PTR_DAT_05798fd0;
    puVar1 = PTR_DAT_0576d090;
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 != 0) {
      iVar7 = 0;
      while (uVar8 = _UNK_04321764, iVar7 < *(int *)(lVar6 + 0x18)) {
        lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar6,iVar7,*(undefined8 *)puVar2);
        if (lVar6 == 0) goto LAB_03b74408;
        Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView__SetActive_3a745d4
                  (lVar6,param_2);
        if (((*(long *)(param_1 + 0x18) == 0) ||
            (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                               (*(long *)(param_1 + 0x18),iVar7,*(undefined8 *)puVar2), lVar4 == 0))
           || (System_Collections_Generic_List_float___get_Item_1d70b20
                         (lVar4,iVar7,*(undefined8 *)puVar1), lVar6 == 0)) goto LAB_03b74408;
        Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView__SetXPosition_3a74648
                  (lVar6);
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_03b74408;
        lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x18),iVar7,*(undefined8 *)puVar2);
        uVar8 = 0x3f800000;
        if (param_2 == iVar7) {
          uVar8 = *(undefined4 *)(param_1 + 0x20);
        }
        if (lVar6 == 0) goto LAB_03b74408;
        Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupView__SetScale_3a746a8
                  (uVar8);
        lVar6 = *(long *)(param_1 + 0x18);
        iVar7 = iVar7 + 1;
        if (lVar6 == 0) goto LAB_03b74408;
      }
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 != 0) {
        iVar7 = 0;
        goto LAB_03b742f0;
      }
    }
  }
LAB_03b74408:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
LAB_03b742f0:
  if (*(int *)(lVar6 + 0x18) <= iVar7) {
    return;
  }
  lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                    (lVar6,iVar7,*(undefined8 *)puVar3);
  if (lVar6 == 0) goto LAB_03b74408;
  uVar12 = 0x3f800000;
  if (param_2 <= iVar7) {
    uVar12 = uVar8;
  }
  uVar11 = 0x3f800000;
  UnityEngine_SpriteRenderer__set_color_4095de0(0x3f800000,0x3f800000,0x3f800000,uVar12,lVar6,0);
  if (lVar4 == 0) goto LAB_03b74408;
  fVar9 = (float)System_Collections_Generic_List_float___get_Item_1d70b20
                           (lVar4,iVar7,*(undefined8 *)puVar1);
  fVar10 = (float)System_Collections_Generic_List_float___get_Item_1d70b20
                            (lVar4,iVar7 + 1,*(undefined8 *)puVar1);
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0x28),iVar7,*(undefined8 *)puVar3), lVar6 == 0))
  goto LAB_03b74408;
  lVar6 = UnityEngine_Component__get_transform_408b444(lVar6,0);
  if ((*(long *)(param_1 + 0x28) == 0) ||
     ((lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                         (*(long *)(param_1 + 0x28),iVar7,*(undefined8 *)puVar3), lVar5 == 0 ||
      (lVar5 = UnityEngine_Component__get_transform_408b444(lVar5,0), lVar5 == 0))))
  goto LAB_03b74408;
  UnityEngine_Transform__get_localPosition_4092c40(lVar5,0);
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (((lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x28),iVar7,*(undefined8 *)puVar3), lVar5 == 0 ||
       (lVar5 = UnityEngine_Component__get_transform_408b444(lVar5,0), lVar5 == 0)) ||
      (UnityEngine_Transform__get_localPosition_4092c40(lVar5,0), lVar6 == 0)))) goto LAB_03b74408;
  UnityEngine_Transform__set_localPosition_4092ce0((fVar9 + fVar10) * 0.5,uVar11,lVar6,0);
  lVar6 = *(long *)(param_1 + 0x28);
  iVar7 = iVar7 + 1;
  if (lVar6 == 0) goto LAB_03b74408;
  goto LAB_03b742f0;
}

