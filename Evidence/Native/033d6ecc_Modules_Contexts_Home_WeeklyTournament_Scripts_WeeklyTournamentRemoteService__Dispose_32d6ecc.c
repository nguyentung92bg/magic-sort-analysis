/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentRemoteService$$Dispose
void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__Dispose (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02b9db68) */
/* WARNING: Removing unreachable block (ram,0x02b9dbc0) */
/* WARNING: Removing unreachable block (ram,0x02b9dbc8) */
/* IL2CPP: Modules.Contexts.Home.WeeklyTournament.Scripts.WeeklyTournamentRemoteService$$Dispose
   void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__Dispose
   (Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_Home_WeeklyTournament_Scripts_WeeklyTournamentRemoteService__Dispose_32d6ecc
               (long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar11 = *(long *)(param_1 + 0x20);
  if (lVar11 == 0) {
    return;
  }
  System_Threading_CancellationTokenSource__ThrowIfDisposed_2a9cf08(lVar11,0);
  iVar7 = *(int *)(lVar11 + 0x20);
  thunk_FUN_012f14bc();
  if (iVar7 < 2) {
    thunk_FUN_012f14bc();
    iVar7 = System_Threading_Interlocked__CompareExchange_2a0b70c((int *)(lVar11 + 0x20),2,1,0);
    if (iVar7 == 1) {
      lVar14 = *(long *)(lVar11 + 0x38);
      thunk_FUN_012f14bc();
      if (lVar14 != 0) {
        System_Threading_Timer__Dispose_2a106e0(lVar14,0);
      }
      uVar8 = System_Environment__get_CurrentManagedThreadId_23e40d4(0);
      thunk_FUN_012f14bc();
      lVar14 = *(long *)(lVar11 + 0x10);
      *(undefined4 *)(lVar11 + 0x24) = uVar8;
      thunk_FUN_012f14bc();
      if (lVar14 != 0) {
        System_Threading_EventWaitHandle__Set_2a9bb00(lVar14);
      }
      if ((bRam0000000005c2e8eb & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05817fb8);
        FUN_012d0dc8(PTR_DAT_057a8e80);
        FUN_012d0dc8(PTR_DAT_0579aa38);
        FUN_012d0dc8(PTR_DAT_05788aa0);
        FUN_012d0dc8(PTR_DAT_057b1668);
        FUN_012d0dc8(PTR_DAT_05779d68);
        FUN_012d0dc8(PTR_DAT_057738c8);
        FUN_012d0dc8(PTR_DAT_057c6ca0);
        bRam0000000005c2e8eb = 1;
      }
      lStack_70 = 0;
      uStack_68 = 0;
      lVar14 = *(long *)(lVar11 + 0x18);
      thunk_FUN_012f14bc();
      puVar6 = PTR_DAT_05817fb8;
      puVar5 = PTR_DAT_057c6ca0;
      puVar4 = PTR_DAT_057a8e80;
      puVar3 = PTR_DAT_0579aa38;
      puVar2 = PTR_DAT_05788aa0;
      if (lVar14 == 0) {
        thunk_FUN_012f14bc();
        System_Threading_Interlocked__Exchange_2a0cd44(lVar11 + 0x20,3,0);
      }
      else {
        if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
          uVar13 = 0;
          uVar12 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
          plVar1 = (long *)(lVar11 + 0x30);
          do {
            if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef8();
            }
            lVar15 = *(long *)(lVar14 + uVar13 * 8 + 0x20);
            thunk_FUN_012f14bc();
            if (lVar15 != 0) {
              for (lVar15 = System_Threading_SparselyPopulatedArray_object___get_Tail_3120188
                                      (lVar15,*(undefined8 *)PTR_DAT_057738c8); lVar15 != 0;
                  lVar15 = System_Threading_SparselyPopulatedArrayFragment_object___get_Prev_312007c
                                     (lVar15,*(undefined8 *)PTR_DAT_05779d68)) {
                iVar7 = System_Threading_SparselyPopulatedArrayFragment_object___get_Length_3120060
                                  (lVar15,*(undefined8 *)PTR_DAT_057b1668);
                while (iVar7 = iVar7 + -1, -1 < iVar7) {
                  lVar9 = System_Threading_SparselyPopulatedArrayFragment_object___get_Item_3120028
                                    (lVar15,iVar7,*(undefined8 *)puVar2);
                  thunk_FUN_012f14bc();
                  *plVar1 = lVar9;
                  FUN_012d0d74(plVar1,lVar9);
                  lVar9 = *plVar1;
                  thunk_FUN_012f14bc();
                  if (lVar9 != 0) {
                    lStack_70 = lVar15;
                    FUN_012d0d74(&lStack_70,lVar15);
                    uStack_68 = CONCAT44(uStack_68._4_4_,iVar7);
                    plVar16 = (long *)*plVar1;
                    thunk_FUN_012f14bc();
                    if ((plVar16 == (long *)0x0) || (*plVar16 != *(long *)puVar5)) {
                      System_Threading_CancellationTokenSource__CancellationCallbackCoreWork_2a9dcf4
                                (lVar11,lStack_70,uStack_68);
                    }
                    else {
                      plVar16 = (long *)plVar16[6];
                      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      System_Threading_SendOrPostCallback___ctor_2a9a078
                                (lVar9,lVar11,*(undefined8 *)puVar4);
                      uStack_78 = uStack_68;
                      lStack_80 = lStack_70;
                      uVar10 = thunk_FUN_01320a8c(*(undefined8 *)puVar6,&lStack_80);
                      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012d0ef0();
                      }
                      (**(code **)(*plVar16 + 0x178))
                                (plVar16,lVar9,uVar10,*(undefined8 *)(*plVar16 + 0x180));
                      uVar8 = System_Environment__get_CurrentManagedThreadId_23e40d4(0);
                      thunk_FUN_012f14bc();
                      *(undefined4 *)(lVar11 + 0x24) = uVar8;
                    }
                  }
                }
              }
            }
            uVar12 = (ulong)*(uint *)(lVar14 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar14 + 0x18));
        }
        thunk_FUN_012f14bc();
        *(undefined4 *)(lVar11 + 0x20) = 3;
        thunk_FUN_012f14bc();
        *(undefined8 *)(lVar11 + 0x30) = 0;
        FUN_012d0d74((undefined8 *)(lVar11 + 0x30),0);
        System_Threading_Interlocked__MemoryBarrier_2a0f054(0);
      }
      return;
    }
  }
  return;
}

