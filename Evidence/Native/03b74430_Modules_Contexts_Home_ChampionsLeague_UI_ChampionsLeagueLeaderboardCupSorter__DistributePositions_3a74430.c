/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardCupSorter$$DistributePositions
System_Collections_Generic_List_float__o* Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter__DistributePositions (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter_o* __this, float baseStep, int32_t itemCount, int32_t index, float multiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardCupSorter$$DistributePositions
   System_Collections_Generic_List_float__o*
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter__DistributePositions
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter_o* __this, float
   baseStep, int32_t itemCount, int32_t index, float multiplier, const MethodInfo* method); */

long Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardCupSorter__DistributePositions_3a74430
               (float param_1,float param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar3 = PTR_DAT_0580f750;
  if ((bRam0000000005c35a95 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ed5c0);
    FUN_012d0dc8(PTR_DAT_05789908);
    FUN_012d0dc8(PTR_DAT_0580f750);
    bRam0000000005c35a95 = 1;
  }
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if (lVar5 != 0) {
    System_Collections_Generic_List_float____ctor_1d705b0(lVar5,*(undefined8 *)PTR_DAT_05789908);
    puVar3 = PTR_DAT_057ed5c0;
    if (0 < param_4) {
      fVar9 = (param_2 + -1.0) * param_1 * 0.5;
      fVar12 = fVar9 + param_1;
      fVar9 = param_1 - fVar9;
      fVar10 = fVar12 - param_1;
      iVar8 = 0;
      fVar11 = -param_1 - fVar10;
      if (param_5 == 0) {
        fVar11 = fVar10 - param_1;
      }
      do {
        iVar1 = param_5 + iVar8;
        if (param_5 == 0) {
          fVar10 = fVar9;
          if ((iVar1 != 1) && (iVar8 != 0)) {
            bVar4 = iVar1 == -1;
            goto LAB_03b74544;
          }
        }
        else {
          if (param_4 + -1 == param_5) {
            bVar4 = iVar1 == 0;
          }
          else {
            bVar4 = true;
            if (iVar1 != -1) {
              bVar4 = iVar1 == 0;
            }
          }
LAB_03b74544:
          fVar10 = fVar12;
          if (!bVar4) {
            fVar10 = param_1;
          }
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar7 = *(long *)puVar3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_03b745d0;
        uVar2 = *(uint *)(lVar5 + 0x18);
        fVar11 = fVar11 + fVar10;
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar2 + 1;
          *(float *)(lVar6 + (long)(int)uVar2 * 4 + 0x20) = fVar11;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))
                    (fVar11,lVar5);
        }
        iVar8 = iVar8 + -1;
      } while (-param_4 != iVar8);
    }
    return lVar5;
  }
LAB_03b745d0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

