/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWatchAndWinAdImpressionEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWatchAndWinAdImpressionEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t adId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWatchAndWinAdImpressionEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWatchAndWinAdImpressionEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t adId, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWatchAndWinAdImpressionEvent_1473d78
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iStack_34;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23805 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b7668);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057a1320);
    FUN_012d0dc8(PTR_DAT_05790910);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23805 = 1;
  }
  puVar2 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) {
    lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar3,*(undefined8 *)PTR_DAT_057b7668);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_057db748;
    puVar1 = PTR_DAT_057a1320;
    if (lVar4 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar4,*(undefined8 *)PTR_DAT_05790910,0);
      iStack_34 = param_2;
      uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_34);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar4,*(undefined8 *)puVar1,uVar5,0);
      puVar2 = PTR_DAT_057d3f68;
      puVar1 = PTR_DAT_0575f9f0;
      if (lVar3 != 0) {
        uVar5 = Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_WatchAndWinService__GetSegment_3171f30
                          (lVar3,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar4,*(undefined8 *)puVar2,uVar5,0);
        uVar5 = Modules_Contexts_Home_Monetization_WatchAndWin_Scripts_WatchAndWinService__GetSegment_3171f30
                          (lVar3,0);
        uVar5 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WatchAndWinAdImpression_2daf61c
                          ((long)param_2,uVar5,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
                    /* try { // try from 01573f0c to 01674083 has its CatchHandler @ 01573f0c
                       catch() { ... } // from try @ 01573f0c with catch @ 01573f0c
                       catch() { ... } // from try @ 01574238 with catch @ 01573f0c
                       catch() { ... } // from try @ 01574308 with catch @ 01573f0c
                       catch() { ... } // from try @ 01574310 with catch @ 01573f0c
                       catch() { ... } // from try @ 015743cc with catch @ 01573f0c */
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar5,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

