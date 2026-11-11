/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButton$$OnDestroy
void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton__OnDestroy (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButton$$OnDestroy
   void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton__OnDestroy
   (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton__OnDestroy_38d5128
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  puVar4 = PTR_DAT_057b8520;
  if ((bRam0000000005c34bd0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05769c30);
    FUN_012d0dc8(PTR_DAT_057c0d18);
                    /* catch() { ... } // from try @ 039d52c8 with catch @ 039d5170
                       catch() { ... } // from try @ 039d5304 with catch @ 039d5170
                       catch() { ... } // from try @ 039d5340 with catch @ 039d5170
                       catch() { ... } // from try @ 039d536c with catch @ 039d5170
                       catch() { ... } // from try @ 039d53f0 with catch @ 039d5170 */
    FUN_012d0dc8(PTR_DAT_057aa518);
    FUN_012d0dc8(PTR_DAT_057ad8f8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c34bd0 = 1;
  }
  puVar5 = PTR_DAT_057ad8f8;
                    /* try { // try from 039d51a8 to 03ad51ab has its CatchHandler @ 039d52c8 */
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar4 = PTR_DAT_0578b048;
  lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar5);
                    /* try { // try from 039d51c4 to 03ad52c7 has its CatchHandler @ 039d52d4 */
  if (lVar6 != 0) {
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar7 == 0) goto LAB_039d52d4;
    System_Action___ctor_21239bc(lVar7,param_1,*(undefined8 *)PTR_DAT_057aa518,0);
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar6,lVar7,0);
  }
  lVar7 = *(long *)(param_1 + 0x18);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if ((lVar6 != 0) &&
     (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_05769c30,0), lVar7 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
              (lVar7,lVar6,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      plVar9 = (long *)(*(long *)(param_1 + 0x28) + 0x18);
      lVar7 = *plVar9;
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
      if (lVar6 != 0) {
        System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057c0d18,0);
        plVar8 = (long *)System_Delegate__Remove_23e3b70(lVar7,lVar6,0);
        if (plVar8 == (long *)0x0) {
          *plVar9 = 0;
        }
        else {
          lVar6 = *(long *)puVar4;
          if ((*plVar8 != lVar6) || (*plVar9 = (long)plVar8, *plVar8 != lVar6)) {
                    /* WARNING: Subroutine does not return */
            FUN_012d1288(plVar8);
          }
        }
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
LAB_039d52d4:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 039d51c4 with catch @ 039d52d4
                        */
  FUN_012d0ef0();
}

