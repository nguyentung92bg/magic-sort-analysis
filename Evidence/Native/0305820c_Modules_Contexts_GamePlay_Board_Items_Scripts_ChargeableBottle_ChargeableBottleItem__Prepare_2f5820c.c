/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$Prepare
void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__Prepare (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o frontSorting, Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting, Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, bool hasInitialCharge, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$Prepare
   void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__Prepare
   (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this,
   UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o
   frontSorting, Modules_Infrastructure_UI_Common_Scripts_Sorting_o backSorting,
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* belongingBottle, bool
   hasInitialCharge, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__Prepare_2f5820c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,uint param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int *piVar6;
  long *plVar7;
  uint *puVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((bRam0000000005c308ba & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    bRam0000000005c308ba = 1;
  }
  plVar7 = (long *)(param_4 + 0x50);
  *plVar7 = param_9;
  FUN_012d0d74(plVar7,param_9);
  if (param_4 != 0) {
    puVar8 = (uint *)(param_4 + 0x58);
    *puVar8 = param_10 & 1;
    lVar9 = *(long *)(param_4 + 0x48);
    *(undefined4 *)(param_4 + 0x34) = param_1;
    *(undefined4 *)(param_4 + 0x38) = param_2;
    *(undefined4 *)(param_4 + 0x3c) = param_3;
    System_Int32__ToString_26c9768(puVar8,0);
    if (lVar9 != 0) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__Prepare_2f583e0
                (lVar9,param_5,param_6,param_7,param_8);
      lVar9 = *(long *)(param_4 + 0x48);
      if (lVar9 != 0) {
        if (0 < (int)*puVar8) {
          if ((bRam0000000005c308c8 & 1) == 0) {
            FUN_012d0dc8(PTR_DAT_057936b8);
            FUN_012d0dc8(PTR_DAT_057fbae0);
            FUN_012d0dc8(PTR_DAT_05795d58);
            FUN_012d0dc8(PTR_DAT_0579f3e8);
            bRam0000000005c308c8 = 1;
          }
          puVar2 = PTR_DAT_057fbae0;
          puVar1 = PTR_DAT_057936b8;
          if (*(long *)(lVar9 + 0x58) != 0) {
            System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                      (&stack0xffffffffffffffc8,*(long *)(lVar9 + 0x58),
                       *(undefined8 *)PTR_DAT_0579f3e8);
            while (uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                                     (&stack0xffffffffffffffc8,*(undefined8 *)puVar2),
                  (uVar4 & 1) != 0) {
              DG_Tweening_DOTweenModuleSprite__DOColor_33e2e1c
                        (*(undefined4 *)(lVar9 + 0x78),*(undefined4 *)(lVar9 + 0x7c),
                         *(undefined4 *)(lVar9 + 0x80),*(undefined4 *)(lVar9 + 0x84),0,0,0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                      (&stack0xffffffffffffffc8,*(undefined8 *)puVar1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
        Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleView__HideShadows_2f58474
                  ();
        if (*plVar7 != 0) {
          plVar7 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                                     (*plVar7,0);
          if (cRam0000000005c230aa == '\0') {
            FUN_012d0dc8(PTR_DAT_05805c10);
            cRam0000000005c230aa = '\x01';
          }
          if (plVar7 != (long *)0x0) {
            lVar9 = *plVar7;
            puVar5 = *(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
            uVar12 = *puVar5;
            uVar11 = puVar5[1];
            uVar10 = puVar5[2];
            if (uVar4 != 0) {
              piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
                  puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 7) * 0x10 + 0x138);
                  goto LAB_030583a8;
                }
                uVar4 = uVar4 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar4 != 0);
            }
            puVar3 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0575a2d8,7);
LAB_030583a8:
                    /* WARNING: Could not recover jumptable at 0x030583d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar3)(uVar12,uVar11,uVar10,plVar7,puVar3[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

