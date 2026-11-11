/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMiniGameFinished
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameFinished (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMiniGameFinished
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameFinished
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameFinished_1489928
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23855 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c3020);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057d6f00);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057918b8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05782070);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23855 = 1;
  }
  lVar15 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
    lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar15,*(undefined8 *)PTR_DAT_057c3020);
    puVar2 = PTR_DAT_057c8a60;
    lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
      plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar16,*(undefined8 *)PTR_DAT_057a1e60);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar16 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar16,*(undefined8 *)PTR_DAT_057918b8,0), puVar5 = PTR_DAT_057e4da8,
         puVar4 = PTR_DAT_057d6138, puVar3 = PTR_DAT_057d3f68, puVar2 = PTR_DAT_057b8b10,
         puVar1 = PTR_DAT_0575a580, lVar15 != 0)) {
        uVar10 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetEventId_20b5d9c
                           (lVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar1,uVar10,0);
        uStack_68 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetStartTimeAsUnix_20b5d84
                              (lVar15,0);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar2,uVar10,0);
        uStack_70 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetRemainingSeconds_20b5b9c
                              (lVar15,0);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar5,uVar10,0);
        uVar10 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetSegment_20b58f0
                           (lVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar3,uVar10,0);
        puVar4 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057d6f00;
        puVar2 = PTR_DAT_057caaf0;
        puVar1 = PTR_DAT_057636d0;
        if (plVar9 != (long *)0x0) {
          lVar17 = *plVar9;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_01589c00;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_01589c00:
          uStack_74 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar2,uVar10,0);
          iVar6 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetCurrentStage_20b6654
                            (lVar15,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar3);
          }
          puVar3 = PTR_DAT_05782070;
          puVar2 = PTR_DAT_05774660;
          iVar6 = iVar6 + 1;
          if (cRam0000000005c230ab == '\0') {
            FUN_012d0dc8(PTR_DAT_05800a28);
            FUN_012d0dc8(PTR_DAT_057d6f00);
            cRam0000000005c230ab = '\x01';
          }
          if (9 < iVar6) {
            iVar6 = 10;
          }
          if (iVar6 < 2) {
            iVar6 = 1;
          }
          iStack_78 = iVar6;
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&iStack_78);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar2,uVar10,0);
          uStack_7c = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetTridentCount_20b6084
                                (lVar15,0);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_7c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar3,uVar10,0);
          uVar10 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetEventId_20b5d9c
                             (lVar15,0);
          uVar12 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetStartTimeAsUnix_20b5d84
                             (lVar15,0);
          uVar13 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetRemainingSeconds_20b5b9c
                             (lVar15,0);
          uVar14 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetSegment_20b58f0
                             (lVar15,0);
          lVar17 = *plVar9;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
                puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_01589d94;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar1,1);
LAB_01589d94:
          puVar1 = PTR_DAT_0575f9f0;
          iVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          iVar6 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetCurrentStage_20b6654
                            (lVar15,0);
          iVar6 = iVar6 + 1;
          if (cRam0000000005c230ab == '\0') {
            FUN_012d0dc8(PTR_DAT_05800a28);
            FUN_012d0dc8(PTR_DAT_057d6f00);
            cRam0000000005c230ab = '\x01';
          }
          if (9 < iVar6) {
            iVar6 = 10;
          }
          if (iVar6 < 2) {
            iVar6 = 1;
          }
          iVar8 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetTridentCount_20b6084
                            (lVar15,0);
          uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__UnderwaterTreasuresFinished_2db3fbc
                             (uVar10,uVar12,uVar13,uVar14,(long)iVar7,iVar6,(long)iVar8,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar16)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

