/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Country.CountryLeaderboardController$$UpdateDegrees
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__UpdateDegrees (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.Country.CountryLeaderboardController$$UpdateDegrees
   void 
   Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__UpdateDegrees
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController_o*
   __this, const MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_Country_CountryLeaderboardController__UpdateDegrees_2af235c
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
                    /* try { // try from 02bf2368 to 02cf2373 has its CatchHandler @ 02bf23ac */
                    /* try { // try from 02bf2374 to 02cf23cf has its CatchHandler @ 02bf2284 */
  if ((bRam0000000005c2ebb7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05806ae8);
    FUN_012d0dc8(PTR_DAT_05809290);
    FUN_012d0dc8(PTR_DAT_057a4dd8);
    FUN_012d0dc8(PTR_DAT_0577ac60);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf2368 with catch @ 02bf23ac
                        */
    bRam0000000005c2ebb7 = 1;
  }
  puVar3 = PTR_DAT_057a4dd8;
  puVar2 = PTR_DAT_0577ac60;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf2344 with catch @ 02bf23b0
                        */
  lVar4 = *(long *)(param_1 + 0x60);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf2324 with catch @ 02bf23b4
                        */
  if (lVar4 != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bf22fc with catch @ 02bf23b8
                        */
    iVar6 = 0;
    while( true ) {
                    /* try { // try from 02bf23d0 to 02cf23d3 has its CatchHandler @ 02bf23e0 */
      if (*(int *)(lVar4 + 0x18) <= iVar6) {
        return;
      }
      if (*(long *)(param_1 + 0x48) == 0) break;
                    /* catch() { ... } // from try @ 02bf23d0 with catch @ 02bf23e0 */
      iVar1 = *(int *)(*(long *)(param_1 + 0x48) + 0x18);
                    /* try { // try from 02bf23ec to 02cf23f7 has its CatchHandler @ 02bf240c */
      lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (lVar4,iVar6,*(undefined8 *)puVar2);
                    /* try { // try from 02bf23f8 to 02cf2403 has its CatchHandler @ 02bf2284 */
      if ((lVar4 == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject_408b480(lVar4,0), lVar4 == 0)) break;
                    /* try { // try from 02bf2404 to 02cf240b has its CatchHandler @ 02bf240c */
      if (iVar6 < iVar1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bf23ec with catch @ 02bf240c
                       catch(type#2 @ 00000000) { ... } // from try @ 02bf2404 with catch @ 02bf240c
                        */
        UnityEngine_GameObject__SetActive_408e318(lVar4,1,0);
        if (*(long *)(param_1 + 0x60) == 0) break;
        lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x60),iVar6,*(undefined8 *)puVar2);
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (uVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (*(long *)(param_1 + 0x48),iVar6,*(undefined8 *)puVar3), lVar4 == 0))
        break;
        Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_PermanentLeaderboardDegreeElementView__SetModel_2aee7d0
                  (lVar4,uVar5);
      }
      else {
        UnityEngine_GameObject__SetActive_408e318(lVar4,0,0);
      }
      lVar4 = *(long *)(param_1 + 0x60);
      iVar6 = iVar6 + 1;
      if (lVar4 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

