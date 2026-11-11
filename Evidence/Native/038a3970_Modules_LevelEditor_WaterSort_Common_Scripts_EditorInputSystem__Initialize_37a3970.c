/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$Initialize
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Initialize (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$Initialize
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Initialize
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Initialize_37a3970
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  
  puVar5 = PTR_DAT_057b8520;
  if ((bRam0000000005c33e09 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05788338);
    FUN_012d0dc8(PTR_DAT_057743e8);
    FUN_012d0dc8(PTR_DAT_057f9278);
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_057a7e90);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0580af90);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05789738);
    FUN_012d0dc8(PTR_DAT_0578bdc8);
    FUN_012d0dc8(PTR_DAT_057e5408);
    FUN_012d0dc8(PTR_DAT_05808c78);
    FUN_012d0dc8(PTR_DAT_057c9ef8);
    FUN_012d0dc8(PTR_DAT_0576c260);
    FUN_012d0dc8(PTR_DAT_057bc1a0);
    FUN_012d0dc8(PTR_DAT_0575e390);
    FUN_012d0dc8(PTR_DAT_05781ed0);
    FUN_012d0dc8(PTR_DAT_0576ccc0);
    FUN_012d0dc8(PTR_DAT_0575ffd0);
    FUN_012d0dc8(PTR_DAT_057aed38);
    FUN_012d0dc8(PTR_DAT_057b2bd0);
    FUN_012d0dc8(PTR_DAT_057584e8);
    FUN_012d0dc8(PTR_DAT_05766158);
    FUN_012d0dc8(PTR_DAT_057a9310);
    FUN_012d0dc8(PTR_DAT_057eb990);
    FUN_012d0dc8(PTR_DAT_057fd220);
    FUN_012d0dc8(PTR_DAT_05803bb0);
    FUN_012d0dc8(PTR_DAT_057f8bb8);
    FUN_012d0dc8(PTR_DAT_057f21e8);
    FUN_012d0dc8(PTR_DAT_057fcbe8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057b7ab0);
    FUN_012d0dc8(PTR_DAT_057819c0);
    FUN_012d0dc8(PTR_DAT_057b56b0);
    FUN_012d0dc8(PTR_DAT_057a7558);
    FUN_012d0dc8(PTR_DAT_05763818);
    bRam0000000005c33e09 = 1;
  }
  puVar7 = PTR_DAT_057b2bd0;
  puVar6 = PTR_DAT_057743e8;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar7);
  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
  if ((lVar10 != 0) &&
     (System_Action_object____ctor_1647468(lVar10,param_1,*(undefined8 *)PTR_DAT_0578bdc8,0),
     puVar6 = PTR_DAT_0577f3c8, puVar5 = PTR_DAT_05766158, lVar9 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Subscribe_333d3d4
              (lVar9,lVar10,*(undefined8 *)PTR_DAT_057a7558);
    lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar5);
    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
    if ((lVar10 != 0) &&
       (System_Action_int____ctor_1646aac(lVar10,param_1,*(undefined8 *)PTR_DAT_05808c78,0),
       puVar4 = PTR_DAT_057f8bb8, puVar7 = PTR_DAT_057b7ab0, puVar5 = PTR_DAT_0578b048, lVar9 != 0))
    {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int___Subscribe_333cf9c
                (lVar9,lVar10,*(undefined8 *)PTR_DAT_057b7ab0);
      lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar4);
      lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
      if ((lVar10 != 0) &&
         (System_Action___ctor_21239bc(lVar10,param_1,*(undefined8 *)PTR_DAT_0575e390,0),
         puVar4 = PTR_DAT_05803bb0, lVar9 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar9,lVar10,0);
        lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar4);
        lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
        if ((lVar10 != 0) &&
           (System_Action___ctor_21239bc(lVar10,param_1,*(undefined8 *)PTR_DAT_057bc1a0,0),
           puVar8 = PTR_DAT_057f9278, puVar4 = PTR_DAT_057584e8, lVar9 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098(lVar9,lVar10,0);
          lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar4);
          lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar8);
          if ((lVar10 != 0) &&
             (System_Action_Int32Enum____ctor_1646b94
                        (lVar10,param_1,*(undefined8 *)PTR_DAT_057e5408,0),
             puVar8 = PTR_DAT_057fcbe8, puVar4 = PTR_DAT_05788338, lVar9 != 0)) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Subscribe_333d1b8
                      (lVar9,lVar10,*(undefined8 *)PTR_DAT_057b56b0);
            lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar8);
            lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
            if ((lVar10 != 0) &&
               (System_Action_Int32Enum____ctor_1646b94
                          (lVar10,param_1,*(undefined8 *)PTR_DAT_0576ccc0,0),
               puVar4 = PTR_DAT_057f21e8, lVar9 != 0)) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Subscribe_333d1b8
                        (lVar9,lVar10,*(undefined8 *)PTR_DAT_057819c0);
              lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar4);
              lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
              if ((lVar10 != 0) &&
                 (System_Action_int____ctor_1646aac
                            (lVar10,param_1,*(undefined8 *)PTR_DAT_05781ed0,0),
                 puVar6 = PTR_DAT_057aed38, lVar9 != 0)) {
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int___Subscribe_333cf9c
                          (lVar9,lVar10,*(undefined8 *)puVar7);
                lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                  (*(undefined8 *)puVar6);
                lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                if ((lVar10 != 0) &&
                   (System_Action___ctor_21239bc(lVar10,param_1,*(undefined8 *)PTR_DAT_05789738,0),
                   puVar7 = PTR_DAT_057a9310, puVar6 = PTR_DAT_057a7e90, lVar9 != 0)) {
                  Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                            (lVar9,lVar10,0);
                  lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                    (*(undefined8 *)puVar7);
                  lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
                  if ((lVar10 != 0) &&
                     (System_Action_Int32Enum__int____ctor_1c4ba2c
                                (lVar10,param_1,*(undefined8 *)PTR_DAT_057c9ef8,0),
                     puVar6 = PTR_DAT_057fd220, lVar9 != 0)) {
                    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum__int___Subscribe_333e074
                              (lVar9,lVar10,*(undefined8 *)PTR_DAT_05763818);
                    lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                      (*(undefined8 *)puVar6);
                    lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                    if ((lVar10 != 0) &&
                       (System_Action___ctor_21239bc
                                  (lVar10,param_1,*(undefined8 *)PTR_DAT_0576c260,0),
                       puVar5 = PTR_DAT_0576aae0, lVar9 != 0)) {
                      Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Subscribe_40e7098
                                (lVar9,lVar10,0);
                      if ((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
                         (lVar9 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar9 != 0)
                         ) {
                        lVar9 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                          (lVar9,*(undefined8 *)PTR_DAT_0580af90);
                        plVar13 = (long *)(param_1 + 0x68);
                        *plVar13 = lVar9;
                        FUN_012d0d74(plVar13,lVar9);
                        puVar5 = PTR_DAT_057eb990;
                        if (*plVar13 != 0) {
                          plVar13 = (long *)(*plVar13 + 0x10);
                          *plVar13 = param_1;
                          FUN_012d0d74(plVar13,param_1);
                          lVar9 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                            (*(undefined8 *)puVar5);
                          puVar5 = PTR_DAT_0575ffd0;
                          if (lVar9 != 0) {
                            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Invoke_40e28a4
                                      (lVar9,0);
                            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                              thunk_FUN_0130472c();
                            }
                            uVar11 = UnityEngine_EventSystems_EventSystem__get_current_27931ec(0);
                            puVar12 = (undefined8 *)(param_1 + 0x60);
                            *puVar12 = uVar11;
                            if (iRam0000000005c3d478 != 0) {
                              puVar1 = (ulong *)(((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                              do {
                                cVar2 = '\x01';
                                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar3) {
                                  *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
                                  cVar2 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar2 != '\0');
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

