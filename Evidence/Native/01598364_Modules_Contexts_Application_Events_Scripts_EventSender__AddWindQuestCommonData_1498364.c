/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$AddWindQuestCommonData
void Modules_Contexts_Application_Events_Scripts_EventSender__AddWindQuestCommonData (Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$AddWindQuestCommonData
   void Modules_Contexts_Application_Events_Scripts_EventSender__AddWindQuestCommonData
   (Modules_Contexts_Application_Events_Scripts_Event_o* eventToSend, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__AddWindQuestCommonData_1498364
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23894 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0575ba08);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0575d1e0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_058031d8);
    FUN_012d0dc8(PTR_DAT_057d8178);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_057bae80);
    FUN_012d0dc8(PTR_DAT_057a93a8);
    FUN_012d0dc8(PTR_DAT_057b1938);
    FUN_012d0dc8(PTR_DAT_05779590);
    FUN_012d0dc8(PTR_DAT_057b6548);
    FUN_012d0dc8(PTR_DAT_0576f4f0);
    FUN_012d0dc8(PTR_DAT_057841a0);
    FUN_012d0dc8(PTR_DAT_0575a580);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e66c0);
    bRam0000000005c23894 = 1;
  }
  lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
    lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar7,*(undefined8 *)PTR_DAT_0575ba08);
    lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar8 != 0) &&
       (((lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0 &&
         (plVar4 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar8,*(undefined8 *)PTR_DAT_057a1e60), lVar7 != 0)) &&
        (uVar5 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestService__GetReadableEventId_2d9ebf0
                           (lVar7,0), param_1 != 0)))) {
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (param_1,*(undefined8 *)PTR_DAT_057e66c0,uVar5,0);
      puVar1 = PTR_DAT_0575a580;
      if (*(long *)(lVar7 + 0x18) != 0) {
        uVar5 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetEventId_2d9c150
                          (*(long *)(lVar7 + 0x18),0);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (param_1,*(undefined8 *)puVar1,uVar5,0);
        if ((*(long *)(lVar7 + 0x18) != 0) &&
           (lVar8 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetConfig_2d9c524
                              (*(long *)(lVar7 + 0x18),0), puVar3 = PTR_DAT_057db748,
           puVar1 = PTR_DAT_057b6548, lVar8 != 0)) {
          uStack_34 = *(undefined4 *)(lVar8 + 0x14);
          uVar5 = thunk_FUN_01320a8c(*(undefined8 *)PTR_DAT_057db748,&uStack_34);
          Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                    (param_1,*(undefined8 *)puVar1,uVar5,0);
          puVar1 = PTR_DAT_057caaf0;
          if (plVar4 != (long *)0x0) {
            lVar8 = *plVar4;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057636d0) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_015985e0;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar6 = (undefined8 *)FUN_0131971c(plVar4,*(long *)PTR_DAT_057636d0,1);
LAB_015985e0:
            uStack_38 = (*(code *)*puVar6)(plVar4,puVar6[1]);
            uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_38);
            Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                      (param_1,*(undefined8 *)puVar1,uVar5,0);
            puVar3 = PTR_DAT_057ce7d0;
            puVar1 = PTR_DAT_057841a0;
            if (*(long *)(lVar7 + 0x18) != 0) {
              uStack_44 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetSegmentScore_2d9c5b0
                                    (*(long *)(lVar7 + 0x18),0);
              uVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_44);
              Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                        (param_1,*(undefined8 *)puVar1,uVar5,0);
              puVar3 = PTR_DAT_057b1938;
              puVar1 = PTR_DAT_0576f4f0;
              if (*(long *)(lVar7 + 0x18) != 0) {
                uStack_50 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetTaskType_2d9c174
                                      (*(long *)(lVar7 + 0x18),0);
                uStack_60 = *(undefined8 *)puVar3;
                uStack_58 = 0xffffffffffffffff;
                uVar5 = System_Enum__ToString_23a4eac(&uStack_60,0);
                Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                          (param_1,*(undefined8 *)puVar1,uVar5,0);
                if (*(long *)(lVar7 + 0x18) != 0) {
                  lVar7 = Modules_Contexts_Home_WindQuest_Scripts_WindQuestDataService__GetGoals_2d9c0e8
                                    (*(long *)(lVar7 + 0x18),0);
                  puVar3 = PTR_DAT_057a93a8;
                  puVar1 = PTR_DAT_05779590;
                  if (lVar7 != 0) {
                    lVar8 = *(long *)PTR_DAT_057a93a8;
                    if (*(int *)(lVar8 + 0xe0) == 0) {
                      thunk_FUN_0130472c();
                      lVar8 = *(long *)puVar3;
                    }
                    puVar2 = PTR_DAT_0575d1e0;
                    uVar5 = *(undefined8 *)puVar1;
                    lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x48);
                    if (lVar11 == 0) {
                      if (*(int *)(lVar8 + 0xe0) == 0) {
                        thunk_FUN_0130472c();
                        lVar8 = *(long *)puVar3;
                      }
                      uVar12 = **(undefined8 **)(lVar8 + 0xb8);
                      lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
                      if (lVar11 == 0) goto LAB_015987c0;
                      System_Converter_object__int____ctor_156b8f8
                                (lVar11,uVar12,*(undefined8 *)PTR_DAT_057bae80,0);
                      plVar4 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
                      *plVar4 = lVar11;
                      FUN_012d0d74(plVar4,lVar11);
                    }
                    puVar1 = PTR_DAT_058031d8;
                    uVar12 = System_Collections_Generic_List_object___ConvertAll_int__2925a10
                                       (lVar7,lVar11,*(undefined8 *)PTR_DAT_057d8178);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_0130472c(*(long *)puVar1);
                    }
                    uVar12 = Newtonsoft_Json_JsonConvert__SerializeObject_35368d4(uVar12,0);
                    Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                              (param_1,uVar5,uVar12,0);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_015987c0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

