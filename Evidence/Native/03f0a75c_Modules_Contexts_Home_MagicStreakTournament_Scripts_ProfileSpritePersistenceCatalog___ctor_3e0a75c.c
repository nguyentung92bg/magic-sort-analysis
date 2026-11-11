/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$.ctor
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog___ctor (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this, int32_t itemLength, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$.ctor
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog___ctor
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this,
   int32_t itemLength, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog___ctor_3e0a75c
               (long param_1,undefined4 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_057a37f8;
  if ((bRam0000000005c38042 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05792be0);
    FUN_012d0dc8(PTR_DAT_057a37f8);
    bRam0000000005c38042 = 1;
  }
  System_Object___ctor_23dfe5c(param_1,0);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    System_Collections_Generic_Dictionary_int__object____ctor_3976018
              (lVar5,param_2,*(undefined8 *)PTR_DAT_05792be0);
    plVar6 = (long *)(param_1 + 0x10);
    *plVar6 = lVar5;
    if (iRam0000000005c3d478 != 0) {
      puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

