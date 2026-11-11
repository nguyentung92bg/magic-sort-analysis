/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$CheckProfileSpriteCacheRequests
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__CheckProfileSpriteCacheRequests (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$CheckProfileSpriteCacheRequests
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__CheckProfileSpriteCacheRequests
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__CheckProfileSpriteCacheRequests_3e08d40
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  undefined8 uStack_48;
  
  if ((bRam0000000005c38031 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e0f88);
    FUN_012d0dc8(PTR_DAT_0578ba90);
    FUN_012d0dc8(PTR_DAT_057cbf68);
    FUN_012d0dc8(PTR_DAT_057c1480);
    FUN_012d0dc8(PTR_DAT_05779c28);
    FUN_012d0dc8(PTR_DAT_057ebfa0);
    FUN_012d0dc8(PTR_DAT_057cc850);
    FUN_012d0dc8(PTR_DAT_057c8fe0);
    FUN_012d0dc8(PTR_DAT_0576ead8);
    FUN_012d0dc8(PTR_DAT_057854f8);
    FUN_012d0dc8(PTR_DAT_057808f0);
    bRam0000000005c38031 = 1;
  }
  puVar6 = PTR_DAT_057e0f88;
  puVar5 = PTR_DAT_057c8fe0;
  puVar4 = PTR_DAT_0578ba90;
  puVar3 = PTR_DAT_057854f8;
  puVar2 = PTR_DAT_05779c28;
  if (*(char *)(param_1 + 0x51) == '\0') {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  if (lVar7 != 0) {
    iVar12 = *(int *)(lVar7 + 0x18) + -1;
    if (iVar12 < 0) {
LAB_03f08f78:
      if (*(long *)(param_1 + 0x30) != 0) {
        System_Collections_Generic_List_object___Reverse_21fe478
                  (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_057ebfa0);
        if (*(long *)(param_1 + 0x28) != 0) {
          System_Collections_Generic_List_object___InsertRange_21fdaf0
                    (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x30),
                     *(undefined8 *)PTR_DAT_057c1480);
          lVar7 = *(long *)(param_1 + 0x30);
          if (lVar7 != 0) {
            iVar12 = *(int *)(lVar7 + 0x18);
            *(undefined4 *)(lVar7 + 0x18) = 0;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (0 < iVar12) {
              System_Array__Clear_26a6bec(*(undefined8 *)(lVar7 + 0x10),0,iVar12,0);
            }
            *(undefined1 *)(param_1 + 0x51) = 0;
            return;
          }
        }
      }
    }
    else {
      do {
        lVar7 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (lVar7,iVar12,*(undefined8 *)puVar5);
        if (lVar7 == 0) break;
        if (*(char *)(lVar7 + 0x30) == '\0') {
          Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__AssignProviderTypeTo_3e093d4
                    (param_1,lVar7);
        }
        if (*(char *)(lVar7 + 0x29) == '\0') {
          if (*(char *)(lVar7 + 0x2a) != '\0') {
            if (*(long *)(param_1 + 0x28) == 0) break;
            System_Collections_Generic_List_object___RemoveAt_21fe320
                      (*(long *)(param_1 + 0x28),iVar12,*(undefined8 *)puVar2);
            lVar8 = *(long *)(param_1 + 0x30);
            if (lVar8 == 0) break;
            lVar9 = *(long *)(lVar8 + 0x10);
            lVar11 = *(long *)puVar4;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 == 0) break;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar7;
              FUN_012d0d74(plVar10,lVar7);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                        (lVar8,lVar7);
            }
            if ((*(ulong *)(lVar7 + 0x30) >> 0x20 == 1) && ((*(ulong *)(lVar7 + 0x30) & 0xff) != 0))
            {
              if ((*(long *)(param_1 + 0x48) == 0) ||
                 (lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar8 == 0)) break;
              Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__Remove_3e0a68c
                        (lVar8,lVar7);
              uStack_48 = 0;
              System_Nullable_Int32Enum____ctor_203c774(&uStack_48,0,*(undefined8 *)puVar3);
              *(undefined8 *)(lVar7 + 0x30) = uStack_48;
            }
            *(undefined1 *)(lVar7 + 0x2a) = 0;
          }
        }
        else {
          if (*(long *)(param_1 + 0x38) == 0) break;
          System_Collections_Generic_HashSet_object___Remove_200aebc
                    (*(long *)(param_1 + 0x38),*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)puVar6);
          if (*(long *)(param_1 + 0x28) == 0) break;
          System_Collections_Generic_List_object___RemoveAt_21fe320
                    (*(long *)(param_1 + 0x28),iVar12,*(undefined8 *)puVar2);
        }
        iVar12 = iVar12 + -1;
        if (iVar12 < 0) goto LAB_03f08f78;
        lVar7 = *(long *)(param_1 + 0x28);
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

