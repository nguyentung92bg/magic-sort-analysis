/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnOriginBottleReturnToInitialPosition
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnOriginBottleReturnToInitialPosition (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$OnOriginBottleReturnToInitialPosition
   void 
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnOriginBottleReturnToInitialPosition
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__OnOriginBottleReturnToInitialPosition_24972e8
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar8;
  long *plVar9;
  int iVar10;
  undefined1 auVar11 [16];
  
                    /* try { // try from 025972fc to 02697323 has its CatchHandler @ 02597368 */
  if ((bRam0000000005c2b2da & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_05774380);
                    /* try { // try from 02597324 to 0269735f has its CatchHandler @ 025971f0 */
    FUN_012d0dc8(PTR_DAT_05802430);
    FUN_012d0dc8(PTR_DAT_057f4a20);
    bRam0000000005c2b2da = 1;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00
              (*(long *)(param_1 + 0xb8),param_2,0);
    if (*(long *)(param_1 + 0xb0) != 0) {
                    /* try { // try from 02597360 to 02697367 has its CatchHandler @ 02597368 */
      Modules_Infrastructure_Common_Scripts_Component_Lock__UnlockBy_40ead00
                (*(long *)(param_1 + 0xb0),param_2,0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025972fc with catch @ 02597368
                       catch(type#1 @ 054cbd58) { ... } // from try @ 02597360 with catch @ 02597368
                       try { // try from 02597368 to 02697383 has its CatchHandler @ 025971f0 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 025972a4 with catch @ 0259736c
                        */
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar3 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                          (*(long *)(param_1 + 0xb0),0);
        if ((uVar3 & 1) != 0) {
LAB_02597390:
          puVar1 = PTR_DAT_057f4a20;
                    /* catch() { ... } // from try @ 02597384 with catch @ 02597394 */
                    /* try { // try from 025973a0 to 026973ab has its CatchHandler @ 025973c0 */
          if (*(int *)(*(long *)PTR_DAT_05807f60 + 0xe0) == 0) {
                    /* try { // try from 025973ac to 026973b7 has its CatchHandler @ 025971f0 */
            thunk_FUN_0130472c();
          }
          puVar2 = PTR_DAT_05807f60;
          uVar4 = *(undefined8 *)puVar1;
                    /* try { // try from 025973b8 to 026973bf has its CatchHandler @ 025973c0 */
          uVar7 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025973a0 with catch @ 025973c0
                       catch(type#2 @ 00000000) { ... } // from try @ 025973b8 with catch @ 025973c0
                        */
                    /* try { // try from 025973c4 to 0269741b has its CatchHandler @ 025973c4
                       catch() { ... } // from try @ 025973c4 with catch @ 025973c4
                       catch() { ... } // from try @ 02597548 with catch @ 025973c4
                       catch() { ... } // from try @ 025975a4 with catch @ 025973c4
                       catch() { ... } // from try @ 025975bc with catch @ 025973c4
                       catch() { ... } // from try @ 02597620 with catch @ 025973c4 */
          if ((bRam0000000005c3a1ab & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_05807f60,0);
            FUN_012d0dc8(PTR_DAT_0578cb58);
            bRam0000000005c3a1ab = 1;
            uVar7 = extraout_x1;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            uVar7 = extraout_x1_00;
          }
          if (cRam0000000005c26b67 == '\0') {
            FUN_012d0dc8(PTR_DAT_05807f60,uVar7);
            cRam0000000005c26b67 = '\x01';
          }
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_0130472c();
            lVar5 = *(long *)puVar2;
          }
          plVar9 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          lVar5 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0578cb58) {
                puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                goto LAB_04178e0c;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_0131971c(plVar9,*(long *)PTR_DAT_0578cb58,3);
LAB_04178e0c:
                    /* WARNING: Could not recover jumptable at 0x04178e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(plVar9,0,uVar4,puVar6[1]);
          return;
        }
        if (*(long *)(param_1 + 0xb8) != 0) {
                    /* try { // try from 02597384 to 02697387 has its CatchHandler @ 02597394 */
          uVar3 = Modules_Infrastructure_Common_Scripts_Component_Lock__get_IsLocked_40eab78
                            (*(long *)(param_1 + 0xb8),0);
          if ((uVar3 & 1) != 0) goto LAB_02597390;
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateColorVisibilities_2497470
                    (param_1);
          Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBottleWaters_24960dc
                    (param_1);
          puVar1 = PTR_DAT_05802430;
          lVar5 = *(long *)(param_1 + 0x88);
          if (lVar5 != 0) {
            iVar10 = 0;
            do {
              if (*(int *)(lVar5 + 0x18) <= iVar10) {
                if (*(long *)(param_1 + 200) != 0) {
                  auVar11 = Modules_Infrastructure_UI_Common_Scripts_SortingService__GetBottleSittingSorting_4002958
                                      (*(long *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc0),0);
                  lVar5 = *(long *)(param_1 + 0x50);
                  if (lVar5 != 0) {
                    if (*(long *)(lVar5 + 0x58) != 0) {
                      UnityEngine_Rendering_SortingGroup__set_sortingOrder_3d5ef00
                                (*(long *)(lVar5 + 0x58),auVar11._8_8_ & 0xffffffff,0,0);
                      lVar5 = *(long *)(lVar5 + 0x58);
                      if (lVar5 != 0) {
                        if (pcRam0000000005c37828 == (code *)0x0) {
                          pcRam0000000005c37828 = (code *)FUN_012d0d84(&UNK_043e4d03);
                        }
                    /* WARNING: Could not recover jumptable at 0x03e5ee84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000005c37828)(lVar5,auVar11._0_8_);
                        return;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_012d0ef0();
                  }
                }
                break;
              }
              plVar9 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                         (lVar5,iVar10,*(undefined8 *)puVar1);
              if (plVar9 == (long *)0x0) break;
              (**(code **)(*plVar9 + 0x238))(plVar9,param_2,*(undefined8 *)(*plVar9 + 0x240));
                    /* try { // try from 0259741c to 0269742b has its CatchHandler @ 025975d8 */
              lVar5 = *(long *)(param_1 + 0x88);
              iVar10 = iVar10 + 1;
            } while (lVar5 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

