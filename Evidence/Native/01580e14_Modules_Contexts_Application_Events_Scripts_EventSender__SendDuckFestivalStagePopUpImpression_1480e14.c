/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalStagePopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalStagePopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckFestivalStagePopUpImpression
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalStagePopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckFestivalStagePopUpImpression_1480e14
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2383a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_0577fc18);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_058133c8);
    FUN_012d0dc8(PTR_DAT_057d8d60);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2383a = 1;
  }
  lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
    lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar7,*(undefined8 *)PTR_DAT_0577fc18);
    puVar2 = PTR_DAT_057c8a60;
    lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
      lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar8,*(undefined8 *)PTR_DAT_05792f78);
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar5 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar5,*(undefined8 *)PTR_DAT_057d8d60,0), puVar1 = PTR_DAT_057d3f68, lVar8 != 0
         )) {
        uVar6 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                          (lVar8,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar5,*(undefined8 *)puVar1,uVar6,0);
        puVar3 = PTR_DAT_058133c8;
        puVar2 = PTR_DAT_057db748;
        puVar1 = PTR_DAT_0575f9f0;
        if (lVar7 != 0) {
          uStack_44 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRewardStage_1b988b4
                                (lVar7,0);
          uVar6 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_44);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar5,*(undefined8 *)puVar3,uVar6,0);
          uVar6 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                            (lVar8,0);
          iVar4 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRewardStage_1b988b4
                            (lVar7,0);
          uVar6 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DuckFestivalStagePopupImpression_2db2588
                            (uVar6,(long)iVar4,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar6,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

