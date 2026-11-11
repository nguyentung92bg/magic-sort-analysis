/* IL2CPP: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.AddFriendView$$OnInviteButtonSelected
void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__OnInviteButtonSelected (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03e1c7a0) */
/* WARNING: Removing unreachable block (ram,0x03e1c7cc) */
/* WARNING: Removing unreachable block (ram,0x03e1c7c4) */
/* WARNING: Removing unreachable block (ram,0x03e1c788) */
/* WARNING: Removing unreachable block (ram,0x03e1c7e0) */
/* IL2CPP:
   Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.AddFriendView$$OnInviteButtonSelected
   void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__OnInviteButtonSelected
   (Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_PermanentLeaderboard_Scripts_UI_AddFriendView__OnInviteButtonSelected_2aed2d0
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int *piVar18;
  long lVar19;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2eb87 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c4460);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057973f8);
    bRam0000000005c2eb87 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar7 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar7 == 0)) ||
     (lVar7 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar7,*(undefined8 *)PTR_DAT_057c4460), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  uVar17 = *(undefined8 *)PTR_DAT_057973f8;
  uVar8 = System_String__IsNullOrEmpty_1ed04ac(*(undefined8 *)(lVar7 + 0x10),0,0);
  if ((uVar8 & 1) == 0) {
    lVar7 = Modules_Infrastructure_Social_ReferralService__BuildPayload_3d1bf18(lVar7);
    uVar8 = System_String__IsNullOrEmpty_1ed04ac(lVar7,0);
    if ((uVar8 & 1) == 0) {
      Modules_Infrastructure_Social_ReferralService__SendShareOpenedEvent_3d1c014(uVar8,uVar17);
      puVar1 = PTR_DAT_057a06f0;
      if ((bRam0000000005c3732c & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057a06f0);
        FUN_012d0dc8(PTR_DAT_057c2968);
        FUN_012d0dc8(PTR_DAT_057c6040);
        FUN_012d0dc8(PTR_DAT_057ecb90);
        FUN_012d0dc8(PTR_DAT_057a9c90);
        FUN_012d0dc8(PTR_DAT_057a49c8);
        FUN_012d0dc8(PTR_DAT_057fbb00);
        FUN_012d0dc8(PTR_DAT_058165e8);
        FUN_012d0dc8(PTR_DAT_0580bde0);
        FUN_012d0dc8(PTR_DAT_0575f330);
        FUN_012d0dc8(PTR_DAT_057d33f0);
        FUN_012d0dc8(PTR_DAT_05766678);
        FUN_012d0dc8(PTR_DAT_0575b360);
        FUN_012d0dc8(PTR_DAT_057c9d48);
        FUN_012d0dc8(PTR_DAT_05781758);
        FUN_012d0dc8(PTR_DAT_0579ff48);
        FUN_012d0dc8(PTR_DAT_0576dab0);
        FUN_012d0dc8(PTR_DAT_057f4900);
        FUN_012d0dc8(PTR_DAT_0577fd90);
        FUN_012d0dc8(PTR_DAT_05801e60);
        FUN_012d0dc8(PTR_DAT_05781660);
        bRam0000000005c3732c = 1;
      }
      plVar9 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar2 = PTR_DAT_057f4900;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_AndroidJavaClass___ctor_3f93938(plVar9,*(undefined8 *)PTR_DAT_057f4900,0);
      puVar6 = PTR_DAT_058165e8;
      lVar19 = *(long *)PTR_DAT_057fbb00;
      lVar10 = **(long **)(lVar19 + 0x38);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_0131942c();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      lVar10 = **(long **)(lVar19 + 0x38);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_0131942c();
      }
      uVar17 = **(undefined8 **)(lVar10 + 0xb8);
      plVar11 = (long *)thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057a49c8);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_AndroidJavaObject___ctor_3f96c48(plVar11,*(undefined8 *)puVar2,uVar17,0);
      puVar5 = PTR_DAT_0580bde0;
      plVar12 = (long *)FUN_012d0e38(*(undefined8 *)PTR_DAT_0580bde0,1);
      puVar2 = PTR_DAT_057a9c90;
      lVar10 = UnityEngine_AndroidJavaObject__GetStatic_object__293b2a8
                         (plVar9,*(undefined8 *)PTR_DAT_0575f330,*(undefined8 *)PTR_DAT_057a9c90);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if ((lVar10 != 0) &&
         (lVar19 = thunk_FUN_01320d5c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0)) {
        uVar17 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
        FUN_012d0eb8(uVar17,0);
      }
      if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      plVar12[4] = lVar10;
      FUN_012d0d74(plVar12 + 4,lVar10);
      puVar3 = PTR_DAT_057c6040;
      UnityEngine_AndroidJavaObject__Call_object__293a1fc
                (plVar11,*(undefined8 *)PTR_DAT_05801e60,plVar12,*(undefined8 *)PTR_DAT_057c6040);
      plVar12 = (long *)FUN_012d0e38(*(undefined8 *)puVar5,1);
      puVar4 = PTR_DAT_057c9d48;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if (*(long *)PTR_DAT_057c9d48 == 0) {
        lVar10 = 0;
        plVar13 = plVar12;
      }
      else {
        plVar13 = (long *)thunk_FUN_01320d5c(*(long *)PTR_DAT_057c9d48,
                                             *(undefined8 *)(*plVar12 + 0x40));
        if (plVar13 == (long *)0x0) {
          uVar17 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
          FUN_012d0eb8(uVar17,0);
        }
        lVar10 = *(long *)puVar4;
      }
      if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8(plVar13,lVar10);
      }
      plVar12[4] = lVar10;
      FUN_012d0d74();
      UnityEngine_AndroidJavaObject__Call_object__293a1fc
                (plVar11,*(undefined8 *)PTR_DAT_0579ff48,plVar12,*(undefined8 *)puVar3);
      plVar12 = (long *)FUN_012d0e38(*(undefined8 *)puVar5,2);
      lVar10 = UnityEngine_AndroidJavaObject__GetStatic_object__293b2a8
                         (plVar9,*(undefined8 *)PTR_DAT_057d33f0,*(undefined8 *)puVar2);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if ((lVar10 != 0) &&
         (lVar19 = thunk_FUN_01320d5c(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar19 == 0)) {
        uVar17 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
        FUN_012d0eb8(uVar17,0);
      }
      if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      plVar12[4] = lVar10;
      FUN_012d0d74(plVar12 + 4,lVar10);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_01320d5c(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar10 == 0)) {
        uVar17 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
        FUN_012d0eb8(uVar17,0);
      }
      if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      plVar12[5] = lVar7;
      FUN_012d0d74(plVar12 + 5,lVar7);
      UnityEngine_AndroidJavaObject__Call_object__293a1fc
                (plVar11,*(undefined8 *)PTR_DAT_0577fd90,plVar12,*(undefined8 *)puVar3);
      plVar12 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_AndroidJavaClass___ctor_3f93938(plVar12,*(undefined8 *)PTR_DAT_05766678,0);
      plVar13 = (long *)UnityEngine_AndroidJavaObject__GetStatic_object__293b2a8
                                  (plVar12,*(undefined8 *)PTR_DAT_05781660,
                                   *(undefined8 *)PTR_DAT_057ecb90);
      plVar14 = (long *)FUN_012d0e38(*(undefined8 *)puVar5,2);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar7 = thunk_FUN_01320d5c(plVar11,*(undefined8 *)(*plVar14 + 0x40));
      if (lVar7 == 0) {
        uVar17 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
        FUN_012d0eb8(uVar17,0);
      }
      if ((int)plVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      plVar14[4] = (long)plVar11;
      lVar7 = FUN_012d0d74(plVar14 + 4,plVar11);
      puVar1 = PTR_DAT_0576dab0;
      if (*(long *)PTR_DAT_0576dab0 == 0) {
        lVar10 = 0;
      }
      else {
        lVar7 = thunk_FUN_01320d5c(*(long *)PTR_DAT_0576dab0,*(undefined8 *)(*plVar14 + 0x40));
        if (lVar7 == 0) {
          uVar17 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
          FUN_012d0eb8(uVar17,0);
        }
        lVar10 = *(long *)puVar1;
      }
      if (*(uint *)(plVar14 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8(lVar7,lVar10);
      }
      plVar14[5] = lVar10;
      FUN_012d0d74();
      plVar14 = (long *)UnityEngine_AndroidJavaObject__CallStatic_object__293a3e0
                                  (plVar9,*(undefined8 *)PTR_DAT_0575b360,plVar14,
                                   *(undefined8 *)PTR_DAT_057c2968);
      plVar15 = (long *)FUN_012d0e38(*(undefined8 *)puVar5,1);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if ((plVar14 != (long *)0x0) &&
         (lVar7 = thunk_FUN_01320d5c(plVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0)) {
        uVar17 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
        FUN_012d0eb8(uVar17,0);
      }
      if ((int)plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef8();
      }
      plVar15[4] = (long)plVar14;
      FUN_012d0d74(plVar15 + 4,plVar14);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      UnityEngine_AndroidJavaObject__Call_3f96c7c(plVar13,*(undefined8 *)PTR_DAT_05781758,plVar15,0)
      ;
      if (plVar14 != (long *)0x0) {
        lVar7 = *plVar14;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
              puVar16 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03e1c5c4;
            }
            uVar8 = uVar8 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar8 != 0);
        }
        puVar16 = (undefined8 *)FUN_0131971c(plVar14,*(long *)puVar6,0);
LAB_03e1c5c4:
        (*(code *)*puVar16)(plVar14,puVar16[1]);
      }
      if (plVar13 != (long *)0x0) {
        lVar7 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
              puVar16 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03e1c628;
            }
            uVar8 = uVar8 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar8 != 0);
        }
        puVar16 = (undefined8 *)FUN_0131971c(plVar13,*(long *)puVar6,0);
LAB_03e1c628:
        (*(code *)*puVar16)(plVar13,puVar16[1]);
      }
      lVar7 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar16 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03e1c688;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      puVar16 = (undefined8 *)FUN_0131971c(plVar12,*(long *)puVar6,0);
LAB_03e1c688:
      (*(code *)*puVar16)(plVar12,puVar16[1]);
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar16 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03e1c6e8;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      puVar16 = (undefined8 *)FUN_0131971c(plVar11,*(long *)puVar6,0);
LAB_03e1c6e8:
      (*(code *)*puVar16)(plVar11,puVar16[1]);
      lVar7 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
            puVar16 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03e1c748;
          }
          uVar8 = uVar8 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar8 != 0);
      }
      puVar16 = (undefined8 *)FUN_0131971c(plVar9,*(long *)puVar6,0);
LAB_03e1c748:
      (*(code *)*puVar16)(plVar9,puVar16[1]);
      return;
    }
  }
  return;
}

