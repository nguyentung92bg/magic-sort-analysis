/* IL2CPP: Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardPlayerElementView$$SetViewModel
void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardPlayerElementView__SetViewModel (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardPlayerElementView_o* __this, Modules_Contexts_Home_StrikeShow_Scripts_UI_IStrikeShowLeaderboardRowViewModel_o* viewModel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.StrikeShow.Scripts.UI.StrikeShowLeaderboardPlayerElementView$$SetViewModel
   void 
   Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardPlayerElementView__SetViewModel
   (Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardPlayerElementView_o* __this,
   Modules_Contexts_Home_StrikeShow_Scripts_UI_IStrikeShowLeaderboardRowViewModel_o* viewModel,
   const MethodInfo* method); */

void Modules_Contexts_Home_StrikeShow_Scripts_UI_StrikeShowLeaderboardPlayerElementView__SetViewModel_2afc0a0
               (long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  
  if ((bRam0000000005c2ec0a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0579bac0);
    FUN_012d0dc8(PTR_DAT_0579c548);
    FUN_012d0dc8(PTR_DAT_05789798);
    bRam0000000005c2ec0a = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_05789798 + 300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_05789798))
    {
                    /* try { // try from 02bfc130 to 02cfc193 has its CatchHandler @ 02bfc130
                       catch() { ... } // from try @ 02bfc130 with catch @ 02bfc130
                       catch() { ... } // from try @ 02bfc19c with catch @ 02bfc130
                       catch() { ... } // from try @ 02bfc224 with catch @ 02bfc130
                       catch() { ... } // from try @ 02bfc26c with catch @ 02bfc130
                       catch() { ... } // from try @ 02bfc28c with catch @ 02bfc130 */
      if ((param_2 != (long *)0x0) && (*(long *)(param_1 + 0x38) != 0)) {
        Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__Initialize_2981064
                  (*(long *)(param_1 + 0x38),(char)param_2[10],param_2[2],
                   *(undefined1 *)((long)param_2 + 0x51),0);
        if (*(long *)(param_1 + 0x38) != 0) {
          Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetUserName_2981644
                    (*(long *)(param_1 + 0x38),param_2[3],0);
          if (*(long *)(param_1 + 0x38) != 0) {
            Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTeamName_2981904
                      (*(long *)(param_1 + 0x38),param_2[4],0);
            if (*(long *)(param_1 + 0x38) != 0) {
              Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetProfileImage_298160c
                        (*(long *)(param_1 + 0x38),param_2[5],0);
              if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 02bfc194 to 02cfc197 has its CatchHandler @ 02bfc1b4 */
                    /* try { // try from 02bfc198 to 02cfc19b has its CatchHandler @ 02bfc1b8 */
                    /* try { // try from 02bfc19c to 02cfc1d3 has its CatchHandler @ 02bfc130 */
                Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetTokenImage_2981720
                          (*(long *)(param_1 + 0x38),param_2[6],0);
                if (*(long *)(param_1 + 0x38) != 0) {
                  Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetFrameView_2981abc
                            (*(long *)(param_1 + 0x38),param_2[7],0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc194 with catch @ 02bfc1b4
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc198 with catch @ 02bfc1b8
                        */
                  if (*(long *)(param_1 + 0x38) != 0) {
                    Modules_Contexts_Home_UI_Common_Scripts_UserProfileView__SetNameStyleView_2981bec
                              (*(long *)(param_1 + 0x38),param_2[8],param_2[3],0);
                    if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 02bfc1d4 to 02cfc1eb has its CatchHandler @ 02bfc260 */
                      UnityEngine_GameObject__SetActive_408e318
                                (*(long *)(param_1 + 0x50),(char)param_2[10],0);
                      if (*(long *)(param_1 + 0x58) != 0) {
                    /* try { // try from 02bfc1f4 to 02cfc1f7 has its CatchHandler @ 02bfc254 */
                        UnityEngine_GameObject__SetActive_408e318
                                  (*(long *)(param_1 + 0x58),(char)param_2[10] == '\0',0);
                        lVar5 = *(long *)(param_1 + 0x40);
                    /* try { // try from 02bfc208 to 02cfc21f has its CatchHandler @ 02bfc248 */
                        uVar3 = System_Int32__ToString_26c9768((long)param_2 + 0x4c,0);
                        if (lVar5 != 0) {
                    /* try { // try from 02bfc220 to 02cfc223 has its CatchHandler @ 02bfc244 */
                          TMPro_TMP_Text__SetText_3dc1ab4(lVar5,uVar3,1,0);
                    /* try { // try from 02bfc224 to 02cfc233 has its CatchHandler @ 02bfc130 */
                          lVar5 = *(long *)(param_1 + 0x48);
                          uVar3 = System_Int32__ToString_26c9768(param_2 + 9,0);
                    /* try { // try from 02bfc234 to 02cfc243 has its CatchHandler @ 02bfc260 */
                          if (lVar5 != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc220 with catch @ 02bfc244
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc208 with catch @ 02bfc248
                        */
                            TMPro_TMP_Text__SetText_3dc1ab4(lVar5,uVar3,1,0);
                            if (param_2[0xb] == 0) {
                              bVar4 = false;
                            }
                            else {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc1f4 with catch @ 02bfc254
                        */
                              bVar4 = 0 < *(int *)(param_2[0xb] + 0x18);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc1d4 with catch @ 02bfc260
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02bfc234 with catch @ 02bfc260
                        */
                            }
                    /* try { // try from 02bfc268 to 02cfc26b has its CatchHandler @ 02bfc2cc */
                    /* try { // try from 02bfc26c to 02cfc287 has its CatchHandler @ 02bfc130 */
                            if (*(long *)(param_1 + 0x68) != 0) {
                              UnityEngine_GameObject__SetActive_408e318
                                        (*(long *)(param_1 + 0x68),bVar4,0);
                              if (bVar4 != false) {
                                if (param_2[0xb] == 0) goto LAB_02bfc310;
                    /* try { // try from 02bfc288 to 02cfc28b has its CatchHandler @ 02bfc2b4 */
                    /* try { // try from 02bfc28c to 02cfc2c3 has its CatchHandler @ 02bfc130 */
                                lVar5 = *(long *)(param_1 + 0x60);
                                uVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                                                  (param_2[0xb],0,*(undefined8 *)PTR_DAT_0579c548);
                                if (lVar5 == 0) goto LAB_02bfc310;
                                Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_UI_WatchAndWinDynamicRewardView__SetReward_32fc0a0
                                          (lVar5,uVar3,0);
                              }
                    /* catch() { ... } // from try @ 02bfc288 with catch @ 02bfc2b4 */
                              if (*(long *)(param_1 + 0x70) != 0) {
                    /* try { // try from 02bfc2c4 to 02cfc2cb has its CatchHandler @ 02bfc2cc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bfc268 with catch @ 02bfc2cc
                       catch(type#2 @ 00000000) { ... } // from try @ 02bfc2c4 with catch @ 02bfc2cc
                        */
                                UnityEngine_GameObject__SetActive_408e318
                                          (*(long *)(param_1 + 0x70),(int)param_2[0xc] == 0,0);
                                if (*(long *)(param_1 + 0x78) != 0) {
                                  UnityEngine_GameObject__SetActive_408e318
                                            (*(long *)(param_1 + 0x78),(int)param_2[0xc] == 1,0);
                                  lVar5 = *(long *)(param_1 + 0x80);
                                  if (lVar5 != 0) {
                                    lVar2 = param_2[0xc];
                                    if (pcRam0000000005c3a388 == (code *)0x0) {
                                      pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
                                    }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                    (*pcRam0000000005c3a388)(lVar5,(int)lVar2 == 2);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_02bfc310:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
  return;
}

