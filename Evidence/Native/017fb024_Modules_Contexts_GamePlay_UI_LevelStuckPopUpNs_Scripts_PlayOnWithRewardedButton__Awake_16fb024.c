/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedButton$$Awake
void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Awake (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts.PlayOnWithRewardedButton$$Awake
   void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Awake
   (Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_LevelStuckPopUpNs_Scripts_PlayOnWithRewardedButton__Awake_16fb024
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_0578b048;
  if ((bRam0000000005c24bab & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0580b3a0);
    FUN_012d0dc8(PTR_DAT_057f7098);
    FUN_012d0dc8(PTR_DAT_057607c8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    bRam0000000005c24bab = 1;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_0580b3a0,0),
     puVar3 = PTR_DAT_057b8520, puVar1 = PTR_DAT_057607c8, lVar8 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar8,lVar5,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar8 != 0) &&
       (System_Action___ctor_21239bc(lVar8,param_1,*(undefined8 *)PTR_DAT_057f7098,0), lVar5 != 0))
    {
      if ((bRam0000000005c3aa34 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0578b048,lVar8,0);
        bRam0000000005c3aa34 = 1;
      }
      puVar2 = PTR_DAT_0578b048;
      lVar9 = *(long *)(lVar5 + 0x20);
      while ((plVar6 = (long *)System_Delegate__Combine_23e3964(lVar9,lVar8,0),
             plVar6 == (long *)0x0 || (*plVar6 == *(long *)puVar2))) {
        lVar7 = FUN_01351224((long *)(lVar5 + 0x20),plVar6,lVar9);
        bVar4 = lVar9 == lVar7;
        lVar9 = lVar7;
        if (bVar4) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(plVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

