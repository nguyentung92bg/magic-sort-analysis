/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$Initialize
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__Initialize (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$Initialize
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__Initialize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__Initialize_3e081a8
               (long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar6 = PTR_DAT_057fb300;
  if ((bRam0000000005c3802b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05764df0);
    FUN_012d0dc8(PTR_DAT_0578a208);
    FUN_012d0dc8(PTR_DAT_057c6e48);
    FUN_012d0dc8(PTR_DAT_057a8368);
    FUN_012d0dc8(PTR_DAT_05766be8);
    FUN_012d0dc8(PTR_DAT_0576f190);
    FUN_012d0dc8(PTR_DAT_057de1b0);
    FUN_012d0dc8(PTR_DAT_057fb300);
    bRam0000000005c3802b = 1;
  }
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
  puVar6 = PTR_DAT_057de1b0;
  if (lVar7 != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider___ctor_3e083c8
              ();
    *(long *)(param_1 + 0x48) = lVar7;
    FUN_012d0d74((long *)(param_1 + 0x48),lVar7);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
    if (lVar7 != 0) {
      System_Object___ctor_23dfe5c(lVar7,0);
      *(undefined8 *)(lVar7 + 0x30) = uVar11;
      FUN_012d0d74((undefined8 *)(lVar7 + 0x30),uVar11);
      *(long *)(param_1 + 0x40) = lVar7;
      FUN_012d0d74((long *)(param_1 + 0x40),lVar7);
      if (*(long *)(param_1 + 0x48) != 0) {
        Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__Initialize_3e08480
                  (*(long *)(param_1 + 0x48),param_1,*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x60));
        puVar6 = PTR_DAT_057a8368;
        if (*(long *)(param_1 + 0x40) != 0) {
          Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider__Initialize_3e08524
                    (*(long *)(param_1 + 0x40),param_1);
          *(undefined1 *)(param_1 + 0x50) = 0;
          lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
          puVar6 = PTR_DAT_0576f190;
          if (lVar7 != 0) {
            System_Collections_Generic_HashSet_object____ctor_200a670
                      (lVar7,*(undefined8 *)PTR_DAT_057c6e48);
            *(long *)(param_1 + 0x38) = lVar7;
            FUN_012d0d74((long *)(param_1 + 0x38),lVar7);
            lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
            puVar5 = PTR_DAT_05766be8;
            if (lVar7 != 0) {
              System_Collections_Generic_List_object____ctor_21fc1fc
                        (lVar7,*(undefined8 *)PTR_DAT_05766be8);
              *(long *)(param_1 + 0x28) = lVar7;
              FUN_012d0d74((long *)(param_1 + 0x28),lVar7);
              lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
              puVar6 = PTR_DAT_0578a208;
              if (lVar7 != 0) {
                System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)puVar5);
                *(long *)(param_1 + 0x30) = lVar7;
                FUN_012d0d74((long *)(param_1 + 0x30),lVar7);
                lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar6);
                if (lVar7 != 0) {
                  System_Collections_Generic_Dictionary_object__object____ctor_3ecf854
                            (lVar7,*(undefined8 *)PTR_DAT_05764df0);
                  *(long *)(param_1 + 0x10) = lVar7;
                  FUN_012d0d74((long *)(param_1 + 0x10),lVar7);
                  lVar7 = *(long *)(param_1 + 0x20);
                  if (lVar7 != 0) {
                    if ((bRam0000000005c373d4 & 1) == 0) {
                      FUN_012d0dc8(PTR_DAT_057b7f50,param_1,0);
                      bRam0000000005c373d4 = 1;
                    }
                    lVar7 = *(long *)(lVar7 + 0x18);
                    if (lVar7 != 0) {
                      lVar8 = *(long *)(lVar7 + 0x10);
                      lVar10 = *(long *)PTR_DAT_057b7f50;
                      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                      if (lVar8 != 0) {
                        uVar2 = *(uint *)(lVar7 + 0x18);
                        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                          plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                          *plVar9 = param_1;
                          if (iRam0000000005c3d478 != 0) {
                            puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
                            do {
                              cVar3 = '\x01';
                              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                              if (bVar4) {
                                *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
                                cVar3 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar3 != '\0');
                          }
                          return;
                        }
                    /* WARNING: Could not recover jumptable at 0x03e2db1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (**(code **)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x58) +
                                    8))(lVar7,param_1);
                        return;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

