/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$OnGenerateItem
void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__OnGenerateItem (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items.GeneratorItem$$OnGenerateItem
   void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__OnGenerateItem
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__OnGenerateItem_4116d10
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((bRam0000000005c3ac40 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05798a90);
    FUN_012d0dc8(PTR_DAT_057d73f0);
    FUN_012d0dc8(PTR_DAT_057b9bc8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057bf7d0);
    bRam0000000005c3ac40 = 1;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    System_Collections_Generic_List_object___RemoveAt_21fe320
              (*(long *)(param_1 + 0xb0),0,*(undefined8 *)PTR_DAT_05798a90);
    if (*(long *)(param_1 + 0xb0) != 0) {
      if (*(int *)(*(long *)(param_1 + 0xb0) + 0x18) != 0) {
        return;
      }
      Modules_Contexts_Home_MergeMiniGame_Scripts_Board_Items_GeneratorItem__DestroyGenerator_411a458
                (param_1);
      puVar2 = PTR_DAT_057b9bc8;
      puVar1 = PTR_DAT_057b8520;
      if (*(long *)(param_1 + 0x88) != 0) {
        Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeBoardCell__HideCursor_4109a88();
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar2);
        if (lVar3 != 0) {
          if (*(long *)(lVar3 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343da80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057bf7d0 + 0x20) + 0xc0) +
                                  0x18) + 8))(*(long *)(lVar3 + 0x18),0xffffffff,0xffffffff);
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

