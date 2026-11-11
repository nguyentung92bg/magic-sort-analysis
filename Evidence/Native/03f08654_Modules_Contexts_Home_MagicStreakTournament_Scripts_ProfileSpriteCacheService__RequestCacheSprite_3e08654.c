/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$RequestCacheSprite
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSprite (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, System_String_o* imageId, System_String_o* imageUrl, System_String_o* publicId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$RequestCacheSprite
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSprite
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this,
   System_String_o* imageId, System_String_o* imageUrl, System_String_o* publicId, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__RequestCacheSprite_3e08654
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_057fdb00;
  if ((bRam0000000005c3802c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fdb00);
    bRam0000000005c3802c = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x10),param_2);
    *(undefined8 *)(lVar3 + 0x18) = param_3;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x18),param_3);
    *(undefined8 *)(lVar3 + 0x20) = param_4;
    FUN_012d0d74((undefined8 *)(lVar3 + 0x20),param_4);
    if ((bRam0000000005c3802f & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_05817e88);
      FUN_012d0dc8(PTR_DAT_057618d8);
      FUN_012d0dc8(PTR_DAT_057bf950);
      FUN_012d0dc8(PTR_DAT_0578ba90);
      FUN_012d0dc8(PTR_DAT_057fc6a8);
      bRam0000000005c3802f = 1;
    }
    if ((((*(long *)(param_1 + 0x18) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar5 != 0)) &&
        (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) && (lVar3 != 0)) {
      uVar4 = System_String__Equals_1ecf130
                        (*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar5 + 0x18),0);
      if ((((uVar4 & 1) == 0) ||
          (uVar4 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(lVar3 + 0x20),0),
          (uVar4 & 1) != 0)) ||
         (uVar4 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(lVar3 + 0x18),0),
         (uVar4 & 1) != 0)) {
        return;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey_3ed04a4
                          (*(long *)(param_1 + 0x10),*(undefined8 *)(lVar3 + 0x20),
                           *(undefined8 *)PTR_DAT_05817e88);
        if ((uVar4 & 1) != 0) {
          return;
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar4 = System_Collections_Generic_HashSet_object___Contains_200acd8
                            (*(long *)(param_1 + 0x38),*(undefined8 *)(lVar3 + 0x20),
                             *(undefined8 *)PTR_DAT_057bf950);
          if ((uVar4 & 1) != 0) {
            return;
          }
          if (*(long *)(lVar3 + 0x18) != 0) {
            uVar4 = System_String__Contains_1ed55f4
                              (*(long *)(lVar3 + 0x18),*(undefined8 *)PTR_DAT_057fc6a8,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            if (*(long *)(param_1 + 0x38) != 0) {
              System_Collections_Generic_HashSet_object___Add_200b82c
                        (*(long *)(param_1 + 0x38),*(undefined8 *)(lVar3 + 0x20),
                         *(undefined8 *)PTR_DAT_057618d8);
              lVar5 = *(long *)(param_1 + 0x28);
              if (lVar5 != 0) {
                lVar6 = *(long *)(lVar5 + 0x10);
                lVar8 = *(long *)PTR_DAT_0578ba90;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar6 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar7 = lVar3;
                    FUN_012d0d74(plVar7,lVar3);
                  }
                  else {
                    (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                              (lVar5,lVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

