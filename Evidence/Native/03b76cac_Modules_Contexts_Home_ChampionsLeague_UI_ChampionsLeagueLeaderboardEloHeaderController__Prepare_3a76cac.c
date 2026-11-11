/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardEloHeaderController$$Prepare
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardEloHeaderController__Prepare (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardEloHeaderController_o* __this, int32_t elo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03b76ea8) */
/* WARNING: Removing unreachable block (ram,0x03b76fac) */
/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardEloHeaderController$$Prepare
   void 
   Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardEloHeaderController__Prepare
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardEloHeaderController_o*
   __this, int32_t elo, const MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardEloHeaderController__Prepare_3a76cac
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000005c35aa7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ae688);
    FUN_012d0dc8(PTR_DAT_0579d330);
    FUN_012d0dc8(PTR_DAT_0579b440);
    FUN_012d0dc8(PTR_DAT_0575a3c0);
    FUN_012d0dc8(PTR_DAT_057b4158);
    FUN_012d0dc8(PTR_DAT_057e60f0);
    FUN_012d0dc8(PTR_DAT_057651f0);
    FUN_012d0dc8(PTR_DAT_05802f18);
    bRam0000000005c35aa7 = 1;
  }
  puVar5 = PTR_DAT_057ae688;
  puVar4 = PTR_DAT_0579d330;
  puVar3 = PTR_DAT_0579b440;
  puVar2 = PTR_DAT_057651f0;
  puVar1 = PTR_DAT_0575a3c0;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_a8,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_05802f18);
  uStack_68 = uStack_a0;
  uStack_70 = uStack_a8;
  lStack_60 = lStack_98;
  do {
    while( true ) {
      uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_70,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_70,*(undefined8 *)puVar4);
        return;
      }
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(int *)(lStack_60 + 0x10) != param_2) break;
      if (*(long *)(lStack_60 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_a8,*(long *)(lStack_60 + 0x18),*(undefined8 *)puVar2);
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      lStack_80 = lStack_98;
      while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_90,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar7 = UnityEngine_Component__get_gameObject_408b480(lStack_80,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        UnityEngine_GameObject__SetActive_408e318(lVar7,1,0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_90,*(undefined8 *)puVar5);
    }
    if (*(long *)(lStack_60 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_a8,*(long *)(lStack_60 + 0x18),*(undefined8 *)puVar2);
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    lStack_80 = lStack_98;
    while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_90,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar7 = UnityEngine_Component__get_gameObject_408b480(lStack_80,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lVar7,0,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_90,*(undefined8 *)puVar5);
  } while( true );
}

