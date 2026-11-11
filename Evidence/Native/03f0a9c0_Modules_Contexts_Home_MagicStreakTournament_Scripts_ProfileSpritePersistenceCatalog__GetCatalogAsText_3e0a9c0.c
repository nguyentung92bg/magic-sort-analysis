/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$GetCatalogAsText
System_String_array* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__GetCatalogAsText (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$GetCatalogAsText
   System_String_array*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__GetCatalogAsText
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this,
   const MethodInfo* method); */

long * Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__GetCatalogAsText_3e0a9c0
                 (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000005c38046 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d5920);
    FUN_012d0dc8(PTR_DAT_057cb208);
    FUN_012d0dc8(PTR_DAT_057b7ce8);
    FUN_012d0dc8(PTR_DAT_0577b448);
    FUN_012d0dc8(PTR_DAT_0577f490);
    FUN_012d0dc8(PTR_DAT_057f3518);
    FUN_012d0dc8(PTR_DAT_057bb220);
    bRam0000000005c38046 = 1;
  }
  puVar1 = PTR_DAT_057bb220;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = System_Collections_Generic_Dictionary_int__object___get_Count_39766a0
                      (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_057cb208);
    plVar4 = (long *)FUN_012d0e38(*(undefined8 *)puVar1,uVar3);
    puVar2 = PTR_DAT_057b7ce8;
    puVar1 = PTR_DAT_0577b448;
    if (*(long *)(param_1 + 0x10) != 0) {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator_3976ed0
                (&uStack_88,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_057d5920);
      uVar9 = 0;
      uStack_58 = uStack_80;
      uStack_60 = uStack_88;
      uStack_48 = uStack_70;
      uStack_50 = uStack_78;
      uStack_40 = uStack_68;
      while( true ) {
        uVar5 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext_3922430
                          (&uStack_60,*(undefined8 *)puVar1);
        if ((uVar5 & 1) == 0) {
          System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose_392254c
                    (&uStack_60,*(undefined8 *)puVar2);
          return plVar4;
        }
        lVar6 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__GetLineTextFrom_3e0abd8
                          (uVar5,uStack_48);
        if (plVar4 == (long *)0x0) break;
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_01320d5c(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
          uVar8 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
          FUN_012d0eb8(uVar8,0);
        }
        if (*(uint *)(plVar4 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        plVar4[(long)(int)uVar9 + 4] = lVar6;
        FUN_012d0d74(plVar4 + (long)(int)uVar9 + 4,lVar6);
        uVar9 = uVar9 + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

