/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnBottleSelectedAsOrigin
void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleSelectedAsOrigin (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, int32_t waterOrder, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal.MagicSealItem$$OnBottleSelectedAsOrigin
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleSelectedAsOrigin
   (Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem_o* __this, int32_t
   waterOrder, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealItem__OnBottleSelectedAsOrigin_274ba98
               (long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iStack_14;
  
  iStack_14 = 0;
  lVar2 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
  if (lVar2 != 0) {
    iVar1 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCellIndexFromTheBottom_2499948
                      (lVar2,param_1[0xb],0);
    lVar2 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
    if (lVar2 != 0) {
      uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__TryGetFirstBlockedWaterIndexFromTheBottom_2494804
                        (lVar2,&iStack_14,0);
      if ((iStack_14 < iVar1) || ((uVar3 & 1) == 0)) {
        if (param_1[9] == 0) goto LAB_0284bb2c;
        Modules_Contexts_GamePlay_Board_Items_Scripts_MagicSeal_MagicSealView__PlayUnLockAnimation_274bb30
                  (param_1[9],iStack_14 == iVar1 + -1);
        *(undefined1 *)((long)param_1 + 0x6d) = 1;
      }
      return;
    }
  }
LAB_0284bb2c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

