/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.StoreItemFactory$$GetCoinBundlePrefab
UnityEngine_GameObject_o* Modules_Contexts_Home_Store_Scripts_StoreScroll_StoreItemFactory__GetCoinBundlePrefab (Modules_Contexts_Home_Store_Scripts_StoreScroll_StoreItemFactory_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Store.Scripts.StoreScroll.StoreItemFactory$$GetCoinBundlePrefab
   UnityEngine_GameObject_o*
   Modules_Contexts_Home_Store_Scripts_StoreScroll_StoreItemFactory__GetCoinBundlePrefab
   (Modules_Contexts_Home_Store_Scripts_StoreScroll_StoreItemFactory_o* __this,
   UnityEngine_Transform_o* transform, const MethodInfo* method); */

long Modules_Contexts_Home_Store_Scripts_StoreScroll_StoreItemFactory__GetCoinBundlePrefab_246b8b8
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2b0db & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f8928);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b0db = 1;
  }
  puVar2 = PTR_DAT_057f8928;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  puVar1 = PTR_DAT_0576c200;
  lVar5 = *(long *)puVar2;
  if ((bRam0000000005c2e95d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2e95d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  lVar3 = UnityEngine_Object__Instantiate_4091bd8(uVar6,param_2,1,0);
  lVar5 = **(long **)(lVar5 + 0x38);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_0131942c(lVar5);
  }
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_01320d5c(lVar3,lVar5);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d1288(lVar3,lVar5);
    }
  }
  return lVar4;
}

