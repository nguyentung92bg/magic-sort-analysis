/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTreasureDrillFinishedStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillFinishedStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTreasureDrillFinishedStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillFinishedStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillFinishedStat_147b84c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23828 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057d5558);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057b1dd8);
    FUN_012d0dc8(PTR_DAT_057fae40);
    FUN_012d0dc8(PTR_DAT_0580a068);
    FUN_012d0dc8(PTR_DAT_057bb970);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23828 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
      (lVar9 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar9 != 0)) &&
     (lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar9,*(undefined8 *)PTR_DAT_057d5558), puVar1 = PTR_DAT_057c8a60,
     lVar9 != 0)) {
    uVar10 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetSegment_33047d4
                       (lVar9,0);
    uVar6 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__IsPurchased_3303ab8
                      (lVar9,0);
    iVar7 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetTotalCompletedTaskCount_3304468
                      (lVar9,0);
    iVar8 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetClaimedTaskCount_3304608
                      (lVar9,0);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar5 = PTR_DAT_057fae40;
    puVar4 = PTR_DAT_057db748;
    puVar3 = PTR_DAT_057d3f68;
    puVar2 = PTR_DAT_057bb970;
    puVar1 = PTR_DAT_057b1dd8;
    if (lVar9 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar9,*(undefined8 *)PTR_DAT_0580a068,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar3,uVar10,0);
      iStack_64 = iVar7;
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar5,uVar11,0);
      iStack_68 = iVar8;
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_68);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar9,*(undefined8 *)puVar2,uVar11,0);
      uVar12 = *(undefined8 *)puVar1;
      uStack_6c = uVar6 & 1;
      uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar9,uVar12,uVar11,0);
      uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TreasureDrillFinished_2db1280
                         (uVar10,(long)iVar7,(long)iVar8,uVar6 & 1,0);
      if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

