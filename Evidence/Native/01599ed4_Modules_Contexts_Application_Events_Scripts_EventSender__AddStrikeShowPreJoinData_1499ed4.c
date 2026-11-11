/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$AddStrikeShowPreJoinData
void Modules_Contexts_Application_Events_Scripts_EventSender__AddStrikeShowPreJoinData (Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$AddStrikeShowPreJoinData
   void Modules_Contexts_Application_Events_Scripts_EventSender__AddStrikeShowPreJoinData
   (Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__AddStrikeShowPreJoinData_1499ed4
               (long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 uVar20;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined4 uStack_44;
  
  puVar4 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2389c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0581a738);
    FUN_012d0dc8(PTR_DAT_057a4328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05814758);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_057f57a0);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_05815af0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057f52e0);
    FUN_012d0dc8(PTR_DAT_05806668);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2389c = 1;
  }
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
     (lVar10 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), auVar1 = ZEXT816(0),
     lVar10 != 0)) {
    lVar10 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar10,*(undefined8 *)PTR_DAT_057a4328);
    auVar2._8_8_ = auStack_60._8_8_;
    auVar2._0_8_ = auStack_60._0_8_;
    auVar1._8_8_ = auStack_60._8_8_;
    auVar1._0_8_ = auStack_60._0_8_;
    if ((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
       (lVar11 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), auVar1 = auVar2, lVar11 != 0
       )) {
      lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar11,*(undefined8 *)PTR_DAT_0581a738);
      auVar3._8_8_ = auStack_60._8_8_;
      auVar3._0_8_ = auStack_60._0_8_;
      auVar1._8_8_ = auStack_60._8_8_;
      auVar1._0_8_ = auStack_60._0_8_;
      if (((**(long **)(*(long *)puVar4 + 0xb8) != 0) &&
          (lVar12 = *(long *)(**(long **)(*(long *)puVar4 + 0xb8) + 0x18), auVar1 = auVar3,
          lVar12 != 0)) &&
         (plVar13 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                      (lVar12,*(undefined8 *)PTR_DAT_057a1e60),
         puVar4 = PTR_DAT_05814758, auVar1._8_8_ = auStack_60._8_8_, auVar1._0_8_ = auStack_60._0_8_
         , lVar11 != 0)) {
        lVar12 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetJoinWindowEndEpoch_2af44a4
                           (lVar11,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar4);
        }
        auStack_60 = System_DateTimeOffset__get_UtcNow_2103670(0);
        lVar14 = System_DateTimeOffset__ToUnixTimeSeconds_21054c8(auStack_60,0);
        puVar4 = PTR_DAT_057db748;
        auVar1 = auStack_60;
        if (plVar13 != (long *)0x0) {
          lVar17 = *plVar13;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar15 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0159a0f8;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_0131971c(plVar13,*(long *)PTR_DAT_057636d0,1);
LAB_0159a0f8:
          uStack_44 = (*(code *)*puVar15)(plVar13,puVar15[1]);
          uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_44);
          puVar7 = PTR_DAT_05815af0;
          puVar6 = PTR_DAT_057e4da8;
          puVar5 = PTR_DAT_057d6138;
          auVar1 = auStack_60;
          if (param_1 != 0) {
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)PTR_DAT_057caaf0,uVar16,0);
            uStack_68 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetStartTime_2af4480
                                  (lVar11,0);
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)puVar7,uVar16,0);
            uStack_70 = lVar12 - lVar14 & (lVar12 - lVar14 >> 0x3f ^ 0xffffffffffffffffU);
            uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_70);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)puVar6,uVar16,0);
            puVar8 = PTR_DAT_05806668;
            puVar7 = PTR_DAT_057f57a0;
            puVar6 = PTR_DAT_057f52e0;
            puVar5 = PTR_DAT_057e66c0;
            auVar1 = auStack_60;
            if (lVar10 != 0) {
              uVar16 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetReadableEventId_2af82cc
                                 (lVar10,0);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (param_1,*(undefined8 *)puVar5,uVar16,0);
              uVar9 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__IsStreakEnabled_2af4770
                                (lVar11,0);
              uVar20 = *(undefined8 *)puVar7;
              uStack_68 = CONCAT44(uStack_68._4_4_,uVar9) & 0xffffffff00000001;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (param_1,uVar20,uVar16,0);
              uVar9 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__IsLeagueEnabled_2af5374
                                (lVar11,0);
              uVar20 = *(undefined8 *)puVar6;
              uStack_68 = CONCAT44(uStack_68._4_4_,uVar9) & 0xffffffff00000001;
              uVar16 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (param_1,uVar20,uVar16,0);
              uVar16 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStrikeShowCurrentLeague_149a2a8
                                 (lVar11);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (param_1,*(undefined8 *)puVar8,uVar16,0);
              return;
            }
          }
        }
      }
    }
  }
  auStack_60 = auVar1;
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

