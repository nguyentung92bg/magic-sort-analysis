/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$StartPurchaseProcess
void Modules_Contexts_Application_IAP_Scripts_IAPManager__StartPurchaseProcess (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_String_o* productId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$StartPurchaseProcess
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__StartPurchaseProcess
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_String_o* productId, const
   MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPManager__StartPurchaseProcess_1388bec
               (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
  if ((bRam0000000005c2306f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d7c80);
    FUN_012d0dc8(PTR_DAT_057cef18);
    FUN_012d0dc8(PTR_DAT_057f1480);
    FUN_012d0dc8(PTR_DAT_05801548);
    FUN_012d0dc8(PTR_DAT_057a2fa8);
    FUN_012d0dc8(PTR_DAT_057f3538);
    FUN_012d0dc8(PTR_DAT_057df880);
    bRam0000000005c2306f = 1;
  }
  puVar5 = PTR_DAT_057d7c80;
  if ((bRam0000000005c2306d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d7c80);
    bRam0000000005c2306d = 1;
  }
  puVar4 = PTR_DAT_057cef18;
  puVar7 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
  plVar12 = (long *)*puVar7;
  if ((plVar12 == (long *)0x0) || (puVar7[1] == 0)) {
    uVar6 = 1;
  }
  else {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_057cef18) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01488d20;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0131971c(plVar12,*(long *)PTR_DAT_057cef18,0);
LAB_01488d20:
    lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if (lVar8 == 0) {
LAB_01488e0c:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    lVar8 = UnityEngine_Purchasing_ProductCollection__WithID_3804f80(lVar8,param_2,0);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x20) != '\0')) {
      if (*(long *)(lVar8 + 0x10) != 0) {
        System_String__Concat_1ec3580
                  (*(undefined8 *)PTR_DAT_057f3538,*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),0
                  );
        plVar12 = (long *)**(undefined8 **)(*(long *)puVar5 + 0xb8);
        if (plVar12 != (long *)0x0) {
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                goto LAB_01488df0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar4,3);
LAB_01488df0:
                    /* WARNING: Could not recover jumptable at 0x01488e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar7)(plVar12,lVar8,puVar7[1]);
          return;
        }
      }
      goto LAB_01488e0c;
    }
    if (param_2 == 0) {
      uVar6 = Modules_Contexts_Application_IAP_Scripts_PurchaseResult__Fail_1388230(3);
      param_2 = 0;
      goto LAB_01488d04;
    }
    uVar6 = 4;
  }
  uVar6 = Modules_Contexts_Application_IAP_Scripts_PurchaseResult__Fail_1388230(uVar6);
LAB_01488d04:
  if ((bRam0000000005c23078 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e81f0);
    bRam0000000005c23078 = 1;
  }
  uVar10 = Modules_Contexts_Application_IAP_Scripts_IAPManager__IsRequested_13899e8(param_1,param_2)
  ;
  if ((uVar10 & 1) != 0) {
    plVar12 = (long *)(param_1 + 0x10);
    if ((*plVar12 != 0) && (lVar8 = *(long *)(*plVar12 + 0x10), lVar8 != 0)) {
      System_Threading_Tasks_TaskCompletionSource_object___TrySetResult_1db6120
                (lVar8,uVar6,*(undefined8 *)PTR_DAT_057e81f0);
      *plVar12 = 0;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar12 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar12 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

