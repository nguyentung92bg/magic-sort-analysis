/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalInfoImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalInfoImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalInfoImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalInfoImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalInfoImpression_1480ba8
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23839 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_0577fc18);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057dc120);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057ebbd0);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    bRam0000000005c23839 = 1;
  }
  puVar2 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 != 0)) {
    lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar7,*(undefined8 *)PTR_DAT_0577fc18);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_057dc120;
    puVar1 = PTR_DAT_057dbe68;
    if (lVar8 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar8,*(undefined8 *)PTR_DAT_057ebbd0,0);
      uStack_78 = *(undefined8 *)puVar2;
      uStack_70 = 0xffffffffffffffff;
      uStack_68 = param_2;
      uVar9 = System_Enum__ToString_23a4eac(&uStack_78,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar1,uVar9,0);
      puVar5 = PTR_DAT_057fcce8;
      puVar4 = PTR_DAT_057e4da8;
      puVar3 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_0575f9f0;
      if (lVar7 != 0) {
        uVar9 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentId_1b98890
                          (lVar7,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar5,uVar9,0);
        uStack_54 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingSeconds_1b96ad4
                              (lVar7,0);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_54);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar4,uVar9,0);
        uStack_90 = *(undefined8 *)puVar2;
        uStack_88 = 0xffffffffffffffff;
        uStack_80 = param_2;
        uVar9 = System_Enum__ToString_23a4eac(&uStack_90,0);
        uVar10 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetTournamentId_1b98890
                           (lVar7,0);
        iVar6 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingSeconds_1b96ad4
                          (lVar7,0);
        uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DuckFestivalInfoImpression_2db24d0
                          (uVar9,uVar10,(long)iVar6,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

