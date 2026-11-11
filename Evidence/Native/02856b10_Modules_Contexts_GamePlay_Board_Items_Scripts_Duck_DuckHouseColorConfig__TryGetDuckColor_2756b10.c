/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseColorConfig$$TryGetDuckColor
bool Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckColor (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig_o* __this, int32_t duckType, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorData_o* colorData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseColorConfig$$TryGetDuckColor
   bool Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckColor
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig_o* __this, int32_t
   duckType, Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorData_o* colorData,
   const MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckColor_2756b10
          (long param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    func_0x01038a30(param_3,lVar3 + 0x20,0x54);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (0 < iVar1) {
        iVar4 = 0;
        lVar3 = lVar3 + 0x24;
        do {
          iVar2 = *(int *)(lVar3 + -4);
          func_0x01037ce0(&uStack_90,lVar3,0x50);
          if (iVar2 == param_2) {
            *param_3 = param_2;
            func_0x01037ce0(param_3 + 1,&uStack_90,0x50);
            return 1;
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 0x54;
        } while (iVar4 < iVar1);
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

