/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$Show
void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__Show (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Toggle.ToggleItem$$Show
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__Show
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleItem__Show_2609b7c(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_140 [96];
  undefined1 auStack_e0 [96];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if (*(long *)(param_1 + 0x60) != 0) {
      Modules_Infrastructure_UI_Common_Scripts_SortingService__GetToggleItemSorting_40031a0
                (auStack_e0,*(long *)(param_1 + 0x60),0);
      func_0x01037ce0(&uStack_80,auStack_e0,0x60);
      lVar3 = *(long *)(param_1 + 0x48);
      func_0x01037ce0(auStack_e0,&uStack_80,0x60);
      if (lVar3 != 0) {
        uVar1 = *(undefined1 *)(param_1 + 0x58);
        func_0x01037ce0(auStack_140,auStack_e0,0x60);
        Modules_Contexts_GamePlay_Board_Items_Scripts_Toggle_ToggleView__SetInitialState_2609c24
                  (lVar3,auStack_140,uVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

