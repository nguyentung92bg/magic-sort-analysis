/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$InitializeDefaultStore
void Modules_Contexts_Application_IAP_Scripts_IAPManager__InitializeDefaultStore (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this, System_Collections_Generic_Dictionary_string__IAPConfigModel__o* iapConfigModels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.IAP.Scripts.IAPManager$$InitializeDefaultStore
   void Modules_Contexts_Application_IAP_Scripts_IAPManager__InitializeDefaultStore
   (Modules_Contexts_Application_IAP_Scripts_IAPManager_o* __this,
   System_Collections_Generic_Dictionary_string__IAPConfigModel__o* iapConfigModels, const
   MethodInfo* method); */

void Modules_Contexts_Application_IAP_Scripts_IAPManager__InitializeDefaultStore_13888d0
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_05766e50;
  if ((bRam0000000005c2306b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05761150);
    FUN_012d0dc8(PTR_DAT_057e0ae0);
    FUN_012d0dc8(PTR_DAT_0578ebb0);
    FUN_012d0dc8(PTR_DAT_05766e50);
    FUN_012d0dc8(PTR_DAT_057f29f0);
    FUN_012d0dc8(PTR_DAT_057ba5e0);
    FUN_012d0dc8(PTR_DAT_057aee18);
    FUN_012d0dc8(PTR_DAT_057d6798);
    FUN_012d0dc8(PTR_DAT_057f5ed0);
    bRam0000000005c2306b = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
              (lVar5,*(undefined8 *)PTR_DAT_057e0ae0);
    plVar8 = (long *)(param_1 + 0x20);
    *plVar8 = lVar5;
    FUN_012d0d74(plVar8,lVar5);
    puVar3 = PTR_DAT_057f29f0;
    puVar2 = PTR_DAT_057ba5e0;
    puVar1 = PTR_DAT_0578ebb0;
    if (param_2 != 0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                (&uStack_70,param_2,*(undefined8 *)PTR_DAT_05761150);
      while( true ) {
        uVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                          (&uStack_70,*(undefined8 *)puVar2);
        uVar4 = uStack_60;
        if ((uVar6 & 1) == 0) {
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                    (&uStack_70,*(undefined8 *)puVar3);
          return;
        }
        lVar5 = *plVar8;
        uVar7 = Modules_Contexts_Application_IAP_Scripts_IAPManager__ConvertIAPConfigModelToIAPModel_1388ab8
                          (uVar6,uStack_58);
        if (lVar5 == 0) break;
        System_Collections_Generic_Dictionary_object__object___set_Item_3ed028c
                  (lVar5,uVar4,uVar7,*(undefined8 *)puVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

