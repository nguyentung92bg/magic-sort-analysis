/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnWaterSortOrderChange
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnWaterSortOrderChange (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, int32_t eclipseSortOrder, int32_t backSortOrder, bool isTopCell, bool isBottomCell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnWaterSortOrderChange
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnWaterSortOrderChange
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, int32_t
   eclipseSortOrder, int32_t backSortOrder, bool isTopCell, bool isBottomCell, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnWaterSortOrderChange_274bc34
               (long *param_1,undefined4 param_2,undefined8 param_3,uint param_4,uint param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = param_1[0xe];
  lVar1 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
  if ((lVar1 != 0) && (lVar2 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSealSorting_4002eac
              (&uStack_78,lVar2,param_2,param_4 & 1,param_5 & 1,*(undefined4 *)(lVar1 + 0x48),0);
    if (param_1[9] != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__SetSorting_274c144
                (param_1[9],uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,uStack_50,param_8,
                 uStack_48,uStack_40,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

