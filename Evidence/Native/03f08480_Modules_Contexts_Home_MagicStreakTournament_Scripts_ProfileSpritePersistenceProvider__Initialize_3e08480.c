/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceProvider$$Initialize
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__Initialize (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* profileSpriteCacheService, Modules_Infrastructure_DI_CustomUpdater_o* customUpdater, Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceProvider$$Initialize
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__Initialize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o*
   profileSpriteCacheService, Modules_Infrastructure_DI_CustomUpdater_o* customUpdater,
   Modules_Contexts_Application_Player_Scripts_IPlayerService_o* playerService, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__Initialize_3e08480
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  puVar5 = PTR_DAT_057bced0;
  if ((bRam0000000005c3803e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bced0);
    bRam0000000005c3803e = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  FUN_012d0d74((undefined8 *)(param_1 + 0x20),param_2);
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
  if (lVar6 != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService___ctor_3e0a278
              (lVar6,param_3,param_4);
    plVar10 = (long *)(param_1 + 0x10);
    *plVar10 = lVar6;
    FUN_012d0d74(plVar10,lVar6);
    lVar6 = *plVar10;
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if ((bRam0000000005c373d4 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057b7f50,lVar6,0);
        bRam0000000005c373d4 = 1;
      }
      lVar7 = *(long *)(lVar7 + 0x18);
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar9 = *(long *)PTR_DAT_057b7f50;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            plVar10 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *plVar10 = lVar6;
            if (iRam0000000005c3d478 != 0) {
              puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x03e2db1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar7,lVar6);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

