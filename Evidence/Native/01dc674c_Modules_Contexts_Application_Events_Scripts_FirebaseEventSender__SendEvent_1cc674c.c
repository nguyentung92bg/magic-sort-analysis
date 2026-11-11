/* IL2CPP: Modules.Contexts.Application.Events.Scripts.FirebaseEventSender$$SendEvent
void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__SendEvent (Modules_Contexts_Application_Events_Scripts_FirebaseEventSender_o* __this, Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.FirebaseEventSender$$SendEvent
   void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__SendEvent
   (Modules_Contexts_Application_Events_Scripts_FirebaseEventSender_o* __this,
   Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__SendEvent_1cc674c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  if ((bRam0000000005c277a8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a7ff0);
    FUN_012d0dc8(PTR_DAT_0577f0e0);
    FUN_012d0dc8(PTR_DAT_05758570);
    FUN_012d0dc8(PTR_DAT_057e7a20);
    FUN_012d0dc8(PTR_DAT_0581b178);
    FUN_012d0dc8(PTR_DAT_05758180);
    FUN_012d0dc8(PTR_DAT_057f9ef0);
    FUN_012d0dc8(PTR_DAT_05806c40);
    FUN_012d0dc8(PTR_DAT_05798940);
    bRam0000000005c277a8 = 1;
  }
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    if ((*(char *)(lVar8 + 0x20) == '\0') || (*(char *)(lVar8 + 0x22) == '\0')) {
      return;
    }
    if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
      iVar5 = System_Collections_Generic_Dictionary_object__object___get_Count_3ecfef4
                        (*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_0577f0e0);
      if (*(long *)(param_1 + 0x10) != 0) {
        iVar9 = 0;
        if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
          iVar9 = 6;
        }
        uVar6 = FUN_012d0e38(*(undefined8 *)PTR_DAT_05798940,iVar9 + iVar5);
        puVar4 = PTR_DAT_057e7a20;
        puVar3 = PTR_DAT_057a7ff0;
        puVar2 = PTR_DAT_05758570;
        puVar1 = PTR_DAT_05758180;
        uStack_58 = uVar6;
        if (*(long *)(param_2 + 0x18) != 0) {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                    (&uStack_b8,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_057a7ff0);
          iVar5 = 0;
          uStack_88 = uStack_b0;
          uStack_90 = uStack_b8;
          uStack_78 = uStack_a0;
          uStack_80 = uStack_a8;
          uStack_70 = uStack_98;
          while (uVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                   (&uStack_90,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
            Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__AddParameter_1cc6a70
                      (uVar7,&uStack_58,iVar5,uStack_80,uStack_78);
            iVar5 = iVar5 + 1;
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                    (&uStack_90,*(undefined8 *)puVar2);
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (lVar8 = Modules_Contexts_Application_Events_Scripts_InventoryParametersProvider__GetInventoryParameters_1cc71ac
                                (), lVar8 != 0)) {
            System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                      (&uStack_b8,lVar8,*(undefined8 *)puVar3);
            uStack_88 = uStack_b0;
            uStack_90 = uStack_b8;
            uStack_78 = uStack_a0;
            uStack_80 = uStack_a8;
            uStack_70 = uStack_98;
            while (uVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                                     (&uStack_90,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
              Modules_Contexts_Application_Events_Scripts_FirebaseEventSender__AddParameter_1cc6a70
                        (uVar7,&uStack_58,iVar5,uStack_80,uStack_78);
              iVar5 = iVar5 + 1;
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                      (&uStack_90,*(undefined8 *)puVar2);
            uVar10 = *(undefined8 *)(param_2 + 0x10);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c();
            }
            Firebase_Analytics_FirebaseAnalytics__LogEvent_27cc39c(uVar10,uVar6,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

