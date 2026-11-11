/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardElementView$$ApplyCompetitorSprites
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__ApplyCompetitorSprites (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.PermanentLeaderboardElementView$$ApplyCompetitorSprites
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__ApplyCompetitorSprites
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardElementView__ApplyCompetitorSprites_2aeec98
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
                    /* try { // try from 02beeca8 to 02ceecaf has its CatchHandler @ 02beed0c */
                    /* try { // try from 02beecb0 to 02ceecfb has its CatchHandler @ 02beea50 */
  if ((bRam0000000005c2eb97 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5ca0);
    FUN_012d0dc8(PTR_DAT_05778ae0);
    FUN_012d0dc8(PTR_DAT_057c0828);
    FUN_012d0dc8(PTR_DAT_057a6c70);
    bRam0000000005c2eb97 = 1;
  }
  puVar3 = PTR_DAT_057a6c70;
  puVar2 = PTR_DAT_057a5ca0;
  puVar1 = PTR_DAT_05778ae0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
                    /* try { // try from 02beecfc to 02ceecff has its CatchHandler @ 02beed08 */
                    /* try { // try from 02beed00 to 02ceed27 has its CatchHandler @ 02beea50 */
  if (*(long *)(param_1 + 0x68) != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02beecfc with catch @ 02beed08
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02beeca8 with catch @ 02beed0c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02beec14 with catch @ 02beed10
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02beeb68 with catch @ 02beed14
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02beebc4 with catch @ 02beed18
                        */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_78,*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_057a6c70);
                    /* try { // try from 02beed28 to 02ceed2b has its CatchHandler @ 02beedb8 */
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
                    /* try { // try from 02beed3c to 02ceeda3 has its CatchHandler @ 02beedc0 */
    while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_60,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar5 = UnityEngine_GameObject__get_gameObject_408e764(lStack_50,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_60,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x70) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_78,*(long *)(param_1 + 0x70),*(undefined8 *)puVar3);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
      while( true ) {
                    /* try { // try from 02beeda4 to 02ceedaf has its CatchHandler @ 02beea50 */
        uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_60,*(undefined8 *)puVar1);
        if ((uVar4 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_60,*(undefined8 *)puVar2);
          return;
        }
                    /* try { // try from 02beedb0 to 02ceedb7 has its CatchHandler @ 02beedc0 */
        if (lStack_50 == 0) break;
                    /* catch() { ... } // from try @ 02beed28 with catch @ 02beedb8 */
        lVar5 = UnityEngine_GameObject__get_gameObject_408e764(lStack_50,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02beed3c with catch @ 02beedc0
                       catch(type#2 @ 00000000) { ... } // from try @ 02beedb0 with catch @ 02beedc0
                        */
        UnityEngine_GameObject__SetActive_408e318(lVar5,1,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

