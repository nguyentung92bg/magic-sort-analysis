/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$RequestCacheSprites
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSprites (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, System_Collections_Generic_List_PermanentLeaderboardPlayerViewModel__o* players, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$RequestCacheSprites
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSprites
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this,
   System_Collections_Generic_List_PermanentLeaderboardPlayerViewModel__o* players, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSprites_3e08a90
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000005c3802e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05764190);
    FUN_012d0dc8(PTR_DAT_057d8428);
    FUN_012d0dc8(PTR_DAT_05804ff8);
    FUN_012d0dc8(PTR_DAT_05813f30);
    FUN_012d0dc8(PTR_DAT_057fdb00);
    bRam0000000005c3802e = 1;
  }
  puVar3 = PTR_DAT_057fdb00;
  puVar2 = PTR_DAT_057d8428;
  puVar1 = PTR_DAT_05764190;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if (param_2 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_78,param_2,*(undefined8 *)PTR_DAT_05813f30);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    while( true ) {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_60,*(undefined8 *)puVar2);
      lVar4 = lStack_50;
      if ((uVar5 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_60,*(undefined8 *)puVar1);
        return;
      }
      lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
      if (lVar6 == 0) break;
      System_Object___ctor_23dfe5c(lVar6,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar4 + 0x38);
      FUN_012d0d74();
      *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar4 + 0x30);
      FUN_012d0d74();
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
      FUN_012d0d74();
      Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSpriteInternal_3e08704
                (param_1,lVar6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

