/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamsUnlocked
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamsUnlocked (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamsUnlocked
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamsUnlocked
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamsUnlocked_14760dc
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23811 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_0578b6a0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23811 = 1;
  }
  lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
    plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar9,*(undefined8 *)PTR_DAT_057a1e60);
    puVar1 = PTR_DAT_057c8a60;
    lVar9 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
      lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar9,*(undefined8 *)PTR_DAT_05792f78);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if ((lVar6 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar6,*(undefined8 *)PTR_DAT_0578b6a0,0), puVar3 = PTR_DAT_057db748,
         puVar1 = PTR_DAT_057caaf0, puVar2 = PTR_DAT_057636d0, plVar5 != (long *)0x0)) {
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0157627c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
                    /* try { // try from 01576264 to 0167638f has its CatchHandler @ 01576264
                       catch() { ... } // from try @ 01576264 with catch @ 01576264
                       catch() { ... } // from try @ 01576428 with catch @ 01576264
                       catch() { ... } // from try @ 015764a8 with catch @ 01576264
                       catch() { ... } // from try @ 0157653c with catch @ 01576264 */
        puVar7 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,1);
LAB_0157627c:
        uStack_44 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_44);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar6,*(undefined8 *)puVar1,uVar8,0);
        puVar3 = PTR_DAT_057d3f68;
        puVar1 = PTR_DAT_0575f9f0;
        if (lVar9 != 0) {
          uVar8 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                            (lVar9,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar6,*(undefined8 *)puVar3,uVar8,0);
          lVar10 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_01576334;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar2,1);
LAB_01576334:
          iVar4 = (*(code *)*puVar7)(plVar5,puVar7[1]);
          uVar8 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                            (lVar9,0);
          uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamsUnlocked_2dafd88
                            ((long)iVar4,uVar8,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar6);
                    /* try { // try from 01576390 to 016763b7 has its CatchHandler @ 015764bc */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

