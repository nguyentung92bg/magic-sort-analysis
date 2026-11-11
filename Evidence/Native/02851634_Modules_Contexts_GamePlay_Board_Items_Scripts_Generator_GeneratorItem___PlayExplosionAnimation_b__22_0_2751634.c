/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$<PlayExplosionAnimation>b__22_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem___PlayExplosionAnimation_b__22_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$<PlayExplosionAnimation>b__22_0
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem___PlayExplosionAnimation_b__22_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem___PlayExplosionAnimation_b__22_0_2751634
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000005c2c6f6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_058164b8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057916a0);
    FUN_012d0dc8(PTR_DAT_057871c8);
    FUN_012d0dc8(PTR_DAT_0578dc40);
    bRam0000000005c2c6f6 = 1;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar7 = *(long *)(param_1 + 0x48);
    auVar8 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetGeneratorAnimationSorting_4002c60
                       (*(long *)(param_1 + 0x60),0);
    if (lVar7 != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetFrontSorting_274f920
                (lVar7,auVar8._0_8_,auVar8._8_8_);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (plVar5 = *(long **)(*(long *)(param_1 + 0x48) + 0x38), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x558))
                  (plVar5,*(undefined8 *)PTR_DAT_0578dc40,*(undefined8 *)(*plVar5 + 0x560));
        puVar3 = PTR_DAT_058164b8;
        puVar2 = PTR_DAT_057b8520;
        if (*(long *)(param_1 + 0x48) != 0) {
          Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__PlayExplosionAnimation_27517a4
                    ();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar3);
          puVar2 = PTR_DAT_057ec790;
          if (lVar7 != 0) {
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                      (lVar7,0xf,*(undefined8 *)PTR_DAT_057916a0);
            lVar7 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                              (*(undefined8 *)puVar2);
            iVar4 = UnityEngine_Random__Range_383a650(0,3,0);
            if (lVar7 != 0) {
              uVar6 = 0x41;
              if (iVar4 != 1) {
                uVar6 = 0x42;
              }
              uVar1 = 0x40;
              if (iVar4 != 0) {
                uVar1 = uVar6;
              }
              if (*(long *)(lVar7 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_057871c8 + 0x20) + 0xc0)
                                      + 0x20) + 8))(*(long *)(lVar7 + 0x10),uVar1);
                return;
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

