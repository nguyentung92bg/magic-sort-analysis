/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCoinSpentEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendCoinSpentEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t currencySpendReason, int32_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendCoinSpentEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendCoinSpentEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, int32_t currencySpendReason,
   int32_t amount, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendCoinSpentEvent_144b398
               (undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_58;
  int iStack_54;
  
  puVar3 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23759 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0580b848);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057e3618);
    FUN_012d0dc8(PTR_DAT_057e0098);
    FUN_012d0dc8(PTR_DAT_057f03b0);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c23759 = 1;
  }
  puVar2 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar3 + 0xb8) != 0) &&
     (lVar7 = *(long *)(**(long **)(*(long *)puVar3 + 0xb8) + 0x18), lVar7 != 0)) {
    plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar7,*(undefined8 *)PTR_DAT_057a1e60);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar5 = PTR_DAT_0580b848;
    puVar4 = PTR_DAT_057e3618;
    puVar2 = PTR_DAT_057e0098;
    puVar3 = PTR_DAT_057db748;
    if (lVar7 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar7,*(undefined8 *)PTR_DAT_057f03b0,0);
      uStack_78 = *(undefined8 *)puVar5;
      uStack_70 = 0xffffffffffffffff;
      uStack_68 = param_2;
      uVar9 = System_Enum__ToString_23a4eac(&uStack_78,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)puVar4,uVar9,0);
      iStack_54 = param_3;
      uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_54);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar7,*(undefined8 *)puVar2,uVar9,0);
      puVar4 = PTR_DAT_057caaf0;
      puVar2 = PTR_DAT_057636d0;
      if (plVar8 != (long *)0x0) {
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0154b594;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_0154b594:
        puVar1 = PTR_DAT_0575f9f0;
        uStack_58 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        uVar9 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&uStack_58);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar7,*(undefined8 *)puVar4,uVar9,0);
        uStack_90 = *(undefined8 *)puVar5;
        uStack_88 = 0xffffffffffffffff;
        uStack_80 = param_2;
        uVar9 = System_Enum__ToString_23a4eac(&uStack_90,0);
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0154b640;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar2,1);
LAB_0154b640:
        iVar6 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        uVar9 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__CoinSpent_2db718c
                          (uVar9,(long)param_3,(long)iVar6,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar9,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar7);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

