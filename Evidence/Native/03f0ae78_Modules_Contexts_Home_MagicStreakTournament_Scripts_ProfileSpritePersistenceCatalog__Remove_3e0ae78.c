/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$Remove
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Remove (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this, System_String_o* url, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceCatalog$$Remove
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Remove
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog_o* __this,
   System_String_o* url, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceCatalog__Remove_3e0ae78
          (long param_1,long *param_2)

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
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uStack_64;
  
  if ((bRam0000000005c38049 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dd028);
    bRam0000000005c38049 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar14 = *(long *)(param_1 + 0x10);
    uVar5 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    if (lVar14 != 0) {
      lVar9 = *(long *)PTR_DAT_057dd028;
      if (*(long *)(lVar14 + 0x10) != 0) {
        plVar15 = *(long **)(lVar14 + 0x30);
        uStack_64 = uVar5;
        if (plVar15 == (long *)0x0) {
          uVar5 = System_Int32__GetHashCode_26c9760
                            (&uStack_64,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x138));
        }
        else {
          lVar7 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x150);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_0131942c(lVar7);
          }
          lVar10 = *plVar15;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar7) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_03a780d4;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar15,lVar7,1);
LAB_03a780d4:
          uVar5 = (*(code *)*puVar6)(plVar15,uVar5,puVar6[1]);
        }
        lVar7 = *(long *)(lVar14 + 0x10);
        if (lVar7 == 0) {
LAB_03a78314:
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
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
        uVar1 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
        if (-1 < (int)uVar1) {
          uVar18 = 0xffffffff;
          do {
            uVar16 = uVar1;
            uVar1 = uStack_64;
            lVar7 = *(long *)(lVar14 + 0x18);
            if (lVar7 == 0) goto LAB_03a78314;
            if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_03a78318;
            puVar17 = (uint *)(lVar7 + (long)(int)uVar16 * 0x18 + 0x20);
            lVar10 = (long)(int)uVar16;
            if (*puVar17 == uVar5) {
              plVar15 = *(long **)(lVar14 + 0x30);
              if (plVar15 == (long *)0x0) {
                plVar15 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x10) + 8))();
                if (plVar15 == (long *)0x0) goto LAB_03a78314;
                uVar12 = (**(code **)(*plVar15 + 0x1b8))
                                   (plVar15,*(undefined4 *)(lVar7 + lVar10 * 0x18 + 0x28),uStack_64,
                                    *(undefined8 *)(*plVar15 + 0x1c0));
              }
              else {
                if (plVar15 == (long *)0x0) goto LAB_03a78314;
                lVar8 = *(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x150);
                uVar2 = *(undefined4 *)(lVar7 + lVar10 * 0x18 + 0x28);
                if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
                  lVar8 = FUN_0131942c(lVar8);
                }
                lVar11 = *plVar15;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == lVar8) {
                      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_03a78220;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar6 = (undefined8 *)FUN_0131971c(plVar15,lVar8,0);
LAB_03a78220:
                uVar12 = (*(code *)*puVar6)(plVar15,uVar2,uVar1,puVar6[1]);
              }
              if ((uVar12 & 1) != 0) {
                if ((int)uVar18 < 0) {
                  lVar9 = *(long *)(lVar14 + 0x10);
                  if (lVar9 == 0) goto LAB_03a78314;
                  if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_03a78318;
                  *(int *)(lVar9 + (ulong)uVar3 * 4 + 0x20) =
                       *(int *)(lVar7 + lVar10 * 0x18 + 0x24) + 1;
                }
                else {
                  lVar9 = *(long *)(lVar14 + 0x18);
                  if (lVar9 == 0) goto LAB_03a78314;
                  if (*(uint *)(lVar9 + 0x18) <= uVar18) goto LAB_03a78318;
                  *(undefined4 *)(lVar9 + (long)(int)uVar18 * 0x18 + 0x24) =
                       *(undefined4 *)(lVar7 + lVar10 * 0x18 + 0x24);
                }
                *puVar17 = 0xffffffff;
                uVar2 = *(undefined4 *)(lVar14 + 0x24);
                lVar7 = lVar7 + lVar10 * 0x18;
                *(undefined8 *)(lVar7 + 0x30) = 0;
                *(undefined4 *)(lVar7 + 0x24) = uVar2;
                *(uint *)(lVar14 + 0x24) = uVar16;
                *(ulong *)(lVar14 + 0x28) =
                     CONCAT44((int)((ulong)*(undefined8 *)(lVar14 + 0x28) >> 0x20) + 1,
                              (int)*(undefined8 *)(lVar14 + 0x28) + 1);
                return 1;
              }
            }
            uVar1 = *(uint *)(lVar7 + lVar10 * 0x18 + 0x24);
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

