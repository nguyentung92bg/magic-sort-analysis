/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFriendInvitePopupImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendFriendInvitePopupImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFriendInvitePopupImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendFriendInvitePopupImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendFriendInvitePopupImpression_148e0bc
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uStack_34;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23866 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057ee3f0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05803070);
    FUN_012d0dc8(PTR_DAT_05796e78);
                    /* try { // try from 0158e13c to 0168e153 has its CatchHandler @ 0158e774 */
    bRam0000000005c23866 = 1;
  }
  puVar2 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057ee3f0);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                    /* try { // try from 0158e194 to 0168e1d3 has its CatchHandler @ 0158e5e8 */
    if ((lVar6 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar6,*(undefined8 *)PTR_DAT_05803070,0), puVar3 = PTR_DAT_057db748,
       puVar2 = PTR_DAT_05796e78, puVar1 = PTR_DAT_0575f9f0, lVar5 != 0)) {
      iVar4 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendsCount_1c7a8ec(lVar5,0)
      ;
      uStack_34 = iVar4 - 1U & ((int)(iVar4 - 1U) >> 0x1f ^ 0xffffffffU);
      uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_34);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar6,*(undefined8 *)puVar2,uVar7,0);
      iVar4 = Modules_Contexts_Home_Friends_Scripts_FriendsService__GetFriendsCount_1c7a8ec(lVar5,0)
      ;
      uVar7 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__InvitePopupImpression_2dbc404
                        (iVar4 - 1U & ((int)(iVar4 - 1U) >> 0x1f ^ 0xffffffffU),0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
                    /* try { // try from 0158e22c to 0168e253 has its CatchHandler @ 0158e784 */
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar7,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

