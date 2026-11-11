/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$RemoveBlocker
void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__RemoveBlocker (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this, Modules_Infrastructure_Common_Scripts_Component_AItem_o* blocker, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Cell.Cell$$RemoveBlocker
   void Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__RemoveBlocker
   (Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell_o* __this,
   Modules_Infrastructure_Common_Scripts_Component_AItem_o* blocker, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Levels_Scripts_Cell_Cell__RemoveBlocker_1e90d64
               (long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000005c28130 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05762a70);
    bRam0000000005c28130 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = *(long *)PTR_DAT_05762a70;
  iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0xa0) + 8))
                    (lVar2,param_2);
  if (-1 < iVar1) {
    (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x158) + 8))(lVar2,iVar1);
  }
  return -1 < iVar1;
}

