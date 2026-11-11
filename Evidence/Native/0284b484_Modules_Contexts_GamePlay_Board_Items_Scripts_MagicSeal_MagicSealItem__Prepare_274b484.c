/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, int32_t waterIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this,
   UnityEngine_Vector3_o viewOffset,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle,
   Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* belongingCell, int32_t waterIndex, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__Prepare_274b484
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,long param_5,
               long param_6,undefined4 param_7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 in_x7;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000005c2c6c0 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c3c8);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2c6c0 = 1;
  }
  plVar7 = param_4 + 0xb;
  *plVar7 = param_6;
  FUN_012d0d74(plVar7,param_6);
  param_4[10] = param_5;
  FUN_012d0d74(param_4 + 10,param_5);
  *(undefined4 *)((long)param_4 + 0x34) = param_1;
  *(undefined4 *)(param_4 + 7) = param_2;
  *(undefined4 *)((long)param_4 + 0x3c) = param_3;
  *(undefined4 *)(param_4 + 0xc) = param_1;
  *(undefined4 *)((long)param_4 + 100) = param_2;
  *(undefined4 *)(param_4 + 0xd) = param_3;
  puVar1 = PTR_DAT_0576aae0;
  if (param_4[9] != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__Prepare_274b65c();
    if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar5 != 0)) {
      lVar5 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar5,*(undefined8 *)PTR_DAT_0575c3c8);
      plVar8 = param_4 + 0xe;
      *plVar8 = lVar5;
      FUN_012d0d74(plVar8,lVar5);
      lVar5 = (**(code **)(*param_4 + 0x458))(param_4,*(undefined8 *)(*param_4 + 0x460));
      if (lVar5 != 0) {
        iVar2 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCellIndexFromTheTop_2499884
                          (lVar5,param_4[0xb],0);
        lVar5 = (**(code **)(*param_4 + 0x458))(param_4,*(undefined8 *)(*param_4 + 0x460));
        if (lVar5 != 0) {
          iVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCellIndexFromTheBottom_2499948
                            (lVar5,*plVar7,0);
          lVar5 = *plVar8;
          if (lVar5 != 0) {
            uVar4 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetEclipseSortOrder_4002840
                              (lVar5,param_7,0);
            lVar6 = (**(code **)(*param_4 + 0x458))(param_4,*(undefined8 *)(*param_4 + 0x460));
            if (lVar6 != 0) {
              Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSealSorting_4002eac
                        (&uStack_98,lVar5,uVar4,iVar2 == 0,iVar3 == 0,*(undefined4 *)(lVar6 + 0x48),
                         0);
              if (param_4[9] != 0) {
                Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__SetSorting_274c144
                          (param_4[9],uStack_98,uStack_90,uStack_88,uStack_80,uStack_78,uStack_70,
                           in_x7,uStack_68,uStack_60,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

