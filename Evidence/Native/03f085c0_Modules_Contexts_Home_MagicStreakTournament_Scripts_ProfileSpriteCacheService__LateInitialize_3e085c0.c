/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$LateInitialize
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__LateInitialize (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpriteCacheService$$LateInitialize
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__LateInitialize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpriteCacheService__LateInitialize_3e085c0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long alStack_50 [4];
  
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c3804a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c3804a = 1;
  }
  plVar9 = *(long **)(lVar4 + 0x58);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x19) * 0x10 + 0x138);
        goto LAB_03f0a738;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_057636d0,0x19);
LAB_03f0a738:
  uVar3 = (*(code *)*puVar5)(plVar9,puVar5[1]);
  *(undefined4 *)(lVar4 + 0x40) = uVar3;
  puVar1 = PTR_DAT_0576e800;
  if ((bRam0000000005c3804b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c54a8);
    FUN_012d0dc8(PTR_DAT_0576e800);
    bRam0000000005c3804b = 1;
  }
  puVar2 = PTR_DAT_057c54a8;
  alStack_50[2] = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  alStack_50[1] = 0;
  alStack_50[0] = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create_2445820(&uStack_a8,0);
  uVar7 = (ulong)&uStack_70 | 8;
  uStack_80 = uStack_98;
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  uStack_60 = uStack_a0;
  uStack_68 = uStack_a8;
  uStack_58 = uStack_98;
  FUN_012d0d74(uVar7,0);
  alStack_50[0] = lVar4;
  FUN_012d0d74(alStack_50,lVar4);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_ProfileSpritePersistenceService__InitializeInternal_d__22__1e6e61c
            (uVar7,&uStack_70,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar7,0);
  return;
}

