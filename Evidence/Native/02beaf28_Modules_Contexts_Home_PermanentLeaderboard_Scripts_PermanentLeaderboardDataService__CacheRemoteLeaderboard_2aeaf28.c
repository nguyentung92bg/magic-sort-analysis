/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$CacheRemoteLeaderboard
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__CacheRemoteLeaderboard (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this, System_Collections_Generic_List_PermanentLeaderboardPlayerResponse__o* remoteLeaderboardPlayers, System_Collections_Generic_List_LeaderboardPlayer__o* cachedLeaderboardPlayers, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.PermanentLeaderboardDataService$$CacheRemoteLeaderboard
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__CacheRemoteLeaderboard
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService_o* __this,
   System_Collections_Generic_List_PermanentLeaderboardPlayerResponse__o* remoteLeaderboardPlayers,
   System_Collections_Generic_List_LeaderboardPlayer__o* cachedLeaderboardPlayers, const MethodInfo*
   method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_PermanentLeaderboardDataService__CacheRemoteLeaderboard_2aeaf28
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000005c2eb75 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d6018);
    FUN_012d0dc8(PTR_DAT_05774920);
    FUN_012d0dc8(PTR_DAT_05768f70);
    FUN_012d0dc8(PTR_DAT_057f3360);
    FUN_012d0dc8(PTR_DAT_05785848);
    FUN_012d0dc8(PTR_DAT_057ade58);
    FUN_012d0dc8(PTR_DAT_0577d548);
    FUN_012d0dc8(PTR_DAT_05815968);
    FUN_012d0dc8(PTR_DAT_0576d358);
    FUN_012d0dc8(PTR_DAT_05816648);
    FUN_012d0dc8(PTR_DAT_05795930);
    FUN_012d0dc8(PTR_DAT_057fac58);
    bRam0000000005c2eb75 = 1;
  }
  puVar10 = PTR_DAT_05816648;
  puVar9 = PTR_DAT_057fac58;
  puVar8 = PTR_DAT_057f3360;
  puVar7 = PTR_DAT_057d6018;
  puVar6 = PTR_DAT_05795930;
  puVar5 = PTR_DAT_0577d548;
  puVar4 = PTR_DAT_05774920;
  puVar3 = PTR_DAT_05768f70;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  if (param_3 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_b8,param_3,*(undefined8 *)PTR_DAT_0576d358);
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    lStack_70 = lStack_a8;
    while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                              (&uStack_80,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Return_30eaa28
                (*(long *)(param_1 + 0x28),lStack_70,*(undefined8 *)puVar9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)puVar4);
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 02beb0d4 with catch @ 02beb0b4
                       catch() { ... } // from try @ 02beb104 with catch @ 02beb0b4
                       catch() { ... } // from try @ 02beb140 with catch @ 02beb0b4 */
    if (0 < iVar1) {
      System_Array__Clear_26a6bec(*(undefined8 *)(param_3 + 0x10),0,iVar1,0);
    }
    if (param_2 != 0) {
                    /* try { // try from 02beb0cc to 02ceb0d3 has its CatchHandler @ 02beb0e8 */
                    /* try { // try from 02beb0d4 to 02ceb0ff has its CatchHandler @ 02beb0b4 */
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_b8,param_2,*(undefined8 *)puVar10);
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02beb0cc with catch @ 02beb0e8
                        */
      lStack_90 = lStack_a8;
      while( true ) {
        uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_a0,*(undefined8 *)puVar8);
        lVar14 = lStack_90;
        if ((uVar11 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_a0,*(undefined8 *)puVar7);
                    /* try { // try from 02beb234 to 02ceb243 has its CatchHandler @ 02beb2d4 */
          return;
        }
                    /* try { // try from 02beb100 to 02ceb103 has its CatchHandler @ 02beb130 */
        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
                    /* try { // try from 02beb104 to 02ceb133 has its CatchHandler @ 02beb0b4 */
        lVar12 = Modules_Infrastructure_Common_Scripts_Pool_ObjectPool_object___Get_30ea998
                           (*(long *)(param_1 + 0x28),*(undefined8 *)puVar6);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (lVar12 == 0) break;
        *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
        FUN_012d0d74();
                    /* catch() { ... } // from try @ 02beb100 with catch @ 02beb130 */
                    /* try { // try from 02beb134 to 02ceb13f has its CatchHandler @ 02beb154 */
        *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar14 + 0x18);
        FUN_012d0d74();
                    /* try { // try from 02beb140 to 02ceb14b has its CatchHandler @ 02beb0b4 */
        *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar14 + 0x20);
                    /* try { // try from 02beb14c to 02ceb153 has its CatchHandler @ 02beb154 */
        *(undefined1 *)(lVar12 + 0x28) = *(undefined1 *)(lVar14 + 0x28);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02beb134 with catch @ 02beb154
                       catch(type#2 @ 00000000) { ... } // from try @ 02beb14c with catch @ 02beb154
                        */
        *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(lVar14 + 0x30);
                    /* try { // try from 02beb158 to 02ceb1db has its CatchHandler @ 02beb158
                       catch() { ... } // from try @ 02beb158 with catch @ 02beb158
                       catch() { ... } // from try @ 02beb29c with catch @ 02beb158
                       catch() { ... } // from try @ 02beb324 with catch @ 02beb158 */
        FUN_012d0d74();
        *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar14 + 0x38);
        FUN_012d0d74();
        *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(lVar14 + 0x40);
        FUN_012d0d74();
        *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(lVar14 + 0x48);
        FUN_012d0d74();
        *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)(lVar14 + 0x50);
        FUN_012d0d74();
        *(undefined8 *)(lVar12 + 0x58) = *(undefined8 *)(lVar14 + 0x58);
        FUN_012d0d74();
        lVar14 = *(long *)(param_3 + 0x10);
        lVar15 = *(long *)puVar5;
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar2 = *(uint *)(param_3 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                    /* try { // try from 02beb1dc to 02ceb1eb has its CatchHandler @ 02beb2e0 */
          *(uint *)(param_3 + 0x18) = uVar2 + 1;
          plVar13 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
          *plVar13 = lVar12;
          FUN_012d0d74(plVar13,lVar12);
        }
        else {
                    /* try { // try from 02beb204 to 02ceb20b has its CatchHandler @ 02beb2dc */
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                    (param_3,lVar12);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

