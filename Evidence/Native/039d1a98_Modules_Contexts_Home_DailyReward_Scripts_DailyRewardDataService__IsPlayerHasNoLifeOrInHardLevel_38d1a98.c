/* IL2CPP: Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$IsPlayerHasNoLifeOrInHardLevel
bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsPlayerHasNoLifeOrInHardLevel (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.DailyReward.Scripts.DailyRewardDataService$$IsPlayerHasNoLifeOrInHardLevel
   bool 
   Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsPlayerHasNoLifeOrInHardLevel
   (Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService_o* __this, const MethodInfo*
   method); */

bool Modules_Contexts_Home_DailyReward_Scripts_DailyRewardDataService__IsPlayerHasNoLifeOrInHardLevel_38d1a98
               (void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  
  puVar1 = PTR_DAT_0576aae0;
                    /* try { // try from 039d1aa0 to 03ad1ab7 has its CatchHandler @ 039d1b60 */
  if ((bRam0000000005c34bb8 & 1) == 0) {
                    /* try { // try from 039d1ab8 to 03ad1acb has its CatchHandler @ 039d18e8 */
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_057c9ae0);
                    /* try { // try from 039d1acc to 03ad1ae3 has its CatchHandler @ 039d1b60 */
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 039d1ae4 to 03ad1b4f has its CatchHandler @ 039d18e8 */
    bRam0000000005c34bb8 = 1;
  }
  lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
  if (((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) &&
     (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar7,*(undefined8 *)PTR_DAT_057c9ae0), lVar7 != 0)) {
    uVar4 = Modules_Contexts_Application_Inventory_Scripts_InventoryService__DoesEnoughVisibleCurrency_137ed28
                      (lVar7,2,1,0);
    if ((uVar4 & 1) == 0) {
      bVar2 = true;
    }
    else {
      lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 039d1b50 to 03ad1b5f has its CatchHandler @ 039d1b60 */
      if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x18), lVar7 == 0)) ||
         (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                     (lVar7,*(undefined8 *)PTR_DAT_057a1e60), plVar5 == (long *)0x0)
         ) goto LAB_039d1c08;
      lVar7 = *plVar5;
                    /* catch() { ... } // from try @ 039d1a64 with catch @ 039d1b60
                       catch() { ... } // from try @ 039d1aa0 with catch @ 039d1b60
                       catch() { ... } // from try @ 039d1acc with catch @ 039d1b60
                       catch() { ... } // from try @ 039d1b50 with catch @ 039d1b60 */
                    /* try { // try from 039d1b64 to 03ad1b67 has its CatchHandler @ 039d1b70 */
                    /* try { // try from 039d1b68 to 03ad1b73 has its CatchHandler @ 039d18e8 */
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12a);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 039d1b64 with catch @ 039d1b70
                        */
      if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 039d1c2c with catch @ 039d1b74
                       catch() { ... } // from try @ 039d1c7c with catch @ 039d1b74
                       catch() { ... } // from try @ 039d1ca8 with catch @ 039d1b74
                       catch() { ... } // from try @ 039d1d2c with catch @ 039d1b74 */
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 039d1bb4 to 03ad1bb7 has its CatchHandler @ 039d1c44 */
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_039d1bbc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,1);
LAB_039d1bbc:
      iVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 039d1be0 to 03ad1bef has its CatchHandler @ 039d1c48 */
      bVar2 = iVar3 % 10 == 4 || iVar3 % 10 == 9;
    }
    return bVar2;
  }
LAB_039d1c08:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

