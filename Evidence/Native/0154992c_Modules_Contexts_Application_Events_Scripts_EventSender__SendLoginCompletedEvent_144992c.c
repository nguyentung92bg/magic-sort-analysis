/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendLoginCompletedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendLoginCompletedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01547e70) */
/* WARNING: Removing unreachable block (ram,0x01547e80) */
/* WARNING: Removing unreachable block (ram,0x01547e88) */
/* WARNING: Removing unreachable block (ram,0x01547eb0) */
/* WARNING: Removing unreachable block (ram,0x01547e94) */
/* WARNING: Removing unreachable block (ram,0x01547ea0) */
/* WARNING: Removing unreachable block (ram,0x01547ebc) */
/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendLoginCompletedEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendLoginCompletedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendLoginCompletedEvent_144992c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2374e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057ba5a0);
    FUN_012d0dc8(PTR_DAT_057f0e38);
    FUN_012d0dc8(PTR_DAT_0579d230);
    FUN_012d0dc8(PTR_DAT_057babe8);
    bRam0000000005c2374e = 1;
  }
  puVar1 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar5 != 0)) {
    plVar6 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar5,*(undefined8 *)PTR_DAT_057a1e60);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar5 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar5,*(undefined8 *)PTR_DAT_057ba5a0,0), puVar1 = PTR_DAT_0579d230,
       puVar2 = PTR_DAT_057636d0, plVar6 != (long *)0x0)) {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x32) * 0x10 + 0x138);
            goto LAB_01549a88;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)PTR_DAT_057636d0,0x32);
LAB_01549a88:
      puVar4 = PTR_DAT_057f0e38;
      puVar3 = PTR_DAT_057babe8;
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      uVar11 = System_String__IsNullOrEmpty_1ed04ac(uVar8,0);
      uVar8 = *(undefined8 *)puVar1;
      if ((uVar11 & 1) == 0) {
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x32) * 0x10 + 0x138);
              goto LAB_01549b0c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar2,0x32);
LAB_01549b0c:
        uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
      else {
        uVar9 = *(undefined8 *)puVar4;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar5,uVar8,uVar9,0);
      uVar8 = UnityEngine_Device_Application__get_version_3d55a20(0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar5,*(undefined8 *)puVar3,uVar8,0);
      lVar5 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x32) * 0x10 + 0x138);
            goto LAB_01549b98;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar2,0x32);
LAB_01549b98:
      puVar1 = PTR_DAT_0575f9f0;
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      uVar11 = System_String__IsNullOrEmpty_1ed04ac(uVar8,0);
      if ((uVar11 & 1) == 0) {
        lVar5 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar12 + 0x32) * 0x10 + 0x138);
              goto LAB_01549c10;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_0131971c(plVar6,*(long *)puVar2,0x32);
LAB_01549c10:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
      else {
        uVar8 = *(undefined8 *)puVar4;
      }
      uVar9 = UnityEngine_Device_Application__get_version_3d55a20(0);
      uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__LoginCompleted_2dbe824
                        (uVar8,uVar9,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
      if ((bRam0000000005c2373b & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057f8670);
        FUN_012d0dc8(PTR_DAT_0576fba0);
        FUN_012d0dc8(PTR_DAT_057fde78);
        FUN_012d0dc8(PTR_DAT_0577a090);
        FUN_012d0dc8(PTR_DAT_0581bc50);
        bRam0000000005c2373b = 1;
      }
      puVar1 = PTR_DAT_057f8670;
      puVar2 = PTR_DAT_0576fba0;
      uStack_48 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                  (&uStack_48,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0581bc50);
        uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_48,*(undefined8 *)puVar2);
        if ((uVar11 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

