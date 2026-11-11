/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJourneyPosterTimeTracking
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyPosterTimeTracking (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_Collections_Generic_Dictionary_string__string__o* posterData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJourneyPosterTimeTracking
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyPosterTimeTracking
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   System_Collections_Generic_Dictionary_string__string__o* posterData, const MethodInfo* method);
    */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyPosterTimeTracking_146be50
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c237d4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057741a8);
    FUN_012d0dc8(PTR_DAT_057ca5e8);
    FUN_012d0dc8(PTR_DAT_05811818);
    FUN_012d0dc8(PTR_DAT_057ea2e8);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057e6a08);
    FUN_012d0dc8(PTR_DAT_05812890);
    FUN_012d0dc8(PTR_DAT_057f4b28);
    bRam0000000005c237d4 = 1;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if ((lVar6 != 0) &&
     (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar6,*(undefined8 *)PTR_DAT_057f4b28,0), puVar4 = PTR_DAT_05811818,
     puVar3 = PTR_DAT_058031d8, puVar2 = PTR_DAT_057ca5e8, puVar1 = PTR_DAT_0575f9f0, param_2 != 0))
  {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
              (&uStack_80,param_2,*(undefined8 *)PTR_DAT_057741a8);
    uVar8 = 0;
    while( true ) {
      bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                        (&uStack_80,*(undefined8 *)puVar4);
      if ((uVar8 < 0x18 & bVar5) == 0) break;
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar6,uStack_70,uStack_68,0);
      uVar8 = uVar8 + 1;
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
              (&uStack_80,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar7 = Newtonsoft_Json_JsonConvert__SerializeObject_35368d4(param_2,0);
    uVar7 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JourneyPosterTimeTracking_2db906c
                      (uVar7,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar1);
    }
    GrandSDK_Analytics_Analytics__Track_2b38d30(uVar7,0);
    Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
              (param_1,lVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

