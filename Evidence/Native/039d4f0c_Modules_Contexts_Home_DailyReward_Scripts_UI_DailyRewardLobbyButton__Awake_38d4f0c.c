/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButton$$Awake
void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton__Awake (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.UI.DailyRewardLobbyButton$$Awake
   void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton__Awake
   (Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_DailyReward_Scripts_UI_DailyRewardLobbyButton__Awake_38d4f0c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c34bcf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0575c778);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05769c30);
    FUN_012d0dc8(PTR_DAT_057c0d18);
    FUN_012d0dc8(PTR_DAT_057aa518);
    FUN_012d0dc8(PTR_DAT_057ad8f8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c34bcf = 1;
  }
  puVar2 = PTR_DAT_0578b048;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
    uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar5,*(undefined8 *)PTR_DAT_0575c778);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    FUN_012d0d74((undefined8 *)(param_1 + 0x30),uVar6);
    lVar9 = *(long *)(param_1 + 0x18);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar5 != 0) &&
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_05769c30,0), lVar9 != 0))
    {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                (lVar9,lVar5,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        plVar10 = (long *)(*(long *)(param_1 + 0x28) + 0x18);
        lVar9 = *plVar10;
        lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
        if (lVar5 != 0) {
          System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057c0d18,0);
          plVar7 = (long *)System_Delegate__Combine_23e3964(lVar9,lVar5,0);
          if (plVar7 == (long *)0x0) {
            *plVar10 = 0;
          }
          else {
            lVar5 = *(long *)puVar2;
            if ((*plVar7 != lVar5) || (*plVar10 = (long)plVar7, *plVar7 != lVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_012d1288(plVar7);
            }
          }
          puVar3 = PTR_DAT_057b8520;
          puVar1 = PTR_DAT_057ad8f8;
          FUN_012d0d74(plVar10,plVar7);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar1);
          if (lVar5 == 0) {
            return;
          }
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar9 != 0) {
            System_Action___ctor_21239bc(lVar9,param_1,*(undefined8 *)PTR_DAT_057aa518,0);
            if ((bRam0000000005c3aa34 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_0578b048,lVar9,0);
              bRam0000000005c3aa34 = 1;
            }
            puVar1 = PTR_DAT_0578b048;
            lVar11 = *(long *)(lVar5 + 0x20);
            while ((plVar10 = (long *)System_Delegate__Combine_23e3964(lVar11,lVar9,0),
                   plVar10 == (long *)0x0 || (*plVar10 == *(long *)puVar1))) {
              lVar8 = FUN_01351224((long *)(lVar5 + 0x20),plVar10,lVar11);
              bVar4 = lVar11 == lVar8;
              lVar11 = lVar8;
              if (bVar4) {
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d1288(plVar10);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

