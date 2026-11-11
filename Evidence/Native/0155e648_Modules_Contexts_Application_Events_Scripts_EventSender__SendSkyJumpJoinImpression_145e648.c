/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpJoinImpression
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpJoinImpression (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSkyJumpJoinImpression
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpJoinImpression
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t impressionSource,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSkyJumpJoinImpression_145e648
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
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2379e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057e1e18);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057b4858);
    FUN_012d0dc8(PTR_DAT_057dbe68);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_0579c778);
    FUN_012d0dc8(PTR_DAT_057b8b10);
    FUN_012d0dc8(PTR_DAT_05774660);
    FUN_012d0dc8(PTR_DAT_057fcce8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2379e = 1;
  }
  lVar15 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
    lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar15,*(undefined8 *)PTR_DAT_057e1e18);
    puVar3 = PTR_DAT_057c8a60;
    lVar16 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x18), lVar16 != 0)) {
      plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar16,*(undefined8 *)PTR_DAT_057a1e60);
      lVar16 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if ((lVar16 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar16,*(undefined8 *)PTR_DAT_0579c778,0), puVar6 = PTR_DAT_057fcce8,
         puVar5 = PTR_DAT_057e4da8, puVar4 = PTR_DAT_057db748, puVar1 = PTR_DAT_057d6138,
         puVar3 = PTR_DAT_057b8b10, puVar2 = PTR_DAT_057b4858, lVar15 != 0)) {
        uVar11 = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetTournamentId_2f17dfc
                           (lVar15,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar6,uVar11,0);
        uStack_68 = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetStartTimeAsUnix_2f174c4
                              (lVar15,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar3,uVar11,0);
        uStack_6c = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetRemainingSeconds_2f172f4
                              (lVar15,0);
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)puVar5,uVar11,0);
        uStack_88 = *(undefined8 *)puVar2;
        uStack_80 = 0xffffffffffffffff;
        uStack_78 = param_2;
        uVar11 = System_Enum__ToString_23a4eac(&uStack_88,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)PTR_DAT_057dbe68,uVar11,0);
        uStack_8c = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetScore_2f16d0c(lVar15,0)
        ;
        uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_8c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar16,*(undefined8 *)PTR_DAT_05774660,uVar11,0);
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar10 != (long *)0x0) {
          lVar17 = *plVar10;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0155e96c;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_057636d0,1);
LAB_0155e96c:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_90 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar11 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_90);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar16,*(undefined8 *)puVar3,uVar11,0);
          uVar11 = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetTournamentId_2f17dfc
                             (lVar15,0);
          uVar13 = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetStartTimeAsUnix_2f174c4
                             (lVar15,0);
          iVar7 = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetRemainingSeconds_2f172f4
                            (lVar15,0);
          uStack_a8 = *(undefined8 *)PTR_DAT_057b4858;
          uStack_a0 = 0xffffffffffffffff;
          uStack_98 = param_2;
          uVar14 = System_Enum__ToString_23a4eac(&uStack_a8,0);
          iVar8 = Modules_Contexts_Home_SkyJump_Scripts_SkyJumpService__GetScore_2f16d0c(lVar15,0);
          lVar15 = *plVar10;
          uVar18 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
                puVar12 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0155ea60;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar2,1);
LAB_0155ea60:
          iVar9 = (*(code *)*puVar12)(plVar10,puVar12[1]);
          uVar11 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SkyJumpJoinImpression_2dac0c0
                             (uVar11,uVar13,(long)iVar7,uVar14,(long)iVar8,(long)iVar9,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar11,0);
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

