/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnDeselectAsOrigin
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnDeselectAsOrigin (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02597dfc) */
/* WARNING: Removing unreachable block (ram,0x02597e00) */
/* WARNING: Removing unreachable block (ram,0x02597e8c) */
/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnDeselectAsOrigin
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnDeselectAsOrigin
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnDeselectAsOrigin_2497adc
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  long lVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000005c2b2dc & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05776458);
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_057f9000);
    FUN_012d0dc8(PTR_DAT_05795370);
    FUN_012d0dc8(PTR_DAT_057e1088);
    FUN_012d0dc8(PTR_DAT_05763bd8);
    FUN_012d0dc8(PTR_DAT_057da7b0);
    FUN_012d0dc8(PTR_DAT_05802d58);
    FUN_012d0dc8(PTR_DAT_057822a8);
    FUN_012d0dc8(PTR_DAT_057db9e8);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057f4a20);
    bRam0000000005c2b2dc = 1;
  }
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_a0 = 0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00
              (*(long *)(param_1 + 0xb8),param_2,0);
    if (*(long *)(param_1 + 0xb0) != 0) {
      Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00
                (*(long *)(param_1 + 0xb0),param_2,0);
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar8 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                          (*(long *)(param_1 + 0xb0),0);
        if ((uVar8 & 1) != 0) {
LAB_02597c10:
          puVar2 = PTR_DAT_057f4a20;
          if (*(int *)(*(long *)PTR_DAT_05807f60 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          UnityEngine_Debug__LogError_4078d24(*(undefined8 *)puVar2,0);
                    /* try { // try from 02597e50 to 02697e5b has its CatchHandler @ 025985c4 */
          return;
        }
        if (*(long *)(param_1 + 0xb8) != 0) {
          uVar8 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                            (*(long *)(param_1 + 0xb8),0);
          if ((uVar8 & 1) != 0) goto LAB_02597c10;
          if (*(char *)(param_1 + 0xd8) == '\0') {
            if (*(long *)(param_1 + 200) != 0) {
              auVar14 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleSittingSorting_4002958
                                  (*(long *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc0),0);
              if (*(long *)(param_1 + 0x50) != 0) {
                Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__SetSorting_22fc810
                          (*(long *)(param_1 + 0x50),auVar14._0_8_,auVar14._8_8_,0);
                puVar2 = PTR_DAT_05802430;
                lVar9 = *(long *)(param_1 + 0x88);
                if (lVar9 != 0) {
                  iVar13 = 0;
                  do {
                    if (*(int *)(lVar9 + 0x18) <= iVar13) goto LAB_02597ccc;
                    /* try { // try from 02597c9c to 02697d9f has its CatchHandler @ 02597c9c
                       catch() { ... } // from try @ 02597c9c with catch @ 02597c9c
                       catch() { ... } // from try @ 025984ac with catch @ 02597c9c
                       catch() { ... } // from try @ 02598574 with catch @ 02597c9c
                       catch() { ... } // from try @ 025985b4 with catch @ 02597c9c
                       catch() { ... } // from try @ 0259860c with catch @ 02597c9c
                       catch() { ... } // from try @ 02598648 with catch @ 02597c9c */
                    plVar10 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                                (lVar9,iVar13,*(undefined8 *)puVar2);
                    if (plVar10 == (long *)0x0) break;
                    (**(code **)(*plVar10 + 0x368))(plVar10,*(undefined8 *)(*plVar10 + 0x370));
                    lVar9 = *(long *)(param_1 + 0x88);
                    iVar13 = iVar13 + 1;
                  } while (lVar9 != 0);
                }
              }
            }
          }
          else {
LAB_02597ccc:
            puVar7 = PTR_DAT_057f9000;
            puVar6 = PTR_DAT_057e1088;
            puVar5 = PTR_DAT_057db9e8;
            puVar4 = PTR_DAT_05795370;
            puVar3 = PTR_DAT_05776458;
            puVar2 = PTR_DAT_05763bd8;
            if (*(long *)(param_1 + 0x80) != 0) {
              System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                        (&uStack_b8,*(long *)(param_1 + 0x80),*(undefined8 *)PTR_DAT_057822a8);
              uStack_78 = uStack_b0;
              uStack_80 = uStack_b8;
              plStack_70 = plStack_a8;
              while( true ) {
                uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                  (&uStack_80,*(undefined8 *)puVar6);
                plVar10 = plStack_70;
                if ((uVar8 & 1) == 0) {
                  System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                            (&uStack_80,*(undefined8 *)puVar4);
                  return;
                }
                if (plStack_70 == (long *)0x0) break;
                if (plStack_70[7] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012d0ef0();
                }
                System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                          (&uStack_b8,plStack_70[7],*(undefined8 *)puVar5);
                uStack_98 = uStack_b0;
                uStack_a0 = uStack_b8;
                plStack_90 = plStack_a8;
                while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                         (&uStack_a0,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
                  if (plStack_90 != (long *)0x0) {
                    lVar9 = *plStack_90;
                    bVar1 = *(byte *)(*(long *)puVar3 + 300);
                    /* try { // try from 02597da0 to 02697dc3 has its CatchHandler @ 0259852c */
                    if ((bVar1 <= *(byte *)(lVar9 + 300)) &&
                       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3
                       )) {
                      lVar12 = plVar10[4];
                      if (lVar12 == 0) {
                        uVar11 = 0xffffffff;
                      }
                      else {
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_012d0ef0();
                        }
                        uVar11 = *(undefined4 *)(lVar12 + 0x50);
                      }
                      (**(code **)(lVar9 + 0x378))(plStack_90,uVar11,*(undefined8 *)(lVar9 + 0x380))
                      ;
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                          (&uStack_a0,*(undefined8 *)puVar7);
                    /* try { // try from 02597df0 to 02697df3 has its CatchHandler @ 02598510 */
                    /* try { // try from 02597df4 to 02697dfb has its CatchHandler @ 02598520 */
              }
                    /* WARNING: Subroutine does not return */
              FUN_012d0ef0();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

