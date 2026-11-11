/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendRefillPopUpOpenedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendRefillPopUpOpenedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendRefillPopUpOpenedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendRefillPopUpOpenedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendRefillPopUpOpenedEvent_144a258
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  int iStack_44;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c23754 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a7c60);
    FUN_012d0dc8(PTR_DAT_057c94c0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0579d8f0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057fc3d8);
    FUN_012d0dc8(PTR_DAT_05778278);
    FUN_012d0dc8(PTR_DAT_0577a0f0);
    FUN_012d0dc8(PTR_DAT_057b6ad8);
    FUN_012d0dc8(PTR_DAT_057e5de8);
    bRam0000000005c23754 = 1;
  }
  iStack_44 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_057e5de8;
  puVar3 = PTR_DAT_0579d8f0;
  puVar1 = PTR_DAT_0576aae0;
  if (lVar5 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar5,*(undefined8 *)PTR_DAT_0577a0f0,0);
    uStack_50 = Modules_Contexts_Application_Events_Scripts_EventSender__GetGameState_1448268();
    uStack_60 = *(undefined8 *)puVar3;
    uStack_58 = 0xffffffffffffffff;
    uVar6 = System_Enum__ToString_23a4eac(&uStack_60,0);
    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
              (lVar5,*(undefined8 *)puVar2,uVar6,0);
    lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) &&
        (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                           (lVar8,*(undefined8 *)PTR_DAT_057a7c60), lVar8 != 0)) &&
       (lVar8 = Modules_Contexts_Application_RemoteConfig_Scripts_ConfigService_GameEconomyConfigService__GetGameEconomyModel_1cc59c4
                          (lVar8,0), puVar4 = PTR_DAT_057db748, puVar2 = PTR_DAT_05778278,
       lVar8 != 0)) {
      iStack_64 = *(int *)(lVar8 + 0x10);
      iStack_44 = iStack_64;
      uVar6 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&iStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar5,*(undefined8 *)puVar2,uVar6,0);
      lVar8 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) &&
         (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar8,*(undefined8 *)PTR_DAT_057c94c0), puVar2 = PTR_DAT_057b6ad8,
         puVar1 = PTR_DAT_0575f9f0, lVar8 != 0)) {
        lVar8 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__GetFreeLives_35b3598(lVar8,0);
        if (lVar8 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(lVar8 + 0x18);
        }
        iStack_64 = iVar9;
        uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar5,*(undefined8 *)puVar2,uVar6,0);
        uStack_50 = Modules_Contexts_Application_Events_Scripts_EventSender__GetGameState_1448268();
        uStack_60 = *(undefined8 *)puVar3;
        uStack_58 = 0xffffffffffffffff;
        uVar6 = System_Enum__ToString_23a4eac(&uStack_60,0);
        uVar7 = System_Int32__ToString_26c9768(&iStack_44,0);
        uVar6 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__RefillPopupOpened_2db7b78
                          (uVar7,(long)iVar9,uVar6,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar6,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

