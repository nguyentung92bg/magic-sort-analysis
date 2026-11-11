/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$Add
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Add (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalogItem_o* catalog, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$Add
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Add
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalogItem_o*
   catalog, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Add_3e0a7f4
               (long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000005c38043 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05793ee8);
    FUN_012d0dc8(PTR_DAT_05761288);
    FUN_012d0dc8(PTR_DAT_0580fbb0);
    bRam0000000005c38043 = 1;
  }
  uStack_28 = 0;
  if ((param_2 != 0) && (plVar2 = *(long **)(param_2 + 0x10), plVar2 != (long *)0x0)) {
    uVar1 = (**(code **)(*plVar2 + 0x158))(plVar2,*(undefined8 *)(*plVar2 + 0x160));
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue_397831c
                        (*(long *)(param_1 + 0x10),uVar1,&uStack_28,*(undefined8 *)PTR_DAT_05761288)
      ;
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 != 0) {
        if ((uVar3 & 1) == 0) {
          System_Collections_Generic_Dictionary_int__object___Add_3976a7c
                    (lVar4,uVar1,param_2,*(undefined8 *)PTR_DAT_05793ee8);
        }
        else {
          System_Collections_Generic_Dictionary_int__object___set_Item_3976a64
                    (lVar4,uVar1,param_2,*(undefined8 *)PTR_DAT_0580fbb0);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

