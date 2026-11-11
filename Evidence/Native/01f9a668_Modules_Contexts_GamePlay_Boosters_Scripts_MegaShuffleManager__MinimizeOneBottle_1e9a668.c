/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$MinimizeOneBottle
bool Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__MinimizeOneBottle (System_Collections_Generic_List_ValueTuple_int__bool___o* bottleSizesCopy, int32_t maxCapacity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$MinimizeOneBottle
   bool Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__MinimizeOneBottle
   (System_Collections_Generic_List_ValueTuple_int__bool___o* bottleSizesCopy, int32_t maxCapacity,
   const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__MinimizeOneBottle_1e9a668
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000005c28172 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577cde8);
    FUN_012d0dc8(PTR_DAT_0577b108);
    FUN_012d0dc8(PTR_DAT_057ccb38);
    FUN_012d0dc8(PTR_DAT_057f4c60);
    bRam0000000005c28172 = 1;
  }
  puVar1 = PTR_DAT_0577b108;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  iVar7 = *(int *)(param_1 + 0x18);
  if (1 < iVar7) {
    iVar6 = 1;
    iVar5 = 0x7fffffff;
    iVar9 = -1;
    do {
      iVar4 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                        (param_1,iVar6,*(undefined8 *)puVar1);
      if ((iVar4 < iVar5) &&
         (uVar8 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                            (param_1,iVar6,*(undefined8 *)puVar1), (uVar8 >> 0x20 & 1) == 0)) {
        iVar5 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                          (param_1,iVar6,*(undefined8 *)puVar1);
        iVar9 = iVar6;
      }
      iVar6 = iVar6 + 1;
    } while (iVar7 != iVar6);
    if (iVar9 != -1) goto LAB_01f9a74c;
  }
  iVar9 = 0;
LAB_01f9a74c:
  iVar6 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                    (param_1,iVar9,*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_057f4c60;
  puVar2 = PTR_DAT_057ccb38;
  if ((0 < iVar6) && (0 < iVar7)) {
    iVar6 = 0;
    do {
      while (((iVar6 == iVar9 ||
              (uVar8 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                                 (param_1,iVar6,*(undefined8 *)puVar1), (uVar8 >> 0x20 & 1) != 0))
             || (iVar5 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                                   (param_1,iVar6,*(undefined8 *)puVar1), param_2 <= iVar5))) {
        iVar6 = iVar6 + 1;
        if (iVar6 == iVar7) goto LAB_01f9a880;
      }
      iVar5 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                        (param_1,iVar6,*(undefined8 *)puVar1);
      uVar8 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                        (param_1,iVar6,*(undefined8 *)puVar1);
      uStack_58 = 0;
      System_ValueTuple_int__bool____ctor_2b8af00
                (&uStack_58,iVar5 + 1,uVar8 >> 0x20 & 1,*(undefined8 *)puVar3);
      System_Collections_Generic_List_ValueTuple_int__bool____set_Item_28a0698
                (param_1,iVar6,uStack_58,*(undefined8 *)puVar2);
      iVar6 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                        (param_1,iVar9,*(undefined8 *)puVar1);
      uVar8 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                        (param_1,iVar9,*(undefined8 *)puVar1);
      uStack_60 = 0;
      System_ValueTuple_int__bool____ctor_2b8af00
                (&uStack_60,iVar6 + -1,uVar8 >> 0x20 & 1,*(undefined8 *)puVar3);
      System_Collections_Generic_List_ValueTuple_int__bool____set_Item_28a0698
                (param_1,iVar9,uStack_60,*(undefined8 *)puVar2);
      iVar5 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                        (param_1,iVar9,*(undefined8 *)puVar1);
      iVar6 = 0;
    } while (0 < iVar5);
  }
LAB_01f9a880:
  iVar7 = System_Collections_Generic_List_ValueTuple_int__bool____get_Item_28a0644
                    (param_1,iVar9,*(undefined8 *)puVar1);
  return iVar7 == 0;
}

