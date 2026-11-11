/* IL2CPP: Modules.Contexts.Home.BoatRush.Scripts.UI.BoatRushAnimationConfig$$GetJumpConfigByIslandIndex
Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushJumpConfigByIslandIndex_o* Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushAnimationConfig__GetJumpConfigByIslandIndex (Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushAnimationConfig_o* __this, int32_t islandIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.BoatRush.Scripts.UI.BoatRushAnimationConfig$$GetJumpConfigByIslandIndex
   Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushJumpConfigByIslandIndex_o*
   Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushAnimationConfig__GetJumpConfigByIslandIndex
   (Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushAnimationConfig_o* __this, int32_t
   islandIndex, const MethodInfo* method); */

long Modules_Contexts_Home_BoatRush_Scripts_UI_BoatRushAnimationConfig__GetJumpConfigByIslandIndex_40f5708
               (long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000005c3aaf3 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fc1c8);
    FUN_012d0dc8(PTR_DAT_057fbb18);
    bRam0000000005c3aaf3 = 1;
  }
  puVar1 = PTR_DAT_057fbb18;
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar3) {
        if (*(int *)(lVar2 + 0x18) == 0) {
          System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
                    (0,0,*(undefined8 *)puVar1);
        }
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) != 0) {
            return *(long *)(lVar2 + 0x20);
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar2 = System_Collections_Generic_List_object___get_Item_21fc76c(lVar2,iVar3);
      if (lVar2 == 0) break;
      if (*(int *)(lVar2 + 0x10) == param_2) {
        return lVar2;
      }
      lVar2 = *(long *)(param_1 + 0x78);
      iVar3 = iVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

