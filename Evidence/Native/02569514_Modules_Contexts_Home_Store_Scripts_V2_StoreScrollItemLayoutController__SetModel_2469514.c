/* IL2CPP: Modules.Contexts.Home.Store.Scripts.V2.StoreScrollItemLayoutController$$SetModel
void Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController__SetModel (Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController_o* __this, System_Collections_Generic_List_StoreViewModel__o* storeScrollViewModel, int32_t raycastOrder, int32_t iapContext, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Store.Scripts.V2.StoreScrollItemLayoutController$$SetModel
   void Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController__SetModel
   (Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController_o* __this,
   System_Collections_Generic_List_StoreViewModel__o* storeScrollViewModel, int32_t raycastOrder,
   int32_t iapContext, const MethodInfo* method); */

void Modules_Contexts_Home_Store_Scripts_V2_StoreScrollItemLayoutController__SetModel_2469514
               (long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
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
  
  if ((bRam0000000005c2b0c5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05797920);
    FUN_012d0dc8(PTR_DAT_057c6388);
    FUN_012d0dc8(PTR_DAT_0580c0d0);
    FUN_012d0dc8(PTR_DAT_05768768);
    FUN_012d0dc8(PTR_DAT_0579be98);
    FUN_012d0dc8(PTR_DAT_0576fb48);
    FUN_012d0dc8(PTR_DAT_05782f60);
    FUN_012d0dc8(PTR_DAT_05788668);
    FUN_012d0dc8(PTR_DAT_057c9c60);
    FUN_012d0dc8(PTR_DAT_057dc748);
    FUN_012d0dc8(PTR_DAT_05819030);
    bRam0000000005c2b0c5 = 1;
  }
  puVar5 = PTR_DAT_0580c0d0;
  puVar6 = PTR_DAT_057c9c60;
  puVar4 = PTR_DAT_05788668;
  puVar3 = PTR_DAT_05782f60;
  puVar2 = PTR_DAT_05768768;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  if (param_2 != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_b8,param_2,*(undefined8 *)PTR_DAT_05819030);
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    lStack_70 = lStack_a8;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_80,*(undefined8 *)puVar5), lVar10 = lStack_70,
          (uVar7 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      plVar8 = *(long **)(param_1 + 0x40);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar9 = (**(code **)(*plVar8 + 0x1c8))
                        (plVar8,*(undefined4 *)(lStack_70 + 0x10),*(undefined8 *)(*plVar8 + 0x1d0));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      Modules_Contexts_Home_Store_Scripts_StoreScroll_StoreBaseView__SetModel_24657a4(lVar9,lVar10);
      Modules_Contexts_Home_Store_Scripts_StoreScroll_StoreBaseView__SetRaycastOrder_2465c68
                (lVar9,param_3);
      *(undefined4 *)(lVar9 + 0x98) = 2;
      *(undefined4 *)(lVar9 + 0x9c) = param_4;
      lVar10 = *(long *)(param_1 + 0x20);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar14 = *(long *)puVar4;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = lVar9;
        FUN_012d0d74(plVar8,lVar9);
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))
                  (lVar10,lVar9);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_80,*(undefined8 *)PTR_DAT_057c6388);
    puVar4 = PTR_DAT_057dc748;
    if (*(long *)(param_1 + 0x20) != 0) {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_b8,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_057dc748);
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
      lStack_90 = lStack_a8;
      while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                               (&uStack_a0,*(undefined8 *)puVar2), puVar5 = PTR_DAT_05797920,
            (uVar7 & 1) != 0) {
        if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar10 = UnityEngine_Component__get_gameObject_408b480(lStack_90,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar11 = UnityEngine_GameObject__GetComponent_object__23907a4(lVar10,*(undefined8 *)puVar3);
        lVar10 = *(long *)(param_1 + 0x28);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        lVar9 = *(long *)(lVar10 + 0x10);
        lVar12 = *(long *)puVar6;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          puVar13 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *puVar13 = uVar11;
          FUN_012d0d74(puVar13);
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x58) + 8))();
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_a0,*(undefined8 *)PTR_DAT_05797920);
      if (*(long *)(param_1 + 0x18) != 0) {
        Modules_Contexts_Home_Store_Scripts_StoreScroll_CustomVerticalLayout__ArrangeSpritesVertically_246a25c
                  (*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                   *(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
        if (*(long *)(param_1 + 0x18) != 0) {
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28);
          if (*(long *)(param_1 + 0x20) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&uStack_b8,*(long *)(param_1 + 0x20),*(undefined8 *)puVar4);
            uStack_98 = uStack_b0;
            uStack_a0 = uStack_b8;
            lStack_90 = lStack_a8;
            while( true ) {
              uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                (&uStack_a0,*(undefined8 *)puVar2);
              if ((uVar7 & 1) == 0) {
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_a0,*(undefined8 *)puVar5);
                return;
              }
              if (lStack_90 == 0) break;
              Modules_Contexts_Home_Store_Scripts_StoreScroll_StoreBaseView__Scale_246610c();
            }
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

