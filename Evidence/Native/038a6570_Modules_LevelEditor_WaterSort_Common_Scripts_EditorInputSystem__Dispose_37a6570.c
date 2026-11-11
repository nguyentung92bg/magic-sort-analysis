/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$Dispose
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Dispose (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorInputSystem$$Dispose
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Dispose
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem_o* __this, const MethodInfo*
   method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorInputSystem__Dispose_37a6570
               (undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar5 = PTR_DAT_057b8520;
  if ((bRam0000000005c33e0f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057743e8);
    FUN_012d0dc8(PTR_DAT_057f9278);
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_057a7e90);
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0580af90);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0578bdc8);
    FUN_012d0dc8(PTR_DAT_057e5408);
    FUN_012d0dc8(PTR_DAT_05808c78);
    FUN_012d0dc8(PTR_DAT_057c9ef8);
    FUN_012d0dc8(PTR_DAT_0576c260);
    FUN_012d0dc8(PTR_DAT_057bc1a0);
    FUN_012d0dc8(PTR_DAT_0575e390);
    FUN_012d0dc8(PTR_DAT_057b2bd0);
    FUN_012d0dc8(PTR_DAT_057584e8);
    FUN_012d0dc8(PTR_DAT_05766158);
    FUN_012d0dc8(PTR_DAT_057a9310);
    FUN_012d0dc8(PTR_DAT_057fd220);
    FUN_012d0dc8(PTR_DAT_05803bb0);
    FUN_012d0dc8(PTR_DAT_057f8bb8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_058175a8);
    FUN_012d0dc8(PTR_DAT_0578d5f8);
    FUN_012d0dc8(PTR_DAT_0578bcc0);
    FUN_012d0dc8(PTR_DAT_05786448);
    bRam0000000005c33e0f = 1;
  }
  puVar6 = PTR_DAT_057b2bd0;
  puVar4 = PTR_DAT_057743e8;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                    (*(undefined8 *)puVar6);
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if ((lVar8 != 0) &&
     (System_Action_object____ctor_1647468(lVar8,param_1,*(undefined8 *)PTR_DAT_0578bdc8,0),
     puVar4 = PTR_DAT_0577f3c8, puVar5 = PTR_DAT_05766158, lVar7 != 0)) {
    Modules_Infrastructure_Common_Scripts_SignalNS_Signal_object___Unsubscribe_333d3e8
              (lVar7,lVar8,*(undefined8 *)PTR_DAT_058175a8);
    lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar5);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
    if ((lVar8 != 0) &&
       (System_Action_int____ctor_1646aac(lVar8,param_1,*(undefined8 *)PTR_DAT_05808c78,0),
       puVar4 = PTR_DAT_057f8bb8, puVar5 = PTR_DAT_0578b048, lVar7 != 0)) {
      Modules_Infrastructure_Common_Scripts_SignalNS_Signal_int___Unsubscribe_333cfb0
                (lVar7,lVar8,*(undefined8 *)PTR_DAT_0578d5f8);
      lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                        (*(undefined8 *)puVar4);
      lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
      if ((lVar8 != 0) &&
         (System_Action___ctor_21239bc(lVar8,param_1,*(undefined8 *)PTR_DAT_0575e390,0),
         puVar6 = PTR_DAT_057f9278, puVar4 = PTR_DAT_057584e8, lVar7 != 0)) {
        Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c(lVar7,lVar8,0);
        lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar4);
        lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
        if ((lVar8 != 0) &&
           (System_Action_Int32Enum____ctor_1646b94(lVar8,param_1,*(undefined8 *)PTR_DAT_057e5408,0)
           , puVar4 = PTR_DAT_05803bb0, lVar7 != 0)) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Unsubscribe_333d1cc
                    (lVar7,lVar8,*(undefined8 *)PTR_DAT_0578bcc0);
          lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar4);
          lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
          if ((lVar8 != 0) &&
             (System_Action___ctor_21239bc(lVar8,param_1,*(undefined8 *)PTR_DAT_057bc1a0,0),
             puVar6 = PTR_DAT_057a9310, puVar4 = PTR_DAT_057a7e90, lVar7 != 0)) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c
                      (lVar7,lVar8,0);
            lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar6);
            lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
            if ((lVar8 != 0) &&
               (System_Action_Int32Enum__int____ctor_1c4ba2c
                          (lVar8,param_1,*(undefined8 *)PTR_DAT_057c9ef8,0),
               puVar4 = PTR_DAT_057fd220, lVar7 != 0)) {
              Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum__int___Unsubscribe_333e088
                        (lVar7,lVar8,*(undefined8 *)PTR_DAT_05786448);
              lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                                (*(undefined8 *)puVar4);
              lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
              if ((lVar8 != 0) &&
                 (System_Action___ctor_21239bc(lVar8,param_1,*(undefined8 *)PTR_DAT_0576c260,0),
                 puVar5 = PTR_DAT_0576aae0, lVar7 != 0)) {
                Modules_Infrastructure_Common_Scripts_SignalNS_Signal__Unsubscribe_40e709c
                          (lVar7,lVar8,0);
                if ((**(long **)(*(long *)puVar5 + 0xb8) != 0) &&
                   ((lVar7 = *(long *)(**(long **)(*(long *)puVar5 + 0xb8) + 0x18), lVar7 != 0 &&
                    (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                       (lVar7,*(undefined8 *)PTR_DAT_0580af90), lVar7 != 0)))) {
                  puVar9 = (undefined8 *)(lVar7 + 0x10);
                  *puVar9 = 0;
                  if (iRam0000000005c3d478 != 0) {
                    puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

