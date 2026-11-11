/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$InitializeData
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__InitializeData (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$InitializeData
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__InitializeData
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__InitializeData_411e1b8
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__TryFetchCurrentEvent_411e164
            ();
  Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CacheLastSeenProgressbarValues_411e1e0
            (param_1);
  Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CacheLastSeenData_411e208
            (param_1);
  if ((bRam0000000005c3ac70 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c5510);
    FUN_012d0dc8(PTR_DAT_05781718);
    FUN_012d0dc8(PTR_DAT_057d0610);
    FUN_012d0dc8(PTR_DAT_057fd168);
    bRam0000000005c3ac70 = 1;
  }
  puVar2 = PTR_DAT_057c5510;
  puVar1 = PTR_DAT_05781718;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar4 != 0)) {
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x30);
      if (lVar4 == 0) goto LAB_0421e3dc;
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_38,lVar4,*(undefined8 *)PTR_DAT_057fd168);
      while (uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_38,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
        if (lStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSprite_3e08654
                  (*(long *)(param_1 + 0x48),*(undefined8 *)(lStack_28 + 0x38),
                   *(undefined8 *)(lStack_28 + 0x30),*(undefined8 *)(lStack_28 + 0x20),0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_38,*(undefined8 *)puVar2);
    }
    return;
  }
LAB_0421e3dc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

