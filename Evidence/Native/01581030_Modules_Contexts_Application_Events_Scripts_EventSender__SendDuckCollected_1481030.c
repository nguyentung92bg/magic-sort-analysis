/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckCollected
void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckCollected (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t collectedDuckAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendDuckCollected
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckCollected
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t collectedDuckAmount,
   const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendDuckCollected_1481030
               (undefined8 param_1,int param_2)

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
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 uStack_74;
  byte abStack_70 [4];
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2383b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057b4910);
    FUN_012d0dc8(PTR_DAT_0577fc18);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05775120);
    FUN_012d0dc8(PTR_DAT_057a7318);
    FUN_012d0dc8(PTR_DAT_05802d00);
    FUN_012d0dc8(PTR_DAT_057dc2f8);
    FUN_012d0dc8(PTR_DAT_057aac28);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2383b = 1;
  }
  lVar14 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x18), lVar14 != 0)) {
    lVar14 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar14,*(undefined8 *)PTR_DAT_0577fc18);
    puVar2 = PTR_DAT_057c8a60;
    lVar15 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) {
      plVar11 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                  (lVar15,*(undefined8 *)PTR_DAT_057a1e60);
      lVar15 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar15 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar15,*(undefined8 *)PTR_DAT_05802d00,0), puVar5 = PTR_DAT_057db748,
         puVar3 = PTR_DAT_057caaf0, puVar2 = PTR_DAT_05775120, puVar1 = PTR_DAT_057636d0,
         plVar11 != (long *)0x0)) {
        lVar16 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_01581214;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)PTR_DAT_057636d0,1);
LAB_01581214:
        uStack_64 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_64);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar3,uVar13,0);
        iStack_68 = param_2;
        uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&iStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar15,*(undefined8 *)puVar2,uVar13,0);
        puVar6 = PTR_DAT_057dc2f8;
        puVar4 = PTR_DAT_057b4910;
        puVar3 = PTR_DAT_057aac28;
        puVar2 = PTR_DAT_057a7318;
        if (lVar14 != 0) {
          uStack_6c = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetProgress_1b984d4
                                (lVar14,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_6c);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar6,uVar13,0);
          abStack_70[0] =
               Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__HasVisibleMultiplier_1b98b8c
                         (lVar14,0);
          abStack_70[0] = abStack_70[0] & 1;
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,abStack_70);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar3,uVar13,0);
          uStack_74 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingMultiplierSeconds_1b98bac
                                (lVar14,0);
          uVar13 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_74);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar15,*(undefined8 *)puVar2,uVar13,0);
          lVar16 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_0158138c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar1,1);
LAB_0158138c:
          iVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          iVar8 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetProgress_1b984d4
                            (lVar14,0);
          uVar9 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__HasVisibleMultiplier_1b98b8c
                            (lVar14,0);
          iVar10 = Modules_Contexts_Home_DuckFestival_Scripts_DuckFestivalService__GetRemainingMultiplierSeconds_1b98bac
                             (lVar14,0);
          uVar13 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__DuckCollected_2db2620
                             ((double)iVar10,(long)iVar7,(long)param_2,(long)iVar8,uVar9 & 1,0);
          if (*(int *)(*(long *)PTR_DAT_0575f9f0 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)PTR_DAT_0575f9f0);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar13,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar15)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

