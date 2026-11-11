/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$GetSprite
UnityEngine_Sprite_o* Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__GetSprite (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, System_String_o* profileId, System_String_o* pictureId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$GetSprite
   UnityEngine_Sprite_o*
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__GetSprite
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this,
   System_String_o* profileId, System_String_o* pictureId, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__GetSprite_3e09630
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000005c38034 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a5370);
    bRam0000000005c38034 = 1;
  }
  uStack_28 = 0;
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
    uVar1 = System_String__Equals_1ecf17c(param_3,*(undefined8 *)(lVar3 + 0x18),4,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_03f096ec;
      uVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_3ed1afc
                        (*(long *)(param_1 + 0x10),param_2,&uStack_28,
                         *(undefined8 *)PTR_DAT_057a5370);
      if ((uVar1 & 1) != 0) {
        return uStack_28;
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar2 = Modules_Contexts_Home_Profile_Scripts_ProfileSpriteService__FindLeaderboardSpriteById_2ae3bf4
                        (*(long *)(param_1 + 0x18),param_3,0);
      return uVar2;
    }
  }
LAB_03f096ec:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

