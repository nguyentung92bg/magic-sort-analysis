/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$InitializePurchasing
void Modules_Contexts_Application_IAP_Scripts_IAPManager__InitializePurchasing (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_Collections_Generic_Dictionary_string__IAPConfigModel__o* iapConfigModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$InitializePurchasing
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__InitializePurchasing
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this,
   System_Collections_Generic_Dictionary_string__IAPConfigModel__o* iapConfigModels, const
   MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPManager__InitializePurchasing_13885a4
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000005c2306a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578e5f0);
    FUN_012d0dc8(PTR_DAT_05761150);
    FUN_012d0dc8(PTR_DAT_057f29f0);
    FUN_012d0dc8(PTR_DAT_057ba5e0);
    FUN_012d0dc8(PTR_DAT_057aee18);
    FUN_012d0dc8(PTR_DAT_057d6798);
    FUN_012d0dc8(PTR_DAT_057f5ed0);
    FUN_012d0dc8(PTR_DAT_057b7100);
    FUN_012d0dc8(PTR_DAT_057b4188);
    FUN_012d0dc8(PTR_DAT_0580c470);
    FUN_012d0dc8(PTR_DAT_05818a98);
    bRam0000000005c2306a = 1;
  }
  puVar3 = PTR_DAT_057d7c80;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    if ((bRam0000000005c2306d & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057d7c80);
      bRam0000000005c2306d = 1;
    }
    puVar2 = PTR_DAT_057b4188;
    puVar1 = PTR_DAT_0578e5f0;
    if ((**(long **)(*(long *)puVar3 + 0xb8) == 0) || ((*(long **)(*(long *)puVar3 + 0xb8))[1] == 0)
       ) {
      Modules_Contexts_Application_IAP_Scripts_IAPManager__InitializeDefaultStore_13888d0
                (param_1,param_2);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = UnityEngine_Purchasing_StandardPurchasingModule__Instance_3f69468(0);
      lVar9 = *(long *)puVar1;
      lVar8 = **(long **)(lVar9 + 0x38);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_0131942c(lVar8);
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_0130472c(lVar8);
      }
      lVar8 = **(long **)(lVar9 + 0x38);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_0131942c();
      }
      lVar8 = UnityEngine_Purchasing_ConfigurationBuilder__Instance_380373c
                        (uVar5,**(undefined8 **)(lVar8 + 0xb8),0);
      puVar4 = PTR_DAT_0580c470;
      puVar2 = PTR_DAT_057f29f0;
      puVar1 = PTR_DAT_057ba5e0;
      puVar3 = PTR_DAT_057b7100;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                (&uStack_a8,param_2,*(undefined8 *)PTR_DAT_05761150);
      uStack_70 = CONCAT44(uStack_94,uStack_98);
      uStack_78 = uStack_a0;
      uStack_80 = uStack_a8;
      lStack_68 = lStack_90;
      uStack_60 = uStack_88;
      while (uVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                               (&uStack_80,*(undefined8 *)puVar1), lVar9 = lStack_68,
            uVar5 = uStack_70, (uVar6 & 1) != 0) {
        if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uStack_a8 = *(undefined8 *)puVar3;
        uStack_98 = *(undefined4 *)(lStack_68 + 0x18);
        uStack_a0 = 0xffffffffffffffff;
        uVar7 = System_Enum__ToString_23a4eac(&uStack_a8,0);
        System_String__Concat_1ed10d8(uVar5,*(undefined8 *)puVar4,uVar7,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        UnityEngine_Purchasing_ConfigurationBuilder__AddProduct_38039d0
                  (lVar8,uVar5,*(undefined4 *)(lVar9 + 0x18),0);
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                (&uStack_80,*(undefined8 *)puVar2);
      UnityEngine_Purchasing_UnityPurchasing__Initialize_38091b8(param_1,lVar8,0);
    }
  }
  return;
}

