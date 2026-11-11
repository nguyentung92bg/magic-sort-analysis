/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$Deinitialize
void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__Deinitialize (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.WinOrStuck.LevelWinOrStuckSystem$$Deinitialize
   void Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__Deinitialize
   (Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem_o* __this, const
   MethodInfo* method); */

bool Modules_Contexts_GamePlay_Systems_Scripts_WinOrStuck_LevelWinOrStuckSystem__Deinitialize_16109dc
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2446a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f1238);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    bRam0000000005c2446a = 1;
  }
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar3 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar3 != 0)) {
    lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                      (lVar3,*(undefined8 *)PTR_DAT_057f1238);
    plVar5 = (long *)(param_1 + 0x40);
    *plVar5 = lVar3;
    FUN_012d0d74(plVar5,lVar3);
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      if ((bRam0000000005c373d6 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057f50b8,param_1,0);
        bRam0000000005c373d6 = 1;
      }
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar4 = *(long *)PTR_DAT_057f50b8;
      iVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0xa0) + 8))
                        (lVar3,param_1);
      if (-1 < iVar2) {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x158) + 8))(lVar3,iVar2)
        ;
      }
      return -1 < iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

