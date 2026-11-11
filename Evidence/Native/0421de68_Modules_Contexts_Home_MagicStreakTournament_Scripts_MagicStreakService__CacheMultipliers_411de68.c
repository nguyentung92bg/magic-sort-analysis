/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$CacheMultipliers
void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CacheMultipliers (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.MagicStreakService$$CacheMultipliers
   void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CacheMultipliers
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_MagicStreakService__CacheMultipliers_411de68
               (long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if ((bRam0000000005c3ac84 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580e588);
    FUN_012d0dc8(PTR_DAT_057c4090);
    FUN_012d0dc8(PTR_DAT_057c3c28);
    FUN_012d0dc8(PTR_DAT_057cfb88);
    bRam0000000005c3ac84 = 1;
  }
  if ((((*(long *)(param_1 + 0x10) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar6 != 0)) &&
      (lVar6 = *(long *)(lVar6 + 0x80), lVar6 != 0)) &&
     (lVar6 = *(long *)(lVar6 + 0x28), lVar6 != 0)) {
    if (*(int *)(lVar6 + 0x18) == 5) {
FUN_012d0d74:
      plVar9 = (long *)(param_1 + 0x58);
      *plVar9 = lVar6;
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
    lVar6 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057cfb88);
    puVar5 = PTR_DAT_0580e588;
    if (lVar6 != 0) {
      System_Collections_Generic_List_int____ctor_204e880(lVar6,*(undefined8 *)PTR_DAT_057c4090);
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)puVar5;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 1;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar6,1);
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar8 = *(long *)puVar5;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_0421e128;
        }
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar6,2);
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar8 = *(long *)puVar5;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_0421e128;
        }
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 3;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar6,3);
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar8 = *(long *)puVar5;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_0421e128;
        }
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 4;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar6,4);
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar8 = *(long *)puVar5;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_0421e128;
        }
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 5;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))(lVar6,5);
        }
        goto FUN_012d0d74;
      }
    }
  }
LAB_0421e128:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

