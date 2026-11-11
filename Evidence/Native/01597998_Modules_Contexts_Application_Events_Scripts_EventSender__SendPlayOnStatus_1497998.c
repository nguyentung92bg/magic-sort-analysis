/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendPlayOnStatus
void Modules_Contexts_Application_Events_Scripts_EventSender__SendPlayOnStatus (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t state, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendPlayOnStatus
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendPlayOnStatus
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t state, const
   MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendPlayOnStatus_1497998
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  ulong uVar17;
  int *piVar18;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2388e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057e8f70);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_05769838);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_0581aae8);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057dd990);
    FUN_012d0dc8(PTR_DAT_0577f600);
    FUN_012d0dc8(PTR_DAT_0580a230);
    FUN_012d0dc8(PTR_DAT_0576a478);
    FUN_012d0dc8(PTR_DAT_05814fb8);
    FUN_012d0dc8(PTR_DAT_0575d7e0);
    FUN_012d0dc8(PTR_DAT_057cc100);
    FUN_012d0dc8(PTR_DAT_057a4110);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2388e = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
     (lVar8 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar8 == 0)) goto LAB_01597f54;
  plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                             (lVar8,*(undefined8 *)PTR_DAT_057a1e60);
  if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
     (lVar8 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar8 == 0)) goto LAB_01597f54;
  plVar10 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                              (lVar8,*(undefined8 *)PTR_DAT_057e8f70);
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar8 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar8 == 0)) ||
     (lVar8 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar8,*(undefined8 *)PTR_DAT_05769838), puVar1 = PTR_DAT_0581aae8,
     plVar10 == (long *)0x0)) goto LAB_01597f54;
  lVar14 = *plVar10;
  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0581aae8) {
        puVar11 = (undefined8 *)(lVar14 + (long)(*piVar18 + 10) * 0x10 + 0x138);
        goto LAB_01597b90;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_0581aae8,10);
LAB_01597b90:
  lVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
  puVar2 = PTR_DAT_0577f600;
  if ((lVar14 == 0) || (lVar8 == 0)) goto LAB_01597f54;
  lVar14 = *(long *)(lVar14 + 0x20);
  uVar17 = Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnWithRewarded_PlayOnWithRewardedService__CanUsePlayOnWithRewarded_21499d8
                     (lVar8,0);
  if ((uVar17 & 1) == 0) {
LAB_01597c00:
    iVar5 = -1;
  }
  else {
    lVar12 = Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnWithRewarded_PlayOnWithRewardedService__GetPlayOnBehaviours_2149fac
                       (lVar8,0);
    if (lVar12 == 0) goto LAB_01597f54;
    if (*(int *)(lVar12 + 0x18) < 1) goto LAB_01597c00;
    lVar8 = Modules_Contexts_GamePlay_PlayOn_Scripts_PlayOnWithRewarded_PlayOnWithRewardedService__GetPlayOnBehaviours_2149fac
                      (lVar8,0);
    if (lVar8 == 0) goto LAB_01597f54;
    iVar5 = System_Collections_Generic_List_Int32Enum___get_Item_2051860
                      (lVar8,0,*(undefined8 *)puVar2);
  }
  lVar8 = *plVar10;
  uVar17 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
        puVar11 = (undefined8 *)(lVar8 + (long)(*piVar18 + 10) * 0x10 + 0x138);
        goto LAB_01597c54;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_0131971c(plVar10,*(long *)puVar1,10);
LAB_01597c54:
  lVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
  if ((lVar8 != 0) &&
     (lVar8 = Modules_Contexts_GamePlay_Levels_Scripts_ALevel__GetDefaultPlayOnBehaviour_1f170a8
                        (lVar8,0), puVar1 = PTR_DAT_057c8a60, lVar8 != 0)) {
    iVar6 = System_Collections_Generic_List_Int32Enum___get_Item_2051860
                      (lVar8,0,*(undefined8 *)puVar2);
    uVar16 = 2;
    if (iVar6 != 5) {
      uVar16 = 4;
    }
    if (iVar6 == 1) {
      uVar16 = 1;
    }
    lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar12 != 0) &&
       (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar12,*(undefined8 *)PTR_DAT_05814fb8,0), puVar2 = PTR_DAT_057db748,
       puVar1 = PTR_DAT_057caaf0, plVar9 != (long *)0x0)) {
      lVar15 = *plVar9;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_01597d38;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_01597d38:
      iStack_64 = (*(code *)*puVar11)(plVar9,puVar11[1]);
      uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar12,*(undefined8 *)puVar1,uVar13,0);
      puVar4 = PTR_DAT_0580a230;
      puVar3 = PTR_DAT_057a4110;
      puVar1 = PTR_DAT_0576a478;
      if (lVar14 != 0) {
        uStack_68 = *(undefined4 *)(lVar14 + 0xf8);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar4,uVar13,0);
        uStack_6c = *(undefined4 *)(lVar8 + 0x18);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_6c);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar3,uVar13,0);
        uStack_70 = uVar16;
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&uStack_70);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar1,uVar13,0);
        iStack_74 = iVar5;
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_74);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)PTR_DAT_0575d7e0,uVar13,0);
        puVar1 = PTR_DAT_0575f9f0;
        iStack_64 = *(int *)(lVar14 + 0xd4);
        if (param_2 == 4) {
          iStack_64 = iStack_64 + 1;
        }
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar2,&iStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)PTR_DAT_057cc100,uVar13,0);
        lVar15 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_01597ecc;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_01597ecc:
        iVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        iVar6 = *(int *)(lVar14 + 0xd4);
        if (param_2 == 4) {
          iVar6 = iVar6 + 1;
        }
        uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__PlayOnStatus_2dbc26c
                           ((long)iVar7,(long)*(int *)(lVar14 + 0xf8),(long)*(int *)(lVar8 + 0x18),
                            uVar16,(long)iVar5,(long)iVar6,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar12);
        return;
      }
    }
  }
LAB_01597f54:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

