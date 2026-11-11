/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$LoadCatalog
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__LoadCatalog (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$LoadCatalog
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__LoadCatalog
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__LoadCatalog_3e0b2d8
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  if ((bRam0000000005c3804d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057711a8);
    bRam0000000005c3804d = 1;
  }
  uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetCatalogFilePath_3e0b0e8
                    (param_1);
  lVar2 = System_IO_File__ReadAllLines_348607c(uVar1,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057711a8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog___ctor_3e0a75c
            (lVar3,*(undefined4 *)(lVar2 + 0x18));
  plVar5 = (long *)(param_1 + 0x10);
  *plVar5 = lVar3;
  uVar1 = FUN_012d0d74(plVar5,lVar3);
  if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
    uVar6 = 0;
    uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    do {
      if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetProfileSpritePersistenceCatalogItemFromLineText_3e0b450
                        (uVar1,*(undefined8 *)(lVar2 + 0x20 + uVar6 * 8));
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0(0,uVar1);
      }
      uVar1 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Add_3e0a7f4
                        ();
      uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
  }
  return;
}

