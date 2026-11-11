/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagAnimationConfig$$GetTrailSpawnOffset
UnityEngine_Vector3_o Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagAnimationConfig__GetTrailSpawnOffset (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagAnimationConfig_o* __this, int32_t bottleHeight, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag.BagAnimationConfig$$GetTrailSpawnOffset
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagAnimationConfig__GetTrailSpawnOffset
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagAnimationConfig_o* __this, int32_t
   bottleHeight, const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Board_Items_Scripts_Bag_BagAnimationConfig__GetTrailSpawnOffset_2f5dff0
          (long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (0 < *(int *)(lVar1 + 0x18)) {
    iVar3 = 0;
    lVar2 = lVar1 + 0x28;
    do {
      if ((int)*(undefined8 *)(lVar2 + -8) == param_2) {
        return (int)((ulong)*(undefined8 *)(lVar2 + -8) >> 0x20);
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (iVar3 < *(int *)(lVar1 + 0x18));
  }
  if (cRam0000000005c230aa == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230aa = '\x01';
  }
  return **(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
}

