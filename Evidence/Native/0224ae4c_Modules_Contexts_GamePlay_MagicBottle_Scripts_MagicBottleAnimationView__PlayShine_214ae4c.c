/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$PlayShine
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayShine (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.MagicBottle.Scripts.MagicBottleAnimationView$$PlayShine
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayShine
   (Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView_o* __this, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_MagicBottle_Scripts_MagicBottleAnimationView__PlayShine_214ae4c
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  puVar2 = PTR_DAT_057d7d88;
  if ((bRam0000000005c29b51 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057936b8);
    FUN_012d0dc8(PTR_DAT_057fbae0);
    FUN_012d0dc8(PTR_DAT_05795d58);
    FUN_012d0dc8(PTR_DAT_05780508);
    FUN_012d0dc8(PTR_DAT_0579f3e8);
    FUN_012d0dc8(PTR_DAT_058017a0);
    FUN_012d0dc8(PTR_DAT_057f5710);
    FUN_012d0dc8(PTR_DAT_057ad258);
    FUN_012d0dc8(PTR_DAT_057cc518);
    FUN_012d0dc8(PTR_DAT_0580da90);
    FUN_012d0dc8(PTR_DAT_057773b8);
    FUN_012d0dc8(PTR_DAT_057d7d88);
    bRam0000000005c29b51 = 1;
  }
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  lVar8 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_057f5710;
  if (lVar8 != 0) {
    System_Object___ctor_23dfe5c(lVar8,0);
    lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_05780508;
    if (lVar9 != 0) {
      System_Collections_Generic_List_object____ctor_21fc1fc(lVar9,*(undefined8 *)PTR_DAT_058017a0);
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      lVar12 = *(long *)(lVar9 + 0x10);
                    /* try { // try from 0224af78 to 0234af9f has its CatchHandler @ 0224b110 */
      lVar13 = *(long *)puVar2;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
          FUN_012d0d74();
        }
        else {
                    /* try { // try from 0224afb8 to 0234b017 has its CatchHandler @ 0224b114 */
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))(lVar9);
        }
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        lVar12 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
            FUN_012d0d74();
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))(lVar9);
          }
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          lVar12 = *(long *)(lVar9 + 0x10);
                    /* try { // try from 0224b030 to 0234b03b has its CatchHandler @ 0224b10c */
          lVar13 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    /* try { // try from 0224b03c to 0234b0fb has its CatchHandler @ 0224ac68 */
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
              FUN_012d0d74();
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x58) + 8))(lVar9)
              ;
            }
            plVar14 = (long *)(lVar8 + 0x10);
            *plVar14 = lVar9;
            FUN_012d0d74(plVar14,lVar9);
            puVar7 = PTR_DAT_0580da90;
            puVar6 = PTR_DAT_057fbae0;
            puVar5 = PTR_DAT_057cc518;
            puVar4 = PTR_DAT_057ad258;
            puVar3 = PTR_DAT_057936b8;
            puVar2 = PTR_DAT_057773b8;
            if (*plVar14 != 0) {
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_a8,*plVar14,*(undefined8 *)PTR_DAT_0579f3e8);
              uStack_88 = uStack_a0;
              uStack_90 = uStack_a8;
              lStack_80 = lStack_98;
                    /* try { // try from 0224b0fc to 0234b0ff has its CatchHandler @ 0224b108 */
              while (uVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                        (&uStack_90,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
                    /* try { // try from 0224b100 to 0234b12b has its CatchHandler @ 0224ac68 */
                if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0224b0fc with catch @ 0224b108
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0224b030 with catch @ 0224b10c
                        */
                lVar9 = UnityEngine_Renderer__get_material_40828f4(lStack_80,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0224af78 with catch @ 0224b110
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0224afb8 with catch @ 0224b114
                        */
                lVar12 = *(long *)puVar4;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_0130472c();
                  lVar12 = *(long *)puVar4;
                }
                    /* try { // try from 0224b12c to 0234b12f has its CatchHandler @ 0224b1b0 */
                if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                UnityEngine_Material__SetFloat_383f1c0
                          (*(undefined4 *)(*(long *)(param_1 + 0x18) + 0xf8),lVar9,
                           **(undefined4 **)(lVar12 + 0xb8),0);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                        (&uStack_90,*(undefined8 *)puVar3);
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 != 0) {
                uVar15 = *(undefined4 *)(lVar9 + 0xf4);
                uVar17 = *(undefined4 *)(lVar9 + 0xf8);
                uVar16 = *(undefined4 *)(lVar9 + 0xfc);
                lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar5);
                    /* try { // try from 0224b174 to 0234b19b has its CatchHandler @ 0224b1bc */
                if (lVar9 != 0) {
                  DG_Tweening_TweenCallback_float____ctor_341f244
                            (lVar9,lVar8,*(undefined8 *)puVar2,0);
                    /* try { // try from 0224b19c to 0234b1a7 has its CatchHandler @ 0224ac68 */
                  uVar11 = DG_Tweening_DOVirtual__Float_1edbb8c(uVar17,uVar16,uVar15,lVar9,0);
                    /* try { // try from 0224b1a8 to 0234b1af has its CatchHandler @ 0224b1bc */
                  if (*(long *)(param_1 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 0224b12c with catch @ 0224b1b0 */
                    DG_Tweening_TweenSettingsExtensions__SetEase_object__2450be4
                              (uVar11,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100),
                               *(undefined8 *)puVar7);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0224b174 with catch @ 0224b1bc
                       catch(type#2 @ 00000000) { ... } // from try @ 0224b1a8 with catch @ 0224b1bc
                        */
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

