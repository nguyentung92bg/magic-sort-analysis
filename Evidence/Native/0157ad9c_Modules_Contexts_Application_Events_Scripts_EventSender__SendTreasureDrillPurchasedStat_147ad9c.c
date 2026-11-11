/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTreasureDrillPurchasedStat
void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillPurchasedStat (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendTreasureDrillPurchasedStat
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillPurchasedStat
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendTreasureDrillPurchasedStat_147ad9c
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23824 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057d5558);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05803950);
    FUN_012d0dc8(PTR_DAT_057fae40);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23824 = 1;
  }
  puVar4 = PTR_DAT_057c8a60;
  lVar12 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
    lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if (lVar12 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar12,*(undefined8 *)PTR_DAT_05803950,0);
      lVar13 = **(long **)(*(long *)puVar1 + 0xb8);
      if (((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) &&
         (lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar13,*(undefined8 *)PTR_DAT_057d5558), puVar3 = PTR_DAT_057fae40,
         puVar4 = PTR_DAT_057db748, puVar1 = PTR_DAT_057d3f68, lVar13 != 0)) {
        uVar9 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetSegment_33047d4
                          (lVar13,0);
        iVar6 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetTotalCompletedTaskCount_3304468
                          (lVar13,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar1,uVar9,0);
        iStack_64 = iVar6;
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar3,uVar10,0);
        puVar5 = PTR_DAT_057caaf0;
        puVar3 = PTR_DAT_057636d0;
        puVar1 = PTR_DAT_0575a580;
        if (plVar8 != (long *)0x0) {
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_0157afcc;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_0157afcc:
          puVar2 = PTR_DAT_0575f9f0;
          uStack_68 = (*(code *)*puVar11)(plVar8,puVar11[1]);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
                    /* try { // try from 0157affc to 0167b0cf has its CatchHandler @ 0157affc
                       catch() { ... } // from try @ 0157affc with catch @ 0157affc
                       catch() { ... } // from try @ 0157b2a0 with catch @ 0157affc
                       catch() { ... } // from try @ 0157b33c with catch @ 0157affc
                       catch() { ... } // from try @ 0157b394 with catch @ 0157affc
                       catch() { ... } // from try @ 0157b410 with catch @ 0157affc */
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar5,uVar10,0);
          uVar10 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetEventId_33047ec
                             (lVar13,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar1,uVar10,0);
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_0157b078;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar3,1);
LAB_0157b078:
          iVar7 = (*(code *)*puVar11)(plVar8,puVar11[1]);
          uVar10 = Modules_Contexts_Home_Monetization_TreasureDrill_Scripts_TreasureDrillService__GetEventId_33047ec
                             (lVar13,0);
          uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__TreasureDrillPurchased_2db0fa0
                            (uVar9,(long)iVar6,(long)iVar7,uVar10,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
                    /* try { // try from 0157b0d0 to 0167b0db has its CatchHandler @ 0157b1d8 */
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar12)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0157b0fc to 0167b133 has its CatchHandler @ 0157b1e4 */
  FUN_012d0ef0();
}

