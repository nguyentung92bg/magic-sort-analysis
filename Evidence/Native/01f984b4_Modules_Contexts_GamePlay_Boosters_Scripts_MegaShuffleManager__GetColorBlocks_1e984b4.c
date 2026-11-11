/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$GetColorBlocks
System_Collections_Generic_List_MegaShuffleManager_ColorBlock__o* Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetColorBlocks (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, System_Collections_Generic_List_BottleItem__o* bottles, System_Collections_Generic_HashSet_ColorId__o* duplicatedTopColors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01f98794) */
/* WARNING: Removing unreachable block (ram,0x01f98918) */
/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$GetColorBlocks
   System_Collections_Generic_List_MegaShuffleManager_ColorBlock__o*
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetColorBlocks
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   System_Collections_Generic_List_BottleItem__o* bottles,
   System_Collections_Generic_HashSet_ColorId__o* duplicatedTopColors, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__GetColorBlocks_1e984b4
               (undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar4 = PTR_DAT_0576a178;
  if ((bRam0000000005c2816c & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f51e0);
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_05796248);
    FUN_012d0dc8(PTR_DAT_057929c0);
    FUN_012d0dc8(PTR_DAT_057822a8);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057c4160);
    FUN_012d0dc8(PTR_DAT_0576a178);
    bRam0000000005c2816c = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
  if ((lVar7 == 0) ||
     (System_Collections_Generic_List_object____ctor_21fc1fc(lVar7,*(undefined8 *)PTR_DAT_057c4160),
     puVar6 = PTR_DAT_057e1088, puVar5 = PTR_DAT_057b41c8, puVar4 = PTR_DAT_057822a8, param_2 == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_b8,param_2,*(undefined8 *)PTR_DAT_05768d80);
  uStack_78 = uStack_b0;
  uStack_80 = uStack_b8;
  lStack_70 = lStack_a8;
LAB_01f98608:
  uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                    (&uStack_80,*(undefined8 *)puVar5);
  lVar12 = lStack_70;
  if ((uVar8 & 1) == 0) {
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)PTR_DAT_057d0ba8);
    return lVar7;
  }
  if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(long *)(lStack_70 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_b8,*(long *)(lStack_70 + 0x80),*(undefined8 *)puVar4);
  lVar14 = 0;
  bVar3 = true;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  lStack_90 = lStack_a8;
LAB_01f9864c:
  do {
    uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_a0,*(undefined8 *)puVar6);
    if ((uVar8 & 1) == 0) break;
    if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(long *)(lStack_90 + 0x20) != 0) {
      lVar11 = *(long *)(*(long *)(lStack_90 + 0x20) + 0x58);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      iVar1 = *(int *)(lVar11 + 0x70);
      if (lVar14 == 0) {
        lVar14 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f51e0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Object___ctor_23dfe5c(lVar14,0);
      }
      else {
        if (*(int *)(lVar14 + 0x10) == iVar1) {
          *(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1;
          goto LAB_01f9864c;
        }
        if ((!bVar3) ||
           (uVar8 = Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__IsColorSameAsTagColor_1e99dd4
                              (uVar8,lVar12), (uVar8 & 1) == 0)) {
          lVar11 = *(long *)(lVar7 + 0x10);
          lVar13 = *(long *)PTR_DAT_057929c0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar2 = *(uint *)(lVar7 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar2 + 1;
            plVar9 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *plVar9 = lVar14;
            FUN_012d0d74(plVar9,lVar14);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar7,lVar14);
          }
        }
        lVar14 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_057f51e0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        System_Object___ctor_23dfe5c(lVar14,0);
        bVar3 = false;
      }
      *(int *)(lVar14 + 0x10) = iVar1;
      *(undefined4 *)(lVar14 + 0x14) = 1;
    }
  } while( true );
  uVar10 = System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                     (&uStack_a0,*(undefined8 *)PTR_DAT_05795370);
  if ((lVar14 != 0) &&
     ((!bVar3 ||
      (uVar8 = Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__IsColorSameAsTagColor_1e99dd4
                         (uVar10,lVar12,*(undefined4 *)(lVar14 + 0x10)), (uVar8 & 1) == 0)))) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    uVar8 = System_Collections_Generic_HashSet_Int32Enum___Contains_33b3c3c
                      (param_3,*(undefined4 *)(lVar14 + 0x10),*(undefined8 *)PTR_DAT_05796248);
    if ((uVar8 & 1) == 0) {
      lVar12 = *(long *)(lVar7 + 0x10);
      lVar11 = *(long *)PTR_DAT_057929c0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        plVar9 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
        *plVar9 = lVar14;
        FUN_012d0d74(plVar9,lVar14);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar7,lVar14);
      }
    }
  }
  goto LAB_01f98608;
}

