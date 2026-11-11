/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceProvider$$RemoveFromCache
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__RemoveFromCache (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider_o* __this, Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheRequest_o* profileSpriteCacheRequests, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceProvider$$RemoveFromCache
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__RemoveFromCache
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider_o* __this,
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheRequest_o*
   profileSpriteCacheRequests, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceProvider__RemoveFromCache_3e09474
          (long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uStack_64;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((param_2 == 0) || (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  plVar10 = *(long **)(param_2 + 0x18);
  if ((bRam0000000005c38049 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dd028);
    bRam0000000005c38049 = 1;
  }
  if (plVar10 != (long *)0x0) {
    lVar7 = *(long *)(lVar7 + 0x10);
    uVar5 = (**(code **)(*plVar10 + 0x158))(plVar10,*(undefined8 *)(*plVar10 + 0x160));
    if (lVar7 != 0) {
      lVar11 = *(long *)PTR_DAT_057dd028;
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar10 = *(long **)(lVar7 + 0x30);
        uStack_64 = uVar5;
        if (plVar10 == (long *)0x0) {
          uVar5 = System_Int32__GetHashCode_26c9760
                            (&uStack_64,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x138));
        }
        else {
          lVar8 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x150);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_0131942c(lVar8);
          }
          lVar12 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_03a780d4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar10,lVar8,1);
LAB_03a780d4:
          uVar5 = (*(code *)*puVar6)(plVar10,uVar5,puVar6[1]);
        }
        lVar8 = *(long *)(lVar7 + 0x10);
        if (lVar8 == 0) {
LAB_03a78314:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar5 = uVar5 & 0x7fffffff;
        iVar4 = 0;
        if (uVar1 != 0) {
          iVar4 = (int)uVar5 / (int)uVar1;
        }
        uVar3 = uVar5 - iVar4 * uVar1;
        if (uVar1 <= uVar3) {
LAB_03a78318:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        uVar1 = *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) - 1;
        if (-1 < (int)uVar1) {
          uVar18 = 0xffffffff;
          do {
            uVar16 = uVar1;
            uVar1 = uStack_64;
            lVar8 = *(long *)(lVar7 + 0x18);
            if (lVar8 == 0) goto LAB_03a78314;
            if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_03a78318;
            puVar17 = (uint *)(lVar8 + (long)(int)uVar16 * 0x18 + 0x20);
            lVar12 = (long)(int)uVar16;
            if (*puVar17 == uVar5) {
              plVar10 = *(long **)(lVar7 + 0x30);
              if (plVar10 == (long *)0x0) {
                plVar10 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                        + 0x10) + 8))();
                if (plVar10 == (long *)0x0) goto LAB_03a78314;
                uVar14 = (**(code **)(*plVar10 + 0x1b8))
                                   (plVar10,*(undefined4 *)(lVar8 + lVar12 * 0x18 + 0x28),uStack_64,
                                    *(undefined8 *)(*plVar10 + 0x1c0));
              }
              else {
                if (plVar10 == (long *)0x0) goto LAB_03a78314;
                lVar9 = *(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x150);
                uVar2 = *(undefined4 *)(lVar8 + lVar12 * 0x18 + 0x28);
                if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
                  lVar9 = FUN_0131942c(lVar9);
                }
                lVar13 = *plVar10;
                uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar9) {
                      puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_03a78220;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar6 = (undefined8 *)FUN_0131971c(plVar10,lVar9,0);
LAB_03a78220:
                uVar14 = (*(code *)*puVar6)(plVar10,uVar2,uVar1,puVar6[1]);
              }
              if ((uVar14 & 1) != 0) {
                if ((int)uVar18 < 0) {
                  lVar11 = *(long *)(lVar7 + 0x10);
                  if (lVar11 == 0) goto LAB_03a78314;
                  if (*(uint *)(lVar11 + 0x18) <= uVar3) goto LAB_03a78318;
                  *(int *)(lVar11 + (ulong)uVar3 * 4 + 0x20) =
                       *(int *)(lVar8 + lVar12 * 0x18 + 0x24) + 1;
                }
                else {
                  lVar11 = *(long *)(lVar7 + 0x18);
                  if (lVar11 == 0) goto LAB_03a78314;
                  if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_03a78318;
                  *(undefined4 *)(lVar11 + (long)(int)uVar18 * 0x18 + 0x24) =
                       *(undefined4 *)(lVar8 + lVar12 * 0x18 + 0x24);
                }
                *puVar17 = 0xffffffff;
                uVar2 = *(undefined4 *)(lVar7 + 0x24);
                lVar8 = lVar8 + lVar12 * 0x18;
                *(undefined8 *)(lVar8 + 0x30) = 0;
                *(undefined4 *)(lVar8 + 0x24) = uVar2;
                *(uint *)(lVar7 + 0x24) = uVar16;
                *(ulong *)(lVar7 + 0x28) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar7 + 0x28) >> 0x20) + 1,
                              (int)*(undefined8 *)(lVar7 + 0x28) + 1);
                return 1;
              }
            }
            uVar1 = *(uint *)(lVar8 + lVar12 * 0x18 + 0x24);
            uVar18 = uVar16;
          } while (-1 < (int)uVar1);
        }
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

