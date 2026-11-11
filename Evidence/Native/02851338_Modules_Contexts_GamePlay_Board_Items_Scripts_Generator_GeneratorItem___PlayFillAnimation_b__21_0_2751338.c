/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$<PlayFillAnimation>b__21_0
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem___PlayFillAnimation_b__21_0 (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$<PlayFillAnimation>b__21_0
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem___PlayFillAnimation_b__21_0
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem___PlayFillAnimation_b__21_0_2751338
               (long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 uStack_14;
  
  if ((bRam0000000005c2c6f3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ec790);
    FUN_012d0dc8(PTR_DAT_058164b8);
    FUN_012d0dc8(PTR_DAT_057b8520);
    FUN_012d0dc8(PTR_DAT_057916a0);
    FUN_012d0dc8(PTR_DAT_057871c8);
    FUN_012d0dc8(PTR_DAT_057aebd0);
    bRam0000000005c2c6f3 = 1;
  }
  uStack_14 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    uStack_14 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
    lVar8 = *(long *)(param_1 + 0x48);
    uVar5 = System_Int32__ToString_26c9768(&uStack_14,0);
    if ((lVar8 != 0) && (plVar6 = *(long **)(lVar8 + 0x38), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x558))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x560));
      puVar3 = PTR_DAT_058164b8;
      puVar2 = PTR_DAT_057b8520;
      if (*(long *)(param_1 + 0x48) != 0) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__PlayFillAnimation_2751494
                  ();
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar3);
        puVar2 = PTR_DAT_057ec790;
        if (lVar8 != 0) {
          Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                    (lVar8,0xe,*(undefined8 *)PTR_DAT_057916a0);
          lVar8 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                            (*(undefined8 *)puVar2);
          iVar4 = UnityEngine_Random__Range_383a650(0,3,0);
          if (lVar8 != 0) {
            uVar7 = 0x41;
            if (iVar4 != 1) {
              uVar7 = 0x42;
            }
            uVar1 = 0x40;
            if (iVar4 != 0) {
              uVar1 = uVar7;
            }
            Modules_Infrastructure_Common_Scripts_SignalNS_Signal_Int32Enum___Invoke_333d1f4
                      (lVar8,uVar1,*(undefined8 *)PTR_DAT_057871c8);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

