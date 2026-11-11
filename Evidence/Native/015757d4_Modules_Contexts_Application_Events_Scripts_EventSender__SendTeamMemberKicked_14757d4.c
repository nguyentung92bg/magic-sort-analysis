/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamMemberKicked
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamMemberKicked (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTeamMemberKicked
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamMemberKicked
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTeamMemberKicked_14757d4
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2380e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_057c94c0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 0157585c to 01675863 has its CatchHandler @ 01575c78 */
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_05764be0);
                    /* try { // try from 01575884 to 016758ab has its CatchHandler @ 01575c84 */
    FUN_012d0dc8(PTR_DAT_057a19f8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c2380e = 1;
  }
                    /* try { // try from 015758b8 to 0167592f has its CatchHandler @ 01575d54 */
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) {
    plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar6,*(undefined8 *)PTR_DAT_057a1e60);
    if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar6 != 0)) {
      lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_05792f78);
      if (((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
          (lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar8 != 0)) &&
         (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar8,*(undefined8 *)PTR_DAT_057c94c0), lVar8 != 0)) {
                    /* try { // try from 01575930 to 0167597f has its CatchHandler @ 0157567c */
        if (*(long *)(lVar8 + 0x10) == 0) {
          puVar9 = *(undefined8 **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
        }
        else {
          puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x10) + 0x30);
        }
        uVar14 = *puVar9;
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
        if ((lVar8 != 0) &&
           (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                      (lVar8,*(undefined8 *)PTR_DAT_057a19f8,0), puVar3 = PTR_DAT_057db748,
           puVar1 = PTR_DAT_057caaf0, puVar2 = PTR_DAT_057636d0, plVar7 != (long *)0x0)) {
                    /* try { // try from 01575980 to 01675987 has its CatchHandler @ 01575c74 */
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
                    /* try { // try from 015759a8 to 016759cf has its CatchHandler @ 01575c80 */
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 015759dc to 01675a53 has its CatchHandler @ 01575cf0 */
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_015759e8;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_015759e8:
          uStack_54 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_54);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar8,*(undefined8 *)puVar1,uVar10,0);
          puVar4 = PTR_DAT_057d3f68;
          puVar3 = PTR_DAT_05764be0;
          puVar1 = PTR_DAT_0575f9f0;
          if (lVar6 != 0) {
            uVar10 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                               (lVar6,0);
                    /* try { // try from 01575a54 to 01675aaf has its CatchHandler @ 0157567c */
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar8,*(undefined8 *)puVar4,uVar10,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar8,*(undefined8 *)puVar3,uVar14,0);
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                    /* try { // try from 01575ab0 to 01675ab7 has its CatchHandler @ 01575c70 */
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_01575abc;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,1);
LAB_01575abc:
            iVar5 = (*(code *)*puVar9)(plVar7,puVar9[1]);
            uVar10 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                               (lVar6,0);
                    /* try { // try from 01575ad8 to 01675aff has its CatchHandler @ 01575c7c */
            uVar14 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamsKickedOutFromTeam_2dafba0
                               ((long)iVar5,uVar10,uVar14,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
                    /* try { // try from 01575b0c to 01675b7f has its CatchHandler @ 01575c88 */
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar14,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar8);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

