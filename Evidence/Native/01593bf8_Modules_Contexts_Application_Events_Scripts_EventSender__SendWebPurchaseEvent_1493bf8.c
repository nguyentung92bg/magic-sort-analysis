/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebPurchaseEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebPurchaseEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId, System_String_o* webProductId, System_String_o* transactionId, float price, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebPurchaseEvent
   void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebPurchaseEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, System_String_o* productId,
   System_String_o* webProductId, System_String_o* transactionId, float price, const MethodInfo*
   method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebPurchaseEvent_1493bf8
               (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 uStack_68;
  float fStack_64;
  
  puVar2 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2387d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057ce7d0);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_0578def0);
    FUN_012d0dc8(PTR_DAT_057c9128);
    FUN_012d0dc8(PTR_DAT_057a32a0);
    FUN_012d0dc8(PTR_DAT_057d60e0);
    FUN_012d0dc8(PTR_DAT_05803a18);
    FUN_012d0dc8(PTR_DAT_05812618);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    bRam0000000005c2387d = 1;
  }
  puVar3 = PTR_DAT_057c8a60;
  if ((**(long **)(*(long *)puVar2 + 0xb8) != 0) &&
     (lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18), lVar8 != 0)) {
    plVar9 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar8,*(undefined8 *)PTR_DAT_057a1e60);
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
    puVar6 = PTR_DAT_05812618;
    puVar5 = PTR_DAT_05800b30;
    puVar1 = PTR_DAT_057d60e0;
    puVar4 = PTR_DAT_057ce7d0;
    puVar3 = PTR_DAT_057c9128;
    puVar2 = PTR_DAT_0578def0;
    if (lVar8 != 0) {
      Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                (lVar8,*(undefined8 *)PTR_DAT_05803a18,0);
      fStack_64 = param_1;
      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&fStack_64);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar3,uVar10,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar1,*(undefined8 *)puVar6,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar2,param_5,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)puVar5,param_3,0);
      Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                (lVar8,*(undefined8 *)PTR_DAT_057a32a0,param_4,0);
      puVar4 = PTR_DAT_057db748;
      puVar3 = PTR_DAT_057caaf0;
      puVar2 = PTR_DAT_057636d0;
      if (plVar9 != (long *)0x0) {
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_01593e70;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,1);
LAB_01593e70:
        puVar1 = PTR_DAT_0575f9f0;
        uStack_68 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar4,&uStack_68);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar8,*(undefined8 *)puVar3,uVar10,0);
        lVar12 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_01593efc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar11 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar2,1);
LAB_01593efc:
        iVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__Purchase_2dbb1a8
                           ((double)param_1,*(undefined8 *)PTR_DAT_05812618,param_5,param_3,param_4,
                            (long)iVar7,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEventWithoutExtraParameter_1447f64
                  (param_2,lVar8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

