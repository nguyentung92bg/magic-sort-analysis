/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMiniGameInfoPopUpImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameInfoPopUpImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendMiniGameInfoPopUpImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameInfoPopUpImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t source, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendMiniGameInfoPopUpImpression_1488cb8
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23853 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c3020);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_05812c68);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_057bed40);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_05782070);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    bRam0000000005c23853 = 1;
  }
  lVar16 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
    lVar16 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar16,*(undefined8 *)PTR_DAT_057c3020);
    puVar2 = PTR_DAT_057c8a60;
    lVar17 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x18), lVar17 != 0)) {
      plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar17,*(undefined8 *)PTR_DAT_057a1e60);
      lVar17 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar17 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar17,*(undefined8 *)PTR_DAT_057bed40,0), puVar5 = PTR_DAT_057e4da8,
         puVar4 = PTR_DAT_057d6138, puVar3 = PTR_DAT_057d3f68, puVar2 = PTR_DAT_057b8b10,
         puVar1 = PTR_DAT_0575a580, lVar16 != 0)) {
        uVar10 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetEventId_20b5d9c
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar1,uVar10,0);
        uStack_68 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetStartTimeAsUnix_20b5d84
                              (lVar16,0);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar2,uVar10,0);
        uStack_70 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetRemainingSeconds_20b5b9c
                              (lVar16,0);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar5,uVar10,0);
        uVar10 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetSegment_20b58f0
                           (lVar16,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar17,*(undefined8 *)puVar3,uVar10,0);
        puVar6 = PTR_DAT_05812c68;
        puVar5 = PTR_DAT_057e3618;
        puVar4 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_05782070;
        puVar1 = PTR_DAT_057636d0;
        if (plVar9 != (long *)0x0) {
          lVar18 = *plVar9;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar11 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_01588fa4;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_01588fa4:
          uStack_74 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar3,uVar10,0);
          uStack_90 = *(undefined8 *)puVar6;
          uStack_88 = 0xffffffffffffffff;
          uStack_80 = param_2;
          uVar10 = System_Enum__ToString_23a4eac(&uStack_90,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar5,uVar10,0);
          uStack_94 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetTridentCount_20b6084
                                (lVar16,0);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_94);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar17,*(undefined8 *)puVar2,uVar10,0);
          uVar10 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetEventId_20b5d9c
                             (lVar16,0);
          uVar12 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetStartTimeAsUnix_20b5d84
                             (lVar16,0);
          uVar13 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetRemainingSeconds_20b5b9c
                             (lVar16,0);
          uVar14 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetSegment_20b58f0
                             (lVar16,0);
          lVar18 = *plVar9;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar11 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_015890cc;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar1,1);
LAB_015890cc:
          iVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
          uStack_b0 = *(undefined8 *)puVar6;
          uStack_a8 = 0xffffffffffffffff;
          uStack_a0 = param_2;
          uVar15 = System_Enum__ToString_23a4eac(&uStack_b0,0);
          iVar8 = Modules_Contexts_Home_MiniGame_Scripts_MiniGameService__GetTridentCount_20b6084
                            (lVar16,0);
          uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__UnderwaterTreasuresInfoImpression_2db3d04
                             (uVar10,uVar12,uVar13,uVar14,(long)iVar7,uVar15,(long)iVar8,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar17)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

