/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendEventWithoutExtraParameter
void Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendEventWithoutExtraParameter
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((bRam0000000005c2373c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f8670);
    FUN_012d0dc8(PTR_DAT_0576fba0);
    FUN_012d0dc8(PTR_DAT_057fde78);
    FUN_012d0dc8(PTR_DAT_0577a090);
    FUN_012d0dc8(PTR_DAT_0581bc50);
    bRam0000000005c2373c = 1;
  }
  puVar3 = PTR_DAT_057f8670;
  puVar2 = PTR_DAT_0577a090;
  puVar1 = PTR_DAT_0576fba0;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_48,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0581bc50);
  do {
    uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_48,*(undefined8 *)puVar1);
    plVar4 = plStack_38;
    if ((uVar5 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_48,*(undefined8 *)puVar3);
      return;
    }
    if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar7 = *plStack_38;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_01548070;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plStack_38,*(long *)puVar2,1);
LAB_01548070:
    (*(code *)*puVar6)(plVar4,param_2,puVar6[1]);
  } while( true );
}

