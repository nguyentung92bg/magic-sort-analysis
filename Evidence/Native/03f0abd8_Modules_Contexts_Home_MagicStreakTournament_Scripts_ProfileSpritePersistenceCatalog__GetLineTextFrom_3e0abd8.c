/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$GetLineTextFrom
System_String_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__GetLineTextFrom (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalogItem_o* profileSpritePersistenceCatalogItem, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$GetLineTextFrom
   System_String_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__GetLineTextFrom
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalogItem_o*
   profileSpritePersistenceCatalogItem, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__GetLineTextFrom_3e0abd8
               (undefined8 param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  
  if ((bRam0000000005c38047 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fc560);
    bRam0000000005c38047 = 1;
  }
  puVar3 = PTR_DAT_057fc560;
  if (param_2 != 0) {
    lVar9 = *(long *)(param_2 + 0x10);
    lVar5 = System_Int32__ToString_26c9768(param_2 + 0x18,0);
    lVar7 = *(long *)puVar3;
    lVar4 = lVar7;
    lVar6 = lVar5;
    if (((((lVar9 != 0) && (*(int *)(lVar9 + 0x10) != 0)) && (lVar4 = lVar9, lVar7 != 0)) &&
        ((*(int *)(lVar7 + 0x10) != 0 && (lVar6 = lVar7, lVar5 != 0)))) &&
       (*(int *)(lVar5 + 0x10) != 0)) {
      lVar4 = thunk_FUN_0131a210(*(int *)(lVar7 + 0x10) + *(int *)(lVar9 + 0x10) +
                                 *(int *)(lVar5 + 0x10));
      System_String__FillStringChecked_1ed0ed0(lVar4,0,lVar9);
      System_String__FillStringChecked_1ed0ed0(lVar4,*(undefined4 *)(lVar9 + 0x10),lVar7);
      System_String__FillStringChecked_1ed0ed0
                (lVar4,*(int *)(lVar7 + 0x10) + *(int *)(lVar9 + 0x10),lVar5);
      return lVar4;
    }
    if ((bRam0000000005c283d5 & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_057c9ca0,lVar6,lVar5,0);
      bRam0000000005c283d5 = 1;
    }
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) == 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar8) {
      lVar4 = lVar6;
      if (bVar2) {
        lVar4 = **(long **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
      }
    }
    else if (!bVar2) {
      if ((lVar4 == 0) || (lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar1 = *(int *)(lVar4 + 0x10);
      lVar5 = thunk_FUN_0131a210(*(int *)(lVar6 + 0x10) + iVar1);
      System_String__FillStringChecked_1ed0ed0(lVar5,0,lVar4);
      System_String__FillStringChecked_1ed0ed0(lVar5,iVar1,lVar6);
      lVar4 = lVar5;
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

