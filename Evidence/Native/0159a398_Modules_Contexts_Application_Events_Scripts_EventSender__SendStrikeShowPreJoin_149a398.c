/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStrikeShowPreJoin
void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowPreJoin (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStrikeShowPreJoin
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowPreJoin
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendStrikeShowPreJoin_149a398
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23896 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_05802ff8);
    FUN_012d0dc8(PTR_DAT_0581a738);
    FUN_012d0dc8(PTR_DAT_057a4328);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e4da8);
    FUN_012d0dc8(PTR_DAT_057f50c8);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23896 = 1;
  }
  lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar12,*(undefined8 *)PTR_DAT_0581a738);
    puVar1 = PTR_DAT_057c8a60;
    lVar13 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x18), lVar13 != 0)) {
      lVar13 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                         (lVar13,*(undefined8 *)PTR_DAT_057a4328);
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar4 = PTR_DAT_05802ff8;
      puVar3 = PTR_DAT_057db748;
      puVar1 = PTR_DAT_057caaf0;
      puVar2 = PTR_DAT_0579fa30;
      if (lVar6 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar6,*(undefined8 *)PTR_DAT_057f50c8,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__AddStrikeShowPreJoinData_1499ed4
                  (lVar6);
        uVar14 = *(undefined8 *)(lVar6 + 0x18);
        uStack_64 = 0;
        uVar7 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_64);
        uVar7 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                          (uVar14,*(undefined8 *)puVar1,uVar7,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar2);
        }
        uVar7 = System_Convert__ToInt64_2130754(uVar7,0);
        puVar1 = PTR_DAT_057e4da8;
        if (lVar12 != 0) {
          uVar14 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__GetStartTime_2af4480
                             (lVar12,0);
          uVar14 = System_Convert__ToInt64_21309c8(uVar14,0);
          uVar15 = *(undefined8 *)(lVar6 + 0x18);
          uStack_68 = 0;
          uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
          uVar8 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__271d130
                            (uVar15,*(undefined8 *)puVar1,uVar8,*(undefined8 *)puVar4);
          uVar8 = System_Convert__ToInt64_2130754(uVar8,0);
          if (lVar13 != 0) {
            uVar15 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowService__GetReadableEventId_2af82cc
                               (lVar13,0);
            uVar5 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__IsStreakEnabled_2af4770
                              (lVar12,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar2);
            }
            puVar1 = PTR_DAT_0575f9f0;
            uVar9 = System_Convert__ToInt64_2130964(uVar5 & 1,0);
            uVar5 = Modules_Contexts_Home_StrikeShow_Scripts_StrikeShowDataService__IsLeagueEnabled_2af5374
                              (lVar12,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar2);
            }
            uVar10 = System_Convert__ToInt64_2130964(uVar5 & 1,0);
            uVar11 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStrikeShowCurrentLeague_149a2a8
                               (lVar12);
            uVar7 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__StrikeShowPreJoin_2dbf028
                              (uVar7,uVar14,uVar8,uVar15,uVar9,uVar10,uVar11,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_0130472c(*(long *)puVar1);
            }
            GrandSDK_Analytics_Analytics__Track_2b38d30(uVar7,0);
            Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                      (param_1,lVar6);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

