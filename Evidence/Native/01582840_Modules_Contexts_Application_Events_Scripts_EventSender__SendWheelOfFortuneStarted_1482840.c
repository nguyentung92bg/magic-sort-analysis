/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneStarted
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneStarted (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWheelOfFortuneStarted
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneStarted
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWheelOfFortuneStarted_1482840
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
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 uStack_54;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2383f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057b5998);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_05813f60);
    FUN_012d0dc8(PTR_DAT_057d3f68);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c2383f = 1;
  }
  lVar11 = **(long **)(*(long *)puVar2 + 0xb8);
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
    lVar11 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                       (lVar11,*(undefined8 *)PTR_DAT_057b5998);
    lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
    if ((lVar12 != 0) &&
       ((lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0 &&
        (plVar7 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                    (lVar12,*(undefined8 *)PTR_DAT_057a1e60),
        puVar2 = PTR_DAT_057c8a60, lVar11 != 0)))) {
      uVar8 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetSegment_2da6128
                        (lVar11,0);
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      puVar2 = PTR_DAT_057d3f68;
      if (lVar12 != 0) {
        Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                  (lVar12,*(undefined8 *)PTR_DAT_05813f60,0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar2,uVar8,0);
        puVar5 = PTR_DAT_057e66c0;
        puVar4 = PTR_DAT_057db748;
        puVar3 = PTR_DAT_057caaf0;
        puVar2 = PTR_DAT_057636d0;
        if (plVar7 != (long *)0x0) {
          lVar13 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_057636d0) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_01582a28;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_057636d0,1);
LAB_01582a28:
          puVar1 = PTR_DAT_0575f9f0;
          uStack_54 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_54);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar3,uVar10,0);
          uVar10 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar11,0);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (lVar12,*(undefined8 *)puVar5,uVar10,0);
          lVar13 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_01582ad4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar9 = (undefined8 *)FUN_0131971c(plVar7,*(long *)puVar2,1);
LAB_01582ad4:
          iVar6 = (*(code *)*puVar9)(plVar7,puVar9[1]);
          uVar10 = Modules_Contexts_Home_WheelOfFortune_WheelOfFortuneService__GetReadableEventId_2da90ec
                             (lVar11,0);
          uVar8 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WheelOfFortuneStarted_2db2d88
                            (0,uVar8,(long)iVar6,uVar10,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c(*(long *)puVar1);
          }
          GrandSDK_Analytics_Analytics__Track_2b38d30(uVar8,0);
          Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar12)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

