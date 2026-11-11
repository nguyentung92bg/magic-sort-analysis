/* IL2CPP: Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopPurchaseFailedClosedEvent
void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopPurchaseFailedClosedEvent (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Application.Events.Scripts.EventSender$$SendWebShopPurchaseFailedClosedEvent
   void 
   Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopPurchaseFailedClosedEvent
   (Modules_Contexts_Application_Events_Scripts_EventSender_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_Events_Scripts_EventSender__SendWebShopPurchaseFailedClosedEvent_14951a0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined4 uStack_54;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c23885 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575f9f0);
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057f83f8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057c8a60);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_05800b30);
    FUN_012d0dc8(PTR_DAT_0578d930);
    FUN_012d0dc8(PTR_DAT_057d4c78);
    FUN_012d0dc8(PTR_DAT_057caaf0);
    FUN_012d0dc8(PTR_DAT_057e33a0);
    bRam0000000005c23885 = 1;
  }
  lVar12 = **(long **)(*(long *)puVar1 + 0xb8);
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    plVar8 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar12,*(undefined8 *)PTR_DAT_057a1e60);
    lVar12 = **(long **)(*(long *)puVar1 + 0xb8);
    if ((lVar12 != 0) &&
       ((lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0 &&
        (lVar12 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar12,*(undefined8 *)PTR_DAT_057f83f8), lVar12 != 0)))) {
      lVar17 = *(long *)(lVar12 + 0x48);
      lVar12 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057c8a60);
      if ((lVar12 != 0) &&
         (Modules_Contexts_Application_Events_Scripts_Event___ctor_1cc626c
                    (lVar12,*(undefined8 *)PTR_DAT_057e33a0,0), puVar6 = PTR_DAT_05800b30,
         puVar5 = PTR_DAT_057db748, puVar3 = PTR_DAT_057caaf0, puVar1 = PTR_DAT_057636d0,
         plVar8 != (long *)0x0)) {
        lVar13 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_057636d0) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_01595364;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,1);
LAB_01595364:
        puVar4 = PTR_DAT_057d4c78;
        puVar2 = PTR_DAT_0578d930;
        uStack_54 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar5,&uStack_54);
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar3,uVar10,0);
        if (lVar17 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(lVar17 + 0x18);
        }
        lVar14 = *(long *)puVar4;
        if (lVar13 != 0) {
          lVar14 = lVar13;
        }
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar6,lVar14,0);
        if (lVar17 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(lVar17 + 0x20);
        }
        lVar14 = *(long *)puVar4;
        if (lVar13 != 0) {
          lVar14 = lVar13;
        }
        Modules_Contexts_Application_Events_Scripts_Event__AddData_1cc6310
                  (lVar12,*(undefined8 *)puVar2,lVar14,0);
        lVar13 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_01595450;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_0131971c(plVar8,*(long *)puVar1,1);
LAB_01595450:
        puVar1 = PTR_DAT_0575f9f0;
        iVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (lVar17 == 0) {
          lVar13 = *(long *)puVar4;
          lVar14 = 0;
          lVar11 = lVar13;
        }
        else {
          lVar14 = *(long *)(lVar17 + 0x20);
          lVar13 = *(long *)puVar4;
          lVar11 = lVar13;
          if (*(long *)(lVar17 + 0x18) != 0) {
            lVar11 = *(long *)(lVar17 + 0x18);
          }
        }
        if (lVar14 != 0) {
          lVar13 = lVar14;
        }
        uVar10 = GrandSDK_Models_MagicSort_Events_AnalyticsEvents__WebShopPurchaseFailedClosed_2dbafa8
                           ((long)iVar7,lVar11,lVar13,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)puVar1);
        }
        GrandSDK_Analytics_Analytics__Track_2b38d30(uVar10,0);
        Modules_Contexts_Application_Events_Scripts_EventSender__SendEvent_1447db4(param_1,lVar12);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

