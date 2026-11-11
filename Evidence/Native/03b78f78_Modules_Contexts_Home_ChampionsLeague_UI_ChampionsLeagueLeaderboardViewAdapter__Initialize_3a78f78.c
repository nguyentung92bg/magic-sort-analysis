/* IL2CPP: Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$Initialize
void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__Initialize (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.ChampionsLeague.UI.ChampionsLeagueLeaderboardViewAdapter$$Initialize
   void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__Initialize
   (Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardViewAdapter__Initialize_3a78f78
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000005c35abc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d08d8);
    FUN_012d0dc8(PTR_DAT_05781018);
    FUN_012d0dc8(PTR_DAT_057c2940);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05816f90);
    FUN_012d0dc8(PTR_DAT_057b2bb8);
    FUN_012d0dc8(PTR_DAT_0580bac0);
    FUN_012d0dc8(PTR_DAT_057eac28);
    FUN_012d0dc8(PTR_DAT_057fc2d8);
    FUN_012d0dc8(PTR_DAT_057a8280);
    FUN_012d0dc8(PTR_DAT_057ed188);
    FUN_012d0dc8(PTR_DAT_057f1f20);
    FUN_012d0dc8(PTR_DAT_057a69e0);
    FUN_012d0dc8(PTR_DAT_0578a3a8);
    bRam0000000005c35abc = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  plVar5 = *(long **)(param_4 + 0x20);
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x1d0));
    puVar4 = PTR_DAT_057fc2d8;
    puVar3 = PTR_DAT_057d08d8;
    puVar2 = PTR_DAT_0578a3a8;
    plVar8 = *(long **)(param_4 + 0x20);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1c8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x1d0));
      lVar11 = *(long *)(param_4 + 0x30);
      uVar12 = *(undefined8 *)puVar3;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar2);
      }
      uVar12 = System_Type__GetTypeFromHandle_2690398(uVar12,0);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if ((lVar6 != 0) && (System_Object___ctor_23dfe5c(lVar6,0), plVar5 != (long *)0x0)) {
        uVar13 = Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView__get_Size_3a76c10
                           (plVar5);
        *(undefined4 *)(lVar6 + 0x10) = uVar13;
        *(undefined4 *)(lVar6 + 0x14) = param_2;
        *(undefined4 *)(lVar6 + 0x18) = param_3;
        puVar3 = PTR_DAT_05816f90;
        puVar2 = PTR_DAT_05781018;
        if (lVar11 != 0) {
          System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                    (lVar11,uVar12,lVar6,*(undefined8 *)PTR_DAT_05816f90);
          lVar6 = *(long *)(param_4 + 0x30);
          uVar12 = System_Type__GetTypeFromHandle_2690398(*(undefined8 *)puVar2,0);
          lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
          if ((lVar11 != 0) && (System_Object___ctor_23dfe5c(lVar11,0), plVar8 != (long *)0x0)) {
            uVar13 = Modules_Contexts_Home_ChampionsLeague_UI_ChampionsLeagueLeaderboardElementView__get_Size_3a76c10
                               (plVar8);
            *(undefined4 *)(lVar11 + 0x10) = uVar13;
            *(undefined4 *)(lVar11 + 0x14) = param_2;
            *(undefined4 *)(lVar11 + 0x18) = param_3;
            puVar2 = PTR_DAT_057a69e0;
            if (lVar6 != 0) {
              System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                        (lVar6,uVar12,lVar11,*(undefined8 *)puVar3);
              (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
              (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
              puVar2 = PTR_DAT_0576aae0;
              if (lVar11 != 0) {
                System_Collections_Generic_List_object____ctor_21fc1fc
                          (lVar11,*(undefined8 *)PTR_DAT_057f1f20);
                plVar5 = (long *)(param_4 + 0x28);
                *plVar5 = lVar11;
                FUN_012d0d74(plVar5,lVar11);
                if ((((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
                     (lVar11 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar11 != 0))
                    && (lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                           (lVar11,*(undefined8 *)PTR_DAT_057c2940), lVar11 != 0))
                   && (lVar11 = Modules_Contexts_Home_ChampionsLeague_Services_ChampionsLeagueService__GetLeaderboardPlayers_3b2ceb4
                                          (lVar11,0), puVar4 = PTR_DAT_0580bac0,
                      puVar3 = PTR_DAT_057b2bb8, puVar2 = PTR_DAT_057a8280, lVar11 != 0)) {
                  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                            (&uStack_68,lVar11,*(undefined8 *)PTR_DAT_057ed188);
                  while( true ) {
                    uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                      (&uStack_68,*(undefined8 *)puVar4);
                    if ((uVar7 & 1) == 0) {
                      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                                (&uStack_68,*(undefined8 *)puVar3);
                      return;
                    }
                    lVar11 = *plVar5;
                    if (lVar11 == 0) break;
                    /* try { // try from 03b79268 to 03c7952b has its CatchHandler @ 03b79268
                       catch() { ... } // from try @ 03b79268 with catch @ 03b79268
                       catch() { ... } // from try @ 03b795f4 with catch @ 03b79268
                       catch() { ... } // from try @ 03b79694 with catch @ 03b79268
                       catch() { ... } // from try @ 03b7972c with catch @ 03b79268 */
                    lVar6 = *(long *)(lVar11 + 0x10);
                    lVar10 = *(long *)puVar2;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef0();
                    }
                    uVar1 = *(uint *)(lVar11 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                      puVar9 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar9 = uStack_58;
                      FUN_012d0d74(puVar9);
                    }
                    else {
                      (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) + 8)
                      )();
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

