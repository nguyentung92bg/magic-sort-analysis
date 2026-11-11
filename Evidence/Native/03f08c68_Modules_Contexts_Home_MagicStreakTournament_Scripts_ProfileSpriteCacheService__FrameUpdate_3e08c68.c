/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$FrameUpdate
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__FrameUpdate (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, float elapsedSeconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$FrameUpdate
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__FrameUpdate
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, float
   elapsedSeconds, const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__FrameUpdate_3e08c68
               (long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000005c38030 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057cc850);
    bRam0000000005c38030 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__CheckSpriteRequests_3e0a43c
              ();
    if (*(char *)(param_1 + 0x50) != '\0') {
      return;
    }
    if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
      lVar11 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
      if (lVar11 == 0) {
        return;
      }
      if (*(char *)(lVar11 + 0x55) == '\0') {
        return;
      }
      Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__CheckProfileSpriteCacheRequests_3e08d40
                (param_1);
      if (*(long *)(param_1 + 0x28) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x40) != 0) {
          Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteHttpProvider__TryLoadRequestedSprites_3e08ffc
                    ();
          lVar11 = *(long *)(param_1 + 0x48);
          if (lVar11 != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
            if ((bRam0000000005c3803f & 1) == 0) {
              FUN_012d0dc8(PTR_DAT_05799a70);
              FUN_012d0dc8(PTR_DAT_057cc850);
              FUN_012d0dc8(PTR_DAT_057c8fe0);
              FUN_012d0dc8(PTR_DAT_0576ead8);
              FUN_012d0dc8(PTR_DAT_057808f0);
              FUN_012d0dc8(PTR_DAT_0579fb08);
              bRam0000000005c3803f = 1;
            }
            puVar6 = PTR_DAT_057c8fe0;
            puVar5 = PTR_DAT_0579fb08;
            puVar4 = PTR_DAT_05799a70;
            if (*(int *)(lVar11 + 0x28) < 3) {
              if (lVar10 == 0) {
LAB_03f093d0:
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              iVar2 = *(int *)(lVar10 + 0x18);
              do {
                do {
                  iVar2 = iVar2 + -1;
                  if (iVar2 < 0) {
                    return;
                  }
                  lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                                    (lVar10,iVar2,*(undefined8 *)puVar6);
                  if (lVar7 == 0) goto LAB_03f093d0;
                } while ((((*(char *)(lVar7 + 0x28) != '\0') || (*(char *)(lVar7 + 0x29) != '\0'))
                         || (*(ulong *)(lVar7 + 0x30) >> 0x20 != 1)) ||
                        ((*(ulong *)(lVar7 + 0x30) & 0xff) == 0));
                *(undefined1 *)(lVar7 + 0x28) = 1;
                if (*(long *)(lVar11 + 0x10) == 0) goto LAB_03f093d0;
                uVar8 = Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__GetImageAsync_3e0a2dc
                                  (*(long *)(lVar11 + 0x10),lVar7);
                lVar13 = *(long *)(lVar11 + 0x18);
                uStack_60 = 0;
                uStack_58 = 0;
                System_ValueTuple_object__object____ctor_2b92f7c
                          (&uStack_60,uVar8,lVar7,*(undefined8 *)puVar5);
                if (lVar13 == 0) goto LAB_03f093d0;
                lVar7 = *(long *)(lVar13 + 0x10);
                lVar12 = *(long *)puVar4;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar7 == 0) goto LAB_03f093d0;
                uVar3 = *(uint *)(lVar13 + 0x18);
                if (uVar3 < *(uint *)(lVar7 + 0x18)) {
                  lVar7 = lVar7 + (long)(int)uVar3 * 0x10;
                  *(uint *)(lVar13 + 0x18) = uVar3 + 1;
                  puVar9 = (undefined8 *)(lVar7 + 0x20);
                  *puVar9 = uStack_60;
                  *(undefined8 *)(lVar7 + 0x28) = uStack_58;
                  FUN_012d0d74(puVar9,0);
                }
                else {
                  (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))
                            (lVar13);
                }
                iVar1 = *(int *)(lVar11 + 0x28) + 1;
                *(int *)(lVar11 + 0x28) = iVar1;
              } while (iVar1 < 3);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

