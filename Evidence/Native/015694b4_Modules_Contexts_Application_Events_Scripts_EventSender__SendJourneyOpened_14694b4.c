/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJourneyOpened
void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyOpened (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendJourneyOpened
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyOpened
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendJourneyOpened_14694b4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_057c8a60;
  if ((bRam0000000005c237c6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_0577bab8);
    bRam0000000005c237c6 = 1;
  }
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_0576aae0;
  if (lVar6 != 0) {
    Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
              (lVar6,*(undefined8 *)PTR_DAT_0577bab8,0);
                    /* try { // try from 01569594 to 016695e3 has its CatchHandler @ 01569594
                       catch() { ... } // from try @ 01569594 with catch @ 01569594
                       catch() { ... } // from try @ 015695fc with catch @ 01569594
                       catch() { ... } // from try @ 0156963c with catch @ 01569594
                       catch() { ... } // from try @ 01569730 with catch @ 01569594 */
    if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
        (lVar7 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar7 != 0)) &&
       (plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                   (lVar7,*(undefined8 *)PTR_DAT_057a1e60),
       puVar4 = PTR_DAT_057db748, puVar3 = PTR_DAT_057caaf0, puVar2 = PTR_DAT_057636d0,
       plVar8 != (long *)0x0)) {
      lVar7 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 015695fc to 01669623 has its CatchHandler @ 01569594 */
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0156960c;
          }
          uVar11 = uVar11 - 1;
                    /* try { // try from 015695e4 to 016695fb has its CatchHandler @ 0156960c */
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_0156960c:
      puVar1 = PTR_DAT_0575f9f0;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015695e4 with catch @ 0156960c
                        */
      uStack_44 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                    /* try { // try from 01569624 to 0166963b has its CatchHandler @ 01569728 */
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_44);
                    /* try { // try from 0156963c to 01669717 has its CatchHandler @ 01569594 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar6,*(undefined8 *)puVar3,uVar10,0);
      lVar7 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_01569698;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_01569698:
      iVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__JourneyOpened_2dae4b4
                         ((long)iVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

