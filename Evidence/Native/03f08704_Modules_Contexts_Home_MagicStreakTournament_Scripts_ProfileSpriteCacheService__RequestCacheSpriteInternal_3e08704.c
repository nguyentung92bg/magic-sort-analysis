/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$RequestCacheSpriteInternal
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSpriteInternal (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheRequest_o* profileSpriteCacheRequest, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$RequestCacheSpriteInternal
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSpriteInternal
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheRequest_o*
   profileSpriteCacheRequest, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSpriteInternal_3e08704
               (long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000005c3802f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05817e88);
    FUN_012d0dc8(PTR_DAT_057618d8);
    FUN_012d0dc8(PTR_DAT_057bf950);
    FUN_012d0dc8(PTR_DAT_0578ba90);
    FUN_012d0dc8(PTR_DAT_057fc6a8);
    bRam0000000005c3802f = 1;
  }
  if ((((*(long *)(param_1 + 0x18) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar3 != 0)) &&
      (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) && (param_2 != 0)) {
    uVar2 = System_String__Equals_1ecf130
                      (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar3 + 0x18),0);
    if ((((uVar2 & 1) == 0) ||
        (uVar2 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_2 + 0x20),0),
        (uVar2 & 1) != 0)) ||
       (uVar2 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(param_2 + 0x18),0),
       (uVar2 & 1) != 0)) {
      return;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey_3ed04a4
                        (*(long *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x20),
                         *(undefined8 *)PTR_DAT_05817e88);
      if ((uVar2 & 1) != 0) {
        return;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar2 = System_Collections_Generic_HashSet_object___Contains_200acd8
                          (*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x20),
                           *(undefined8 *)PTR_DAT_057bf950);
        if ((uVar2 & 1) != 0) {
          return;
        }
        if (*(long *)(param_2 + 0x18) != 0) {
          uVar2 = System_String__Contains_1ed55f4
                            (*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_057fc6a8,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (*(long *)(param_1 + 0x38) != 0) {
            System_Collections_Generic_HashSet_object___Add_200b82c
                      (*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x20),
                       *(undefined8 *)PTR_DAT_057618d8);
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != 0) {
              lVar4 = *(long *)(lVar3 + 0x10);
              lVar6 = *(long *)PTR_DAT_0578ba90;
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar4 != 0) {
                uVar1 = *(uint *)(lVar3 + 0x18);
                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = param_2;
                  FUN_012d0d74(plVar5,param_2);
                }
                else {
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar3,param_2);
                }
                *(undefined1 *)(param_1 + 0x51) = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

