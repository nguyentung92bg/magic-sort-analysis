/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnOriginBottleReturnToInitialPosition
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnOriginBottleReturnToInitialPosition (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnOriginBottleReturnToInitialPosition
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnOriginBottleReturnToInitialPosition
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnOriginBottleReturnToInitialPosition_274fab4
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  if ((bRam0000000005c2c6e6 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577d338);
    FUN_012d0dc8(PTR_DAT_057efc38);
    FUN_012d0dc8(PTR_DAT_057ad740);
    FUN_012d0dc8(PTR_DAT_057f7a48);
    FUN_012d0dc8(PTR_DAT_057cc180);
    FUN_012d0dc8(PTR_DAT_057bc938);
    FUN_012d0dc8(PTR_DAT_057988a0);
    FUN_012d0dc8(PTR_DAT_05819118);
    FUN_012d0dc8(PTR_DAT_0580afd8);
    FUN_012d0dc8(PTR_DAT_057aebd0);
    FUN_012d0dc8(PTR_DAT_057c2430);
    bRam0000000005c2c6e6 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x58) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x58) + 0x18) < 1) {
      return;
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      auVar9 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBlockerFrontSorting_4002a20
                         (*(long *)(param_1 + 0x60),0);
      if (*(long *)(param_1 + 0x48) != 0) {
        Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorView__SetFrontSorting_274f920
                  (*(long *)(param_1 + 0x48),auVar9._0_8_,auVar9._8_8_);
        puVar2 = PTR_DAT_057988a0;
        if (*(long *)(param_1 + 0x58) != 0) {
          uVar4 = System_Collections_Generic_Stack_Int32Enum___Peek_3123770
                            (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_05819118);
          lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
          if (lVar5 != 0) {
            System_Collections_Generic_List_ValueTuple_int__Int32Enum_____ctor_2bf9360
                      (lVar5,*(undefined8 *)PTR_DAT_057bc938);
            if (*(long *)(param_1 + 0x50) != 0) {
              if (*(int *)(*(long *)(param_1 + 0x50) + 0x48) == 4) {
                lVar5 = Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__GetNextSpawnWaters_274fe08
                                  (param_1);
                puVar3 = PTR_DAT_057efc38;
                puVar2 = PTR_DAT_0577d338;
                if (lVar5 == 0) goto LAB_0284fdc4;
                System_Collections_Generic_List_ValueTuple_int__Int32Enum____GetEnumerator_2bfa790
                          (&uStack_68,lVar5,*(undefined8 *)PTR_DAT_057cc180);
                uStack_48 = uStack_60;
                uStack_50 = uStack_68;
                uStack_40 = uStack_58;
                while (uVar6 = System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____MoveNext_41ca468
                                         (&uStack_50,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
                  if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                  Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddWaterFromBottom_249d2f8
                            (*(long *)(param_1 + 0x50),uStack_40,uStack_40 >> 0x20,0);
                }
                System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____Dispose_41ca464
                          (&uStack_50,*(undefined8 *)puVar2);
              }
              else {
                uStack_68 = 0;
                System_ValueTuple_int__Int32Enum____ctor_2b8d010
                          (&uStack_68,1,uVar4,*(undefined8 *)PTR_DAT_057c2430);
                if (lVar5 == 0) goto LAB_0284fdc4;
                lVar7 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)PTR_DAT_057f7a48;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar7 == 0) goto LAB_0284fdc4;
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uStack_68;
                }
                else {
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar5);
                }
                if (*(long *)(param_1 + 0x58) == 0) goto LAB_0284fdc4;
                uVar4 = System_Collections_Generic_Stack_Int32Enum___Pop_31237d0
                                  (*(long *)(param_1 + 0x58),*(undefined8 *)PTR_DAT_0580afd8);
                lVar7 = *(long *)(param_1 + 0x50);
                if (lVar7 == 0) goto LAB_0284fdc4;
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__AddWater_249ce6c
                          (lVar7,*(undefined4 *)(lVar7 + 0x48),uVar4,1,0,0,0);
              }
              if (*(long *)(param_1 + 0x58) != 0) {
                if (0 < *(int *)(*(long *)(param_1 + 0x58) + 0x18)) {
                  Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__PlayFillAnimation_2750178
                            ();
                  return;
                }
                Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__Complete_274fff8
                          (param_1,lVar5);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0284fdc4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

