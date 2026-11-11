/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$RestorePurchases
void Modules_Contexts_Application_IAP_Scripts_IAPManager__RestorePurchases (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$RestorePurchases
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__RestorePurchases
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPManager__RestorePurchases_1389c70
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  code *pcStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_057d7c80;
  if ((bRam0000000005c23079 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05807948);
    FUN_012d0dc8(PTR_DAT_05763e78);
    FUN_012d0dc8(PTR_DAT_057d7c80);
    FUN_012d0dc8(PTR_DAT_0579a050);
    FUN_012d0dc8(PTR_DAT_05807458);
    bRam0000000005c23079 = 1;
  }
  puVar2 = PTR_DAT_05807948;
  plVar7 = *(long **)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    lVar8 = *(long *)PTR_DAT_05807458;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar8 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
          goto LAB_01489d50;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_0131971c(plVar7);
LAB_01489d50:
    thunk_FUN_01306508(*(undefined8 *)(lVar4 + 8),lVar8,&pcStack_40);
    plVar7 = (long *)(*pcStack_40)(plVar7,uStack_38);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if ((lVar4 != 0) &&
       (System_Action_bool__object____ctor_1c4b3a4(lVar4,param_1,*(undefined8 *)PTR_DAT_05763e78,0),
       plVar7 != (long *)0x0)) {
      lVar8 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0579a050) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_01489df8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0579a050,4);
LAB_01489df8:
      (*(code *)*puVar3)(plVar7,lVar4,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

