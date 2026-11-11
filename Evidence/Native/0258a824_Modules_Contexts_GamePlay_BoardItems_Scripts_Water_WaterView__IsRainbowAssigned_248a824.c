/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$IsRainbowAssigned
bool Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterView$$IsRainbowAssigned
   bool Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView_o* __this, const MethodInfo*
   method); */

uint Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterView__IsRainbowAssigned_248a824
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2b27f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2b27f = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    puVar1 = PTR_DAT_0576c200;
    if ((bRam0000000005c3a4e4 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0576c200,0,0);
      bRam0000000005c3a4e4 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__CompareBaseObjects_40913ac(uVar4,0);
    return ~uVar2 & 1;
  }
  return 0;
}

