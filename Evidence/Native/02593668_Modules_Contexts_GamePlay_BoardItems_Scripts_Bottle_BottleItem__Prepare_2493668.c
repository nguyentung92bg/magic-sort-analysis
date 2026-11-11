/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$Prepare
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__Prepare (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o viewOffset, int32_t initialSortingOrder, int32_t height, int32_t bottleAndWaterVariant, int32_t frontSortOrder, int32_t backSortOrder, BakedFluid_BottleAnimationConfig_o* bottleAnimationConfig, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, bool isCompletable, Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, bool isLongBottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$Prepare
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__Prepare
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, UnityEngine_Vector3_o
   viewOffset, int32_t initialSortingOrder, int32_t height, int32_t bottleAndWaterVariant, int32_t
   frontSortOrder, int32_t backSortOrder, BakedFluid_BottleAnimationConfig_o* bottleAnimationConfig,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, bool isCompletable,
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* bottleCollection, bool
   isLongBottle, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__Prepare_2493668
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,long param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,byte param_14,long param_15,byte param_16)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000005c2b2c4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578e8f8);
    FUN_012d0dc8(PTR_DAT_057c9fa8);
    bRam0000000005c2b2c4 = 1;
  }
  *(undefined4 *)(param_4 + 9) = param_6;
  *(undefined4 *)(param_4 + 0x15) = param_7;
  param_4[0x14] = param_10;
  FUN_012d0d74(param_4 + 0x14,param_10);
  param_4[0x1a] = param_15;
  *(undefined4 *)(param_4 + 0x18) = param_5;
  *(byte *)((long)param_4 + 0x4d) = param_14 & 1;
  FUN_012d0d74(param_4 + 0x1a,param_15);
  *(undefined4 *)((long)param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 7) = param_2;
  *(byte *)((long)param_4 + 0xec) = param_16 & 1;
  *(undefined4 *)((long)param_4 + 0x3c) = param_3;
  puVar3 = PTR_DAT_057c9fa8;
  puVar2 = PTR_DAT_0578e8f8;
  if (0 < (int)param_4[9]) {
    iVar9 = 0;
    do {
      lVar8 = param_4[0x10];
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if ((lVar4 == 0) ||
         (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell___ctor_1e909fc
                    (0,(float)iVar9,0,lVar4,0), lVar8 == 0)) goto LAB_02593888;
      lVar6 = *(long *)(lVar8 + 0x10);
      lVar7 = *(long *)puVar3;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_02593888;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = lVar4;
        FUN_012d0d74(plVar5,lVar4);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))(lVar8,lVar4);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)param_4[9]);
  }
  if (param_4[0x19] != 0) {
    auVar10 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSorting_4002868
                        (param_4[0x19],param_12,param_13,(int)param_4[0x18],0);
    if (param_4[10] != 0) {
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetSorting_22fc810
                (param_4[10],auVar10._0_8_,auVar10._8_8_,0);
      Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8(param_4);
      if (param_4[10] != 0) {
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__Prepare_22fbf18
                  (param_4[10],(int)param_4[9],param_7,param_8,param_9,0);
        Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateSortOrders_2493ab4
                  (param_4);
                    /* WARNING: Could not recover jumptable at 0x02593884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_4 + 0x278))(param_4,*(undefined8 *)(*param_4 + 0x280));
        return;
      }
    }
  }
LAB_02593888:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

