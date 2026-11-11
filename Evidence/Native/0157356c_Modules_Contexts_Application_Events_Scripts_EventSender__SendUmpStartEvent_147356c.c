/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendUmpStartEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendUmpStartEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendUmpStartEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendUmpStartEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendUmpStartEvent_147356c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  puVar1 = PTR_DAT_057c8a60;
  if ((bRam0000000005c237fd & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057b0830);
    bRam0000000005c237fd = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0575f9f0;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
            (lVar7,*(undefined8 *)PTR_DAT_057b0830,0);
  uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__UmpStart_2daf318(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
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
    lVar9 = *plStack_38;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_01548070;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plStack_38,*(long *)puVar2,1);
LAB_01548070:
    (*(code *)*puVar6)(plVar4,lVar7,puVar6[1]);
  } while( true );
}

