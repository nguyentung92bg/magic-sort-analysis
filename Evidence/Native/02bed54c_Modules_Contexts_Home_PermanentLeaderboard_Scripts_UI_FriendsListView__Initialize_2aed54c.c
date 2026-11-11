/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsListView$$Initialize
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__Initialize (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.FriendsListView$$Initialize
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__Initialize
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_FriendsListView__Initialize_2aed54c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2eb92 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d5f50);
    FUN_012d0dc8(PTR_DAT_0576ea70);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_057ee3f0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057bafd8);
    FUN_012d0dc8(PTR_DAT_05785d60);
    FUN_012d0dc8(PTR_DAT_0579e658);
    FUN_012d0dc8(PTR_DAT_057ef088);
    FUN_012d0dc8(PTR_DAT_057e60d0);
    FUN_012d0dc8(PTR_DAT_0579d950);
    FUN_012d0dc8(PTR_DAT_0575c690);
    FUN_012d0dc8(PTR_DAT_057b6cc8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_05771e50);
    FUN_012d0dc8(PTR_DAT_0575ee60);
    bRam0000000005c2eb92 = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
    lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_057ee3f0);
    plVar7 = (long *)(param_1 + 0x40);
    *plVar7 = lVar5;
    FUN_012d0d74(plVar7,lVar5);
    if (*plVar7 != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      uVar4 = Modules_Contexts_Home_Friends_Scripts_FriendsService__HasAnyRequests_1c7aaf8
                        (*plVar7,0);
      puVar2 = PTR_DAT_057e60d0;
      puVar3 = PTR_DAT_057b8520;
      puVar1 = PTR_DAT_0578b048;
      if (lVar5 != 0) {
        UnityEngine_GameObject__SetActive_408e318(lVar5,uVar4 & 1,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        if ((lVar6 != 0) &&
           (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_057bafd8,0),
           puVar3 = PTR_DAT_057d5f50, puVar1 = PTR_DAT_0579d950, lVar5 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar5,lVar6,0);
          lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
          if ((lVar6 != 0) &&
             (System_Action_object____ctor_1647468(lVar6,param_1,*(undefined8 *)PTR_DAT_05785d60,0),
             puVar2 = PTR_DAT_05771e50, puVar1 = PTR_DAT_0575c690, lVar5 != 0)) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Subscribe_333d3d4
                      (lVar5,lVar6,*(undefined8 *)PTR_DAT_05771e50);
            lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar1);
            lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
            if ((lVar6 != 0) &&
               (System_Action_object____ctor_1647468
                          (lVar6,param_1,*(undefined8 *)PTR_DAT_0579e658,0),
               puVar3 = PTR_DAT_057b6cc8, puVar1 = PTR_DAT_0576ea70, lVar5 != 0)) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Subscribe_333d3d4
                        (lVar5,lVar6,*(undefined8 *)puVar2);
              lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar3);
              lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
              if ((lVar6 != 0) &&
                 (System_Action_object____ctor_1647468
                            (lVar6,param_1,*(undefined8 *)PTR_DAT_057ef088,0), lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0343d3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0575ee60 + 0x20) + 0xc0)
                                      + 8) + 8))(lVar5,lVar6);
                return;
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

