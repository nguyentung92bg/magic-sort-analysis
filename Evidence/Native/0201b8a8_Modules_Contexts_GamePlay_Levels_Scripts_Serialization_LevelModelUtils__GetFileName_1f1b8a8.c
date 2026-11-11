/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelUtils$$GetFileName
System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__GetFileName (System_String_o* levelId, System_String_o* difficulty, System_String_o* seed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelUtils$$GetFileName
   System_String_o*
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__GetFileName
   (System_String_o* levelId, System_String_o* difficulty, System_String_o* seed, const MethodInfo*
   method); */

long Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__GetFileName_1f1b8a8
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  puVar3 = PTR_DAT_057bb220;
  if ((bRam0000000005c28654 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057bb220);
    FUN_012d0dc8(PTR_DAT_057f2cd0);
    FUN_012d0dc8(PTR_DAT_057aec28);
    FUN_012d0dc8(PTR_DAT_057bedc0);
    bRam0000000005c28654 = 1;
  }
  auVar16 = FUN_012d0e38(*(undefined8 *)puVar3,6);
  plVar10 = auVar16._0_8_;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((param_1 != 0) &&
     (auVar16 = thunk_FUN_01320d5c(param_1,*(undefined8 *)(*plVar10 + 0x40)), auVar16._0_8_ == 0)) {
LAB_0201bac4:
    uVar13 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar13,0);
  }
  puVar3 = PTR_DAT_057bedc0;
  if ((int)plVar10[3] != 0) {
    plVar10[4] = param_1;
    lVar6 = FUN_012d0d74(plVar10 + 4,param_1);
    lVar7 = *(long *)puVar3;
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar6 = thunk_FUN_01320d5c(lVar7,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar6 == 0) goto LAB_0201bac4;
      lVar7 = *(long *)puVar3;
    }
    auVar16._8_8_ = lVar7;
    auVar16._0_8_ = lVar6;
    if (1 < *(uint *)(plVar10 + 3)) {
      plVar10[5] = lVar7;
      auVar16 = FUN_012d0d74(plVar10 + 5,lVar7);
      if ((param_2 != 0) &&
         (auVar16 = thunk_FUN_01320d5c(param_2,*(undefined8 *)(*plVar10 + 0x40)), auVar16._0_8_ == 0
         )) goto LAB_0201bac4;
      puVar3 = PTR_DAT_057aec28;
      if (2 < *(uint *)(plVar10 + 3)) {
        plVar10[6] = param_2;
        lVar6 = FUN_012d0d74(plVar10 + 6,param_2);
        lVar7 = *(long *)puVar3;
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          lVar6 = thunk_FUN_01320d5c(lVar7,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar6 == 0) goto LAB_0201bac4;
          lVar7 = *(long *)puVar3;
        }
        auVar16._8_8_ = lVar7;
        auVar16._0_8_ = lVar6;
        if (3 < *(uint *)(plVar10 + 3)) {
          plVar10[7] = lVar7;
          auVar16 = FUN_012d0d74(plVar10 + 7,lVar7);
          if ((param_3 != 0) &&
             (auVar16 = thunk_FUN_01320d5c(param_3,*(undefined8 *)(*plVar10 + 0x40)),
             auVar16._0_8_ == 0)) goto LAB_0201bac4;
          puVar3 = PTR_DAT_057f2cd0;
          if (4 < *(uint *)(plVar10 + 3)) {
            plVar10[8] = param_3;
            lVar6 = FUN_012d0d74(plVar10 + 8,param_3);
            lVar7 = *(long *)puVar3;
            if (lVar7 == 0) {
              lVar7 = 0;
            }
            else {
              lVar6 = thunk_FUN_01320d5c(lVar7,*(undefined8 *)(*plVar10 + 0x40));
              if (lVar6 == 0) goto LAB_0201bac4;
              lVar7 = *(long *)puVar3;
            }
            auVar16._8_8_ = lVar7;
            auVar16._0_8_ = lVar6;
            if (5 < *(uint *)(plVar10 + 3)) {
              plVar10[9] = lVar7;
              FUN_012d0d74();
              puVar4 = PTR_DAT_057c9ca0;
              puVar3 = PTR_DAT_057bb220;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = plVar10;
              do {
                lVar6 = auVar15._0_8_;
                if ((bRam0000000005c283d6 & 1) == 0) {
                  FUN_012d0dc8(puVar3,auVar15._8_8_);
                  FUN_012d0dc8(puVar4);
                  bRam0000000005c283d6 = 1;
                }
                if (lVar6 == 0) {
                  thunk_FUN_0136d790(PTR_DAT_057c1ad0);
                  uVar5 = thunk_FUN_01320e48();
                  FUN_0103b554();
                  uVar13 = thunk_FUN_0136d790(PTR_DAT_057b84b0);
                  System_ArgumentNullException___ctor_211d594(uVar5,uVar13,0);
LAB_01fd148c:
                  uVar13 = thunk_FUN_0136d790(PTR_DAT_057ed848);
                    /* WARNING: Subroutine does not return */
                  FUN_012d0eb8(uVar5,uVar13);
                }
                uVar9 = *(ulong *)(lVar6 + 0x18);
                if ((int)uVar9 < 2) {
                  if (uVar9 != 0) {
                    if ((int)uVar9 == 0) {
LAB_01fd142c:
                    /* WARNING: Subroutine does not return */
                      FUN_012d0ef8();
                    }
                    if (*(long *)(lVar6 + 0x20) != 0) {
                      return *(long *)(lVar6 + 0x20);
                    }
                  }
LAB_01fd1400:
                  return **(long **)(*(long *)puVar4 + 0xb8);
                }
                uVar12 = 0;
                uVar9 = uVar9 & 0xffffffff;
                plVar10 = (long *)(lVar6 + 0x20);
                do {
                  if (*plVar10 != 0) {
                    uVar12 = uVar12 + (long)*(int *)(*plVar10 + 0x10);
                  }
                  uVar9 = uVar9 - 1;
                  plVar10 = plVar10 + 1;
                } while (uVar9 != 0);
                if (0x7fffffff < (long)uVar12) {
                  thunk_FUN_0136d790(PTR_DAT_05769448);
                  uVar5 = thunk_FUN_01320e48();
                  FUN_0103b554();
                  System_OutOfMemoryException___ctor_26a6468(uVar5,0);
                  goto LAB_01fd148c;
                }
                iVar11 = (int)uVar12;
                if (iVar11 == 0) goto LAB_01fd1400;
                lVar7 = thunk_FUN_0131a210(uVar12 & 0xffffffff);
                if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
                  iVar14 = 0;
                }
                else {
                  uVar9 = 0;
                  iVar14 = 0;
                  uVar12 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
                  do {
                    if (uVar12 <= uVar9) goto LAB_01fd142c;
                    lVar8 = ((long *)(lVar6 + 0x20))[uVar9];
                    if ((lVar8 != 0) && (iVar1 = *(int *)(lVar8 + 0x10), iVar1 != 0)) {
                      if (iVar11 - iVar14 < iVar1) {
                        iVar14 = -1;
                        break;
                      }
                      System_String__FillStringChecked_1ed0ed0(lVar7,iVar14);
                      uVar12 = (ulong)*(uint *)(lVar6 + 0x18);
                      iVar14 = iVar1 + iVar14;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((long)uVar9 < (long)(int)uVar12);
                }
                if (iVar14 == iVar11) {
                  return lVar7;
                }
                auVar16 = System_Array__Clone_26a73f4(lVar6,0);
                lVar6 = auVar16._0_8_;
                if (lVar6 == 0) {
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = auVar16._8_8_;
                  auVar15 = auVar2 << 0x40;
                }
                else {
                  uVar13 = *(undefined8 *)puVar3;
                  auVar15 = thunk_FUN_01320d5c(lVar6,uVar13);
                  if (auVar15._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_012d1288(lVar6,uVar13);
                  }
                }
              } while( true );
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef8(auVar16._0_8_,auVar16._8_8_);
}

