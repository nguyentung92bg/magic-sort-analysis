/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnBeforeUndoBottomFill
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBeforeUndoBottomFill (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, System_Collections_Generic_List_ColorId__o* colorIdsFromBottom, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnBeforeUndoBottomFill
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBeforeUndoBottomFill
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this,
   System_Collections_Generic_List_ColorId__o* colorIdsFromBottom, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBeforeUndoBottomFill_2750da4
               (long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  if ((bRam0000000005c2c6ee & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05817840);
    FUN_012d0dc8(PTR_DAT_057d60c8);
    FUN_012d0dc8(PTR_DAT_057d4150);
    FUN_012d0dc8(PTR_DAT_057f6050);
    FUN_012d0dc8(PTR_DAT_057b2fc0);
    auVar9 = FUN_012d0dc8(PTR_DAT_057aebd0);
    bRam0000000005c2c6ee = 1;
  }
  puVar5 = PTR_DAT_05817840;
  puVar4 = PTR_DAT_057d60c8;
  puVar3 = PTR_DAT_057b2fc0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  if (param_2 != 0) {
    System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
              (&uStack_70,param_2,*(undefined8 *)PTR_DAT_057f6050);
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    uStack_40 = uStack_60;
    while (uVar6 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                             (&uStack_50,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Collections_Generic_Stack_Int32Enum___Push_3123844
                (*(long *)(param_1 + 0x58),uStack_40 & 0xffffffff,*(undefined8 *)puVar3);
    }
    auVar9 = System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
                       (&uStack_50,*(undefined8 *)puVar5);
    if (*(long *)(param_1 + 0x58) != 0) {
      uStack_54 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
      lVar8 = *(long *)(param_1 + 0x48);
      auVar9 = System_Int32__ToString_26c9768(&uStack_54,0);
      uVar6 = auVar9._0_8_;
      if ((lVar8 != 0) &&
         (plVar7 = *(long **)(lVar8 + 0x30), auVar1._8_8_ = 0, auVar1._0_8_ = uVar6,
         auVar9 = auVar1 << 0x40, plVar7 != (long *)0x0)) {
        auVar9 = (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
        if (*(long *)(param_1 + 0x58) != 0) {
          uStack_54 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
          lVar8 = *(long *)(param_1 + 0x48);
          auVar9 = System_Int32__ToString_26c9768(&uStack_54,0);
          uVar6 = auVar9._0_8_;
          if ((lVar8 != 0) &&
             (plVar7 = *(long **)(lVar8 + 0x38), auVar2._8_8_ = 0, auVar2._0_8_ = uVar6,
             auVar9 = auVar2 << 0x40, plVar7 != (long *)0x0)) {
            (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0(auVar9._0_8_,auVar9._8_8_);
}

