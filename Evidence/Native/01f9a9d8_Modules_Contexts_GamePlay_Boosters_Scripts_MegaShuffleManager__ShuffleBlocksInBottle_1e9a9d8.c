/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$ShuffleBlocksInBottle
void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleBlocksInBottle (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this, Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBottle_o* bottle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Boosters.Scripts.MegaShuffleManager$$ShuffleBlocksInBottle
   void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleBlocksInBottle
   (Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_o* __this,
   Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBottle_o* bottle, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleBlocksInBottle_1e9a9d8
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000005c2816f & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f51e0);
    FUN_012d0dc8(PTR_DAT_057d2fe8);
    FUN_012d0dc8(PTR_DAT_05817840);
    FUN_012d0dc8(PTR_DAT_057d60c8);
    FUN_012d0dc8(PTR_DAT_05784c88);
    FUN_012d0dc8(PTR_DAT_05808310);
    FUN_012d0dc8(PTR_DAT_057d4150);
    FUN_012d0dc8(PTR_DAT_057929c0);
    FUN_012d0dc8(PTR_DAT_057ee050);
    FUN_012d0dc8(PTR_DAT_0577d5e8);
    FUN_012d0dc8(PTR_DAT_057f6050);
    FUN_012d0dc8(PTR_DAT_057c4160);
    FUN_012d0dc8(PTR_DAT_057f55a8);
    FUN_012d0dc8(PTR_DAT_0576a178);
    FUN_012d0dc8(PTR_DAT_057e2878);
    FUN_012d0dc8(PTR_DAT_05814548);
    FUN_012d0dc8(PTR_DAT_0578da10);
    FUN_012d0dc8(PTR_DAT_05812db8);
    bRam0000000005c2816f = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    if (*(int *)(*(long *)(param_2 + 0x10) + 0x18) == 0) {
      return;
    }
    lVar8 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0576a178);
    if (lVar8 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar8,*(undefined8 *)PTR_DAT_057c4160);
      puVar6 = PTR_DAT_05814548;
      puVar5 = PTR_DAT_05812db8;
      puVar4 = PTR_DAT_057f51e0;
      puVar3 = PTR_DAT_057d60c8;
      puVar2 = PTR_DAT_05784c88;
      uStack_68 = 0;
      if (*(long *)(param_2 + 0x10) != 0) {
        System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
                  (&uStack_b0,*(long *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_057f6050);
        iVar16 = 0;
        uStack_78 = uStack_a8;
        uStack_80 = uStack_b0;
        uStack_70 = uStack_a0;
        while (uVar9 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                                 (&uStack_80,*(undefined8 *)puVar3), uVar13 = uStack_70,
              (uVar9 & 1) != 0) {
          if ((char)uStack_68 == '\0') {
LAB_01f9ac5c:
            uStack_b0 = 0;
            System_Nullable_Int32Enum____ctor_203c774
                      (&uStack_b0,uVar13 & 0xffffffff,*(undefined8 *)puVar6);
            uStack_68 = uStack_b0;
            iVar16 = 1;
          }
          else {
            if (((char)uStack_68 == '\0') || ((int)uStack_70 != uStack_68._4_4_)) {
              uVar7 = System_Nullable_Int32Enum___get_Value_203c78c
                                (&uStack_68,*(undefined8 *)puVar5);
              lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              System_Object___ctor_23dfe5c(lVar10,0);
              *(undefined4 *)(lVar10 + 0x10) = uVar7;
              *(int *)(lVar10 + 0x14) = iVar16;
              lVar14 = *(long *)(lVar8 + 0x10);
              lVar15 = *(long *)PTR_DAT_057929c0;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_012d0ef0();
              }
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar10;
                FUN_012d0d74(plVar11,lVar10);
              }
              else {
                (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                          (lVar8,lVar10);
              }
              goto LAB_01f9ac5c;
            }
            iVar16 = iVar16 + 1;
          }
        }
        uVar12 = System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
                           (&uStack_80,*(undefined8 *)PTR_DAT_05817840);
        if ((char)uStack_68 != '\0') {
          uVar7 = System_Nullable_Int32Enum___get_Value_203c78c(&uStack_68,*(undefined8 *)puVar5);
          lVar10 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
          if (lVar10 == 0) goto LAB_01f9adc4;
          System_Object___ctor_23dfe5c(lVar10,0);
          *(undefined4 *)(lVar10 + 0x10) = uVar7;
          *(int *)(lVar10 + 0x14) = iVar16;
          lVar14 = *(long *)(lVar8 + 0x10);
          lVar15 = *(long *)PTR_DAT_057929c0;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_01f9adc4;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar10;
            uVar12 = FUN_012d0d74(plVar11,lVar10);
          }
          else {
            uVar12 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))
                               (lVar8,lVar10);
          }
        }
        Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager__ShuffleColorBlocks_1e9aebc
                  (uVar12,lVar8);
        lVar10 = *(long *)(param_2 + 0x10);
        if (lVar10 != 0) {
          *(undefined4 *)(lVar10 + 0x18) = 0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                    (&uStack_98,lVar8,*(undefined8 *)PTR_DAT_0577d5e8);
          while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                    (&uStack_98,*(undefined8 *)puVar2), (uVar13 & 1) != 0) {
            Modules_Contexts_GamePlay_Boosters_Scripts_MegaShuffleManager_MegaShuffleBottle__AddColorBlock_1e9a908
                      (param_2,uStack_88);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                    (&uStack_98,*(undefined8 *)PTR_DAT_057d2fe8);
          return;
        }
      }
    }
  }
LAB_01f9adc4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

