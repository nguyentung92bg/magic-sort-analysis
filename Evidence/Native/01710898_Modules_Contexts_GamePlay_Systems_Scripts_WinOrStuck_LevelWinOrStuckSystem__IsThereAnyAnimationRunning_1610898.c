/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$IsThereAnyAnimationRunning
bool Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsThereAnyAnimationRunning (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$IsThereAnyAnimationRunning
   bool 
   Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsThereAnyAnimationRunning
   (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const
   MethodInfo* method); */

uint Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__IsThereAnyAnimationRunning_1610898
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if ((bRam0000000005c24468 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05813f90);
    FUN_012d0dc8(PTR_DAT_05785108);
    FUN_012d0dc8(PTR_DAT_057b43e8);
    FUN_012d0dc8(PTR_DAT_057b0e08);
    bRam0000000005c24468 = 1;
  }
  puVar2 = PTR_DAT_057b43e8;
  puVar1 = PTR_DAT_057b0e08;
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar6 != 0)) &&
     (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) {
    if (*(int *)(lVar6 + 0x18) < 1) {
      uVar9 = 0;
    }
    else {
      iVar7 = 0;
      uVar9 = 0;
      do {
        lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar6,iVar7,*(undefined8 *)puVar1);
        if (lVar4 == 0) goto LAB_017109bc;
        if (0 < *(int *)(lVar4 + 0x18)) {
          iVar8 = 0;
          do {
            lVar5 = System_Collections_Generic_List_object___get_Item_21fc76c
                              (lVar4,iVar8,*(undefined8 *)puVar2);
            if ((lVar5 == 0) || (*(long *)(lVar5 + 0x40) == 0)) goto LAB_017109bc;
            uVar3 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                              (*(long *)(lVar5 + 0x40),0);
            iVar8 = iVar8 + 1;
            uVar9 = uVar9 | uVar3;
          } while (iVar8 < *(int *)(lVar4 + 0x18));
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar6 + 0x18));
    }
    return uVar9 & 1;
  }
LAB_017109bc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

