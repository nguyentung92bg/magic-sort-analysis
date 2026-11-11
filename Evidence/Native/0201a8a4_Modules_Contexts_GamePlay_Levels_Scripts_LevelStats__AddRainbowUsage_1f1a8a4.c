/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$AddRainbowUsage
void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__AddRainbowUsage (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, int32_t cellIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$AddRainbowUsage
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__AddRainbowUsage
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* bottleItem, int32_t cellIndex,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__AddRainbowUsage_1f1a8a4
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000005c28651 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577fd08);
    bRam0000000005c28651 = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar3 != 0)) {
    uVar4 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleLinearIndexFromTopLeftToRightDown_2f6bd9c
                      (lVar3,param_2,0);
    lVar3 = *(long *)(param_1 + 0x110);
    if (lVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xc4);
      lVar5 = *(long *)(lVar3 + 0x10);
      lVar6 = *(long *)PTR_DAT_0577fd08;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar2 = *(uint *)(lVar3 + 0x18);
        iVar1 = iVar1 + 1;
        uVar4 = uVar4 & 0xffffffff | param_3 << 0x20;
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          lVar5 = lVar5 + (long)(int)uVar2 * 0xc;
          *(ulong *)(lVar5 + 0x20) = uVar4;
          *(int *)(lVar5 + 0x28) = iVar1;
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0201a990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar3,uVar4,iVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

