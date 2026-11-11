/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnBeforeUndoLastWaterPour
void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBeforeUndoLastWaterPour (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, int32_t waterHeight, int32_t topWaterColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Generator.GeneratorItem$$OnBeforeUndoLastWaterPour
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBeforeUndoLastWaterPour
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem_o* __this, int32_t
   waterHeight, int32_t topWaterColorId, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBeforeUndoLastWaterPour_2750bac
               (long param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined4 uStack_34;
  
  if ((bRam0000000005c2c6ed & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    FUN_012d0dc8(PTR_DAT_057aebd0);
    bRam0000000005c2c6ed = 1;
  }
  uStack_34 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x50) + 0x48) == 4) {
      lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05805bc0);
      if (lVar4 != 0) {
        System_Collections_Generic_List_Int32Enum____ctor_20512f0
                  (lVar4,*(undefined8 *)PTR_DAT_057b99d0);
        puVar2 = PTR_DAT_05814878;
        if (0 < param_2) {
          iVar9 = 0;
          do {
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_02850da0;
            lVar5 = Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetCell_2495f10
                              (*(long *)(param_1 + 0x50),iVar9,0);
            if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
              uVar3 = Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__GetColorId_1e99788
                                (*(long *)(lVar5 + 0x20),0);
              lVar5 = *(long *)(lVar4 + 0x10);
              lVar8 = *(long *)puVar2;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar5 == 0) goto LAB_02850da0;
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar4);
              }
            }
            iVar9 = iVar9 + 1;
          } while (param_2 != iVar9);
        }
        Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__OnBeforeUndoBottomFill_2750da4
                  (param_1,lVar4);
        return;
      }
    }
    else {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Generator_GeneratorItem__AddWaterColorId_2750fb4
                (param_1,param_2,param_3);
      if (*(long *)(param_1 + 0x58) != 0) {
        uStack_34 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
        lVar4 = *(long *)(param_1 + 0x48);
        uVar6 = System_Int32__ToString_26c9768(&uStack_34,0);
        if ((lVar4 != 0) && (plVar7 = *(long **)(lVar4 + 0x30), plVar7 != (long *)0x0)) {
          (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
          if (*(long *)(param_1 + 0x58) != 0) {
            uStack_34 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
            lVar4 = *(long *)(param_1 + 0x48);
            uVar6 = System_Int32__ToString_26c9768(&uStack_34,0);
            if ((lVar4 != 0) && (plVar7 = *(long **)(lVar4 + 0x38), plVar7 != (long *)0x0)) {
              (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
              return;
            }
          }
        }
      }
    }
  }
LAB_02850da0:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

