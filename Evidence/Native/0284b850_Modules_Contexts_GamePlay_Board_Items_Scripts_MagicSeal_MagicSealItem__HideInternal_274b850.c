/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$HideInternal
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__HideInternal (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, bool updateSorting, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$HideInternal
   void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__HideInternal
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, bool
   updateSorting, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__HideInternal_274b850
               (long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 in_x7;
  long lVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((param_2 & 1) != 0) {
    lVar2 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
    if (lVar2 == 0) goto LAB_0284b91c;
    iVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCellIndexFromTheBottom_2499948
                      (lVar2,param_1[0xb],0);
    lVar4 = param_1[9];
    lVar5 = param_1[0xe];
    lVar2 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
    if (((lVar2 == 0) || (lVar5 == 0)) ||
       (Modules_Infrastructure_UI_Common_Scripts_SortingService__GetSealDisappearSorting_4003050
                  (&uStack_78,lVar5,iVar1 == 0,*(undefined4 *)(lVar2 + 0x48),0), lVar4 == 0))
    goto LAB_0284b91c;
    Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__SetSorting_274c144
              (lVar4,uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,uStack_50,in_x7,uStack_48,
               uStack_40,0);
  }
  plVar3 = (long *)param_1[9];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    return;
  }
LAB_0284b91c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

