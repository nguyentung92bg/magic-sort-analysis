/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSuperChargerStatus
void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerStatus (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerStatusEventDTO_o* dto, bool onAppLaunch, bool didWin, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendSuperChargerStatus
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerStatus
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this,
   Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerStatusEventDTO_o* dto, bool onAppLaunch,
   bool didWin, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendSuperChargerStatus_1496e50
               (undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  long lStack_128;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined1 auStack_bc [4];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  int iStack_88;
  byte abStack_84 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar6 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2388b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_0578c428);
    FUN_012d0dc8(PTR_DAT_057d8980);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057a0c88);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
    FUN_012d0dc8(PTR_DAT_057f8100);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_057dd3a0);
    FUN_012d0dc8(PTR_DAT_0576bd58);
    FUN_012d0dc8(PTR_DAT_057ab980);
    FUN_012d0dc8(PTR_DAT_057f5a88);
    FUN_012d0dc8(PTR_DAT_057fed28);
    FUN_012d0dc8(PTR_DAT_057b97d8);
    FUN_012d0dc8(PTR_DAT_057fb070);
    FUN_012d0dc8(PTR_DAT_057a12e0);
    FUN_012d0dc8(PTR_DAT_057e5598);
    FUN_012d0dc8(PTR_DAT_057889b8);
    FUN_012d0dc8(PTR_DAT_057cfbf0);
    FUN_012d0dc8(PTR_DAT_057d8ed8);
    FUN_012d0dc8(PTR_DAT_05774390);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05779728);
    bRam0000000005c2388b = 1;
  }
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar15 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar15 == 0))
  goto LAB_015976d0;
  lVar15 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                     (lVar15,*(undefined8 *)PTR_DAT_057a0c88);
  puVar5 = PTR_DAT_05774390;
  if ((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
     (lVar16 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar16 == 0))
  goto LAB_015976d0;
  plVar17 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar16,*(undefined8 *)PTR_DAT_057a1e60);
  if ((param_3 & 1) == 0) {
    if (((**(long **)(*(long *)puVar6 + 0xb8) == 0) ||
        (lVar16 = *(long *)(**(long **)(*(long *)puVar6 + 0xb8) + 0x18), lVar16 == 0)) ||
       (plVar18 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar16,*(undefined8 *)PTR_DAT_057e8f70), plVar18 == (long *)0x0
       )) goto LAB_015976d0;
    lVar16 = *plVar18;
    uVar26 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0581aae8) {
          puVar19 = (undefined8 *)(lVar16 + (long)(*piVar27 + 10) * 0x10 + 0x138);
          goto LAB_01597114;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar19 = (undefined8 *)FUN_0131971c(plVar18,*(long *)PTR_DAT_0581aae8,10);
LAB_01597114:
    lVar16 = (*(code *)*puVar19)(plVar18,puVar19[1]);
    if (lVar16 == 0) goto LAB_015976d0;
    lVar16 = *(long *)(lVar16 + 0x20);
    if (lVar16 == 0) {
      lVar28 = *(long *)puVar5;
      lStack_128 = 0;
      goto LAB_015971a4;
    }
    iVar1 = *(int *)(lVar16 + 0xbc);
    iVar2 = *(int *)(lVar16 + 0xf8);
    lVar28 = *(long *)(lVar16 + 0x50);
    iVar3 = *(int *)(lVar16 + 0xd4);
    iVar4 = *(int *)(lVar16 + 0xc4);
    bVar12 = *(char *)(lVar16 + 0xc0) != '\0';
    lStack_128 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetRainbowUsagesShorten_1f1a688
                           (lVar16,0);
    lVar16 = Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__GetMovesShorten_1f19f20(lVar16,0);
    puVar19 = (undefined8 *)PTR_DAT_057c8a60;
  }
  else {
    lVar28 = *(long *)puVar5;
    lStack_128 = lVar28;
LAB_015971a4:
    bVar12 = false;
    iVar4 = -1;
    iVar3 = -1;
    iVar1 = -1;
    iVar2 = -1;
    lVar16 = lStack_128;
    puVar19 = (undefined8 *)PTR_DAT_057c8a60;
  }
  PTR_DAT_057c8a60 = (undefined *)puVar19;
  if (plVar17 != (long *)0x0) {
    lVar25 = *plVar17;
    uVar26 = (ulong)*(ushort *)(lVar25 + 0x12a);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_057636d0) {
          puVar20 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
          goto LAB_01597210;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar20 = (undefined8 *)FUN_0131971c(plVar17,*(long *)PTR_DAT_057636d0,1);
LAB_01597210:
    iVar13 = (*(code *)*puVar20)(plVar17,puVar20[1]);
    lVar25 = thunk_FUN_01320e48(*puVar19);
    puVar5 = PTR_DAT_057db748;
    puVar6 = PTR_DAT_057caaf0;
    if (lVar25 != 0) {
      iVar13 = iVar13 - (param_4 & 1);
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar25,*(undefined8 *)PTR_DAT_057cfbf0,0);
      iStack_64 = iVar13;
      uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar25,*(undefined8 *)puVar6,uVar21,0);
      puVar6 = PTR_DAT_057d8ed8;
      if (lVar15 != 0) {
        uStack_68 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetProgress_2970030
                              (lVar15,0);
        uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar25,*(undefined8 *)puVar6,uVar21,0);
        lVar22 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                           (lVar15,0);
        puVar9 = PTR_DAT_0580a230;
        puVar8 = PTR_DAT_057fed28;
        puVar7 = PTR_DAT_057fb070;
        puVar6 = PTR_DAT_057b4910;
        if (lVar22 != 0) {
          uStack_80 = *(undefined8 *)PTR_DAT_057f8100;
          uStack_70 = *(undefined4 *)(lVar22 + 0x14);
          uStack_78 = 0xffffffffffffffff;
          uVar21 = System_Enum__ToString_23a4eac(&uStack_80,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar8,uVar21,0);
          abStack_84[0] =
               Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__IsActive_296fea4
                         (lVar15,0);
          abStack_84[0] = abStack_84[0] & 1;
          uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,abStack_84);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar7,uVar21,0);
          iStack_88 = iVar2;
          uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_88);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar25,*(undefined8 *)puVar9,uVar21,0);
          puVar11 = PTR_DAT_057f5a88;
          puVar10 = PTR_DAT_057d8980;
          puVar9 = PTR_DAT_057b97d8;
          puVar8 = PTR_DAT_057a12e0;
          puVar7 = PTR_DAT_05779728;
          if (param_2 != 0) {
            uStack_a0 = *(undefined8 *)PTR_DAT_0578c428;
            uStack_98 = 0xffffffffffffffff;
            uStack_90 = *(undefined4 *)(param_2 + 0x10);
            uVar21 = System_Enum__ToString_23a4eac(&uStack_a0,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar25,*(undefined8 *)puVar8,uVar21,0);
            uStack_b8 = *(undefined8 *)puVar10;
            uStack_b0 = 0xffffffffffffffff;
            uStack_a8 = *(undefined4 *)(param_2 + 0x14);
            uVar21 = System_Enum__ToString_23a4eac(&uStack_b8,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar25,*(undefined8 *)puVar7,uVar21,0);
            auStack_bc[0] = bVar12;
            uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,auStack_bc);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar25,*(undefined8 *)puVar9,uVar21,0);
            iStack_c0 = iVar1;
            uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_c0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar25,*(undefined8 *)puVar11,uVar21,0);
            iStack_c4 = iVar3;
            uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_c4);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar25,*(undefined8 *)PTR_DAT_057889b8,uVar21,0);
            iStack_c8 = iVar4;
            uVar21 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_c8);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar25,*(undefined8 *)PTR_DAT_0576bd58,uVar21,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar25,*(undefined8 *)PTR_DAT_057ab980,lVar28,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar25,*(undefined8 *)PTR_DAT_057dd3a0,lStack_128,0);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (lVar25,*(undefined8 *)PTR_DAT_057e5598,lVar16,0);
            iVar14 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetProgress_2970030
                               (lVar15,0);
            lVar22 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__GetConfig_29704d4
                               (lVar15,0);
            puVar6 = PTR_DAT_057c9ca0;
            if (lVar22 != 0) {
              uStack_d0 = *(undefined4 *)(lVar22 + 0x14);
              uStack_e0 = *(undefined8 *)PTR_DAT_057f8100;
              uStack_d8 = 0xffffffffffffffff;
              uVar21 = System_Enum__ToString_23a4eac(&uStack_e0,0);
              uVar26 = Modules_Contexts_Home_SuperCharger_Scripts_SuperChargerService__IsActive_296fea4
                                 (lVar15,0);
              uStack_80 = *(undefined8 *)PTR_DAT_0578c428;
              uStack_78 = 0xffffffffffffffff;
              uStack_70 = *(undefined4 *)(param_2 + 0x10);
              uVar23 = System_Enum__ToString_23a4eac(&uStack_80,0);
              uStack_a0 = *(undefined8 *)PTR_DAT_057d8980;
              uStack_98 = 0xffffffffffffffff;
              uStack_90 = *(undefined4 *)(param_2 + 0x14);
              uVar24 = System_Enum__ToString_23a4eac(&uStack_a0,0);
              puVar5 = PTR_DAT_0575f9f0;
              if (lVar28 == 0) {
                lVar28 = **(long **)(*(long *)puVar6 + 0xb8);
              }
              if (lVar16 == 0) {
                lVar16 = **(long **)(*(long *)puVar6 + 0xb8);
              }
              if (lStack_128 == 0) {
                lStack_128 = **(long **)(*(long *)puVar6 + 0xb8);
              }
              uVar21 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__SuperchargerStatus_2dbbeb0
                                 ((long)iVar13,(long)iVar14,uVar21,uVar26 & 1,(long)iVar2,uVar23,
                                  uVar24,bVar12,(long)iVar3,(long)iVar4,(long)iVar1,lVar28,lVar16,
                                  lStack_128,0);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_0130472c(*(long *)puVar5);
              }
              GrandSDK_Analytics_Analytics__Track_2b38d30(uVar21,0);
              Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4
                        (param_1,lVar25);
              return;
            }
          }
        }
      }
    }
  }
LAB_015976d0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

