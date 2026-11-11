/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$ExecuteTapAction
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__ExecuteTapAction (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$ExecuteTapAction
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__ExecuteTapAction
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__ExecuteTapAction_411a634
               (long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  
  if ((bRam0000000005c3ac3e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d73f0);
    FUN_012d0dc8(PTR_DAT_05819090);
    FUN_012d0dc8(PTR_DAT_057dad70);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057fd0a0);
    bRam0000000005c3ac3e = 1;
  }
  if ((*(long *)(param_1 + 0xb0) == 0) || (*(int *)(*(long *)(param_1 + 0xb0) + 0x18) == 0)) {
    return;
  }
  Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__PlayGeneratorItemClickedAnimation_411a768
            (param_1);
  puVar4 = PTR_DAT_05819090;
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (*(long *)(param_1 + 0xb0),0,*(undefined8 *)PTR_DAT_05819090);
    if ((lVar5 != 0) && (*(long *)(param_1 + 0xb0) != 0)) {
      uVar1 = *(undefined4 *)(lVar5 + 0x10);
      lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                        (*(long *)(param_1 + 0xb0),0,*(undefined8 *)puVar4);
      puVar4 = PTR_DAT_057dad70;
      if ((lVar5 != 0) && (*(long *)(param_1 + 0x88) != 0)) {
        uVar2 = *(undefined4 *)(lVar5 + 0x14);
        uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x6c);
        if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
          thunk_FUN_0130472c(*(long *)PTR_DAT_057b8520);
        }
        lVar5 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar4);
        if (lVar5 != 0) {
          if (*(long *)(lVar5 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343ef50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057fd0a0 + 0x20) + 0xc0) +
                                  0x18) + 8))(*(long *)(lVar5 + 0x18),uVar1,uVar2,uVar3);
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

