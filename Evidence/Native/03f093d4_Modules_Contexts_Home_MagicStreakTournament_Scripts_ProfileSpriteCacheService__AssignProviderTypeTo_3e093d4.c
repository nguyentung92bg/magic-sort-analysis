/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$AssignProviderTypeTo
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__AssignProviderTypeTo (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheRequest_o* cacheRequest, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$AssignProviderTypeTo
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__AssignProviderTypeTo
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheRequest_o* cacheRequest,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__AssignProviderTypeTo_3e093d4
               (long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_28;
  
  if ((bRam0000000005c38032 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057854f8);
    bRam0000000005c38032 = 1;
  }
  puVar2 = PTR_DAT_057854f8;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar3 != 0)) {
    uVar4 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__IsCacheExists_3e0a408
                      (lVar3,param_2);
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      uVar5 = *(undefined8 *)puVar2;
    }
    else {
      uVar5 = *(undefined8 *)puVar2;
    }
    uStack_28 = 0;
    System_Nullable_Int32Enum____ctor_203c774(&uStack_28,!bVar1,uVar5);
    if (param_2 != 0) {
      *(undefined8 *)(param_2 + 0x30) = uStack_28;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

