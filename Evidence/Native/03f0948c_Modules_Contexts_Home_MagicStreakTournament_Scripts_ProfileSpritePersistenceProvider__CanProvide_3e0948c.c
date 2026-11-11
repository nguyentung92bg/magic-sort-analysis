/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceProvider$$CanProvide
bool Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__CanProvide (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheRequest_o* cacheRequest, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceProvider$$CanProvide
   bool 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__CanProvide
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheRequest_o* cacheRequest,
   const MethodInfo* method); */

uint Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__CanProvide_3e0948c
               (long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(char *)(lVar3 + 0x51) != '\0') {
    if ((param_2 != 0) && (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
      plVar4 = *(long **)(param_2 + 0x18);
      if ((bRam0000000005c38044 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0576e390);
        bRam0000000005c38044 = 1;
      }
      if (plVar4 != (long *)0x0) {
        lVar3 = *(long *)(lVar3 + 0x10);
        uVar2 = (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(*plVar4 + 0x160));
        if (lVar3 != 0) {
          uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_0576e390 + 0x20) +
                                                  0xc0) + 0xa8) + 8))(lVar3,uVar2);
          return ~uVar1 >> 0x1f;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return 0;
}

