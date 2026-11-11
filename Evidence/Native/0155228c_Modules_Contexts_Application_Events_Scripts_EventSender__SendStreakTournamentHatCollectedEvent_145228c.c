/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendStreakTournamentHatCollectedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentHatCollectedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* levelId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendStreakTournamentHatCollectedEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentHatCollectedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* levelId,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendStreakTournamentHatCollectedEvent_145228c
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23775 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0579fa30);
    FUN_012d0dc8(PTR_DAT_057592d0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057641e8);
    FUN_012d0dc8(PTR_DAT_0578ee60);
    FUN_012d0dc8(PTR_DAT_05784f50);
    FUN_012d0dc8(PTR_DAT_05784e60);
    FUN_012d0dc8(PTR_DAT_0579cca8);
    FUN_012d0dc8(PTR_DAT_0579c3a0);
    FUN_012d0dc8(PTR_DAT_05765f38);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23775 = 1;
  }
  puVar2 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar10 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar10 != 0)) {
    plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                (lVar10,*(undefined8 *)PTR_DAT_057a1e60);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar1 = PTR_DAT_05784e60;
    if (lVar10 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar10,*(undefined8 *)PTR_DAT_05784f50,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar10,*(undefined8 *)puVar1,param_2,0);
      puVar3 = PTR_DAT_057db748;
      puVar2 = PTR_DAT_057caaf0;
      puVar1 = PTR_DAT_057636d0;
      if (plVar11 != (long *)0x0) {
        lVar16 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_01552474;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01552474:
        puVar4 = PTR_DAT_05765f38;
        uStack_64 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar2,uVar13,0);
        uVar13 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038();
        Modules_Contexts_Application_Events_Scripts_Event__AddDatas_1cc6390(lVar10,uVar13,0);
        lVar16 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0x21) * 0x10 + 0x138);
              goto LAB_01552514;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,0x21);
LAB_01552514:
        uStack_68 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar10,*(undefined8 *)puVar4,uVar13,0);
        lVar16 = Modules_Contexts_Application_Events_Scripts_EventSender__GetStreakStats_1451038();
        lVar17 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
              puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_015525a0;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_015525a0:
        iVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        lVar17 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
              puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 0x21) * 0x10 + 0x138);
              goto LAB_01552600;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,0x21);
LAB_01552600:
        iVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        puVar6 = PTR_DAT_0579fa30;
        puVar5 = PTR_DAT_0579cca8;
        puVar4 = PTR_DAT_0579c3a0;
        puVar3 = PTR_DAT_057641e8;
        puVar2 = PTR_DAT_0575f9f0;
        puVar1 = PTR_DAT_057592d0;
        if (lVar16 != 0) {
          uVar13 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                             (lVar16,*(undefined8 *)PTR_DAT_0578ee60,*(undefined8 *)PTR_DAT_057592d0
                             );
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar6);
          }
          uVar9 = System_Convert__ToBoolean_212e304(uVar13,0);
          uVar13 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                             (lVar16,*(undefined8 *)puVar3,*(undefined8 *)puVar1);
          uVar13 = System_Convert__ToInt64_2130754(uVar13,0);
          uVar14 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                             (lVar16,*(undefined8 *)puVar4,*(undefined8 *)puVar1);
          uVar14 = System_Convert__ToInt64_2130754(uVar14,0);
          uVar15 = System_Collections_Generic_Dictionary_object__object___get_Item_3ed021c
                             (lVar16,*(undefined8 *)puVar5,*(undefined8 *)puVar1);
          uVar15 = System_Convert__ToInt64_2130754(uVar15,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__HatCollected_2db98ac
                             (param_2,(long)iVar7,(long)iVar8,uVar9 & 1,uVar13,uVar14,uVar15,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar2);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar10)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

