/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$HideInnerItems
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__HideInnerItems (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0240aaa8) */
/* WARNING: Removing unreachable block (ram,0x0240ab50) */
/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxItem$$HideInnerItems
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__HideInnerItems
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxItem__HideInnerItems_230a8f8
               (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000005c2a672 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d0ba8);
    FUN_012d0dc8(PTR_DAT_057605b8);
    FUN_012d0dc8(PTR_DAT_057a7f80);
                    /* try { // try from 0240a94c to 0250a973 has its CatchHandler @ 0240ab48 */
    FUN_012d0dc8(PTR_DAT_057b41c8);
    FUN_012d0dc8(PTR_DAT_058093f0);
    FUN_012d0dc8(PTR_DAT_05817b98);
    FUN_012d0dc8(PTR_DAT_05768d80);
    FUN_012d0dc8(PTR_DAT_057b7918);
    bRam0000000005c2a672 = 1;
  }
  puVar5 = PTR_DAT_057d0ba8;
  puVar4 = PTR_DAT_057b7918;
  puVar3 = PTR_DAT_057b41c8;
  puVar2 = PTR_DAT_057a7f80;
  puVar1 = PTR_DAT_057605b8;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
                    /* try { // try from 0240a98c to 0250a9ef has its CatchHandler @ 0240ab4c */
  uStack_70 = 0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  uStack_90 = 0;
  if (param_1[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  System_Collections_Generic_List_object___GetEnumerator_21fd5c8
            (&uStack_a8,param_1[0xb],*(undefined8 *)PTR_DAT_05768d80);
  uStack_68 = uStack_a0;
  uStack_70 = uStack_a8;
  plStack_60 = plStack_98;
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                      (&uStack_70,*(undefined8 *)puVar3);
    plVar6 = plStack_60;
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_70,*(undefined8 *)puVar5);
      return;
    }
    if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240aa2c with catch @ 0240ab40
                        */
      FUN_012d0ef0();
    }
    lVar8 = Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxView__get_WoodboxConfig_2607780
                      (param_1[9],0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240aa90 with catch @ 0240ab44
                        */
      FUN_012d0ef0();
    }
    if (plVar6 == (long *)0x0) break;
                    /* try { // try from 0240aa2c to 0250aa33 has its CatchHandler @ 0240ab40 */
    (**(code **)(*plVar6 + 0x1d8))
              (*(undefined4 *)(lVar8 + 0x30),*(undefined4 *)(lVar8 + 0x34),
               *(undefined4 *)(lVar8 + 0x38),plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
    if (plVar6[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240a98c with catch @ 0240ab4c
                        */
      FUN_012d0ef0();
    }
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_a8,plVar6[0x11],*(undefined8 *)puVar4);
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    plStack_80 = plStack_98;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                             (&uStack_90,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
      if (plStack_80 != param_1) {
        if (plStack_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        (**(code **)(*plStack_80 + 0x288))(plStack_80,*(undefined8 *)(*plStack_80 + 0x290));
      }
    }
                    /* try { // try from 0240aa90 to 0250aa97 has its CatchHandler @ 0240ab44 */
                    /* try { // try from 0240aa98 to 0250ab17 has its CatchHandler @ 0240a824 */
    System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
              (&uStack_90,*(undefined8 *)puVar1);
    (**(code **)(*plVar6 + 0x288))(plVar6,*(undefined8 *)(*plVar6 + 0x290));
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0240a94c with catch @ 0240ab48
                        */
  FUN_012d0ef0();
}

