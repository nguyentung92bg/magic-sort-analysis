/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$DeleteItemsFromCatalog
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__DeleteItemsFromCatalog (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, System_Collections_Generic_List_ProfileSpritePersistenceCatalogItem__o* items, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$DeleteItemsFromCatalog
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__DeleteItemsFromCatalog
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   System_Collections_Generic_List_ProfileSpritePersistenceCatalogItem__o* items, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__DeleteItemsFromCatalog_3e0b50c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c3804e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ffbb8);
    FUN_012d0dc8(PTR_DAT_05787e58);
    FUN_012d0dc8(PTR_DAT_0580ae30);
    FUN_012d0dc8(PTR_DAT_0576cbf8);
    bRam0000000005c3804e = 1;
  }
  puVar2 = PTR_DAT_057ffbb8;
  puVar1 = PTR_DAT_05787e58;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (param_2 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,param_2,*(undefined8 *)PTR_DAT_0576cbf8);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar2);
        return;
      }
      if (lStack_38 == 0) break;
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Remove_3e0ae78
                (*(long *)(param_1 + 0x10),*(undefined8 *)(lStack_38 + 0x10));
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

