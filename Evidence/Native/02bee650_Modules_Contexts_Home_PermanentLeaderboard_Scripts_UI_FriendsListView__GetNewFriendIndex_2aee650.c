/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsListView$$GetNewFriendIndex
int32_t Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__GetNewFriendIndex (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView_o* __this, Modules_Contexts_Home_Friends_Scripts_FriendElementViewModel_o* friendVm, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsListView$$GetNewFriendIndex
   int32_t Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__GetNewFriendIndex
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView_o* __this,
   Modules_Contexts_Home_Friends_Scripts_FriendElementViewModel_o* friendVm, const MethodInfo*
   method); */

uint Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__GetNewFriendIndex_2aee650
               (long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  
  if ((bRam0000000005c2eb95 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dbb88);
    FUN_012d0dc8(PTR_DAT_05815ab8);
    bRam0000000005c2eb95 = 1;
  }
  puVar3 = PTR_DAT_05815ab8;
  puVar2 = PTR_DAT_057dbb88;
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[5];
    uVar6 = 0;
    while (iVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400)),
          (int)uVar6 < iVar4) {
      if (lVar7 == 0) goto LAB_02bee774;
      plVar5 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar7,uVar6,*(undefined8 *)puVar3);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 300);
        if ((bVar1 <= *(byte *)(*plVar5 + 300)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          if ((plVar5[2] == 0) || ((param_2 == 0 || (*(long *)(param_2 + 0x10) == 0))))
          goto LAB_02bee774;
          if (*(int *)(plVar5[2] + 0x38) < *(int *)(*(long *)(param_2 + 0x10) + 0x38)) {
            return uVar6;
          }
        }
      }
      plVar5 = *(long **)(param_1 + 0x28);
      uVar6 = uVar6 + 1;
      if (plVar5 == (long *)0x0) goto LAB_02bee774;
    }
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 02bee76c with catch @ 02bee74c
                       catch() { ... } // from try @ 02bee79c with catch @ 02bee74c
                       catch() { ... } // from try @ 02bee7d8 with catch @ 02bee74c */
      iVar4 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
                    /* try { // try from 02bee764 to 02cee76b has its CatchHandler @ 02bee780 */
                    /* try { // try from 02bee76c to 02cee797 has its CatchHandler @ 02bee74c */
      return iVar4 - 1U & ((int)(iVar4 - 1U) >> 0x1f ^ 0xffffffffU);
    }
  }
LAB_02bee774:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

