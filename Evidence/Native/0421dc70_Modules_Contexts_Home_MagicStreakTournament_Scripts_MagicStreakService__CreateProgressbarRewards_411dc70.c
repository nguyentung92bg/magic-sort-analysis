/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$CreateProgressbarRewards
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CreateProgressbarRewards (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$CreateProgressbarRewards
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CreateProgressbarRewards
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CreateProgressbarRewards_411dc70
               (long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  
  puVar4 = PTR_DAT_057c2598;
  if ((bRam0000000005c3ac7f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057fcd18);
    FUN_012d0dc8(PTR_DAT_05782108);
    FUN_012d0dc8(PTR_DAT_057a7c50);
    FUN_012d0dc8(PTR_DAT_057d67b8);
    FUN_012d0dc8(PTR_DAT_057c2598);
    FUN_012d0dc8(PTR_DAT_057aed18);
    bRam0000000005c3ac7f = 1;
  }
  lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if (lVar9 != 0) {
    System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_05782108);
    plVar15 = (long *)(param_1 + 0x60);
    *plVar15 = lVar9;
    FUN_012d0d74(plVar15,lVar9);
    puVar6 = PTR_DAT_057fcd18;
    puVar5 = PTR_DAT_057d67b8;
    puVar4 = PTR_DAT_057aed18;
    if ((((*(long *)(param_1 + 0x10) != 0) &&
         (lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar9 != 0)) &&
        (lVar9 = *(long *)(lVar9 + 0x80), lVar9 != 0)) &&
       (lVar9 = *(long *)(lVar9 + 0x38), lVar9 != 0)) {
      if (0 < *(int *)(lVar9 + 0x18)) {
        iVar16 = 0;
        do {
          lVar10 = System_Collections_Generic_List_object___get_Item_21fc76c
                             (lVar9,iVar16,*(undefined8 *)puVar5);
          if (lVar10 == 0) goto LAB_0421de64;
          uVar17 = *(undefined8 *)(lVar10 + 0x18);
          uVar1 = *(undefined4 *)(lVar10 + 0x10);
          iVar2 = *(int *)(lVar9 + 0x18);
          lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
          if (lVar10 == 0) goto LAB_0421de64;
          bVar7 = iVar16 == iVar2 + -1;
          bVar8 = iVar16 == 0;
          iVar16 = iVar16 + 1;
          Modules_Contexts_Home_MagicStreakTournament_Scripts_UI_Rewards_MagicStreakProgressbarRewardElementViewModel___ctor_3e10ecc
                    (lVar10,uVar17,bVar7,bVar8,bVar8,0,iVar16,uVar1,0);
          lVar11 = *plVar15;
          if (lVar11 == 0) goto LAB_0421de64;
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar14 = *(long *)puVar6;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0421de64;
          uVar3 = *(uint *)(lVar11 + 0x18);
          if (uVar3 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar3 + 1;
            plVar13 = (long *)(lVar12 + (long)(int)uVar3 * 8 + 0x20);
            *plVar13 = lVar10;
            FUN_012d0d74(plVar13,lVar10);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar11,lVar10);
          }
        } while (iVar16 < *(int *)(lVar9 + 0x18));
      }
      return;
    }
  }
LAB_0421de64:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

