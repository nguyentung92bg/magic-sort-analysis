/* IL2CPP: SDK.TikTokConfig$$GetParamsStringFromUnityConfig
System_String_o* SDK_TikTokConfig__GetParamsStringFromUnityConfig (SDK_TikTokConfig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SDK.TikTokConfig$$GetParamsStringFromUnityConfig
   System_String_o* SDK_TikTokConfig__GetParamsStringFromUnityConfig (SDK_TikTokConfig_o* __this,
   const MethodInfo* method); */

void SDK_TikTokConfig__GetParamsStringFromUnityConfig_19f87bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR_DAT_05779a08;
  if ((bRam0000000005c26122 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057741a8);
    FUN_012d0dc8(PTR_DAT_057ca5e8);
    FUN_012d0dc8(PTR_DAT_05811818);
    FUN_012d0dc8(PTR_DAT_057ea2e8);
    FUN_012d0dc8(PTR_DAT_057e6a08);
    FUN_012d0dc8(PTR_DAT_05812890);
    FUN_012d0dc8(PTR_DAT_05779a08);
    FUN_012d0dc8(PTR_DAT_057bb220);
    FUN_012d0dc8(PTR_DAT_05766088);
    FUN_012d0dc8(PTR_DAT_057dc8c8);
    FUN_012d0dc8(PTR_DAT_057c7ee0);
    FUN_012d0dc8(PTR_DAT_057df918);
    FUN_012d0dc8(PTR_DAT_05808630);
    bRam0000000005c26122 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  plVar9 = (long *)thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057dc8c8;
  if (plVar9 != (long *)0x0) {
    System_Text_StringBuilder___ctor_1e51c94(plVar9,0);
    System_Text_StringBuilder__Append_1e4b288(plVar9,*(undefined8 *)puVar1,0);
    puVar7 = PTR_DAT_05811818;
    puVar6 = PTR_DAT_05808630;
    puVar5 = PTR_DAT_057df918;
    puVar4 = PTR_DAT_057ca5e8;
    puVar3 = PTR_DAT_057c7ee0;
    puVar2 = PTR_DAT_057bb220;
    puVar1 = PTR_DAT_05766088;
    if (*(long *)(param_1 + 0x10) != 0) {
      System_Collections_Generic_Dictionary_object__object___GetEnumerator_3ed06f0
                (&uStack_b8,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_057741a8);
      uStack_88 = uStack_b0;
      uStack_90 = uStack_b8;
      lStack_78 = lStack_a0;
      lStack_80 = lStack_a8;
      uStack_70 = uStack_98;
      while( true ) {
        uVar10 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_37254f0
                           (&uStack_90,*(undefined8 *)puVar7);
        lVar16 = lStack_78;
        lVar13 = lStack_80;
        if ((uVar10 & 1) == 0) {
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3725608
                    (&uStack_90,*(undefined8 *)puVar4);
          iVar8 = System_Text_StringBuilder__get_Length_1e4bb10(plVar9,0);
          if (1 < iVar8) {
            iVar8 = System_Text_StringBuilder__get_Length_1e4bb10(plVar9,0);
            System_Text_StringBuilder__set_Length_1e52e24(plVar9,iVar8 + -1,0);
          }
          System_Text_StringBuilder__Append_1e4b288(plVar9,*(undefined8 *)puVar3,0);
          (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          return;
        }
        plVar11 = (long *)FUN_012d0e38(*(undefined8 *)puVar2,5);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar15 = *(long *)puVar5;
        if (lVar15 == 0) {
          lVar15 = 0;
          plVar12 = plVar11;
        }
        else {
          plVar12 = (long *)thunk_FUN_01320d5c(lVar15,*(undefined8 *)(*plVar11 + 0x40));
          if (plVar12 == (long *)0x0) {
            uVar14 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
            FUN_012d0eb8(uVar14,0);
          }
          lVar15 = *(long *)puVar5;
        }
        if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8(plVar12,lVar15);
        }
        plVar11[4] = lVar15;
        FUN_012d0d74();
        if ((lVar13 != 0) &&
           (lVar15 = thunk_FUN_01320d5c(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0)) {
          uVar14 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
          FUN_012d0eb8(uVar14,0);
        }
        if (*(uint *)(plVar11 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        plVar11[5] = lVar13;
        lVar13 = FUN_012d0d74(plVar11 + 5,lVar13);
        lVar15 = *(long *)puVar6;
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          lVar13 = thunk_FUN_01320d5c(lVar15,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar13 == 0) {
            uVar14 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
            FUN_012d0eb8(uVar14,0);
          }
          lVar15 = *(long *)puVar6;
        }
        if (*(uint *)(plVar11 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8(lVar13,lVar15);
        }
        plVar11[6] = lVar15;
        FUN_012d0d74();
        if ((lVar16 != 0) &&
           (lVar13 = thunk_FUN_01320d5c(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)) {
          uVar14 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
          FUN_012d0eb8(uVar14,0);
        }
        if (*(uint *)(plVar11 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef8();
        }
        plVar11[7] = lVar16;
        lVar13 = FUN_012d0d74(plVar11 + 7,lVar16);
        lVar16 = *(long *)puVar1;
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          lVar13 = thunk_FUN_01320d5c(lVar16,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar13 == 0) {
            uVar14 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
            FUN_012d0eb8(uVar14,0);
          }
          lVar16 = *(long *)puVar1;
        }
        if (*(uint *)(plVar11 + 3) < 5) break;
        plVar11[8] = lVar16;
        FUN_012d0d74();
        uVar14 = System_String__Concat_1ed12a0(plVar11,0);
        System_Text_StringBuilder__Append_1e4b288(plVar9,uVar14,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8(lVar13,lVar16);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

