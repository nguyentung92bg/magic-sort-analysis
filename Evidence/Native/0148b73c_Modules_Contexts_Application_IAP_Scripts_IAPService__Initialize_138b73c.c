/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$Initialize
void Modules_Contexts_Application_IAP_Scripts_IAPService__Initialize (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPService$$Initialize
   void Modules_Contexts_Application_IAP_Scripts_IAPService__Initialize
   (Modules_Contexts_Application_IAP_Scripts_IAPService_o* __this, const MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPService__Initialize_138b73c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long alStack_50 [2];
  
  puVar1 = PTR_DAT_057e9780;
  if ((bRam0000000005c23085 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f5fa8);
    FUN_012d0dc8(PTR_DAT_0575d9f8);
    FUN_012d0dc8(PTR_DAT_057e9780);
    bRam0000000005c23085 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_0575d9f8;
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(long *)(param_1 + 0x10) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x10),lVar2);
    lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
                (lVar2,*(undefined8 *)PTR_DAT_057f5fa8);
      plVar4 = (long *)(param_1 + 0x78);
      *plVar4 = lVar2;
      FUN_012d0d74(plVar4,lVar2);
      Modules_Contexts_Application_IAP_Scripts_IAPService__CollectIAPConfigModels_138b810(param_1);
      puVar1 = PTR_DAT_0575bf30;
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 != 0) {
        lVar3 = *plVar4;
        if ((bRam0000000005c23069 & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_0575bf30);
          bRam0000000005c23069 = 1;
        }
        lStack_58 = 0;
        uStack_60 = 0;
        alStack_50[1] = 0;
        alStack_50[0] = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2445128(&uStack_c0,0);
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        uStack_70 = uStack_b8;
        uStack_78 = uStack_c0;
        uStack_60 = uStack_a8;
        uStack_68 = uStack_b0;
        FUN_012d0d74((ulong)&uStack_80 | 8,0);
        lStack_58 = lVar2;
        FUN_012d0d74(&lStack_58,lVar2);
        alStack_50[0] = lVar3;
        FUN_012d0d74(alStack_50,lVar3);
        uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
        System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_IAPManager__InitializeUnityServices_d__15__216e768
                  ((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

