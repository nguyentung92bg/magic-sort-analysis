/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$GetTeamData
Modules_Contexts_Home_Teams_Scripts_UI_LeaderboardTeam_o* Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__GetTeamData (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, System_String_o* teamId, int32_t* index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Teams.Scripts.UI.TeamLeaderboardViewAdapter$$GetTeamData
   Modules_Contexts_Home_Teams_Scripts_UI_LeaderboardTeam_o*
   Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__GetTeamData
   (Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter_o* __this, System_String_o*
   teamId, int32_t* index, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_Teams_Scripts_UI_TeamLeaderboardViewAdapter__GetTeamData_345ec40
          (long param_1,undefined8 param_2,uint *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((bRam0000000005c32625 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c6b8);
                    /* try { // try from 0355ec74 to 0365ec9b has its CatchHandler @ 0355ecfc */
    FUN_012d0dc8(PTR_DAT_057d1730);
    bRam0000000005c32625 = 1;
  }
  puVar1 = PTR_DAT_057d1730;
  lVar2 = *(long *)(param_1 + 0x28);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 0x18) != 0)) && (0 < *(int *)(lVar2 + 0x18))) {
    uVar4 = 0;
    do {
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar2,uVar4,*(undefined8 *)puVar1);
      if (lVar2 == 0) {
LAB_0355ed24:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
                    /* try { // try from 0355ecc4 to 0365ecc7 has its CatchHandler @ 0355ecf4 */
      uVar3 = System_String__op_Equality_1ec12e0(*(undefined8 *)(lVar2 + 0x10),param_2,0);
                    /* try { // try from 0355ecc8 to 0365ecdb has its CatchHandler @ 0355ecf8 */
      if ((uVar3 & 1) != 0) {
        *param_3 = uVar4;
        lVar2 = *(long *)(param_1 + 0x28);
        if (lVar2 != 0) {
                    /* try { // try from 0355ed14 to 0365ed2b has its CatchHandler @ 0355ed6c */
          if (*(uint *)(lVar2 + 0x18) <= uVar4) {
            System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                      (0,uVar4,*(undefined8 *)puVar1);
          }
          lVar2 = *(long *)(lVar2 + 0x10);
          if (lVar2 != 0) {
            if (uVar4 < *(uint *)(lVar2 + 0x18)) {
              return *(undefined8 *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        goto LAB_0355ed24;
      }
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) goto LAB_0355ed24;
      uVar4 = uVar4 + 1;
                    /* try { // try from 0355ecdc to 0365eceb has its CatchHandler @ 0355eac4 */
    } while ((int)uVar4 < *(int *)(lVar2 + 0x18));
  }
  *param_3 = 0xffffffff;
                    /* try { // try from 0355ecec to 0365ecef has its CatchHandler @ 0355ecf0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355ecec with catch @ 0355ecf0
                       try { // try from 0355ecf0 to 0365ed13 has its CatchHandler @ 0355eac4 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355ecc4 with catch @ 0355ecf4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355ecc8 with catch @ 0355ecf8
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0355ec74 with catch @ 0355ecfc
                        */
  return 0;
}

