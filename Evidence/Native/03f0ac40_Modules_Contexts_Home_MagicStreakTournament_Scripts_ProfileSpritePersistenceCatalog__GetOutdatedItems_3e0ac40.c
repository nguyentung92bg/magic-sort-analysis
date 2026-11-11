/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$GetOutdatedItems
System_Collections_Generic_List_ProfileSpritePersistenceCatalogItem__o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__GetOutdatedItems (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this, int32_t activeSessionCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$GetOutdatedItems
   System_Collections_Generic_List_ProfileSpritePersistenceCatalogItem__o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__GetOutdatedItems
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this,
   int32_t activeSessionCount, const MethodInfo* method); */

long Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__GetOutdatedItems_3e0ac40
               (long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = PTR_DAT_057c50b8;
  if ((bRam0000000005c38048 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e8960);
    FUN_012d0dc8(PTR_DAT_05804dc0);
    FUN_012d0dc8(PTR_DAT_0581b9d0);
    FUN_012d0dc8(PTR_DAT_05772050);
    FUN_012d0dc8(PTR_DAT_05793688);
    FUN_012d0dc8(PTR_DAT_057a3598);
    FUN_012d0dc8(PTR_DAT_057c50b8);
    FUN_012d0dc8(PTR_DAT_05812710);
    bRam0000000005c38048 = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar5,*(undefined8 *)PTR_DAT_057a3598);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar6 = System_Collections_Generic_Dictionary_int__object___get_Values_397683c
                          (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_057e8960),
       puVar4 = PTR_DAT_0581b9d0, puVar3 = PTR_DAT_05804dc0, puVar2 = PTR_DAT_05793688, lVar6 != 0))
    {
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_3109890
                (&uStack_48,lVar6,*(undefined8 *)PTR_DAT_05812710);
      while( true ) {
        uVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3922ab0
                          (&uStack_48,*(undefined8 *)puVar4);
        if ((uVar7 & 1) == 0) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3922aac
                    (&uStack_48,*(undefined8 *)puVar3);
          return lVar5;
        }
        if (lStack_38 == 0) break;
        if (*(int *)(lStack_38 + 0x18) <= param_2) {
          lVar6 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)puVar2;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            plVar8 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *plVar8 = lStack_38;
            FUN_012d0d74(plVar8,lStack_38);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar5,lStack_38);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

