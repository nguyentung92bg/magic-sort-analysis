/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$GetProfileSpritePersistenceCatalogItemFromLineText
Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalogItem_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetProfileSpritePersistenceCatalogItemFromLineText (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, System_String_o* line, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$GetProfileSpritePersistenceCatalogItemFromLineText
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalogItem_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetProfileSpritePersistenceCatalogItemFromLineText
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   System_String_o* line, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetProfileSpritePersistenceCatalogItemFromLineText_3e0b450
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000005c38054 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057df940);
    bRam0000000005c38054 = 1;
  }
  puVar1 = PTR_DAT_057df940;
  if (param_2 != 0) {
    lVar3 = System_String__Split_1ed3050(param_2,0x2c,0,0);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar4 != 0) && (System_Object___ctor_23dfe5c(lVar4,0), lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + 0x20);
        FUN_012d0d74();
        if (1 < *(uint *)(lVar3 + 0x18)) {
          uVar2 = System_Int32__Parse_26c9a98(*(undefined8 *)(lVar3 + 0x28),0);
          *(undefined4 *)(lVar4 + 0x18) = uVar2;
          return lVar4;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

