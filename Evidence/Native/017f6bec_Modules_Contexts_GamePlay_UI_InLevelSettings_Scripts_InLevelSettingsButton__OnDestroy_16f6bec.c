/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.InLevelSettingsButton$$OnDestroy
void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton__OnDestroy (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.UI.InLevelSettings.Scripts.InLevelSettingsButton$$OnDestroy
   void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton__OnDestroy
   (Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_InLevelSettings_Scripts_InLevelSettingsButton__OnDestroy_16f6bec
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_0578b048;
  if ((bRam0000000005c24b82 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577d6c0);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05781a30);
    FUN_012d0dc8(PTR_DAT_05778150);
    FUN_012d0dc8(PTR_DAT_057c7c78);
    FUN_012d0dc8(PTR_DAT_057771c0);
    FUN_012d0dc8(PTR_DAT_057d4168);
    FUN_012d0dc8(PTR_DAT_0576ee20);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b9b88);
    bRam0000000005c24b82 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
  if ((lVar6 != 0) &&
     (System_Action___ctor_21239bc(lVar6,param_1,*(undefined8 *)PTR_DAT_05778150,0),
     puVar4 = PTR_DAT_057b8520, puVar2 = PTR_DAT_0577d6c0, puVar1 = PTR_DAT_0576ee20, lVar9 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__remove_OnSelectSuccessEvent_4006260
              (lVar9,lVar6,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar9 != 0) &&
       (System_Action_Int32Enum____ctor_1646b94(lVar9,param_1,*(undefined8 *)PTR_DAT_05781a30,0),
       puVar1 = PTR_DAT_057d4168, lVar6 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Unsubscribe_333d1cc
                (lVar6,lVar9,*(undefined8 *)PTR_DAT_057b9b88);
      lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar1);
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      puVar1 = PTR_DAT_057c7c78;
      if (lVar9 != 0) {
        System_Action___ctor_21239bc(lVar9,param_1,*(undefined8 *)PTR_DAT_057c7c78,0);
        puVar2 = PTR_DAT_057771c0;
        if (lVar6 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar6,lVar9,0);
          lVar6 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
          if ((lVar9 != 0) &&
             (System_Action___ctor_21239bc(lVar9,param_1,*(undefined8 *)puVar1,0), lVar6 != 0)) {
            if ((bRam0000000005c3aa35 & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_0578b048,lVar9,0);
              bRam0000000005c3aa35 = 1;
            }
            puVar3 = PTR_DAT_0578b048;
            lVar10 = *(long *)(lVar6 + 0x20);
            while ((plVar7 = (long *)System_Delegate__Remove_23e3b70(lVar10,lVar9,0),
                   plVar7 == (long *)0x0 || (*plVar7 == *(long *)puVar3))) {
              lVar8 = FUN_01351224((long *)(lVar6 + 0x20),plVar7,lVar10);
              bVar5 = lVar10 == lVar8;
              lVar10 = lVar8;
              if (bVar5) {
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d1288(plVar7);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

