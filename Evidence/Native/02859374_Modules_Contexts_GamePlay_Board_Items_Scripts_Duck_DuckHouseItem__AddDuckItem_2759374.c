/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$AddDuckItem
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__AddDuckItem (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* duckItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseItem$$AddDuckItem
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__AddDuckItem
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem_o* __this,
   Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckItem_o* duckItem, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseItem__AddDuckItem_2759374
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam0000000005c2c72f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575c588);
    FUN_012d0dc8(PTR_DAT_057cdfb8);
    bRam0000000005c2c72f = 1;
  }
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    lVar6 = *(long *)PTR_DAT_0575c588;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar5 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar5 = param_2;
        FUN_012d0d74(puVar5,param_2);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar2,param_2);
      }
      if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
        plVar7 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
        uVar3 = System_Int32__ToString_26c9768(&stack0xffffffffffffffec,0);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x558))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x560));
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

