/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDeviceIdMigrationEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDeviceIdMigrationEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* playerModelAppleDeviceTransformID, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDeviceIdMigrationEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDeviceIdMigrationEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o*
   playerModelAppleDeviceTransformID, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDeviceIdMigrationEvent_149c774
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  puVar1 = PTR_DAT_057c8a60;
                    /* try { // try from 0159c77c to 0169c783 has its CatchHandler @ 0159c784 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0159c768 with catch @ 0159c784
                       catch(type#2 @ 00000000) { ... } // from try @ 0159c77c with catch @ 0159c784
                        */
  if ((bRam0000000005c238a1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057efc18);
    FUN_012d0dc8(PTR_DAT_0577f258);
    bRam0000000005c238a1 = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0577f258;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
            (lVar7,*(undefined8 *)PTR_DAT_057efc18,0);
  Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
            (lVar7,*(undefined8 *)puVar1,param_2,0);
  if ((bRam0000000005c2373b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f8670);
    FUN_012d0dc8(PTR_DAT_0576fba0);
    FUN_012d0dc8(PTR_DAT_057fde78);
    FUN_012d0dc8(PTR_DAT_0577a090);
    FUN_012d0dc8(PTR_DAT_0581bc50);
    bRam0000000005c2373b = 1;
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
    lVar8 = *plStack_38;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01547ebc;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0131971c(plStack_38,*(long *)puVar2,0);
LAB_01547ebc:
    (*(code *)*puVar6)(plVar4,lVar7,puVar6[1]);
  } while( true );
}

