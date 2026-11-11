/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$SetUserToIndex
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__SetUserToIndex (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, int32_t newRankIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$SetUserToIndex
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__SetUserToIndex
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this,
   int32_t newRankIndex, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__SetUserToIndex_3a74938
               (long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar8;
  undefined8 unaff_x22;
  
  if ((bRam0000000005c35ac2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057de7d0);
    FUN_012d0dc8(PTR_DAT_057d9228);
    FUN_012d0dc8(PTR_DAT_05765300);
    FUN_012d0dc8(PTR_DAT_057a6d70);
    bRam0000000005c35ac2 = 1;
  }
  iVar1 = Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__GetUserIndex_3a797bc
                    (param_1);
  if (iVar1 == -1) {
    return;
  }
  if (-1 < (int)param_2) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) <= (int)param_2) goto LAB_03b74a34;
      uVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar3,iVar1,*(undefined8 *)PTR_DAT_057a6d70);
      if (*(long *)(param_1 + 0x28) != 0) {
        System_Collections_Generic_List_object___RemoveAt_21fe320
                  (*(long *)(param_1 + 0x28),iVar1,*(undefined8 *)PTR_DAT_057d9228);
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != 0) {
          lVar7 = *(long *)PTR_DAT_057de7d0;
          uVar8 = *(uint *)(lVar3 + 0x18);
          if (uVar8 < param_2) {
            System_ThrowHelper__ThrowArgumentOutOfRangeException_26a4f04(0xd,0x1b,0);
            uVar8 = *(uint *)(lVar3 + 0x18);
          }
          if (*(long *)(lVar3 + 0x10) != 0) {
            if (uVar8 == *(uint *)(*(long *)(lVar3 + 0x10) + 0x18)) {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x60) + 8))
                        (lVar3,uVar8 + 1);
              uVar8 = *(uint *)(lVar3 + 0x18);
            }
            if (uVar8 - param_2 != 0 && (int)param_2 <= (int)uVar8) {
              System_Array__Copy_26a6ec0
                        (*(undefined8 *)(lVar3 + 0x10),param_2,*(undefined8 *)(lVar3 + 0x10),
                         param_2 + 1,uVar8 - param_2,0,in_x6,in_x7,unaff_x22);
            }
            lVar7 = *(long *)(lVar3 + 0x10);
            if (lVar7 != 0) {
              if (param_2 < *(uint *)(lVar7 + 0x18)) {
                puVar2 = (undefined8 *)(lVar7 + (long)(int)param_2 * 8 + 0x20);
                *puVar2 = uVar4;
                FUN_012d0d74(puVar2,uVar4);
                *(ulong *)(lVar3 + 0x18) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20) + 1,
                              (int)*(undefined8 *)(lVar3 + 0x18) + 1);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef8();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_03b74a34:
  thunk_FUN_0136d790(PTR_DAT_057b2d58);
  uVar4 = thunk_FUN_01320e48();
  FUN_0103b554();
  uVar5 = thunk_FUN_0136d790(PTR_DAT_057a3f58);
  uVar6 = thunk_FUN_0136d790(PTR_DAT_057c0788);
  System_ArgumentOutOfRangeException___ctor_2120df0(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_0136d790(PTR_DAT_057ca498);
                    /* WARNING: Subroutine does not return */
  FUN_012d0eb8(uVar4,uVar5);
}

