/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$DecreaseHeight
void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__DecreaseHeight (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t targetHeight, int32_t watersHeightBelow, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Water.WaterItem$$DecreaseHeight
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__DecreaseHeight
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem_o* __this, int32_t targetHeight,
   int32_t watersHeightBelow, int32_t bottleHeight, const MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__DecreaseHeight_1e9e480
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000005c28195 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c28195 = 1;
  }
  puVar1 = PTR_DAT_0576c200;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88);
    if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x48) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x88), lVar3 == 0)) goto LAB_01f9e57c;
      Modules_Contexts_GamePlay_BoardItems_Scripts_Water_Animation_WaterRotationAnimation__StopDropRatio_248d680
                (lVar3,0);
    }
    Modules_Contexts_GamePlay_BoardItems_Scripts_Water_WaterItem__SetTargetHeight_1e9e30c
              (param_1,param_2,param_3,param_4);
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x88), lVar3 == 0)) goto LAB_01f9e57c;
        *(undefined4 *)(lVar3 + 0x50) = 0;
      }
      return;
    }
  }
LAB_01f9e57c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

