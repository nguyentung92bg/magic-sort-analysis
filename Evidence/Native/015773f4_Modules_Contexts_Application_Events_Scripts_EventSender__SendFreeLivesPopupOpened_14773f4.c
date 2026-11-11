/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFreeLivesPopupOpened
void Modules_Contexts_Application_Events_Scripts_EventSender__SendFreeLivesPopupOpened (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendFreeLivesPopupOpened
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendFreeLivesPopupOpened
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendFreeLivesPopupOpened_14773f4
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
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23817 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05792f78);
    FUN_012d0dc8(PTR_DAT_057c94c0);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057fc3d8);
    FUN_012d0dc8(PTR_DAT_057b6ad8);
    FUN_012d0dc8(PTR_DAT_057675a8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23817 = 1;
  }
                    /* try { // try from 015774d4 to 01677633 has its CatchHandler @ 015774d4
                       catch() { ... } // from try @ 015774d4 with catch @ 015774d4
                       catch() { ... } // from try @ 015776e4 with catch @ 015774d4
                       catch() { ... } // from try @ 0157779c with catch @ 015774d4
                       catch() { ... } // from try @ 0157783c with catch @ 015774d4 */
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) {
    plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar6,*(undefined8 *)PTR_DAT_057a1e60);
    puVar2 = PTR_DAT_057c8a60;
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) {
      lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar6,*(undefined8 *)PTR_DAT_05792f78);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar8 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar8,*(undefined8 *)PTR_DAT_057675a8,0), puVar4 = PTR_DAT_057db748,
         puVar3 = PTR_DAT_057caaf0, puVar2 = PTR_DAT_057636d0, plVar7 != (long *)0x0)) {
        lVar13 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_015775b8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_015775b8:
        uStack_44 = (*(code *)*puVar9)(plVar7,puVar9[1]);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_44);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar3,uVar10,0);
        puVar3 = PTR_DAT_057d3f68;
        if (lVar6 != 0) {
          uVar10 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                             (lVar6,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar8,*(undefined8 *)puVar3,uVar10,0);
          lVar13 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                    /* try { // try from 01577634 to 0167765b has its CatchHandler @ 015777b4 */
          if (((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) &&
             (lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar13,*(undefined8 *)PTR_DAT_057c94c0), puVar1 = PTR_DAT_057b6ad8
             , lVar13 != 0)) {
            lVar11 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__GetFreeLives_35b3598
                               (lVar13,0);
            uVar10 = *(undefined8 *)puVar1;
            if (lVar11 == 0) {
              uStack_48 = 0;
            }
            else {
              uStack_48 = *(undefined4 *)(lVar11 + 0x18);
            }
            uVar12 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_48);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar8,uVar10,uVar12,0);
                    /* try { // try from 01577690 to 016776b7 has its CatchHandler @ 015777b0 */
            lVar11 = *plVar7;
            uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                    /* try { // try from 015776d8 to 016776e3 has its CatchHandler @ 015777a8 */
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                  goto LAB_015776e0;
                }
                uVar14 = uVar14 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,1);
                    /* try { // try from 015776cc to 016776d7 has its CatchHandler @ 015777ac */
LAB_015776e0:
            puVar1 = PTR_DAT_0575f9f0;
                    /* try { // try from 015776e4 to 01677797 has its CatchHandler @ 015774d4 */
            iVar5 = (*(code *)*puVar9)(plVar7,puVar9[1]);
            uVar10 = Modules_Contexts_Application_ServerCommunication_Scripts_SegmentService__GetSegment_3e2f82c
                               (lVar6,0);
            lVar6 = Modules_Contexts_Home_Teams_Scripts_UI_TeamsService__GetFreeLives_35b3598
                              (lVar13,0);
            if (lVar6 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = (long)*(int *)(lVar6 + 0x18);
            }
            uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TeamsFreeLivesPopupOpened_2db0180
                               ((long)iVar5,uVar10,lVar6,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
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

