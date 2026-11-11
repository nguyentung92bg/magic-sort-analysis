/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendBootstrapHomeContextStartedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendBootstrapHomeContextStartedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01547e70) */
/* WARNING: Removing unreachable block (ram,0x01547e80) */
/* WARNING: Removing unreachable block (ram,0x01547e88) */
/* WARNING: Removing unreachable block (ram,0x01547eb0) */
/* WARNING: Removing unreachable block (ram,0x01547e94) */
/* WARNING: Removing unreachable block (ram,0x01547ea0) */
/* WARNING: Removing unreachable block (ram,0x01547ebc) */
/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendBootstrapHomeContextStartedEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendBootstrapHomeContextStartedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendBootstrapHomeContextStartedEvent_1472028
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c237f2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
                    /* try { // try from 01572088 to 01672217 has its CatchHandler @ 01571e10 */
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_05816018);
    FUN_012d0dc8(PTR_DAT_057f0e38);
    FUN_012d0dc8(PTR_DAT_0579d230);
    bRam0000000005c237f2 = 1;
  }
  puVar1 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar4 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar4 != 0)) {
    plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar4,*(undefined8 *)PTR_DAT_057a1e60);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar4 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar4,*(undefined8 *)PTR_DAT_05816018,0), puVar1 = PTR_DAT_0579d230,
       puVar2 = PTR_DAT_057636d0, plVar5 != (long *)0x0)) {
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x32) * 0x10 + 0x138);
            goto LAB_01572178;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,0x32);
LAB_01572178:
      puVar3 = PTR_DAT_057f0e38;
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar10 = System_String__IsNullOrEmpty_1ed04ac(uVar7,0);
      uVar7 = *(undefined8 *)puVar1;
      if ((uVar10 & 1) == 0) {
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x32) * 0x10 + 0x138);
              goto LAB_015721f4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0x32);
LAB_015721f4:
        uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
      else {
        uVar8 = *(undefined8 *)puVar3;
      }
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310(lVar4,uVar7,uVar8,0);
      lVar4 = *plVar5;
                    /* try { // try from 01572218 to 0167221b has its CatchHandler @ 01572224 */
                    /* try { // try from 0157221c to 01672247 has its CatchHandler @ 01571e10 */
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar10 != 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01572218 with catch @ 01572224
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571ff0 with catch @ 01572228
                        */
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01571f94 with catch @ 0157222c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0157201c with catch @ 01572230
                        */
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0x32) * 0x10 + 0x138);
            goto LAB_01572264;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
                    /* try { // try from 01572248 to 0167224b has its CatchHandler @ 015722cc */
      puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0x32);
LAB_01572264:
      puVar1 = PTR_DAT_0575f9f0;
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar10 = System_String__IsNullOrEmpty_1ed04ac(uVar7,0);
      if ((uVar10 & 1) == 0) {
        lVar4 = *plVar5;
                    /* try { // try from 01572290 to 016722b7 has its CatchHandler @ 015722d8 */
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    /* catch() { ... } // from try @ 01572248 with catch @ 015722cc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01572290 with catch @ 015722d8
                       catch(type#2 @ 00000000) { ... } // from try @ 015722c4 with catch @ 015722d8
                        */
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0x32) * 0x10 + 0x138);
              goto LAB_015722dc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
                    /* try { // try from 015722b8 to 016722c3 has its CatchHandler @ 01571e10 */
          } while (uVar10 != 0);
        }
                    /* try { // try from 015722c4 to 016722cb has its CatchHandler @ 015722d8 */
        puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,0x32);
LAB_015722dc:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
      else {
        uVar7 = *(undefined8 *)puVar3;
      }
      uVar7 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__BootstrapHomeContextStarted_2db6754
                        (uVar7,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar7,0);
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
        uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                           (&uStack_48,*(undefined8 *)puVar2);
        if ((uVar10 & 1) != 0) {
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

