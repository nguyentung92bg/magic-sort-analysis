/* IL2CPP: Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$LateInitialize
void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__LateInitialize (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.MagicStreakTournament.Scripts.ProfileSpritePersistenceService$$LateInitialize
   void 
   Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__LateInitialize
   (Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_MagicStreakTournament_Scripts_ProfileSpritePersistenceService__LateInitialize_3e0a6ac
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
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
  
  if ((bRam0000000005c3804a & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c3804a = 1;
  }
  plVar8 = *(long **)(param_1 + 0x58);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x19) * 0x10 + 0x138);
        goto LAB_03f0a738;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0131971c(plVar8,*(long *)PTR_DAT_057636d0,0x19);
LAB_03f0a738:
  uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
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
  uVar6 = (ulong)&uStack_70 | 8;
  uStack_80 = uStack_98;
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  uStack_60 = uStack_a0;
  uStack_68 = uStack_a8;
  uStack_58 = uStack_98;
  FUN_012d0d74(uVar6,0);
  alStack_50[0] = param_1;
  FUN_012d0d74(alStack_50,param_1);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_ProfileSpritePersistenceService__InitializeInternal_d__22__1e6e61c
            (uVar6,&uStack_70,*(undefined8 *)puVar2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task_24437f0(uVar6,0);
  return;
}

