/* IL2CPP: Modules.Contexts.Application.Events.Scripts.FirebaseEventSender$$SendEventWithoutExtraParameter
void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__SendEventWithoutExtraParameter (Modules_Contexts_Application_Events_Scripts_FirebaseEventSender_o* __this, Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.FirebaseEventSender$$SendEventWithoutExtraParameter
   void 
   Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__SendEventWithoutExtraParameter
   (Modules_Contexts_Application_Events_Scripts_FirebaseEventSender_o* __this,
   Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__SendEventWithoutExtraParameter_1cc743c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  if ((bRam0000000005c277a9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7ff0);
    FUN_012d0dc8(PTR_DAT_0577f0e0);
    FUN_012d0dc8(PTR_DAT_05758570);
    FUN_012d0dc8(PTR_DAT_057e7a20);
    FUN_012d0dc8(PTR_DAT_0581b178);
    FUN_012d0dc8(PTR_DAT_05758180);
    FUN_012d0dc8(PTR_DAT_057f9ef0);
    FUN_012d0dc8(PTR_DAT_05806c40);
    FUN_012d0dc8(PTR_DAT_05798940);
    bRam0000000005c277a9 = 1;
  }
  puVar1 = PTR_DAT_05798940;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 != 0) {
    if ((*(char *)(lVar7 + 0x20) == '\0') || (*(char *)(lVar7 + 0x22) == '\0')) {
      return;
    }
    if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
      uVar4 = System_Collections_Generic_Dictionary_object__object___get_Count_3ecfef4
                        (*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_0577f0e0);
      uVar5 = FUN_012d0e38(*(undefined8 *)puVar1,uVar4);
      puVar3 = PTR_DAT_057e7a20;
      puVar2 = PTR_DAT_05758570;
      puVar1 = PTR_DAT_05758180;
      uStack_38 = uVar5;
      if (*(long *)(param_2 + 0x18) != 0) {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                  (&uStack_70,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_057a7ff0);
        iVar9 = 0;
        while (uVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                 (&uStack_70,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
          Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__AddParameter_1cc6a70
                    (uVar6,&uStack_38,iVar9,uStack_60,uStack_58);
          iVar9 = iVar9 + 1;
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                  (&uStack_70,*(undefined8 *)puVar2);
        uVar8 = *(undefined8 *)(param_2 + 0x10);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        Firebase_Analytics_FirebaseAnalytics__LogEvent_27cc39c(uVar8,uVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

