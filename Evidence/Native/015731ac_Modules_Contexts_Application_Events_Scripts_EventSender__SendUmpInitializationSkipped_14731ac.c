/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendUmpInitializationSkipped
void Modules_Contexts_Application_Events_Scripts_EventSender__SendUmpInitializationSkipped (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* getConsentInfoAsStr, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01548020) */
/* WARNING: Removing unreachable block (ram,0x01548030) */
/* WARNING: Removing unreachable block (ram,0x01548038) */
/* WARNING: Removing unreachable block (ram,0x01548060) */
/* WARNING: Removing unreachable block (ram,0x01548044) */
/* WARNING: Removing unreachable block (ram,0x01548050) */
/* WARNING: Removing unreachable block (ram,0x01548070) */
/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendUmpInitializationSkipped
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendUmpInitializationSkipped
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   getConsentInfoAsStr, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendUmpInitializationSkipped_14731ac
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c237fa & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0578e708);
    FUN_012d0dc8(PTR_DAT_057d4800);
    FUN_012d0dc8(PTR_DAT_057fb6b8);
    bRam0000000005c237fa = 1;
  }
  lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_057fb6b8;
  puVar2 = PTR_DAT_0578e708;
  puVar1 = PTR_DAT_0575f9f0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
            (lVar4,*(undefined8 *)PTR_DAT_057d4800,0);
  uVar5 = System_String__IsNullOrEmpty_1ed04ac(param_2,0);
  uVar6 = *(undefined8 *)puVar3;
  if ((uVar5 & 1) == 0) {
    uVar6 = param_2;
  }
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar4,*(undefined8 *)puVar2,uVar6,0);
  uVar6 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__UmpInitializationSkipped_2daf1a4
                    (uVar6,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar6,0);
  if ((bRam0000000005c2373c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f8670);
    FUN_012d0dc8(PTR_DAT_0576fba0);
    FUN_012d0dc8(PTR_DAT_057fde78);
    FUN_012d0dc8(PTR_DAT_0577a090);
    FUN_012d0dc8(PTR_DAT_0581bc50);
    bRam0000000005c2373c = 1;
  }
  puVar2 = PTR_DAT_057f8670;
  puVar1 = PTR_DAT_0576fba0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0581bc50);
    uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_48,*(undefined8 *)puVar1);
    if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_48,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

