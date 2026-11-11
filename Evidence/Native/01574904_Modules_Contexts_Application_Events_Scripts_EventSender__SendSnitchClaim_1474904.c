/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSnitchClaim
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchClaim (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSnitchClaim
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchClaim
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSnitchClaim_1474904
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23809 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05767fc0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23809 = 1;
  }
  puVar3 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) {
    plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar6,*(undefined8 *)PTR_DAT_057a1e60);
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    if ((lVar6 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar6,*(undefined8 *)PTR_DAT_05767fc0,0), puVar4 = PTR_DAT_057db748,
       puVar3 = PTR_DAT_057caaf0, puVar2 = PTR_DAT_057636d0, plVar7 != (long *)0x0)) {
                    /* try { // try from 015749f8 to 01674a1f has its CatchHandler @ 01574b20 */
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 01574a54 to 01674a7f has its CatchHandler @ 01574b1c */
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_01574a60;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_01574a60:
      puVar1 = PTR_DAT_0575f9f0;
      uStack_44 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                    /* try { // try from 01574a80 to 01674a87 has its CatchHandler @ 01574b18 */
      uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_44);
                    /* try { // try from 01574a88 to 01674b07 has its CatchHandler @ 015748b0 */
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar6,*(undefined8 *)puVar3,uVar9,0);
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_01574aec;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,1);
LAB_01574aec:
      iVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SnitchClaim_2daf898((long)iVar5,0);
                    /* try { // try from 01574b08 to 01674b0b has its CatchHandler @ 01574b14 */
                    /* try { // try from 01574b0c to 01674b2f has its CatchHandler @ 015748b0 */
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01574b08 with catch @ 01574b14
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01574a80 with catch @ 01574b18
                        */
        thunk_FUN_0130472c(*(long *)puVar1);
      }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 01574a54 with catch @ 01574b1c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 015749f8 with catch @ 01574b20
                        */
      GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
                    /* try { // try from 01574b30 to 01674b33 has its CatchHandler @ 01574bb0 */
      Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

