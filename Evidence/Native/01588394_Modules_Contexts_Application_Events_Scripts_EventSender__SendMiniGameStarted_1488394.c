/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMiniGameStarted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameStarted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMiniGameStarted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameStarted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameStarted_1488394
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23851 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c3020);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05770528);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23851 = 1;
  }
  lVar13 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
    lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar13,*(undefined8 *)PTR_DAT_057c3020);
    puVar3 = PTR_DAT_057c8a60;
    lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
      plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar14,*(undefined8 *)PTR_DAT_057a1e60);
      lVar14 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar14 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar14,*(undefined8 *)PTR_DAT_05770528,0), puVar5 = PTR_DAT_057e4da8,
         puVar2 = PTR_DAT_057d6138, puVar4 = PTR_DAT_057d3f68, puVar3 = PTR_DAT_057b8b10,
         puVar1 = PTR_DAT_0575a580, lVar13 != 0)) {
        uVar8 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetEventId_20b5d9c(lVar13,0)
        ;
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar1,uVar8,0);
        uStack_58 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetStartTimeAsUnix_20b5d84
                              (lVar13,0);
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar3,uVar8,0);
        uStack_60 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetRemainingSeconds_20b5b9c
                              (lVar13,0);
        uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_60);
                    /* try { // try from 015885a4 to 0168879b has its CatchHandler @ 015885a4
                       catch() { ... } // from try @ 015885a4 with catch @ 015885a4
                       catch() { ... } // from try @ 015887fc with catch @ 015885a4
                       catch() { ... } // from try @ 01588840 with catch @ 015885a4
                       catch() { ... } // from try @ 01588878 with catch @ 015885a4
                       catch() { ... } // from try @ 015888b8 with catch @ 015885a4 */
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar5,uVar8,0);
        uVar8 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetSegment_20b58f0(lVar13,0)
        ;
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar14,*(undefined8 *)puVar4,uVar8,0);
        puVar4 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_057636d0;
        if (plVar7 != (long *)0x0) {
          lVar15 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar9 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0158863c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_0158863c:
          puVar2 = PTR_DAT_0575f9f0;
          uStack_64 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_64);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar14,*(undefined8 *)puVar3,uVar8,0);
          uVar8 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetEventId_20b5d9c
                            (lVar13,0);
          uVar10 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetStartTimeAsUnix_20b5d84
                             (lVar13,0);
          uVar11 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetRemainingSeconds_20b5b9c
                             (lVar13,0);
          uVar12 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetSegment_20b58f0
                             (lVar13,0);
          lVar13 = *plVar7;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_01588708;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar1,1);
LAB_01588708:
          iVar6 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__UnderwaterTreasuresStarted_2db3adc
                            (uVar8,uVar10,uVar11,uVar12,(long)iVar6,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar14)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

