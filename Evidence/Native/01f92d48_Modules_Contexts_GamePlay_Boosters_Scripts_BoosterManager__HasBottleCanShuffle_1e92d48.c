/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$HasBottleCanShuffle
bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__HasBottleCanShuffle (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.BoosterManager$$HasBottleCanShuffle
   bool Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__HasBottleCanShuffle
   (Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager_o* __this, const MethodInfo* method);
    */

undefined8
Modules_Contexts_GamePlay_Boosters_Scripts_BoosterManager__HasBottleCanShuffle_1e92d48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if ((bRam0000000005c28144 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c28144 = 1;
  }
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar6 != 0)) &&
     (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    if (0 < *(int *)(lVar6 + 0x18)) {
      iVar7 = 0;
      do {
        lVar3 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar6,iVar7,*(undefined8 *)puVar1);
        if (lVar3 == 0) goto LAB_01f92e60;
        if (0 < *(int *)(lVar3 + 0x18)) {
          iVar8 = 0;
          do {
            lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar3,iVar8,*(undefined8 *)puVar2);
            if (lVar4 == 0) goto LAB_01f92e60;
            uVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__CanShuffle_249d0e4
                              (lVar4,0);
            if ((uVar5 & 1) != 0) {
              return 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(lVar3 + 0x18));
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar6 + 0x18));
    }
    return 0;
  }
LAB_01f92e60:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

